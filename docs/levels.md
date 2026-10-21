# The PAL disc: its programs, their build, and how the functions are counted

The target is the PAL disc *Ratchet: Gladiator* (`SCES-53285`), kept locally as
`baserom/SCES_532.85.iso` (never committed). `baserom/SCUS_974.87.iso` is a beta: a reference
only, never a target and never counted. The C in `src/` so far was matched against the NTSC-U
executable `SCUS_974.65` and the US level overlays; that build and its audit
(`tools/build.sh`, `tools/audit_matches.py`, `docs/OVERLAYS.md`) are unchanged, and each of
those functions counts on PAL where it builds to the PAL bytes too ("Carrying the matches").

## The programs on the disc

| Program | What it is | Code sections counted |
| --- | --- | --- |
| `main` | the game image the loader `SCES_532.85` unpacks (17 sections, entry `0x1574E8`) | `core.text`, `net.text`, the resident menu `.text` |
| `frontbin` | the front end, loaded at `0x21E200` over the main image's menus | its `.text` (the menu `.text` linked a second time) |
| `level_NN` | the 47 level programs: `.lit .bss .data lvl.vtbl lvl.camvtbl lvl.sndvtbl .text net.text` | `.text` |

`.vutext` is VU microcode (no EE code) and is not counted, as in rac3-uya-decomp-pal. `net.text`
is the same 0x97330 bytes in every program; it is counted once, in the main image.

    python3 tools/levels.py dump      # baserom/SCES_532.85(.elf), baserom/pal/frontbin.elf, baserom/pal/levels/NN_slug.elf
    python3 tools/levels.py config    # config/levels/levels.tsv, config/programs.tsv
    python3 tools/levels.py check     # the dumps against the committed SHA-1s

`dump` reads the ISO directly (no Wrench unpack): the loader from the ISO9660 root, its WAD
unpacked by `tools/unpack_wad.py`; frontbin through the MISC wad; the levels through the table
of contents at sector 1001. Deadlocked's table is not laid out like UYA's: the docstring of
`tools/levels.py` has the format, from Wrench's `src/iso/table_of_contents.cpp`,
`src/wrenchbuild/level/level_wad.cpp`, `level_data_wad.cpp` and `globals/misc_wad.cpp`. Each
program is written as an ELF and checked to convert back to the disc's bytes;
`config/levels/levels.tsv` and `config/programs.tsv` keep the SHA-1 of the ELF and of the program
as the disc stores it, the entry point and the sections.

### The levels

The disc has 47 level programs but only **14 distinct ones**: the 12 split-screen campaign
levels (21-35) are byte-identical copies of the single-player levels (1-15), and all 22
multiplayer maps (41-54, 61-74) carry one and the same program (level 41's). The last column
of `config/levels/levels.tsv` says which. (In memory every level is loaded at `0x21E200`; the
copies differ only in their other files: geometry, mobys, sound.)

| Level | Distinct program | `.text` at | `.text` size | Its own functions | Their code |
| --- | --- | --- | --- | ---: | ---: |
| 00 Multiplayer Menu | `level_00` | `0x4EF400` | `0x294100` | 2,826 | 943,820 bytes |
| 01 Dreadzone Station | `level_01`; also 21 | `0x3C7E00` | `0x304040` | 357 | 189,772 bytes |
| 02 Catacrom Graveyard | `level_02`; also 22 | `0x3C0180` | `0x2BB600` | 29 | 21,232 bytes |
| 04 Sarathos Swamp | `level_04`; also 24 | `0x3BF400` | `0x2BC248` | 19 | 11,868 bytes |
| 05 Dark Cathedral | `level_05`; also 25 | `0x3C1980` | `0x2E0698` | 106 | 61,960 bytes |
| 06 Temple Of Shaar | `level_06`; also 26 | `0x3BF000` | `0x2B4990` | 31 | 9,440 bytes |
| 07 Valix Lighthouse | `level_07`; also 27 | `0x3BF400` | `0x2A72B8` | 44 | 27,640 bytes |
| 08 Mining Facility | `level_08`; also 28 | `0x3BF380` | `0x2BF908` | 48 | 24,900 bytes |
| 10 Torval Ruins | `level_10`; also 30 | `0x3C0700` | `0x2C88A0` | 38 | 20,392 bytes |
| 11 Tempus Station | `level_11`; also 31 | `0x3BE680` | `0x2B7900` | 17 | 9,024 bytes |
| 13 Maraxus Prison | `level_13`; also 33 | `0x3C0600` | `0x2CF5C8` | 34 | 15,996 bytes |
| 14 Ghost Station | `level_14`; also 34 | `0x3C0B80` | `0x2C8918` | 23 | 8,884 bytes |
| 15 Control Level | `level_15`; also 35 | `0x3C4D80` | `0x2D4D30` | 134 | 116,624 bytes |
| 41 Battledome Tower | `level_41`; also the other 21 multiplayer maps | `0x3A1780` | `0x2921C8` | 374 | 140,340 bytes |

## Building them (`MATCH` for all 49)

    python3 tools/build_levels.py --asm -P 16 --rounds 3          # every target; or name some: main frontbin level_01

Every program is a target (`main`, `frontbin`, `level_NN`). `tools/pal_asm.py` writes its
assembly from the dump: one `.s` per function, named as the function tables name it
(`asm/pal/<program>/<section>/<name>.s`; a level that is a copy of another is built from that
level's, `net.text` from the main image's), the data sections as `.word` lines, and the linker
script (`build/pal/<target>/<target>.ld`) that puts every section at its address.
`tools/build_levels.py` assembles each section with the repository's toolchain
(`toolchain/sn-prodg-24`: binutils 2.10-ee `ee-as` and `ee-ld`, run natively on Linux; on a Mac
through `tools/docker/run.sh`), links, puts the sections back into the disc's program format and
prints `MATCH` when the SHA-1s are the disc's (the program as the disc stores it, and the dump's
ELF). All 49 targets match:

    main: MATCH: as the disc stores it sha1 dcfac0aab50b16d64f7c921888258a82afcab53a; ELF sha1 6134918e...
    frontbin: MATCH: ... da501734355880aa3c2b6f9afbac1630e24d3d0e
    level_00: MATCH: ... 9debe58ea65ba4b6a582814eb8ab19815b04fa7a
    ...
    level_74: MATCH: ... dac41d0a93557917ee51b0e22c62426f50cf9596
    49 of 49 targets match

The instructions come from rabbitizer (R5900, no pseudo-instructions); branch targets are local
labels, calls and jumps to a function of the same program use its name. What binutils 2.10-ee
cannot assemble as it is becomes `.word` with the disassembly in a comment: VU0 macro-mode
instructions (`vmulq`, `vadday`, ... in rabbitizer's spelling), COP0 moves, `ldc1`/`sdc1`, short
loops it refuses in `noreorder` code, and words of data among code. The build finds them itself
(`asm/pal/<program>/words.txt`, `--rounds`): about 3,800 in the main image and 11,000 to 12,600
per level program (of 750,000 or so words). Code sections are assembled in parts of about 8 KB
that no branch crosses, because the old assembler takes time quadratic in a file's size (one
1.4 MB file took ten minutes; the parts take seconds).

This differs from rac3-uya-decomp-pal, which runs splat per level: here the per-function `.s`
and the linker scripts come straight from the committed function tables, so the build and the
count cut the code in the same places, and nothing needs the "halt function search" or fill
fixes splat needed there.

**C is not built into these programs yet** (rac3-uya-decomp-pal does the same): the targets prove
the tables, the dumps and the assembly; the next step is building `src/` C in place of a
function's `.s`, renaming what it refers to by the catalogue.

## Counting functions (`config/inventory.tsv`, `config/levels/functions.tsv`)

The functions are found from the binaries with rac1-decomp's rules (`tools/overlays.py
split()`, `code_size()`, `tools/overlay_remnants.py` there), ported from rac3-uya-decomp-pal's
`tools/inventory.py` and applied the same way to every code section (`tools/inventory.py`):

- **starts**: the section's start and the entry point; every `jal`, `bgezal` or `bltzal` target;
  the instruction after a `jr $ra` and its delay slot, past the zero words after it; after a `j`
  and its delay slot when a frame opener follows; a frame opener right after a zero word; a
  pointer in the program's data that points just after finished code; the `lvl.*` tables'
  pointers;
- **joined**: a conditional branch never leaves its function, so a start that one crosses is not
  a start, unless a call or a dispatch table reaches it;
- **proven**: where C in `src/` builds to the PAL bytes (`config/pal_map.tsv`), the function
  starts and ends where the C does;
- **size**: without the zero words after it, but with its last jump's delay slot; an entry of
  only zero words or `0xCDCDCDCD` fill is padding, not a function;
- **linker remnants**: an 8-aligned entry of words that are not jumps or branches, after finished
  code, that nothing branches to or points at. They count as functions (finished original bytes).

Then each distinct function counts once (`tools/level_catalogue.py`, rac1-decomp's and
rac2-decomp's catalogue): two places are one function when their instructions are equal apart
from what linking changes (`inventory.identity()`: jump targets and address halves are masked,
except those into the resident core and `net.text`; constants, stack slots and field offsets are
compared) and their sizes are equal; the k-th copy of identical code in each level is one
function. The 33 copy levels are not cut again: they are their level.

- **frontbin** (`config/frontend_pairs.tsv`): frontbin's `.text` is the main image's resident menu
  `.text` linked a second time; 4,759 of its 4,785 functions are menu functions (identity and size
  equal, in order) and count once, with the main image. 26 are frontbin's own.
- **levels**: 107,276 function places in the 14 distinct level programs are 12,701 distinct
  functions: 3,530 are the menu `.text`'s (counted with the main image), 3 frontbin's own,
  5,088 are shared by two or more distinct programs (2,008,520 bytes) and 4,080 are in one only
  (1,601,892 bytes; the multiplayer menu, level 00, has 2,826 of them).

| Class | Functions | Bytes |
| --- | ---: | ---: |
| Main image `core.text` (libgcc and libm included) | 1,701 | 299,068 |
| Main image `net.text` | 2,441 | 465,620 |
| Main image resident menu `.text` | 4,786 | 1,422,048 |
| frontbin's own | 26 | 15,812 |
| Shared level code | 5,088 | 2,008,520 |
| Level-specific code | 4,080 | 1,601,892 |
| **Total** | **18,122** | **5,812,960** |

Linker remnants are 92 of the `core.text` functions, 59 of `net.text`'s, 557 of the menu
`.text`'s and 680 of the level catalogue's.

### Old against new totals

The NTSC-U report (`progress/us/report.json`, `tools/gen_progress_report.py`) counts **15,056
functions, 5,175,440 bytes**: `config/functions.tsv` (US `core.text` 1,710 / 299,180 bytes,
`net.text` 2,434 / 465,672, resident `.text` 3,883 / 974,772) and `config/overlay_functions.tsv`
(the US overlays split by `tools/split_overlays.py`: 4,714 common / 2,603,676 and 2,315
level-specific / 832,140; 3,869 identical to the resident text left out). The PAL count is
**18,122 functions, 5,812,960 bytes**. Why:

| | US (old) | PAL (new) | What changed |
| --- | ---: | ---: | --- |
| `core.text` | 1,710 / 299,180 | 1,701 / 299,068 | PAL's section is 168 bytes longer (`0x49A38` against `0x49990`); sizes without the zero words after a function; joined pieces (an early return or trap block after a `jr $ra` is not its own function); 92 linker remnants counted as rac1-decomp counts them |
| `net.text` | 2,434 / 465,672 | 2,441 / 465,620 | same section size on both; the same rules: padding left out, 59 remnants |
| resident `.text` | 3,883 / 974,772 | 4,786 / 1,422,048 | the US list has seven holes `tools/find_functions.py` could not cut (452,388 bytes, one of 392,472 at `0x40A3F8` among the data-embedded code), so it covered 974,772 of the section's 1,427,160 bytes; the PAL inventory cuts the whole section (`0x15DC40` bytes) |
| frontbin | not counted | 26 / 15,812 | a second program the US count never had; its 4,759 copies of menu functions count once |
| level code | 7,029 / 3,435,816 | 9,168 / 3,610,412 | see below |
| **Total** | **15,056 / 5,175,440** | **18,122 / 5,812,960** | |

The level code changes for four reasons:

1. **Copies.** The US split counted all 47 overlays, so a function in level 01 and its
   split-screen copy 21 was "common", and every function outside the multiplayer menu was common
   (2,315 level-specific, all of them level 00's). Here the 33 copy programs are their level:
   4,080 functions belong to one distinct program (2,826 the multiplayer menu's, 357 Dreadzone
   Station's, 374 the multiplayer maps', ...) and 5,088 are shared.
2. **Identity.** The US split's `retail.normalise()` masks every immediate of a load, store or
   add and every `lui`, so routines that differ in a constant or a field offset were one
   function. `inventory.identity()` compares constants, stack slots and field offsets (only
   address fields are masked), so they are separate functions here: more distinct functions
   in fewer bytes each.
3. **Cutting rules.** Joined pieces, padding left out of the sizes (US sizes ran to the next
   start), 680 linker remnants, starts from data pointers and dispatch tables.
4. **The binaries.** PAL's level `.text` sections are 18 to 23 KB longer than the US overlays'
   (level 01: `0x304040` bytes against `0x2FEA50`), and the menu `.text` functions found in the
   levels (3,530 here, 3,869 in the US split) are counted with the main image in both.

The main image's `.vutext` (106,720 bytes of VU microcode) is not counted in either.

## Carrying the matches (`config/pal_map.tsv`)

`tools/pal_map.py --write` (after `tools/build.sh`, `build_libgcc.sh`, `build_libm.sh`) looks up
every function of `src/` in the PAL programs: its compiled code, with the file's own flags, is
searched for in the PAL section that holds its kind of code, comparing words with only the
fields its object relocates masked, exactly as `tools/audit_matches.py` compares with the US
bytes (constants and offsets must be equal; no per-function flags). Where identical code is in
several places, a place where the inventory starts a function of that size wins, then the one
nearest the address the unique finds around it predict. The result:

- **1,987 match** on PAL: 1,985 distinct PAL functions (two pairs of US functions have the same
  code): 1,163 of the main image (336 `core.text`, 24 libgcc, 27 libm, 52 `net.text`, 724 menu
  `.text`), 458 shared level functions and 364 level-specific ones;
- **32 match the US build only** (`ntsc` rows; their C stays in `src/` and still passes the US
  audit). Most are the 60 Hz constants of NTSC against PAL's 50 Hz (30 frames against 25, 60
  against 50, 300 against 250, a float 60.0 against 50.0) or a count of languages; nine have no
  PAL function with the same code at all. They are listed below.
- the **near misses** in `nonmatching/` (`near` rows): 135 are of a function whose PAL code is the
  US code (`retail.normalise()` equal, same size); their closeness (the verdict on their first
  line, rac1-decomp's `closeness()`) is the PAL function's fuzzy match. 11 (`none`) have no such
  PAL function.

`config/pal_map.tsv` holds US names, files, PAL names and places (program, section, address,
size) and the closeness; no bytes. CI counts from it without the disc, and fails when a function
of `src/` or `nonmatching/` has no row (`tools/progress.py --check`).

### NTSC-only matches

| US function | Source | PAL function | What differs on PAL |
| --- | --- | --- | --- |
| `func_004A2698` | `src/game/004A2698.c` | - | no PAL function has the US code (changed for PAL) |
| `func_004AD3E0` | `src/game/004AD3E0.c` | - | no PAL function has the US code (changed for PAL) |
| `func_004F55E0` | `src/game/004F55E0.c` | `func_004F6660` | `addiu $a0, $zero, 0x6` → `addiu $a0, $zero, 0x5`; `addiu $v1, $zero, 0x12C` → `addiu $v1, $zero, 0xFA` (+1 more) |
| `func_00522C70` | `src/game/00522C70.c` | `func_00523E68` | `addiu $a2, $zero, 0x7` → `addiu $a2, $zero, 0x6`; `addiu $a2, $zero, 0x7` → `addiu $a2, $zero, 0x6` |
| `func_L00_00593FD0` | `src/overlays/shared/L00_00593FD0.c` | - | no PAL function has the US code (changed for PAL) |
| `func_L00_00599350` | `src/overlays/shared/L00_00599350.c` | `func_L00_00599F58` | `addiu $a0, $a1, -0x3970` → `addiu $a0, $a1, -0x3870`; `addiu $v1, $v1, 0x2710` → `addiu $v1, $v1, 0x2850` (+23 more) |
| `func_L00_006091A8` | `src/overlays/shared/L00_006091A8.c` | - | no PAL function has the US code (changed for PAL) |
| `func_L00_006ADAA0` | `src/overlays/shared/L00_006ADAA0.c` | `func_L00_006B12C0` | `slti $a0, $v0, 0x1E` → `slti $a0, $v0, 0x19` |
| `func_L00_006B7EB8` | `src/overlays/shared/L00_006B7EB8.c` | `func_L00_006BB798` | `lwc1 $f0, -0x541F($gp)` → `lwc1 $f0, -0x53EF($gp)`; `lbu $v0, -0x21C3($v0)` → `lbu $v0, -0x213B($v0)` (+2 more) |
| `func_L00_006EE7E8` | `src/overlays/shared/L00_006EE7E8.c` | `func_L00_006F23A8` | `slti $v0, $v0, 0x97` → `slti $v0, $v0, 0x7E` |
| `func_L00_00711A80` | `src/overlays/l00_multiplayer_menu/L00_00711A80.c` | `func_L00_007158A0` | `addiu $a2, $zero, 0x2D` → `addiu $a2, $zero, 0x25`; `addiu $a1, $a1, 0xC10` → `addiu $a1, $a1, 0xCD0` |
| `func_L00_00714610` | `src/overlays/l00_multiplayer_menu/L00_00714610.c` | `func_L00_00718458` | `addiu $a2, $zero, 0x2D` → `addiu $a2, $zero, 0x25`; `addiu $a1, $a1, 0xC68` → `addiu $a1, $a1, 0xD28` |
| `func_L00_00719430` | `src/overlays/l00_multiplayer_menu/L00_00719430.c` | - | no PAL function has the US code (changed for PAL) |
| `func_L00_00743DA0` | `src/overlays/l00_multiplayer_menu/L00_00743DA0.c` | - | no PAL function has the US code (changed for PAL) |
| `func_L01_003EE3D8` | `src/overlays/shared/L01_003EE3D8.c` | `func_L01_003EECB0` | `addiu $a2, $zero, 0xA` → `addiu $a2, $zero, 0x8` |
| `func_L01_0044AA78` | `src/overlays/shared/L01_0044AA78.c` | - | no PAL function has the US code (changed for PAL) |
| `func_L01_0045FE18` | `src/overlays/shared/L01_0045FE18.c` | `func_L01_00461100` | `addiu $a2, $zero, 0x7` → `addiu $a2, $zero, 0x6`; `addiu $a2, $zero, 0x11` → `addiu $a2, $zero, 0xE` |
| `func_L01_00469AF8` | `src/overlays/shared/L01_00469AF8.c` | `func_L01_0046AEE0` | `addiu $v1, $zero, 0x6` → `addiu $v1, $zero, 0x5` |
| `func_L01_0047E238` | `src/overlays/shared/L01_0047E238.c` | `func_L01_0047F798` | `sltiu $v0, $v0, 0x5` → `sltiu $v0, $v0, 0x4` |
| `func_L01_004B6F50` | `src/overlays/shared/L01_004B6F50.c` | `func_L01_004B8A78` | `addiu $a1, $zero, 0x3C` → `addiu $a1, $zero, 0x32` |
| `func_L01_004C22F0` | `src/overlays/shared/L01_004C22F0.c` | - | no PAL function has the US code (changed for PAL) |
| `func_L01_004CF6B0` | `src/overlays/shared/L01_004CF6B0.c` | `func_L01_004D15D8` | `addiu $a1, $zero, 0x78` → `addiu $a1, $zero, 0x64` |
| `func_L01_004DDFC8` | `src/overlays/shared/L01_004DDFC8.c` | `func_L01_004DFF68` | `lui $at, 0x4270` → `lui $at, 0x4248` |
| `func_L01_004EFD50` | `src/overlays/shared/L01_004EFD50.c` | `func_L01_004F1D18` | `sltiu $v0, $v0, 0x78` → `sltiu $v0, $v0, 0x64` |
| `func_L01_00558B10` | `src/overlays/shared/L01_00558B10.c` | `func_L01_0055B6A8` | `lw $v0, -0x2248($v0)` → `lw $v0, -0x21C0($v0)`; `lw $v0, -0x2248($v0)` → `lw $v0, -0x21C0($v0)` |
| `func_L01_0056C6C0` | `src/overlays/shared/L01_0056C6C0.c` | - | no PAL function has the US code (changed for PAL) |
| `func_L02_004C4F50` | `src/overlays/shared/L02_004C4F50.c` | `func_L02_004C6B18` | `addiu $v0, $zero, 0x1E` → `addiu $v0, $zero, 0x19` |
| `func_L04_0049A500` | `src/overlays/shared/L04_0049A500.c` | `func_L04_0049BDD0` | `addiu $v0, $zero, 0x17` → `addiu $v0, $zero, 0x13` |
| `func_L06_004C8430` | `src/overlays/shared/L06_004C8430.c` | `func_L06_004C9C68` | `addiu $v0, $v0, 0x258` → `addiu $v0, $v0, 0x1F4` |
| `func_L08_004CFFC0` | `src/overlays/shared/L08_004CFFC0.c` | `func_L08_004D1BD8` | `addiu $v0, $zero, 0x1E` → `addiu $v0, $zero, 0x19` |
| `func_L41_003BBFE8` | `src/overlays/shared/L41_003BBFE8.c` | `func_L41_003BC668` | `addiu $v1, $zero, 0x12C` → `addiu $v1, $zero, 0xFA` |
| `func_L41_003DF608` | `src/overlays/shared/L41_003DF608.c` | `func_L41_003DFDA0` | `lw $v0, 0x2794($v0)` → `lw $v0, 0x2894($v0)`; `addiu $a3, $zero, 0x3E` → `addiu $a3, $zero, 0x34` (+2 more) |

## Names, and new C against PAL

PAL catalogue names: `func_XXXXXXXX` for the main image (its PAL address: `core.text`,
`net.text`, the menu `.text`), `func_FB_XXXXXXXX` for frontbin's own functions, and
`func_LNN_XXXXXXXX` for level code: its PAL address in the lowest-numbered level that has it
(`NN` is a distinct program's number; a shared function takes the first that has it). The US
names in `src/` look the same but are US addresses; `config/pal_map.tsv` says which PAL
function each one is. New C written against PAL goes in **`src/pal/`** under its PAL name, so
the two are never confused: `tools/pal_map.py` checks it against that PAL function directly, and
`tools/audit_matches.py` leaves it out of the US audit.

For a worker:

    python3 tools/pal_asm.py main level_01 ...                         # asm/pal/... once, from the dumps
    python3 tools/check_pal.py --todo level_05 --max 200                # what is left, smallest first, with each .s
    python3 tools/check_pal.py --where func_L05_004F2A10                # its place and its .s
    python3 tools/check_pal.py func_L05_004F2A10 try.c [--diff]         # func_L05_004F2A10: MATCH, or BYTES n/size, SIZE ...

`check_pal.py` compiles like `tools/try_func.py` (`tools/cc.sh`, the file's own
`/* cflags: ... */`, through the container unless wine is on `PATH`) and compares with the PAL
bytes at the function's place, with the same masking as the map. `--todo` takes `core.text`,
`net.text`, `.text` (the menus), `frontbin`, `shared` or `level_NN`.

## Report

`tools/progress.py` writes `progress/report.json` (objdiff's report v2) for the version
`SCES_532.85`, from the committed tables alone: one unit per source file of `src/` that matches
main-image code, the main-image functions with no matching C in units of 64 KB of their section
(`main/core.text/0011xxxx`), one "Shared level code" unit (category `common`) and one unit per
distinct level program with its own functions ("Level 01: Dreadzone Station (and 21)", categories
`levels` and `level_01`). Categories `core` (the whole main program), `core_text`, `libgcc`,
`libm`, `net_text`, `menu_text`, `frontbin`, `level_code`, `common`, `levels`, `level_NN`. Exact
and fuzzy are computed apart. `.github/workflows/progress.yml` runs `tools/progress.py --check`,
validates the report with objdiff-cli and uploads it as `SCES_532.85_report` for ByteMatch.

After matching new functions:

    JOBS=16 bash tools/docker/run.sh bash tools/build.sh   # and build_libgcc.sh, build_libm.sh
    python3 tools/pal_map.py --write                       # needs the dumps (tools/levels.py dump)
    python3 tools/inventory.py --write && python3 tools/level_catalogue.py && python3 tools/pal_map.py --write   # when a match moved a cut
    python3 tools/progress.py --write
