#include "common.h"

extern s32 D_001BCAC8[];
extern s32 D_001BC8D0[];

// Calls the optional global callback with the 4th argument and a global value, then returns 32.
s32 func_01EDC428(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v1 = D_001BCAC8[0];

    if (temp_v1 != 0) {
        ((void (*)(s32, s32))temp_v1)(arg3, D_001BC8D0[0]);
    }
    return 0x20;
}
