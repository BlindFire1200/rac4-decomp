/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 D_1A5180_[];
#define D_1A5180 (D_1A5180_[0])

s32 func_00127290(s32, s32, s32);

// Runs a lookup and reports the value the callback left behind on failure.
s32 func_0011C040(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 r;

    D_1A5180 = 0;
    r = func_00127290(arg1, arg2, arg3);
    if (r == -1) {
        if (D_1A5180 != 0) {
            *arg0 = D_1A5180;
        }
    }
    return r;
}
