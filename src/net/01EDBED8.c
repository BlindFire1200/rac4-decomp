#include "common.h"

/* Calls the installed network callback (if any) with the 4th argument and a global value, then returns 112. */
extern void (*D_001BCA7C[])(s32, s32);
extern s32 D_001BC884[];

s32 func_01EDBED8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCA7C[0] != 0) {
        D_001BCA7C[0](arg3, D_001BC884[0]);
    }
    return 0x70;
}
