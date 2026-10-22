#include "common.h"

extern s32 D_001BCB1C[];
extern s32 D_001BC924[];

/* Calls the optional network callback with the 4th argument and a global value, then returns 0x20. */
s32 func_01EDCF20(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCB1C[0] != 0) {
        ((void (*)(s32, s32))D_001BCB1C[0])(arg3, D_001BC924[0]);
    }
    return 0x20;
}
