#include "common.h"

extern void (*D_001BCB38[])(s32, s32);
extern s32 D_001BC940[];

/* Calls the stored network callback (if present) with the 4th argument and a global value, then returns 0x1B0. */
s32 func_01EDD0E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*fp)(s32, s32) = D_001BCB38[0];

    if (fp != 0) {
        fp(arg3, D_001BC940[0]);
    }
    return 0x1B0;
}
