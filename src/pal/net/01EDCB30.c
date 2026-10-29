/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCADC;
extern s32 D_001BC8E4;

s64 func_01EDCB30(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCADC) ((void (*)(s64,s32))D_001BCADC)(arg3,D_001BC8E4);
    return 28;
}
