#include "common.h"

extern void (*D_001BCBDC[])(s32, s32);
extern s32 D_001BC9E4[];

/* Calls the stored network callback (if present) with the 4th argument and a global value, then returns 0xC8 (200). */
s32 func_01EDD348(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*fp)(s32, s32) = D_001BCBDC[0];

    if (fp != 0) {
        fp(arg3, D_001BC9E4[0]);
    }
    return 0xC8;
}
