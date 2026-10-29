/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCCA4;
extern s32 D_001BCAAC;

s64 func_01EDDF08(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCCA4) ((void (*)(s64,s32))D_001BCCA4)(arg3,D_001BCAAC);
    return 28;
}
