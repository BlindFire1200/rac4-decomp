/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 D_001A0178[];
extern f32 func_0014A0A0(void *, s32, s32);

/* Looks up a value and stores it in one of two floats depending on a flag bit. */
void func_00148790(s32 arg0, f32 *arg1, f32 *arg2, f32 arg3) {
    s32 m = arg0 & 8;
    f32 v = func_0014A0A0(D_001A0178, 8, arg0 - m);

    *arg2 = v;
    if (m == 0) {
        *arg1 = arg3;
    } else {
        *arg1 = v;
    }
}
