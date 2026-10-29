/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCB0C;
extern s32 D_001BC914;

s64 func_01EDC028(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCB0C) ((void (*)(s64,s32))D_001BCB0C)(arg3,D_001BC914);
    return 100;
}
