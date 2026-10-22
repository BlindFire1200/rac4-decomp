#include "common.h"

extern void (*D_001BCAA8[])(s32, s32);
extern s32 D_001BC8B0[];

// Calls the installed network callback (if any) with the 4th argument and a stored word, then returns 64.
s32 func_01EDC230(s32 a0, s32 a1, s32 a2, s32 a3) {
    if (D_001BCAA8[0] != 0) {
        D_001BCAA8[0](a3, D_001BC8B0[0]);
    }
    return 64;
}
