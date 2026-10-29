/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCBFC;
extern s32 D_001BCA04;

s64 func_01EDC740(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCBFC) ((void (*)(s64,s32))D_001BCBFC)(arg3,D_001BCA04);
    return 28;
}
