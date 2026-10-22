#include "common.h"

typedef void (*Type1)(s32, s32);

extern Type1 D_001BCBA4[];
extern s32 D_001BC9AC[];

/* Calls the callback stored in D_001BCBA4 with the fourth argument and the value in D_001BC9AC, then returns 40. */
s32 func_01EDC9E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCBA4[0] != 0) {
        D_001BCBA4[0](arg3, D_001BC9AC[0]);
    }
    return 40;
}
