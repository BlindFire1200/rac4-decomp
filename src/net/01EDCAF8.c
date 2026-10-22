#include "common.h"

extern void (*D_001BCAE0[])(s32, s32);
extern s32 D_001BC8E8[];

// Calls the optional callback stored in D_001BCAE0[0] with the caller's fourth argument and D_001BC8E8[0], then returns 28.
s32 func_01EDCAF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*cb)(s32, s32) = D_001BCAE0[0];
    if (cb != 0) {
        cb(arg3, D_001BC8E8[0]);
    }
    return 28;
}
