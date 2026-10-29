/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCB34;
extern s32 D_001BC93C;

s64 func_01EDC2A8(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCB34) ((void (*)(s64,s32))D_001BCB34)(arg3,D_001BC93C);
    return 28;
}
