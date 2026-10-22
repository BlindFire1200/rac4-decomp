#include "common.h"

extern void (*D_001BCA9C[])(s32, s32);
extern s32 D_001BC8A4[];

/* Calls the network callback registered in D_001BCA9C with the last argument and D_001BC8A4, then returns 0x48. */
s32 func_01EDC150(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*cb)(s32, s32) = D_001BCA9C[0];
    if (cb != 0) {
        cb(arg3, D_001BC8A4[0]);
    }
    return 0x48;
}
