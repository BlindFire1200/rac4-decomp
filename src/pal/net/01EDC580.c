/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCBDC;
extern s32 D_001BC9E4;

s64 func_01EDC580(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCBDC) ((void (*)(s64,s32))D_001BCBDC)(arg3,D_001BC9E4);
    return 328;
}
