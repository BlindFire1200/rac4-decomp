#include "common.h"

extern void (*D_001BCBA8[])(s32, s32);
extern s32 D_001BC9B0[];

/* Calls the global callback pointer with arg3 and a global value when it is set, then returns 0x170. */
s32 func_01EDC900(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*temp_v1)(s32, s32) = D_001BCBA8[0];
    s32 a = arg3;
    if (temp_v1 != 0) {
        temp_v1(a, D_001BC9B0[0]);
    }
    return 0x170;
}
