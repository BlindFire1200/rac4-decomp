/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 D_1A5180_[];
#define D_1A5180 (D_1A5180_[0])

u32 func_00127298(s32);

// Runs a lookup and reports the value the callback left behind on failure.
u32 func_0011C160(u32 *arg0, s32 arg1) {
    u32 r;

    D_1A5180 = 0;
    r = func_00127298(arg1);
    if (r == 0xFFFFFFFFU) {
        if (D_1A5180 != 0) {
            *arg0 = D_1A5180;
        }
    }
    return r;
}
