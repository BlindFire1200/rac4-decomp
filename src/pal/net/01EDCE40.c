/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCB8C;
extern s32 D_001BC994;

s64 func_01EDCE40(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCB8C) ((void (*)(s64,s32))D_001BCB8C)(arg3,D_001BC994);
    return 28;
}
