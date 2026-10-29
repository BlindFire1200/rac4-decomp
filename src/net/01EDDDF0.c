#include "common.h"

extern s32 D_1BC950_[];
#define D_1BC950 (D_1BC950_[0])
extern void *D_1BCB48_[];
#define D_1BCB48 (D_1BCB48_[0])

/* Calls the registered callback, if any, with the 4th argument and a global value, then returns 0x1C. */
s32 func_01EDDDF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_1BCB48 != NULL) {
        ((void (*)(s32, s32))D_1BCB48)(arg3, D_1BC950);
    }
    return 0x1C;
}
