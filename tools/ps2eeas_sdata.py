#!/usr/bin/env python3
"""
Choose `$gp` or `lui` for each access to a global the way retail's
assembler did, in compiled game code.

GCC leaves that choice to the assembler: it writes a load or store of a
global as a macro (`lw $2,D_x`, `sw $3,D_x+4`, `la $4,D_x`) and lists
the externals at the end of the file (`.extern D_x, 4`). GNU as with -G8
makes every access to a small object `$gp`-relative. SN's ps2eeas reads
the file once, top to bottom, and only knows an object is small if its
definition came before the access. Measured on ps2eeas 1.9.6 (the one in
the SDK mirror):

- a macro access outside `.set nomacro` is `lui` plus the access (`$at`
  for stores and FPU registers), unless it is a plain `D_x` (no offset,
  no index register) whose definition in `.sdata`/`.sbss` came earlier in
  the file: then one `$gp`-relative instruction;
- inside `.set nomacro` (GCC's filled delay slots, where GCC counted the
  access as one instruction) it is `$gp`-relative, offset or not.

Retail agrees: in the resident and L00 code, when one function reaches a
global both ways, 1231 of its 1252 `$gp` accesses are in delay slots
(the other 21 are in a single function).

GNU as expands a macro exactly as ps2eeas does once it does not take the
object for small (checked on every load, store, FPU and `la` form). The
driver's GNU as has no `%gp_rel` operator, so the choice is made with
names, as tools/ps2eeas_nops.py already expects:

- a `$gp` access to an object not defined in the file goes to the alias
  `D_x__gp`, declared small (`.extern D_x__gp, 4`);
- a `lui` access to an object GNU as would take for small (defined in a
  small section or `.comm` in this file) goes to the alias `D_x__lui`,
  which is never declared; for an external, its `.extern` line goes.

The aliases only rename relocations; the audit masks them, and a link
will define `D_x__gp` and `D_x__lui` as `D_x`.

usage: python tools/ps2eeas_sdata.py IN.s OUT.s
"""
import re
import sys

MEM_OPS = {
    "lb", "lbu", "lh", "lhu", "lw", "lwu", "ld", "lq", "lwl", "lwr", "ldl", "ldr",
    "sb", "sh", "sw", "sd", "sq", "swl", "swr", "sdl", "sdr",
    "lwc1", "swc1", "ldc1", "sdc1", "l.s", "s.s", "l.d", "s.d", "la",
}
SMALL_SECTIONS = {".sdata", ".sbss"}
INSN = re.compile(r"^(\s+)([a-z][\w.]*)(\s+)(.*?)(\s*#.*)?$")
LABEL = re.compile(r"^([A-Za-z_$][\w.$]*):")
EXTERN = re.compile(r"^\s*\.extern\s+([\w.$]+)\s*,\s*(\d+)")
COMM = re.compile(r"^\s*\.(?:l?comm)\s+([\w.$]+)\s*,\s*(\d+)")
REG = re.compile(r"^\$(\d+|f\d+|sp|fp|gp|ra|at)$")
# the address operand: a symbol, optionally plus or minus a constant, optionally indexed
TARGET = re.compile(r"^([A-Za-z_$][\w.$]*)(\s*[+-]\s*(?:0x[0-9A-Fa-f]+|\d+))?(\(\$\w+\))?$")


def section_of(stripped, current, previous):
    """(current, previous) section after a directive line."""
    parts = stripped.split(None, 1)
    d = parts[0]
    if d in (".text", ".data", ".rdata", ".sdata", ".sbss", ".bss"):
        return d, current
    if d == ".section":
        return parts[1].split(",")[0].strip(), current
    if d == ".previous":
        return previous, current
    return current, previous


def small_to_gas(lines):
    """Objects GNU as at -G8 takes for small: defined in a small section or
    common of 8 bytes or less, anywhere in the file."""
    out, section, previous = set(), ".text", ".text"
    for line in lines:
        s = line.strip()
        m = COMM.match(s)
        if m and int(m.group(2)) <= 8:
            out.add(m.group(1))
        elif s.startswith("."):
            section, previous = section_of(s, section, previous)
        elif (m := LABEL.match(s)) and section in SMALL_SECTIONS:
            out.add(m.group(1))
    return out


def rewrite(lines):
    gas_small = small_to_gas(lines)
    out, known, gp_alias, lui_plain = [], set(), set(), set()
    section, previous, nomacro = ".text", ".text", False
    for line in lines:
        s = line.strip()
        if s.startswith("."):
            if s in (".set\tnomacro", ".set nomacro"):
                nomacro = True
            elif s in (".set\tmacro", ".set macro"):
                nomacro = False
            else:
                section, previous = section_of(s, section, previous)
            out.append(line)
            continue
        m = LABEL.match(s)
        if m:
            if section in SMALL_SECTIONS:
                known.add(m.group(1))
            out.append(line)
            continue
        m = INSN.match(line.rstrip("\n"))
        if not m or m.group(2) not in MEM_OPS:
            out.append(line)
            continue
        indent, op, gap, operands, comment = m.groups()
        dst, _, target = operands.rpartition(",")
        t = TARGET.match(target.strip())
        if not dst or not t or REG.match(t.group(1)) or t.group(1).startswith("$L"):
            out.append(line)
            continue
        sym, off, index = t.group(1), t.group(2) or "", t.group(3) or ""
        gp = nomacro and not index or (sym in known and not off and not index)
        if gp and sym not in gas_small:
            sym = sym + "__gp"
            gp_alias.add(sym)
        elif not gp and sym in gas_small:
            sym = sym + "__lui"
        elif not gp:
            lui_plain.add(sym)
        else:
            out.append(line)
            continue
        out.append(f"{indent}{op}{gap}{dst},{sym}{off}{index}{comment or ''}\n")
    # externals reached with lui lose their size, so GNU as does not take them for small
    out = [l for l in out if not ((m := EXTERN.match(l)) and m.group(1) in lui_plain)]
    out += [f"\t.extern\t{a}, 4\n" for a in sorted(gp_alias)]
    return out, len(gp_alias), len(lui_plain)


def main():
    src, dst = sys.argv[1:3]
    out, n_gp, n_lui = rewrite(open(src).readlines())
    open(dst, "w").writelines(out)
    print(f"ps2eeas_sdata: {n_gp} $gp alias(es), {n_lui} external(s) by lui {src} -> {dst}")


if __name__ == "__main__":
    main()
