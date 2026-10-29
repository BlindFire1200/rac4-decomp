#include "common.h"

extern s32 D_1BC9D8[];
extern void (*D_1BCBD0[])(s32, s32);

/* Calls the optional net callback in D_1BCBD0 with the fourth argument and D_1BC9D8, then returns 508. */
s32 func_01EDD2A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_1BCBD0[0] != 0) {
        D_1BCBD0[0](arg3, D_1BC9D8[0]);
    }
    return 508;
}
