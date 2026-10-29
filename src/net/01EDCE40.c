#include "common.h"

extern s32 D_1BC914[];
extern void (*D_1BCB0C[])(s64, s32);

/* Calls the optional net callback with the 4th argument and a stored parameter, then returns 0x1C. */
s32 func_01EDCE40(s32 arg0, s32 arg1, s32 arg2, s64 arg3) {
    if (D_1BCB0C[0] != 0) {
        D_1BCB0C[0](arg3, D_1BC914[0]);
    }
    return 0x1C;
}
