#include "common.h"

extern void (*D_001BCAE8[])(s32, s32);
extern s32 D_001BC8F0[];

/* Calls the net callback held in D_001BCAE8 (if set) with the 4th argument and the global D_001BC8F0, then returns 28. */
s32 func_01EDCBD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCAE8[0]) {
        D_001BCAE8[0](arg3, D_001BC8F0[0]);
    }
    return 0x1C;
}
