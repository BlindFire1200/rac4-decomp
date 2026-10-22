#include "common.h"

extern s32 D_001BCB18[];
extern s32 D_001BC920[];

/* Calls the optional callback in D_001BCB18 with the 4th argument and D_001BC920, then returns 208. */
s32 func_01EDCEE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*temp_v1)(s32, s32) = (void (*)(s32, s32))D_001BCB18[0];
    if (temp_v1 != 0) {
        temp_v1(arg3, D_001BC920[0]);
    }
    return 0xD0;
}
