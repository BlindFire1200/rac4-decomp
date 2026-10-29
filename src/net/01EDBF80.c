#include "common.h"

extern s32 D_1BC870[];
extern s32 D_1BCA68[];

/* Calls the callback in D_1BCA68 (if set) with the fourth argument and D_1BC870[0], then returns 328. */
s32 func_01EDBF80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*fp)(s32, s32) = (void (*)(s32, s32))D_1BCA68[0];

    if (fp != 0) {
        fp(arg3, D_1BC870[0]);
    }
    return 328;
}
