#include "common.h"

extern s32 D_001BCA88[];
extern s32 D_001BC890[];

/* Calls the optional network callback with the function's 4th argument and the stored global parameter, then returns 0x1A0. */
s32 func_01EDBFF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*cb)(s32, s32) = (void (*)(s32, s32))D_001BCA88[0];
    if (cb != 0) {
        cb(arg3, D_001BC890[0]);
    }
    return 0x1A0;
}
