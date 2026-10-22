#include "common.h"

extern void (*D_001BCB00[])(s32, s32);
extern s32 D_001BC908[];

/* Calls the optional net callback with the 4th argument and a stored parameter, then returns 0x44. */
s32 func_01EDCD98(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*temp_v1)(s32, s32) = D_001BCB00[0];
    if (temp_v1 != 0) {
        temp_v1(arg3, D_001BC908[0]);
    }
    return 0x44;
}
