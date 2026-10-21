# Levers

What tends to make a function match. These came out of the work so far; add
yours here. The compiler and its flags are in [`TOOLCHAIN.md`](TOOLCHAIN.md).

- **Globals read with `lui`/`lw`** (not through `$gp`): declare them without a
  size so the compiler keeps them out of small data:
  ```c
  extern s32 D_00221ED8_[];
  #define D_00221ED8 (D_00221ED8_[0])
  ```
  and add `/* cflags: -mno-split-addresses */` if the destination register is the
  `lui` temporary in retail.
- **`-G8`**: variables of up to 8 bytes are plain `extern` declarations when
  retail reaches them with `lui` (the destination register as temporary)
  and through `$gp` only in delay slots; reached through `$gp` elsewhere,
  they are defined above the function in the same file (`s32 D_x = 0;`).
  Retail's assembler only took data it had already seen for small
  (`tools/ps2eeas_sdata.py`).
- **`volatile`**: a counter that retail reloads from memory, or a store that
  retail leaves a nop delay slot after, is usually `volatile`.
- **Array indexing**: `p = array + i` and `array[i].field` give different
  register orders; `*(T *)((u32)p + (i << 2))` differs again. Try them all.
- **Return values**: `return x == -1 ? 0 : x;` often matches where a temporary
  holding `~x` does not.
- **Parameter types**: an `s8` compared with `-1` adds sign extensions retail does
  not have; use `s32`.
- **Calls with unknown arguments**: a decompiler may pass a leftover register as
  an argument; if retail does not set it, declare the callee without parameters.
- **Not your fault**: a nop after `mtc1` or a loop padded to a minimum length
  is added by `tools/cc.sh`; if it is missing or extra for one function, the rule
  in `tools/ps2eeas_nops.py` needs refining, not the C.
