/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCBD0;
extern s32 D_001BC9D8;

s64 func_01EDC4D8(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCBD0) ((void (*)(s64,s32))D_001BCBD0)(arg3,D_001BC9D8);
    return 32;
}
