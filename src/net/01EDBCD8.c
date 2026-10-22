#include "common.h"

extern void (*D_001BCA58[])(s32, s32);
extern s32 D_001BC860[];

/* Calls the optional net callback at 0x1BCA58 with the 4th argument and the global at 0x1BC860, then returns 0x1CC. */
s32 func_01EDBCD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCA58[0] != 0) {
        D_001BCA58[0](arg3, D_001BC860[0]);
    }
    return 0x1CC;
}
