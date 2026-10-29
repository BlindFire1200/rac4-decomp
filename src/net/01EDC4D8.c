#include "common.h"

extern void (*D_1BCB50[])(s32, s32);
extern s32 D_1BC958[];

/* Calls the optional hook in D_1BCB50 with the fourth argument and D_1BC958, then returns 32. */
s32 func_01EDC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*hook)(s32, s32) = D_1BCB50[0];

    if (hook != 0) {
        hook(arg3, D_1BC958[0]);
    }

    return 32;
}
