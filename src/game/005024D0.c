/* cflags: -G0 */
#include "common.h"

extern s32 func_00502448();

void func_005024D0(s32 arg0, s32 arg1, s32 arg2) {
    s32 var1 = func_00502448();
    (*(s32 *)((arg1 + 0))) = ((u32)var1 >> 0x10);
    (*(s32 *)((arg2 + 0))) = (var1 & 0xFFFF);
}
