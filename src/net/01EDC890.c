#include "common.h"

/* Calls the optional net hook with the 4th argument and a status value, then returns 28 */
extern s32 (*D_001BCB94[])(s32, s32);
extern s32 D_001BC99C[];

s32 func_01EDC890(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCB94[0] != 0) {
        D_001BCB94[0](arg3, D_001BC99C[0]);
    }
    return 28;
}
