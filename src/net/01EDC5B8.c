#include "common.h"

extern s32 D_001BCB60[];
extern s32 D_001BC968[];

/* Calls the optional net callback pointer (if set) with the 4th argument and a global, then returns 28. */
s32 func_01EDC5B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCB60[0] != 0) {
        ((void (*)(s32, s32))D_001BCB60[0])(arg3, D_001BC968[0]);
    }
    return 0x1C;
}
