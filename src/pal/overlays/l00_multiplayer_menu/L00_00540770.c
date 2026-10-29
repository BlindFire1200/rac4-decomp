/* cflags: @ee29 -O2 -G0 */
#include "common.h"

s32 func_L00_00517D08();
s32 func_L00_00540770(s32 arg0) {
    s32 result=func_L00_00517D08();
    *(s32*)(result+40)=arg0;
    return result;
}
