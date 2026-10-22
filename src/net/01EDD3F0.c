#include "common.h"

extern s32 D_001BCBE8[];
extern s32 D_001BC9F0[];

/* Calls the callback slot D_001BCBE8[0] with the fourth argument and D_001BC9F0[0] if it is set, then returns 200. */
s32 func_01EDD3F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 (*fp)(s32, s32) = (s32 (*)(s32, s32))D_001BCBE8[0];
    if (fp != 0) {
        fp(arg3, D_001BC9F0[0]);
    }
    return 200;
}
