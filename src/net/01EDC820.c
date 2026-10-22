#include "common.h"

extern void (*D_001BCB8C[])(s32, s32);
extern s32 D_001BC994[];

/* Calls the registered callback (if any) with the 4th argument and the fixed word, then returns 0x1C. */
s32 func_01EDC820(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*fp)(s32, s32) = D_001BCB8C[0];

    if (fp != 0) {
        fp(arg3, D_001BC994[0]);
    }
    return 0x1C;
}
