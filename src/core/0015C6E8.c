#include "common.h"

extern s32 D_00172160[];

// Build a token from a running counter and the field at +0x10.
s32 func_0015C6E8(s32 arg0) {
    s32 temp_a2 = D_00172160[1];
    s32 hi = (D_00172160[4] << 0x1C) | (arg0 << 0x18);
    D_00172160[1] = temp_a2 + 1;
    return hi | temp_a2;
}
