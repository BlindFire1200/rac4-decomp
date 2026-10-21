#include "common.h"

extern s32 D_0022CA80[];

// Compare a field to 0x13 after table lookup
s32 func_L00_005A0158(s32 arg0) {
    s32 *base;
    s32 *entry;
    s32 value;

    base = (s32 *)((u32)D_0022CA80 + (arg0 * 0x470));
    entry = (s32 *)base[0x50 / 4];
    value = *(s16 *)((u32)entry + 0x86);
    return (value == 0x13);
}
