#include "common.h"

extern s32 D_001BCB74[];
extern s32 D_001BC97C[];

/* Calls the optional callback stored in D_001BCB74 with the fourth argument and D_001BC97C, then returns 0x114. */
s32 func_01EDC6D0(s32 p0, s32 p1, s32 p2, s32 p3) {
    void (*callback)(s32, s32);

    callback = (void (*)(s32, s32))D_001BCB74[0];
    if (callback != 0) {
        callback(p3, D_001BC97C[0]);
    }
    return 0x114;
}
