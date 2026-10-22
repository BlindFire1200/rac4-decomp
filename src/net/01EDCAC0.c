#include "common.h"

typedef void (*Type1)(s32, s32);

extern s32 D_001BCADC[];
extern s32 D_001BC8E4[];

/* Calls the optional callback stored in D_001BCADC with the fourth argument and D_001BC8E4, then returns 40 */
s32 func_01EDCAC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Type1 cb = (Type1)D_001BCADC[0];
    if (cb != 0) {
        cb(arg3, D_001BC8E4[0]);
    }
    return 40;
}
