#include "common.h"

extern s32 D_001BCBB4[];
extern s32 D_001BC9BC[];

/* Calls the callback pointer stored in D_001BCBB4 (if set) with the 4th argument and D_001BC9BC, then returns 0x44. */
s32 func_01EDCC10(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*cb)(s32, s32) = (void (*)(s32, s32))D_001BCBB4[0];

    if (cb != 0) {
        cb(arg3, D_001BC9BC[0]);
    }
    return 0x44;
}
