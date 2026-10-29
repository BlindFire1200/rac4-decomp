/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCBA8;
extern s32 D_001BC9B0;

s64 func_01EDD000(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCBA8) ((void (*)(s64,s32))D_001BCBA8)(arg3,D_001BC9B0);
    return 132;
}
