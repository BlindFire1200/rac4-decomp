/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCBD8;
extern s32 D_001BC9E0;

s64 func_01EDC548(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCBD8) ((void (*)(s64,s32))D_001BCBD8)(arg3,D_001BC9E0);
    return 360;
}
