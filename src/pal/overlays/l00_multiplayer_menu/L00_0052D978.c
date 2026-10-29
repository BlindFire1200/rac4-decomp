/* cflags: @ee29 -O2 -G0 */
#include "common.h"

s32 func_L00_0052D9C0(s32,s32);
s32 func_L00_0052D978(char *a,char *b) {
    return func_L00_0052D9C0(*(s32*)(*(char**)(a+4)+20),
                               *(s32*)(*(char**)(b+4)+20));
}
