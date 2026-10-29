#include "common.h"

extern s32 D_1BC864_[];
#define D_1BC864 (D_1BC864_[0])
extern void *D_1BCA5C_[];
#define D_1BCA5C (D_1BCA5C_[0])

/* Calls the registered callback, if any, with the 4th argument and a global value, then returns 0x1C. */
s32 func_01EDCB30(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_1BCA5C != NULL) {
        ((void (*)(s32, s32))D_1BCA5C)(arg3, D_1BC864);
    }
    return 0x1C;
}
