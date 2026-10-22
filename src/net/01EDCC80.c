#include "common.h"

extern void (*D_001BCB4C[])(s32, s32);
extern s32 D_001BC954[];

/* Calls the optional net callback with the fourth incoming argument and a global id, then returns 44. */
s32 func_01EDCC80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*callback)(s32, s32) = D_001BCB4C[0];
    s32 handle = arg3;

    if (callback != 0) {
        callback(handle, D_001BC954[0]);
    }
    return 44;
}
