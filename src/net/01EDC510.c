#include "common.h"

extern s32 (*D_001BCB54[])(s32, s32);
extern s32 D_001BC95C[];

// Calls the optional hook in D_001BCB54 with the third argument and a global, then returns 28.
s32 func_01EDC510(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 (*hook)(s32, s32) = D_001BCB54[0];

    if (hook != 0) {
        hook(arg3, D_001BC95C[0]);
    }

    return 28;
}
