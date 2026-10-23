/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 D_1A5180_[];

s32 func_00127288(s32);

// Runs a lookup and reports the value the callback left behind on failure.
s32 func_0011BF88(s32 *arg0, s32 arg1) {
    s32 r;

    D_1A5180_[0] = 0;
    r = func_00127288(arg1);
    if (r == -1) {
        if (D_1A5180_[0] != 0) {
            *arg0 = D_1A5180_[0];
        }
    }
    return r;
}
