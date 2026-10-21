#!/usr/bin/env python3
"""pal_map.py: where each function of src/ is on the PAL disc, and whether its C matches there.

    python3 tools/pal_map.py --write     # config/pal_map.tsv from a build (needs the dumps)
    python3 tools/pal_map.py --check     # every src/ function and near miss has a row (CI)

The C in src/ was matched against the NTSC-U executable (SCUS_974.65) and its level overlays:
it is named by US addresses (func_XXXXXXXX, func_LNN_XXXXXXXX) and checked by
tools/audit_matches.py, which stays as it is. For the PAL report each source function is
looked up in the PAL programs (tools/levels.py dump):

  - its compiled code (build/obj/, build/libgcc/, build/libm/: tools/build.sh,
    build_libgcc.sh, build_libm.sh, the file's own flags) is searched for in the PAL section
    that holds its kind of code (core.text for core, libgcc and libm; net.text; the resident
    menu .text, then frontbin's; for a level function the level programs, its own level's
    first), comparing words with only the fields its object relocates masked (retail.fields(),
    as tools/audit_matches.py compares with the US bytes: constants and offsets must be equal);
  - where it is found it is `match` (a find where the inventory starts a function of its size
    first, then where it starts one, then a single find inside one: the inventory then takes
    the C's start and end as proven), with the PAL place(s): program, section, address and size,
    and the PAL catalogue name of the function there (config/inventory.tsv for the main image
    and frontbin, config/levels/functions.tsv for the levels). When identical code is found in
    several places of one section, the one nearest the address the unique finds around it
    predict is kept;
  - where it is not found it is `ntsc`: the C matches the US build only (a PAL constant
    differs, 50 Hz against 60 Hz, a field moved, the code changed). Its C stays in src/.
  - C in src/pal/ is written against PAL under its PAL catalogue name (tools/check_pal.py): it
    is `match` when it builds to the bytes of that function, else `nomatch` (it should not
    be in src/ then);
  - a near miss (nonmatching/**/func_*.c) is `near`: the PAL function whose code (the US
    function's retail bytes, tools/retail.py normalise()) is the same as the US function's,
    with the near miss's closeness (its verdict, tools/nonmatching.py) carried over; `none` when
    the PAL code differs.

config/pal_map.tsv (committed: names, addresses, sizes; no bytes): US name, source file,
status, PAL names (comma-separated), PAL places (program:section:address:size, comma-separated),
closeness (percent; 100 for a match). tools/progress.py counts from it without the disc, and
tools/inventory.py takes a matched place's start and end as proven.
"""
import argparse
import bisect
import collections
import glob
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))
MAP = os.path.join(ROOT, "config", "pal_map.tsv")
NAME = re.compile(r"^func_(?:(L\d\d)_)?([0-9A-F]{8})$")
DEF_RE = re.compile(r"^[A-Za-z_][\w \t\*]*?\b(func_(?:L\d\d_)?[0-9A-F]{8})\s*\(.*\)\s*\{?\s*$", re.M)
HEAD = """# Each function of src/ (and each near miss in nonmatching/) on the PAL disc (tools/pal_map.py --write):
# US name (a PAL name for src/pal/), source file, status (match: its C builds to the PAL bytes; ntsc: to the
# US bytes only; nomatch: src/pal/ C that does not build to its PAL function;
# near: a near miss of a PAL function; none: a near miss whose function differs on PAL), PAL
# names, PAL places (program:section:address:size), closeness (percent).
"""


def read_map(path=MAP):
    """[{name, file, status, pal: [names], places: [(program, section, address, size)], closeness}]"""
    out = []
    if not os.path.exists(path):
        return out
    for line in open(path, encoding="utf-8"):
        if line.startswith("#") or not line.strip():
            continue
        n, f, st, pal, places, close = line.rstrip("\n").split("\t")
        pl = []
        for p in places.split(",") if places != "-" else []:
            prog, sec, a, sz = p.split(":")
            pl.append((prog, sec, int(a, 16), int(sz)))
        out.append({"name": n, "file": f, "status": st, "pal": [] if pal == "-" else pal.split(","),
                    "places": pl, "closeness": float(close)})
    return out


# --- what src/ and nonmatching/ define (no build needed) -------------------------------

def source_functions():
    """{US name: source file} of src/ (as tools/gen_progress_report.py finds them), the libgcc
    and libm functions under their config/functions.tsv names."""
    import gen_progress_report as g
    out = {}
    for path, names in g.source_functions().items():
        src = path.split(":")[0]
        for n in names:
            out.setdefault(n, src)
    return out


def near_misses():
    """{US name: file} of nonmatching/."""
    return {os.path.basename(p)[:-2]: os.path.relpath(p, ROOT).replace(os.sep, "/")
            for p in sorted(glob.glob(os.path.join(ROOT, "nonmatching", "*", "func_*.c")))}


# --- the build ----------------------------------------------------------------------

def object_of(src):
    return os.path.join(ROOT, "build", "obj", src[len("src/"):].replace("/", "_")[:-2] + ".o")


def compiled():
    """{US name: (code, {offset: mask})} of every compiled function (tools/audit_matches.py's
    names: libgcc and libm symbols through config/libgcc.tsv, config/libm.tsv)."""
    import retail
    from elftools.elf.elffile import ELFFile
    sizes = {}
    for l in open(os.path.join(ROOT, "config", "functions.tsv")):
        if l.strip() and not l.startswith("#"):
            n, a, s, _ = l.rstrip("\n").split("\t")
            sizes[int(a, 16)] = n
    alias = {}
    for tsv in ("libgcc.tsv", "libm.tsv"):
        p = os.path.join(ROOT, "config", tsv)
        if os.path.exists(p):
            for l in open(p):
                if l.strip() and not l.startswith("#"):
                    obj, sym, a, _ = l.rstrip("\n").split("\t")
                    alias[(obj[:-2] if obj.endswith(".o") else obj, sym)] = sizes[int(a, 16)]
    out = {}
    paths = sorted(glob.glob(os.path.join(ROOT, "build", "obj", "*.o")) + glob.glob(os.path.join(ROOT, "build", "libgcc", "*.o"))
                   + glob.glob(os.path.join(ROOT, "build", "libm", "*.o")))
    for path in paths:
        elf = ELFFile(open(path, "rb"))
        text = elf.get_section_by_name(".text")
        data = text.data() if text else b""
        masks = retail.reloc_masks(elf)
        for s in elf.get_section_by_name(".symtab").iter_symbols():
            if s["st_info"]["type"] != "STT_FUNC":
                continue
            name = alias.get((os.path.splitext(os.path.basename(path))[0], s.name))
            if name is None:
                if not NAME.match(s.name):
                    continue
                name = s.name
            start = s["st_value"]
            code = data[start:start + s["st_size"]]
            m = {k - start: v for k, v in masks.items() if start <= k < start + len(code)}
            out[name] = (code, m)
    return out


# --- the PAL programs ---------------------------------------------------------------

class Pal:
    """The PAL code sections and the names of their functions."""

    def __init__(self):
        import inventory as inv
        import level_catalogue as lc
        import levels
        self.sections = {}       # (program, section) -> (base, bytes)
        for prog in ("main", "frontbin"):
            for name, (a, b) in levels.sections_of(levels.program_path(prog)).items():
                if name in ("core.text", "net.text", ".text") and not (prog == "frontbin" and name == "net.text"):
                    self.sections[(prog, name)] = (a, b)
        self.levels = inv.distinct_levels()
        for n in self.levels:
            a, b = levels.sections_of(levels.elf_path(n))[".text"]
            self.sections[("level_%02d" % n, ".text")] = (a, b)
        self.copy_of = {r["number"]: r["copy_of"] for r in levels.read_table()}
        self.names = {}          # (program, section, address) -> (name, size)
        pairs = {v: k for k, v in lc.read_pairs().items()}
        for prog, rows in inv.read_inventory().items():
            for sec, a, n, kind in rows:
                nm = ("func_FB_%08X" if prog == "frontbin" else "func_%08X") % a
                self.names[(prog, sec, a)] = (nm, n)
        for name, kind, size, fp, rem, places in lc.read_catalogue():
            for lv, a in places:
                self.names[("level_%02d" % lv, ".text", a)] = (name, size)
        self.pairs = pairs

    def find(self, key, code, masks):
        """Addresses in section KEY where CODE equals the bytes with MASKS' fields masked."""
        import retail
        base, data = self.sections[key]
        n = len(code)
        if n < 4:
            return []
        want = retail.fields(code, masks, 0)
        # an anchor: the longest run of unmasked words (at most 4)
        best, run = (0, 0), 0
        for i in range(n // 4):
            if masks.get(4 * i, 0):
                run = 0
            else:
                run += 1
                if run > best[0]:
                    best = (run, i - run + 1)
        out = []
        if best[0] == 0:
            cands = [a for (p, s, a) in self.names if (p, s) == key]
            for a in cands:
                o = a - base
                if retail.fields(data[o:o + n], masks, 0) == want:
                    out.append(a)
            return out
        k = min(best[0], 4)
        first = best[1]
        needle = code[4 * first:4 * first + 4 * k]
        i = data.find(needle)
        while i >= 0:
            o = i - 4 * first
            if i % 4 == 0 and o >= 0 and o + n <= len(data) and retail.fields(data[o:o + n], masks, 0) == want:
                out.append(base + o)
            i = data.find(needle, i + 1)
        return out


def search_order(name, us_seg, pal):
    """[(program, section)] to look in for a US function, best first, in groups: the first
    group with a find wins."""
    m = NAME.match(name)
    if us_seg in ("core_text", "libgcc", "libm"):
        return [[("main", "core.text")]]
    if us_seg == "net_text":
        return [[("main", "net.text")]]
    if us_seg == "text":
        return [[("main", ".text")], [("frontbin", ".text")],
                [("level_%02d" % n, ".text") for n in pal.levels]]
    lv = int(m.group(1)[1:])
    own = pal.copy_of.get(lv, lv)
    return [[("level_%02d" % own, ".text")], [("level_%02d" % n, ".text") for n in pal.levels if n != own],
            [("main", ".text")]]


def us_info():
    """{US name: (segment, address)}"""
    import gen_progress_report as g
    out = {}
    for n, f in g.load_functions().items():
        seg = f["seg"]
        out[n] = ("overlay" if seg.startswith("ovl_") else seg, f["addr"])
    return out


def resolve(hits_by_name, info):
    """Keep one place per section for each function: the nearest to the address the unique
    finds around it predict (US address plus their US->PAL offset)."""
    unique = collections.defaultdict(list)
    for name, (key, hits) in hits_by_name.items():
        if len(hits) == 1:
            unique[key].append((info[name][1], hits[0]))
    for k in unique:
        unique[k].sort()
    out = {}
    for name, (key, hits) in hits_by_name.items():
        if len(hits) <= 1:
            out[name] = (key, hits)
            continue
        us = info[name][1]
        u = unique.get(key, [])
        if u:
            i = bisect.bisect_left(u, (us, -1))
            near = [u[j] for j in (i - 1, i) if 0 <= j < len(u)]
            ua, pa = min(near, key=lambda x: abs(x[0] - us))
            pred = us + (pa - ua)
        else:
            pred = us
        out[name] = (key, [min(hits, key=lambda h: abs(h - pred))])
    return out


def near_places(near, info, pal):
    """{US name: (key, address, closeness)} for the near misses whose US function's code is a PAL
    function's (retail.normalise() equal, same size)."""
    import layout
    import retail
    idx = collections.defaultdict(list)
    for (prog, sec, a), (nm, size) in pal.names.items():
        if (prog, sec) not in pal.sections:
            continue
        base, data = pal.sections[(prog, sec)]
        idx[(retail.normalise(data[a - base:a - base + size]), size)].append(((prog, sec), a))
    out = {}
    for name, path in near.items():
        try:
            b = layout.retail_bytes(name)
        except SystemExit:
            b = None
        if b is None:
            out[name] = None              # no US function of that name: nothing to carry over
            continue
        size = len(b)
        while size >= 4 and b[size - 4:size] == bytes(4) and not (size >= 8 and _jump(b[size - 8:size - 4])):
            size -= 4
        b = b[:size]
        cands = idx.get((retail.normalise(b), len(b)), [])
        if not cands:
            out[name] = None
            continue
        seg = info.get(name, ("overlay", 0))[0]
        order = [k for grp in search_order(name, seg, pal) for k in grp]
        cands.sort(key=lambda c: (order.index(c[0]) if c[0] in order else 99, abs(c[1] - info.get(name, ("", 0))[1])))
        out[name] = (cands[0][0], cands[0][1], closeness(os.path.join(ROOT, path)))
    return out


def _jump(w):
    x = struct.unpack("<I", w)[0]
    return (x & 0xFC1FFFFF) == 8 or x >> 26 == 2 or x >> 16 == 0x1000


def closeness(path):
    """rac1-decomp's closeness of a near miss: the share of bytes that match, from its verdict."""
    first = open(path, errors="replace").readline()
    m = re.search(r"BYTES (\d+)/(\d+)", first)
    return round(100.0 * (1 - int(m.group(1)) / int(m.group(2))), 2) if m else 0.0


def write():
    pal = Pal()
    info = us_info()
    src = source_functions()
    built = compiled()
    hits = {}
    for name, f in src.items():
        if name not in built or f.startswith("src/pal/"):
            continue
        code, masks = built[name]
        seg = info.get(name, ("overlay", 0))[0]
        for grp in search_order(name, seg, pal):
            found = [(k, a) for k in grp for a in pal.find(k, code, masks)]
            # where the inventory starts a function of that size, else where it starts one,
            # else (the cut is wrong) only a single find inside a function
            for rule in (lambda k, a: pal.names.get((k[0], k[1], a), (0, -1))[1] == len(code),
                         lambda k, a: (k[0], k[1], a) in pal.names):
                best = [h for h in found if rule(*h)]
                if best:
                    found = best
                    break
            else:
                found = found if len(found) == 1 else []
            if found:
                # one section: the first that has it (the level's own program first)
                k0 = found[0][0]
                hits[name] = (k0, [a for k, a in found if k == k0])
                break
    hits = resolve(hits, info)
    # the menu .text's matches in frontbin's copy of it too (its second link): the inventory
    # takes their extents there as well, so the pairs stay pairs
    fb_hits, fb_info = {}, {}
    for name, (key, addrs) in hits.items():
        if key == ("main", ".text") and addrs:
            code, masks = built[name]
            found = pal.find(("frontbin", ".text"), code, masks)
            if found:
                fb_hits[name] = (("frontbin", ".text"), found)
                fb_info[name] = ("text", addrs[0])
    fb_hits = resolve(fb_hits, fb_info)
    rows = []
    import check_pal
    import retail
    table = check_pal.places()
    for name, f in sorted(src.items()):
        if f.startswith("src/pal/"):
            # C written against PAL, under its PAL catalogue name
            p = table.get(name)
            if name not in built or p is None:
                rows.append((name, f, "nomatch", "-", "-", 0.0))
                continue
            code, masks = built[name]
            want = check_pal.pal_bytes(p[:4])
            ok = len(code) == len(want) and retail.fields(code, masks, 0) == retail.fields(want, masks, 0)
            rows.append((name, f, "match" if ok else "nomatch", name, "%s:%s:%08X:%d" % p[:4], 100.0 if ok else 0.0))
            continue
        if name not in built:
            rows.append((name, f, "ntsc", "-", "-", 0.0))
            continue
        code = built[name][0]
        if name not in hits:
            rows.append((name, f, "ntsc", "-", "-", 0.0))
            continue
        key, addrs = hits[name]
        a = addrs[0]
        nm = pal.names.get((key[0], key[1], a), (None, None))[0]
        if nm and pal.names[(key[0], key[1], a)][1] != len(code):
            nm = None                      # not where the inventory cuts: a proven extent
        if nm is None:
            nm = ("func_L%s_%08X" % (key[0][6:], a) if key[0].startswith("level_")
                  else ("func_FB_%08X" if key[0] == "frontbin" else "func_%08X") % a)
        places = "%s:%s:%08X:%d" % (key[0], key[1], a, len(code))
        if name in fb_hits and fb_hits[name][1]:
            fa = fb_hits[name][1][0]
            places += ",frontbin:.text:%08X:%d" % (fa, len(code))
        rows.append((name, f, "match", nm, places, 100.0))
    near = near_misses()
    for name, v in sorted(near_places(near, info, pal).items()):
        if name in src:
            continue
        if v is None:
            rows.append((name, near[name], "none", "-", "-", 0.0))
        else:
            (prog, sec), a, c = v
            nm, size = pal.names[(prog, sec, a)]
            rows.append((name, near[name], "near", nm, "%s:%s:%08X:%d" % (prog, sec, a, size), c))
    with open(MAP, "w", newline="\n") as f:
        f.write(HEAD)
        for r in rows:
            f.write("%s\t%s\t%s\t%s\t%s\t%.2f\n" % r)
    c = collections.Counter(r[2] for r in rows)
    print("wrote %s: %s" % (os.path.relpath(MAP, ROOT), ", ".join("%d %s" % (c[k], k) for k in ("match", "ntsc", "near", "none"))))


def check():
    rows = {r["name"]: r for r in read_map()}
    src, near = source_functions(), near_misses()
    problems = []
    for n, f in src.items():
        r = rows.get(n)
        if r is None or r["status"] not in ("match", "ntsc", "nomatch") or r["file"] != f:
            problems.append("%s (%s) has no up-to-date row" % (n, f))
    for n, f in near.items():
        r = rows.get(n)
        if (r is None or r["status"] not in ("near", "none") or r["file"] != f) and n not in src:
            problems.append("near miss %s (%s) has no up-to-date row" % (n, f))
    for n, r in rows.items():
        if r["status"] in ("match", "ntsc", "nomatch") and n not in src:
            problems.append("%s: a row but no C in src/" % n)
        if r["status"] in ("near", "none") and n not in near:
            problems.append("%s: a near-miss row but no file in nonmatching/" % n)
    for p in problems[:20]:
        print("error:", p)
    if problems:
        print("%d problems: rebuild (tools/build.sh, build_libgcc.sh, build_libm.sh) and run "
              "python3 tools/pal_map.py --write" % len(problems))
        return 1
    print("config/pal_map.tsv OK (%d rows)" % len(rows))
    return 0


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--write", action="store_true")
    ap.add_argument("--check", action="store_true")
    a = ap.parse_args()
    if a.write:
        write()
    if a.check or not a.write:
        sys.exit(check())


if __name__ == "__main__":
    main()
