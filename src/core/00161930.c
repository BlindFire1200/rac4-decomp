#include "common.h"

extern s32 D_002130B0[];

static s32 D_0021E080 = 0;

/* Advances a global counter (skipping a reserved value) and returns a table pointer scaled by the old counter */
s32 func_00161930(void) {
    s32 v1 = D_0021E080;
    s32 a1 = v1 + 1;
    s32 ret = v1 * 0x780 + (s32)&D_002130B0[0];
    s32 v0;

    if (a1 >= 0) {
        v0 = ((a1 ^ 0x10) == 0) ? 0 : a1;
    } else {
        v0 = 0x10;
    }
    D_0021E080 = v0;
    return ret;
}
