#include "common.h"

extern s32 (*D_001BCBD4[])(s32, s32);
extern s32 D_001BC9DC[];

/* Calls the registered net callback (if installed) with the 4th argument and the session pointer, then returns 508 */
s32 func_01EDD2D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCBD4[0] != 0) {
        D_001BCBD4[0](arg3, D_001BC9DC[0]);
    }
    return 508;
}
