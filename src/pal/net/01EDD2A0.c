/* cflags: -G0 */
#include "common.h"

extern s32 D_001BCC50;
extern s32 D_001BCA58;

s64 func_01EDD2A0(s64 arg0,s64 arg1,s64 arg2,s64 arg3) {
    if (D_001BCC50) ((void (*)(s64,s32))D_001BCC50)(arg3,D_001BCA58);
    return 508;
}
