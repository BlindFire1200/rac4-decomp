#include "common.h"

typedef void (*Type1)(s32, s32);
extern Type1 D_001BCBA0[];
extern s32 D_001BC9A8[];

/* Calls the optional callback stored in D_001BCBA0 with arg3 and the D_001BC9A8 value, then returns 240. */
s32 func_01EDC9A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Type1 fp = D_001BCBA0[0];

    if (fp != 0) {
        fp(arg3, D_001BC9A8[0]);
    }
    return 0xF0;
}
