#include "common.h"

typedef void (*Type1)(s32, s32);

extern Type1 D_001BCAB0[];
extern s32 D_001BC8B8[];

/* Calls the network callback slot D_001BCAB0 (when installed) with the fourth argument and the global D_001BC8B8, then returns 72. */
s32 func_01EDC270(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Type1 cb = D_001BCAB0[0];
    if (cb != 0) {
        cb(arg3, D_001BC8B8[0]);
    }
    return 72;
}
