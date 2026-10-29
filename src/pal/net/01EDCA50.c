/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCB58;
extern s32 D_001BC960;

s64 func_01EDCA50(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCB58) ((void (*)(s64,s32))D_001BCB58)(arg3,D_001BC960);
    return 48;
}
