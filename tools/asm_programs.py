#!/usr/bin/env python3
"""asm_programs.py: assembly of a disc's programs, one .s per function, from the dumps.

    python3 tools/asm_programs.py [--version us|pal] main frontbin level_01 ...   # all targets without names
    python3 tools/asm_programs.py [--version us|pal] --func NAME                  # where NAME's .s is

Writes, for each target (tools/levels.py targets(): main, frontbin, level_NN), from the dumps
of tools/levels.py dump and the committed function tables:

  asm/<version>/<program>/<section>/<function>.s   one per function: config/<version>/inventory.tsv's for
                                             the main image and frontbin, the catalogue's
                                             (config/<version>/functions.tsv) names for a level
  asm/<version>/<program>/<section>.s              the section: .include of every function in order
  asm/<version>/<program>/<section>.s              a data section: .word lines (.space for a .bss)
  build/<version>/<target>/<target>.ld             the linker script: every section at its address

A level whose program is a byte-identical copy of a lower one (config/<version>/levels.tsv) is
built from that level's assembly; net.text, the same in every program, from the main image's.

The instructions come from rabbitizer (pinned in requirements.txt), R5900, with no pseudo
instructions, branch targets as local labels and calls/jumps to a function of the same program
by its name (everything else by address). A word that is not an instruction, or that the
assembler would not give back as it is, is written as `.word` with the disassembly in a
comment (asm/<version>/<program>/words.txt lists them; tools/build_levels.py finds them by comparing
the build with the dump and reruns this). .vutext is VU microcode: .word lines.

asm/ holds the disc's bytes in another form: it is never committed (.gitignore).
"""
import argparse
import os
import sys

import rabbitizer

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))
import inventory as inv  # noqa: E402
import levels  # noqa: E402

rabbitizer.config.pseudos_enablePseudos = False
rabbitizer.config.misc_expandJalr = True
R5900 = rabbitizer.InstrCategory.R5900


def asm_root():
    """asm/<version>/"""
    return os.path.join(ROOT, "asm", levels.V)


def build_root():
    """build/<version>/"""
    return os.path.join(ROOT, "build", levels.V)

DATA_SECTIONS_AS_WORDS = {".vutext"}
# instructions binutils 2.10-ee's assembler has no R5900 encoding for (doubles, COP0 moves):
# the bytes of data among code, or hand-written system code; written as .word
NO_R5900 = {"ldc1", "sdc1", "mfc0", "mtc0", "ll", "sc", "lld", "scd"}

PRELUDE = """.set noreorder
.set noat
.set nomacro
.macro glabel label
    .global \\label
    .type \\label, @function
    \\label:
.endm
"""


def program_of(target):
    """The asm directory's program for a target: main, frontbin or level_NN of the level whose
    program it is (a copy's original)."""
    if target in ("main", "frontbin"):
        return target
    n = int(target.split("_")[1])
    row = next(r for r in levels.read_table() if r["number"] == n)
    return "level_%02d" % row["copy_of"]


def dump_path(program):
    if program in ("main", "frontbin"):
        return levels.program_path(program)
    return levels.elf_path(int(program.split("_")[1]))


def function_starts(program):
    """{section: {address: name}} of a program's code sections."""
    out = {}
    if program in ("main", "frontbin"):
        for prog, rows in inv.read_inventory().items():
            if prog == program:
                for sec, a, n, kind in rows:
                    out.setdefault(sec, {})[a] = ("func_FB_%08X" if program == "frontbin" else "func_%08X") % a
        return out
    import level_catalogue as lc
    n = int(program.split("_")[1])
    t = out.setdefault(".text", {})
    for name, kind, size, fp, rem, places in lc.read_catalogue():
        for lv, a in places:
            if lv == n:
                t[a] = name
    return out


def read_words_txt(program):
    p = os.path.join(asm_root(), program, "words.txt")
    if not os.path.exists(p):
        return set()
    return {int(l.split()[0], 16) for l in open(p) if l.strip() and not l.startswith("#")}


CHUNK_WORDS = 2048


def chunks_of(ins, base, order):
    """Where a code section is cut into separately assembled parts (binutils 2.10-ee's
    assembler takes time quadratic in a file's size): at a 16-aligned function start that no
    branch crosses, every CHUNK_WORDS words or more. Each part is a multiple of 16 bytes, so
    the linker puts the parts back to back."""
    n = len(ins)
    cover = [0] * (n + 2)
    for i, x in enumerate(ins):
        if x.isValid() and x.isBranch():
            t = (x.getBranchVramGeneric() - base) // 4
            lo, hi = min(i, t), max(i, t)
            if 0 <= lo and hi < n:
                cover[lo + 1] += 1
                cover[hi + 1] -= 1
    crossed, c = [False] * (n + 1), 0
    for k in range(n + 1):
        c += cover[k]
        crossed[k] = c > 0
    cuts, last = [base], base
    for a in order[1:]:
        k = (a - base) // 4
        if a % 16 == 0 and not crossed[k] and (a - last) // 4 >= CHUNK_WORDS:
            cuts.append(a)
            last = a
    return cuts


def code_section(base, data, starts, as_words, symbols):
    """([(name, start, text)], [part starts]) of a code section: one .s per function, local
    labels for the branch targets of each part."""
    import bisect
    w = inv.words(data)
    n = len(w)
    ins = [rabbitizer.Instruction(x, base + 4 * i, category=R5900) for i, x in enumerate(w)]
    order = sorted(a for a in starts if base <= a < base + 4 * n)
    if not order or order[0] != base:
        order.insert(0, base)
    cuts = chunks_of(ins, base, order)
    part = lambda addr: bisect.bisect_right(cuts, addr)
    labels = set()
    for i, x in enumerate(ins):
        if x.isValid() and (x.isBranch() or (x.isJump() and not x.isJrRa() and x.isJType())):
            t = x.getBranchVramGeneric() if x.isBranch() else x.getInstrIndexAsVram()
            if base <= t < base + 4 * n and not (x.isJType() and t in symbols) and part(t) == part(base + 4 * i):
                labels.add(t)
    names = dict(starts)
    names.setdefault(base, "pad_%08X" % base)
    out = []
    for k, a in enumerate(order):
        end = order[k + 1] if k + 1 < len(order) else base + 4 * n
        lines = ["glabel %s" % names[a]]
        for addr in range(a, end, 4):
            i = (addr - base) // 4
            x = ins[i]
            if addr in labels:
                lines.append(".L%08X:" % addr)
            word = w[i]
            text = None
            if addr not in as_words and x.isValid() and x.isImplemented() and not x.isDouble() \
                    and x.getOpcodeName() not in NO_R5900:
                try:
                    if x.isBranch():
                        t = x.getBranchVramGeneric()
                        text = x.disassemble(immOverride=".L%08X" % t) if t in labels else None
                    elif x.isJType():
                        t = x.getInstrIndexAsVram()
                        if t in symbols:
                            text = x.disassemble(immOverride=symbols[t])
                        elif t in labels and part(t) == part(addr):
                            text = x.disassemble(immOverride=".L%08X" % t)
                        else:
                            text = x.disassemble(immOverride="0x%X" % t)
                    else:
                        text = x.disassemble()
                except Exception:
                    text = None
            if text is None or "\n" in text:
                dis = x.disassemble() if x.isValid() else "?"
                lines.append("/* %06X %08X */ .word 0x%08X  /* %s */" % (addr, word, word, dis.replace("*/", "* /")))
            else:
                lines.append("/* %06X %08X */ %s" % (addr, word, text))
        out.append((names[a], a, "\n".join(lines) + "\n"))
    return out, cuts


def data_text(data, nobits=False):
    if nobits:
        return ".space 0x%X\n" % len(data)
    w = inv.words(data)
    out = []
    for i in range(0, len(w), 4):
        out.append(".word " + ", ".join("0x%08X" % x for x in w[i:i + 4]))
    tail = data[len(w) * 4:]
    if tail:
        out.append(".byte " + ", ".join("0x%02X" % b for b in tail))
    return "\n".join(out) + "\n"


def safe(name):
    return name.lstrip(".").replace(".", "_")


def write_program(program):
    """asm/pal/<program>/ for one program. Returns {section: path of its .s}."""
    _, secs = levels.read_elf(open(dump_path(program), "rb").read())
    starts = function_starts(program)
    as_words = read_words_txt(program)
    root = os.path.join(asm_root(), program)
    os.makedirs(root, exist_ok=True)
    symbols = {}
    for sec, m in starts.items():
        symbols.update(m)
    paths = {}
    for name, a, n, kind, b in secs:
        if name == "net.text" and program != "main":
            paths[name] = write_program_net()
            continue
        p = os.path.join(root, safe(name) + ".s")
        if name in levels.CODE_SECTIONS and name not in DATA_SECTIONS_AS_WORDS:
            d = os.path.join(root, safe(name))
            pd = os.path.join(root, safe(name) + ".parts")
            os.makedirs(d, exist_ok=True)
            os.makedirs(pd, exist_ok=True)
            funcs, cuts = code_section(a, b, starts.get(name, {}), as_words, symbols)
            parts = [[] for _ in cuts]
            import bisect
            for fname, fa, text in funcs:
                fp = os.path.join(d, fname + ".s")
                body = "/* %s %s 0x%08X */\n%s" % (program, name, fa, text)
                if not os.path.exists(fp) or open(fp).read() != body:
                    open(fp, "w").write(body)
                parts[bisect.bisect_right(cuts, fa) - 1].append('.include "%s"' % os.path.relpath(fp, ROOT))
            files = []
            for k, incs in enumerate(parts):
                fp = os.path.join(pd, "%08X.s" % cuts[k])
                open(fp, "w").write(PRELUDE + ".text\n" + "\n".join(incs) + "\n")
                files.append(fp)
            open(p, "w").write("".join('.include "%s"\n' % os.path.relpath(f, ROOT) for f in files))
            paths[name] = files
        else:
            open(p, "w").write(".text\n" + data_text(b, nobits=(kind == 8)))
            paths[name] = [p]
    return paths, secs


_NET = {}


def write_program_net():
    """The main image's net.text parts (the same in every program)."""
    if "parts" not in _NET:
        pd = os.path.join(asm_root(), "main", "net_text.parts")
        if not os.path.isdir(pd):
            write_program("main")
        _NET["parts"] = sorted(os.path.join(pd, f) for f in os.listdir(pd))
    return _NET["parts"]


def obj_name(target, src):
    rel = os.path.relpath(src, asm_root()).replace(os.sep, "_").replace(".parts", "")
    return os.path.join("build", levels.V, target, rel[:-2] + ".o")


def linker_script(target, paths, secs):
    lines = ["/* %s (%s): tools/asm_programs.py; every section at its address. */" % (target, levels.version_id())]
    if program_of(target) != "main":
        # net.text (the main image's assembly) calls the resident engine core by name
        lines.append("/* the main image's resident functions, which net.text calls */")
        for sec, a, n, kind in [r for r in inv.read_inventory()["main"] if r[0] == "core.text"]:
            lines.append("func_%08X = 0x%08X;" % (a, a))
    lines += ["SECTIONS", "{"]
    # output sections are named by position (pal.0, pal.1, ...): ld treats a .reginfo by its
    # name (it would write $gp into it)
    for i, (name, a, n, kind, b) in enumerate(secs):
        objs = " ".join("%s(.text)" % obj_name(target, p) for p in paths[name])
        lines += ["    pal.%d 0x%X : { %s }  /* %s */" % (i, a, objs, name)]
    lines += ["    /DISCARD/ : { *(*) }", "}"]
    return "\n".join(lines) + "\n"


def write_target(target, done=None):
    program = program_of(target)
    done = done if done is not None else {}
    if program not in done:
        if program != "main" and "main" not in done:
            done["main"] = write_program("main")
        done[program] = write_program(program)
    paths, secs = done[program]
    d = os.path.join(build_root(), target)
    os.makedirs(d, exist_ok=True)
    open(os.path.join(d, target + ".ld"), "w").write(linker_script(target, paths, secs))
    open(os.path.join(d, "objects.txt"), "w").write(
        "".join("%s\t%s\t%s\n" % (os.path.relpath(p, ROOT), obj_name(target, p), name)
                for name, a, n, k, b in secs for p in paths[name]))
    return paths


def find_func(name):
    for root, _, files in os.walk(asm_root()):
        if name + ".s" in files:
            return os.path.join(root, name + ".s")
    return None


def main():
    levels.cli_version()
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("targets", nargs="*")
    ap.add_argument("--func")
    a = ap.parse_args()
    if a.func:
        p = find_func(a.func)
        print(os.path.relpath(p, ROOT) if p else "%s: no .s (run tools/asm_programs.py first)" % a.func)
        return
    names = a.targets or [t[0] for t in levels.targets()]
    done = {}
    for t in names:
        write_target(t, done)
        print("%s: asm/%s/%s, build/%s/%s/%s.ld" % (t, levels.V, program_of(t), levels.V, t, t), flush=True)


if __name__ == "__main__":
    main()
