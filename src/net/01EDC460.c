#include "common.h"

extern s32 D_001BCACC[];
extern s32 D_001BC8D4[];

// Calls the optional handler stored at D_001BCACC with the 4th argument and the
// global at D_001BC8D4, then returns 28 (0x1C).
s32 func_01EDC460(s32 a0, s32 a1, s32 a2, s32 a3) {
    if (D_001BCACC[0] != 0) {
        ((void (*)(s32, s32))D_001BCACC[0])(a3, D_001BC8D4[0]);
    }
    return 28;
}
