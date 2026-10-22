#include "common.h"

extern void (*D_001BCAC4[])(s32, s32);
extern s32 D_001BC8CC[];

/* Calls the optional global callback with the fourth incoming argument and the value of D_001BC8CC, then returns 0x40C. */
s32 func_01EDC3E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCAC4[0] != 0) {
        D_001BCAC4[0](arg3, D_001BC8CC[0]);
    }
    return 0x40C;
}
