/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCBB0;
extern s32 D_001BC9B8;

s64 func_01EDD118(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCBB0) ((void (*)(s64,s32))D_001BCBB0)(arg3,D_001BC9B8);
    return 36;
}
