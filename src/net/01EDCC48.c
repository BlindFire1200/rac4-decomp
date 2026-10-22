#include "common.h"

/* func_01EDCC48: calls the registered net callback (if any) with the 4th argument and a global value, then returns 32. */

extern s32 D_001BCAEC[];
extern s32 D_001BC8F4[];

s32 func_01EDCC48(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 (*cb)(s32, s32) = (s32 (*)(s32, s32))D_001BCAEC[0];
    if (cb != 0) {
        cb(arg3, D_001BC8F4[0]);
    }
    return 0x20;
}
