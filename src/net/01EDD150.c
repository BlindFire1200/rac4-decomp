#include "common.h"

extern s32 D_001BCBC4[];
extern s32 D_001BC9CC[];

/* Calls the optional net callback (if installed) with the 4th argument and a global, then returns 200. */
s32 func_01EDD150(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 fp = D_001BCBC4[0];

    if (fp != 0) {
        ((void (*)(s32, s32))fp)(a3, D_001BC9CC[0]);
    }
    return 200;
}
