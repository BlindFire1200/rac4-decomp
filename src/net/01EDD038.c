#include "common.h"

extern s32 D_001BCB2C[];
extern s32 D_001BC934[];

// Calls the optional global callback with the 4th argument and a global value, then returns 472.
s32 func_01EDD038(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 (*f)(s32, s32) = (s32 (*)(s32, s32))D_001BCB2C[0];
    if (f != 0) {
        f(a3, D_001BC934[0]);
    }
    return 472;
}
