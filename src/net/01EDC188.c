#include "common.h"

extern s32 D_1BC8A8[];
extern s32 D_1BCAA0[];

/* Calls the optional callback in D_1BCAA0 with the 4th argument and D_1BC8A8, then returns 0x1C. */
s32 func_01EDC188(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*cb)(s32, s32) = (void (*)(s32, s32))D_1BCAA0[0];
    if (cb != 0) {
        cb(arg3, D_1BC8A8[0]);
    }
    return 0x1C;
}
