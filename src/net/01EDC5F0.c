#include "common.h"

extern s32 D_001BCB64[];
extern s32 D_001BC96C[];

/* Calls the optional net callback pointer (if set) with the 4th argument and a global, then returns 28. */
s32 func_01EDC5F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCB64[0] != 0) {
        ((void (*)(s32, s32))D_001BCB64[0])(arg3, D_001BC96C[0]);
    }
    return 0x1C;
}
