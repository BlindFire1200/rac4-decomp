#include "common.h"

extern void (*D_001BCBF0[])(s32, s32);
extern s32 D_001BC9F8[];

/* Calls the global net callback with the 4th argument and a global parameter when the callback is set; returns 512. */
s32 func_01EDD460(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*cb)(s32, s32) = D_001BCBF0[0];
    if (cb != 0) {
        cb(arg3, D_001BC9F8[0]);
    }
    return 0x200;
}
