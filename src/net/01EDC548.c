#include "common.h"

extern s32 D_1BC960_[];
#define D_1BC960 (D_1BC960_[0])
extern s32 D_1BCB58_[];
#define D_1BCB58 (D_1BCB58_[0])

/* Calls the optional net callback with the 4th argument and a global, then returns 0x168 (360). */
s32 func_01EDC548(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_1BCB58 != 0) {
        ((void (*)(s32, s32))D_1BCB58)(arg3, D_1BC960);
    }
    return 0x168;
}
