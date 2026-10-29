/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCC60;
extern s32 D_001BCA68;

s64 func_01EDD380(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCC60) ((void (*)(s64,s32))D_001BCC60)(arg3,D_001BCA68);
    return 200;
}
