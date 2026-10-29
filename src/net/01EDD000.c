#include "common.h"

extern s32 D_1BC930_[];
#define D_1BC930 (D_1BC930_[0])
extern s32 D_1BCB28_[];
#define D_1BCB28 (D_1BCB28_[0])

/* Calls the optional callback in D_1BCB28 with the 4th argument and a global value, then returns 132. */
s32 func_01EDD000(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*f)(s32, s32) = (void (*)(s32, s32))D_1BCB28;

    if (f != 0) {
        f(arg3, D_1BC930);
    }

    return 0x84;
}
