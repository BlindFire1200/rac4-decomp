#include "common.h"

extern void (*D_001BCB20[])(s32, s32);
extern s32 D_001BC928[];

// Calls the optional net callback in D_001BCB20 with the fourth incoming argument and D_001BC928, then returns 208.
s32 func_01EDCF58(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*callback)(s32, s32) = D_001BCB20[0];
    s32 value = arg3;

    if (callback != 0) {
        callback(value, D_001BC928[0]);
    }

    return 0xD0;
}
