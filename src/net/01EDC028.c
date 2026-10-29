#include "common.h"

extern s32 D_1BC894[];
extern s32 D_1BCA8C[];

/* Calls the optional callback in D_1BCA8C with the 4th argument and D_1BC894, then returns 0x64. */
s32 func_01EDC028(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*cb)(s32, s32) = (void (*)(s32, s32))D_1BCA8C[0];
    if (cb != 0) {
        cb(arg3, D_1BC894[0]);
    }
    return 0x64;
}
