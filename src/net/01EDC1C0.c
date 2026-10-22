#include "common.h"

extern s32 D_001BCAA4[];
extern s32 D_001BC8AC[];

/* Calls the registered net callback (if any) with the fourth argument and a global value, then returns 28. */
s32 func_01EDC1C0(s32 a, s32 b, s32 c, s64 d) {
    if (D_001BCAA4[0] != 0) {
        ((void (*)(s64, s32))D_001BCAA4[0])(d, D_001BC8AC[0]);
    }
    return 28;
}
