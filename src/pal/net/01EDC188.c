/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCB20;
extern s32 D_001BC928;

s64 func_01EDC188(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCB20) ((void (*)(s64,s32))D_001BCB20)(arg3,D_001BC928);
    return 28;
}
