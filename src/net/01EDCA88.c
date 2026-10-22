#include "common.h"

typedef void (*handler_t)(s32, s32);

extern handler_t D_001BCAD4[];
extern s32 D_001BC8DC[];

/* Calls the optional handler at D_001BCAD4 with the fourth argument and D_001BC8DC, then returns 77. */
s32 func_01EDCA88(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    handler_t handler = D_001BCAD4[0];
    if (handler != 0) {
        handler(arg3, D_001BC8DC[0]);
    }
    return 77;
}
