#include "common.h"

extern s32 D_1BC9E8[];
extern void (*D_1BCBE0[])(s32, s32);

/* Calls the optional net callback in D_1BCBE0 with the fourth argument and D_1BC9E8, then returns 200. */
s32 func_01EDD380(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_1BCBE0[0] != 0) {
        D_1BCBE0[0](arg3, D_1BC9E8[0]);
    }
    return 200;
}
