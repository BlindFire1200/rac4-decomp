/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCAD4;
extern s32 D_001BC8DC;

s64 func_01EDBD80(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCAD4) ((void (*)(s64,s32))D_001BCAD4)(arg3,D_001BC8DC);
    return 28;
}
