#include "common.h"

extern s32 D_1BC8E0_[];
#define D_1BC8E0 (D_1BC8E0_[0])
extern void *D_1BCAD8_[];
#define D_1BCAD8 (D_1BCAD8_[0])

/* Calls the registered callback, if any, with the 4th argument and a global value, then returns 0x30. */
s32 func_01EDCA50(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_1BCAD8 != NULL) {
        ((void (*)(s32, s32))D_1BCAD8)(arg3, D_1BC8E0);
    }
    return 0x30;
}
