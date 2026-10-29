#include "common.h"

extern s32 D_1BC964_[];
#define D_1BC964 (D_1BC964_[0])
extern s32 D_1BCB5C_[];
#define D_1BCB5C (D_1BCB5C_[0])

/* Calls the optional net callback with the 4th argument and a global, then returns 0x148 (328). */
s32 func_01EDC580(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_1BCB5C != 0) {
        ((void (*)(s32, s32))D_1BCB5C)(arg3, D_1BC964);
    }
    return 0x148;
}
