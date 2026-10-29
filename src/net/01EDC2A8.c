#include "common.h"

extern void (*D_1BCAB4[])(s32, s32);
extern s32 D_1BC8BC[];

/* Calls the optional hook in D_1BCAB4 with the fourth argument and D_1BC8BC, then returns 28. */
s32 func_01EDC2A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*hook)(s32, s32) = D_1BCAB4[0];

    if (hook != 0) {
        hook(arg3, D_1BC8BC[0]);
    }

    return 28;
}
