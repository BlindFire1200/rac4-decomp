#include "common.h"

void (*D_001BCB44[4])(s32, s32);
s32 D_001BC94C[4];

/* Calls the network callback in D_001BCB44[0] with the fourth argument and
   D_001BC94C[0] when one is registered, then returns 432. */
s32 func_01EDC118(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCB44[0] != 0) {
        D_001BCB44[0](arg3, D_001BC94C[0]);
    }
    return 432;
}
