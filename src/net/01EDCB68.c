#include "common.h"

extern s32 D_001BCA3C[];
extern s32 D_001BC844[];

/* Calls the registered net callback (if any) with the 4th argument and a global value, then returns 0x20. */
s32 func_01EDCB68(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 callback = D_001BCA3C[0];
    s32 first = arg3;
    if (callback != 0) {
        ((void (*)(s32, s32))callback)(first, D_001BC844[0]);
    }
    return 0x20;
}
