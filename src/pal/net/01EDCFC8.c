/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCBA4;
extern s32 D_001BC9AC;

s64 func_01EDCFC8(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCBA4) ((void (*)(s64,s32))D_001BCBA4)(arg3,D_001BC9AC);
    return 420;
}
