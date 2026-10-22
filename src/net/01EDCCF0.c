#include "common.h"

extern s32 (*D_001BCAF4[])(s32, s32);
extern s32 D_001BC8FC[];

/* Calls the optional network callback with the fourth argument and a global value, then returns 8. */
s32 func_01EDCCF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCAF4[0] != 0) {
        D_001BCAF4[0](arg3, D_001BC8FC[0]);
    }
    return 8;
}
