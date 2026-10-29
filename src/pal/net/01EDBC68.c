/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCAC4;
extern s32 D_001BC8CC;

s64 func_01EDBC68(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCAC4) ((void (*)(s64,s32))D_001BCAC4)(arg3,D_001BC8CC);
    return 28;
}
