/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCBB4;
extern s32 D_001BC9BC;

s64 func_01EDD0A8(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCBB4) ((void (*)(s64,s32))D_001BCBB4)(arg3,D_001BC9BC);
    return 28;
}
