#!/usr/bin/env python3
"""check_func.py: try C for one function against a disc's bytes; the work left, with its assembly.

    python3 tools/check_func.py [--version us|pal] NAME candidate.c [more.c ...] [--diff]
    python3 tools/check_func.py [--version us|pal] --todo [core.text|net.text|.text|frontbin|shared|level_NN] [--min N] [--max N]
    python3 tools/check_func.py [--version us|pal] --where NAME

The version is `us` (SCUS_974.65, the primary target) unless `--version pal` (SCES_532.85) is
given. NAME is a catalogue name of that disc: func_XXXXXXXX (the main image: core.text, net.text,
the resident menu .text, config/<version>/inventory.tsv), func_FB_XXXXXXXX (frontbin's own
.text) or func_LNN_XXXXXXXX (level code, config/<version>/functions.tsv: its address in the
lowest-numbered level that has it). On the US disc these are the names src/ already uses. On
PAL, new C goes in src/pal/ under the PAL name; there the US name of a function of src/ or
nonmatching/ also works and wins when both read the same (config/pal/map.tsv gives its place).

The candidate is compiled the way tools/try_func.py compiles (tools/cc.sh: SN ee-gcc 2.95.3
v1.36, -O2 -G8 -fopt-stack, the assembler passes, the file's own `/* cflags: ... */`; through
tools/docker/run.sh unless wine is on PATH): in place of NAME's definition in its src/ file
when it has one, else on its own with common.h. The function's code is compared with the disc's
bytes at its place (tools/levels.py dump) with only the fields its object relocates masked, as
tools/audit_matches.py compares. It prints one line per candidate:

    func_L01_003C7E00: MATCH
    func_L01_003C7E00: BYTES 12/240 (5 words differ)       --diff lists them, ours | disc
    func_L01_003C7E00: SIZE ours 236 / disc 240
    func_L01_003C7E00: COMPILE failed (see build/try/<NAME>/<version>/log.txt)

--todo lists the functions no C matches yet on that disc (config/<version>/map.tsv), smallest
first, each with its size, its kind and its assembly (tools/asm_programs.py writes
asm/<version>/<program>/<section>/<NAME>.s from the dumps; run it once first). --where prints
NAME's place and .s.
"""
import argparse
import os
import shutil
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import levels  # noqa: E402


def places():
    """{catalogue name: (program, section, address, size, kind)} of every counted function."""
    import inventory as inv
    import level_catalogue as lc
    pairs = lc.read_pairs()
    out = {}
    for prog, rows in inv.read_inventory().items():
        for sec, a, n, kind in rows:
            name = ("func_FB_%08X" if prog == "frontbin" else "func_%08X") % a
            if name in pairs:
                continue
            k = {"core.text": "core.text", "net.text": "net.text", ".text": ".text"}[sec] if prog == "main" else "frontbin"
            out[name] = (prog, sec, a, n, k)
    for name, kind, size, fp, rem, pl in lc.read_catalogue():
        if kind in ("shared", "level"):
            lv, a = pl[0]
            out[name] = ("level_%02d" % lv, ".text", a, size, "shared" if kind == "shared" else "level_%02d" % lv)
    return out


def place_of(name, table=None):
    """(program, section, address, size) of NAME: a name of src/ or nonmatching/ (outside
    src/pal/) through config/<version>/map.tsv first, then the catalogue."""
    import match_map
    for r in match_map.read_map():
        if r["name"] == name and not r["file"].startswith("src/pal/"):
            if not r["places"]:
                sys.exit("%s (%s): no place on %s (config/%s/map.tsv: %s)" % (
                    name, r["file"], levels.version_id(), levels.V, r["status"]))
            return r["places"][0]
    table = table if table is not None else places()
    if name in table:
        return table[name][:4]
    sys.exit("%s: not a %s catalogue name, and config/%s/map.tsv has no place for it" % (
        name, levels.version_id(), levels.V))


def catalogue_name(name, place):
    """The catalogue name of the function at PLACE (NAME itself for a catalogue name)."""
    for n, p in places().items():
        if p[:3] == place[:3]:
            return n
    return name


def disc_bytes(place):
    prog, sec, a, n = place
    path = levels.program_path(prog) if prog in ("main", "frontbin") else levels.elf_path(int(prog[6:]))
    if not os.path.exists(path):
        sys.exit("%s not found: python3 tools/levels.py dump" % os.path.relpath(path, ROOT))
    base, data = levels.sections_of(path)[sec]
    return data[a - base:a - base + n]


def asm_of(name, place):
    prog, sec, a, n = place
    p = ROOT / "asm" / levels.V / prog / sec.lstrip(".").replace(".", "_") / (name + ".s")
    return p


def verdict(code, masks, start, want, show):
    import retail
    import try_func
    if len(code) != len(want):
        return "SIZE ours %d / disc %d" % (len(code), len(want))
    ours, theirs = retail.fields(code, masks, start), retail.fields(want, masks, start)
    if ours == theirs:
        return "MATCH"
    diff = sum(((a >> s) & 0xFF) != ((b >> s) & 0xFF) for a, b in zip(ours, theirs) for s in (0, 8, 16, 24))
    words = sum(1 for a, b in zip(ours, theirs) if a != b)
    if show:
        print(try_func.diff_lines(code, want, masks, start))
    return "BYTES %d/%d (%d words differ)" % (diff, len(want), words)


def check(name, cands, show):
    import layout
    import try_func
    place = place_of(name)
    want = disc_bytes(place)
    work = ROOT / "build" / "try" / name / levels.V
    work.mkdir(parents=True, exist_ok=True)
    jobs = []
    for i, cand in enumerate(cands):
        text = try_func.source_text(name, Path(cand).read_text(errors="replace"))
        src = work / ("%d_%s.c" % (i, Path(cand).stem))
        src.write_text(text)
        jobs.append((src, src.with_suffix(".o"), layout.cflags(text)))
    try_func.compile_all(jobs, work)
    bad = False
    for cand, (src, obj, _) in zip(cands, jobs):
        label = "%-10s " % Path(cand).name if len(cands) > 1 else ""
        found = try_func.compiled(obj, name) if obj.exists() else None
        log = obj.with_suffix(".log")
        if log.exists():
            shutil.copy(log, work / "log.txt")
        if found is None:
            v = "COMPILE failed (see %s)" % os.path.relpath(work / "log.txt", ROOT)
            bad = True
        else:
            v = verdict(*found, want, show)
            bad |= v != "MATCH"
        print("%s%s: %s" % (label, name, v))
    return 1 if bad else 0


def todo(what, lo, hi):
    import match_map
    table = places()
    done = set()
    for r in match_map.read_map():
        if r["status"] == "match":
            done.update(r["names"])
    rows = [(n, p) for n, p in table.items() if n not in done and (not what or p[4] == what)
            and lo <= p[3] <= hi]
    rows.sort(key=lambda r: (r[1][3], r[0]))
    for n, (prog, sec, a, size, kind) in rows:
        print("%s\t%d\t%s\t%s" % (n, size, kind, os.path.relpath(asm_of(n, (prog, sec, a, size)), ROOT)))
    print("# %d functions, %d bytes" % (len(rows), sum(r[1][3] for r in rows)), file=sys.stderr)


def main():
    levels.cli_version()
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("name", nargs="?")
    ap.add_argument("cands", nargs="*")
    ap.add_argument("--diff", action="store_true")
    ap.add_argument("--todo", nargs="?", const="", default=None)
    ap.add_argument("--where", action="store_true")
    ap.add_argument("--min", type=int, default=0)
    ap.add_argument("--max", type=int, default=1 << 30)
    a = ap.parse_args()
    if a.todo is not None:
        todo(a.todo, a.min, a.max)
        return 0
    if not a.name:
        sys.exit(__doc__)
    if a.where:
        p = place_of(a.name)
        pn = catalogue_name(a.name, p)
        print("%s: %s %s %s 0x%08X, %d bytes; %s" % (a.name, pn, p[0], p[1], p[2], p[3],
                                                    os.path.relpath(asm_of(pn, p), ROOT)))
        return 0
    if not a.cands:
        sys.exit(__doc__)
    return check(a.name, a.cands, a.diff)


if __name__ == "__main__":
    sys.exit(main())
