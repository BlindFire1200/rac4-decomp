#include "common.h"

// Call arg2(arg0, arg1[1], arg1[0]) when arg2 is set, else return 0.

s32 func_L00_00517100(s32 arg0, s32 *arg1, s32 (*arg2)(s32, s32, s32)) {
    s32 r = 0;

    if (arg2 != 0) {
        r = arg2(arg0, arg1[1], arg1[0]);
    }
    return r;
}
