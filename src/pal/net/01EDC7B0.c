/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCC04;
extern s32 D_001BCA0C;

s64 func_01EDC7B0(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCC04) ((void (*)(s64,s32))D_001BCC04)(arg3,D_001BCA0C);
    return 236;
}
