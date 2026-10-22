#include "common.h"

/* Calls the global network callback with the 4th argument plus a global value, then returns 72 */
extern s32 D_001BCBB8[];
extern s32 D_001BC9C0[];

s32 func_01EDCE78(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCBB8[0] != 0) {
        ((void (*)(s32, s32))D_001BCBB8[0])(arg3, D_001BC9C0[0]);
    }
    return 72;
}
