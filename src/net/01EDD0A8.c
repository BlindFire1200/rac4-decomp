#include "common.h"

/* Invokes the registered network callback (if any) with the fourth argument and a global value, then returns 28. */
extern s32 D_1BC93C[];
extern s32 D_1BCB34[];

s32 func_01EDD0A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 (*fp)(s32, s32) = *(s32 (**)(s32, s32))&D_1BCB34[0];
    if (fp != 0) {
        fp(arg3, D_1BC93C[0]);
    }
    return 0x1C;
}
