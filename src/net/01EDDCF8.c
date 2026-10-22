#include "common.h"

extern void (*D_001BCB3C[4])(s32, s32);
extern s32 D_001BC944[4];

/* Calls the network callback in D_001BCB3C[0] with the fourth argument and
   D_001BC944[0] when one is registered, then returns 0x48. */
s32 func_01EDDCF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCB3C[0] != 0) {
        D_001BCB3C[0](arg3, D_001BC944[0]);
    }
    return 0x48;
}
