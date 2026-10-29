/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCCA0;
extern s32 D_001BCAA8;

s64 func_01EDDED0(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCCA0) ((void (*)(s64,s32))D_001BCCA0)(arg3,D_001BCAA8);
    return 28;
}
