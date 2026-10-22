#include "common.h"

extern s32 D_001BCAF0[];
extern s32 D_001BC8F8[];

/* Invokes the installed network callback with the fourth argument and returns 92. */
s32 func_01EDCCB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*fp)(s32, s32) = (void (*)(s32, s32))D_001BCAF0[0];

    if (fp != NULL) {
        fp(arg3, D_001BC8F8[0]);
    }
    return 92;
}
