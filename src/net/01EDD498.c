#include "common.h"

extern s32 D_1BC9FC_[];
#define D_1BC9FC (D_1BC9FC_[0])
extern void *D_1BCBF4_[];
#define D_1BCBF4 (D_1BCBF4_[0])

/* Calls the registered callback, if any, with the 4th argument and a global value, then returns 0x1C. */
s32 func_01EDD498(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_1BCBF4 != NULL) {
        ((void (*)(s32, s32))D_1BCBF4)(arg3, D_1BC9FC);
    }
    return 0x1C;
}
