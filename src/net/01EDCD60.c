#include "common.h"

extern s32 D_1BC904[];
extern void (*D_1BCAFC[])(s64, s32);

/* Calls the network callback (if set) with the 4th argument and a stored parameter, then returns 0x20. */
s32 func_01EDCD60(s32 arg0, s32 arg1, s32 arg2, s64 arg3) {
    if (D_1BCAFC[0] != 0) {
        D_1BCAFC[0](arg3, D_1BC904[0]);
    }
    return 0x20;
}
