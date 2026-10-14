# Ratchet: Deadlocked (PS2) Decompilation

[![Website](https://img.shields.io/badge/Website-openrac.dev-ff8a00?logo=googlechrome&logoColor=white)](https://openrac.dev)
[![Discord](https://img.shields.io/badge/Discord-Join%20Community-5865F2?logo=discord&logoColor=white)](https://discord.gg/Sfd2B54PDG)
[![Progress report](https://github.com/OpenRAC/rac-deadlocked-decomp/actions/workflows/progress.yml/badge.svg)](https://github.com/OpenRAC/rac-deadlocked-decomp/actions/workflows/progress.yml)
[![Code](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp)
[![Functions](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp)

A work-in-progress **matching decompilation** of *Ratchet: Deadlocked* (*Ratchet: Gladiator* in PAL regions; Insomniac Games, 2005) for the PlayStation 2 (`SCUS_974.65`, NTSC-U v1.00), part of the **[OpenRAC](https://openrac.dev)** initiative.

The objective is to produce C/C++ source code that, when compiled with the original toolchain, generates a byte-identical copy of the retail executable. Matched code is then refactored toward readable, idiomatic C++ with accurate types and naming, using matching builds as continuous regression tests.

> [!NOTE]
> This repository contains **no game assets, retail executables, or disassembly**. To build, you must provide your own legally obtained copy of the game. Please review [`LEGAL.md`](LEGAL.md) before contributing.

---

## Progress

Decompilation progress is tracked live on **[openrac.dev](https://openrac.dev)** and **[decomp.dev/OpenRAC/rac-deadlocked-decomp](https://decomp.dev/OpenRAC/rac-deadlocked-decomp)**.

| Version | Region | Target ID | Code Matched | Functions Matched |
|---|---|---|---|---|
| v1.00 | NTSC-U | `SCUS_974.65` | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp) |

Only NTSC-U is targeted; PAL (*Ratchet: Gladiator*) may follow as a second version if someone with a PAL disc joins. There is no linked image yet: a function counts as matched when its compiled code equals retail with only the fields it relocates masked (`tools/audit_matches.py`), so a function that calls or reads the wrong symbol can still count.

| Category | Progress | Contents |
|---|---|---|
| Game | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=game&label=Game&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=game) | All game code |
| Core | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=core&label=Core&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=core) | Engine and SDK code that stays resident (`core.text`) |
| Network | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=net&label=Network&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=net) | Network code (`net.text`) |
| Resident level code | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level&label=Resident%20level%20code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level) | The level text kept in the executable (`.text`); the menus' code |
| libgcc | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=libgcc&label=libgcc&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=libgcc) | GCC runtime library rebuilt from GCC's own source (`src/libgcc/`) |
| libm | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=libm&label=libm&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=libm) | Math library rebuilt from newlib's source (`src/libm/`) |
| Level overlays | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=overlays&label=Level%20overlays&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=overlays) | All level overlay code (`docs/OVERLAYS.md`) |
| Common | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=common&label=Common&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=common) | Overlay code shared by two or more levels |
| Level-specific | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=levels&label=Level-specific&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=levels) | Overlay code found in one level only (the multiplayer menu) |

### Level overlays

Each level carries its own build of the level code, loaded over the resident
image when the level starts ([`docs/OVERLAYS.md`](docs/OVERLAYS.md)). There are
47 overlays (24 campaign and 23 multiplayer levels) that share 85 to 97 percent of
their code at different addresses. Their functions are split and counted once
each: code shared by two or more levels under *Common* (4,714 functions),
code found in one level only under *Level-specific* (2,315 functions, all of
them the multiplayer menu's), and in the row of every level that contains it.
As in rac1-decomp, their sources live in `src/overlays/shared/` and
`src/overlays/lNN_<level>/`.
Functions identical to one in the resident level text are counted there, not
twice. The overlays come from your own disc: unpack it with the
[wrench](https://github.com/chaoticgd/wrench) build tool and run
`tools/split_overlays.py` (see `docs/OVERLAYS.md`).

<details>
<summary>Per level</summary>

Each row counts the overlay code of that level, including the common code it
contains (code identical to the resident level text is counted under *Resident
level code* instead).

| Level | Name | Kind | Code | Functions |
|---|---|---|---|---|
| 00 | Multiplayer Menu | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_00&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_00) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_00&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_00) |
| 01 | Dreadzone Station | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_01&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_01) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_01&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_01) |
| 02 | Catacrom Graveyard | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_02&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_02) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_02&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_02) |
| 04 | Sarathos Swamp | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_04&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_04) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_04&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_04) |
| 05 | Dark Cathedral | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_05&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_05) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_05&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_05) |
| 06 | Temple Of Shaar | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_06&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_06) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_06&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_06) |
| 07 | Valix Lighthouse | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_07&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_07) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_07&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_07) |
| 08 | Mining Facility | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_08&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_08) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_08&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_08) |
| 10 | Torval Ruins | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_10&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_10) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_10&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_10) |
| 11 | Tempus Station | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_11&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_11) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_11&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_11) |
| 13 | Maraxus Prison | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_13&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_13) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_13&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_13) |
| 14 | Ghost Station | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_14&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_14) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_14&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_14) |
| 15 | Control Level | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_15&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_15) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_15&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_15) |
| 21 | Dreadzone Station Splitscreen | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_21&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_21) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_21&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_21) |
| 22 | Catacrom Graveyard Splitscreen | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_22&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_22) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_22&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_22) |
| 24 | Sarathos Swamp Splitscreen | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_24&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_24) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_24&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_24) |
| 25 | Dark Cathedral Splitscreen | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_25&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_25) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_25&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_25) |
| 26 | Temple Of Shaar Splitscreen | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_26&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_26) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_26&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_26) |
| 27 | Valix Lighthouse Splitscreen | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_27&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_27) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_27&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_27) |
| 28 | Mining Facility Splitscreen | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_28&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_28) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_28&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_28) |
| 30 | Torval Ruins Splitscreen | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_30&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_30) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_30&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_30) |
| 31 | Tempus Station Splitscreen | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_31&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_31) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_31&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_31) |
| 33 | Maraxus Prison Splitscreen | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_33&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_33) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_33&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_33) |
| 34 | Ghost Station Splitscreen | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_34&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_34) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_34&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_34) |
| 35 | Control Level Splitscreen | campaign | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_35&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_35) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_35&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_35) |
| 41 | Battledome Tower | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_41&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_41) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_41&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_41) |
| 42 | Catacrom Graveyard | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_42&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_42) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_42&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_42) |
| 44 | Sarathos Swamp | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_44&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_44) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_44&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_44) |
| 45 | Dark Cathedral | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_45&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_45) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_45&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_45) |
| 46 | Temple Of Shaar | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_46&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_46) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_46&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_46) |
| 47 | Valix Lighthouse | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_47&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_47) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_47&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_47) |
| 48 | Mining Facility | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_48&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_48) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_48&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_48) |
| 50 | Torval Ruins | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_50&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_50) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_50&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_50) |
| 51 | Tempus Station | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_51&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_51) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_51&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_51) |
| 53 | Maraxus Prison | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_53&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_53) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_53&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_53) |
| 54 | Ghost Station | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_54&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_54) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_54&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_54) |
| 61 | Battledome Tower Splitscreen | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_61&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_61) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_61&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_61) |
| 62 | Catacrom Graveyard Splitscreen | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_62&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_62) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_62&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_62) |
| 64 | Sarathos Swamp Splitscreen | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_64&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_64) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_64&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_64) |
| 65 | Dark Cathedral Splitscreen | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_65&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_65) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_65&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_65) |
| 66 | Temple Of Shaar Splitscreen | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_66&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_66) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_66&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_66) |
| 67 | Valix Lighthouse Splitscreen | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_67&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_67) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_67&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_67) |
| 68 | Mining Facility Splitscreen | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_68&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_68) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_68&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_68) |
| 70 | Torval Ruins Splitscreen | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_70&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_70) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_70&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_70) |
| 71 | Tempus Station Splitscreen | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_71&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_71) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_71&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_71) |
| 73 | Maraxus Prison Splitscreen | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_73&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_73) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_73&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_73) |
| 74 | Ghost Station Splitscreen | multiplayer | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_74&label=Code&measure=matched_code_percent)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_74) | [![](https://decomp.dev/OpenRAC/rac-deadlocked-decomp.svg?mode=shield&category=level_74&label=Functions&measure=matched_functions)](https://decomp.dev/OpenRAC/rac-deadlocked-decomp/SCUS_974.65?category=level_74) |

</details>

---

## Quick Start

### Prerequisites
- **Linux & macOS**: [Docker](https://www.docker.com/) or [Podman](https://podman.io/) (uses the prebuilt Wine container via GitHub Container Registry), and Python 3.10+.
- **Windows**: Git Bash, Python 3.10+, and community toolchain mirrors.

### Setup & Build

1. **Clone the repository:**
   ```bash
   git clone https://github.com/OpenRAC/rac-deadlocked-decomp.git
   cd rac-deadlocked-decomp
   ```

2. **Provide your original executable:**
   Copy `SCUS_974.65` from your disc image into `baserom/`:
   ```bash
   # Expected SHA-1: aa91b1c3b9b1a244320c47580b77342ef9856e95
   cp /path/to/SCUS_974.65 baserom/SCUS_974.65
   ```

3. **Generate the disassembly and fetch toolchains:**
   ```bash
   bash tools/setup_asm.sh                 # unpack, split, splat -> asm/
   git clone https://github.com/AngheloAlf/SN-Systems-ProDG_for_PS2_3.01 toolchain/sn-prodg-3.01
   git clone https://github.com/AngheloAlf/sce_ps2_sdk_24 toolchain/sn-prodg-24
   ```

4. **Build and verify:**
   ```bash
   # Windows (native):
   bash tools/build.sh

   # Linux & macOS (via container):
   bash tools/docker/run.sh bash tools/build.sh

   # Then compare every function with retail and write the progress report:
   venv/bin/python tools/audit_matches.py
   python3 tools/gen_progress_report.py
   ```

For detailed documentation:
- [`docs/WORKFLOW.md`](docs/WORKFLOW.md) – Setup in full, and the step-by-step function matching guide
- [`docs/TOOLCHAIN.md`](docs/TOOLCHAIN.md) – Compiler, flags, assembler passes, libraries and the container
- [`docs/RESEARCH.md`](docs/RESEARCH.md) – How the retail executable is packed and taken apart
- [`docs/OVERLAYS.md`](docs/OVERLAYS.md) – The 47 level overlays and how they are split and counted

---

## Contributing

Contributions are warmly welcome! Whether you are interested in decompiling functions, researching engine quirks, or improving documentation:

- See [`CONTRIBUTING.md`](CONTRIBUTING.md) for contribution guidelines and rules.
- See [`docs/WORKFLOW.md`](docs/WORKFLOW.md) for the step-by-step function matching guide.
- Join our **[Discord Community](https://discord.gg/Sfd2B54PDG)** to discuss progress, ask questions, and collaborate!

---

## Credits

This project builds upon years of dedicated reverse-engineering research and tooling by the community:

- **GFI (Game Fuckery Inc.)** – Special thanks to the GFI Discord community for years of reverse engineering, game research, and technical insights that made this decompilation possible.
- **[rac1-decomp](https://github.com/OpenRAC/rac1-decomp)** – Repository layout, README, progress workflow and report generator, toolchain notes, the libgcc build recipe, and `tools/ps2eeas_nops.py` / `tools/ps2eeas_dli.py` (the nops and constant sequences of SN's assembler).
- **[rac3-uya-decomp](https://github.com/OpenRAC/rac3-uya-decomp)** by vetusmagnus – *Up Your Arsenal*, the closest engine relative. Compiler research (SN ee-gcc 2.95.3 v1.36) and the `-fopt-stack`, `-G8` and global-declaration findings.
- **[OpenRAC](https://github.com/OpenRAC/OpenRAC)** – Status of Deadlocked, sourcing policy, and the sibling decompilations of the engine family.
- **[Lombyte](https://github.com/mateuszklysz/Lombyte)** by mateuszklysz – R&C1 NTSC decomp, checked for Deadlocked coverage (none).
- **[Wrench](https://github.com/chaoticgd/wrench)** by chaoticgd – PS2 Ratchet & Clank modding tools; its documentation of the packed image (`docs/file_loading.md`, "WAD Compression") and the executable's layout, and the level overlays it unpacks.
- **[GCC](https://gcc.gnu.org)** and **[newlib](https://sourceware.org/newlib/)** – The library sources in `src/libgcc/` and `src/libm/` (see [`THIRD_PARTY_NOTICES.md`](THIRD_PARTY_NOTICES.md)).
- **Decompilation Tooling & Ecosystem**:
  - [splat](https://github.com/ethteck/splat) & [spimdisasm](https://github.com/Decompollaborate/spimdisasm) – Binary splitting and MIPS disassembly.
  - [m2c](https://github.com/matt-kempster/m2c) & [asm-differ](https://github.com/simonlindholm/asm-differ) – Assembly-to-C translation and diffing.
  - [objdiff](https://github.com/encounter/objdiff) – Object diffing tool.
  - [decomp.dev](https://decomp.dev) & [decomp.wiki](https://decomp.wiki) – Progress tracking and decompilation knowledge base.
  - [AngheloAlf](https://github.com/AngheloAlf) – PS2 toolchain mirrors.

---

## License

- Code written for this project is licensed under the [GNU General Public License v3.0](LICENSE).
- Reconstructed libraries and third-party components retain their original licenses (see [`THIRD_PARTY_NOTICES.md`](THIRD_PARTY_NOTICES.md) and [`LEGAL.md`](LEGAL.md)).
- *Ratchet: Deadlocked* is a registered trademark of Sony Interactive Entertainment. This project is not affiliated with or endorsed by Sony or Insomniac Games.
