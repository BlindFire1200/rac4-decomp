#include "common.h"

extern s32 D_1BC86C[];
extern s32 D_1BCA64[];

/* Calls the callback in D_1BCA64 (if set) with the fourth argument and D_1BC86C[0], then returns 332. */
s32 func_01EDBF48(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*fp)(s32, s32) = (void (*)(s32, s32))D_1BCA64[0];

    if (fp != 0) {
        fp(arg3, D_1BC86C[0]);
    }
    return 332;
}
