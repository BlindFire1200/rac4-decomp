/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013A190 (NTSC-U func_0013A190, commit 403f30a9) */
#include "common.h"

extern s32 func_0012D420();
extern s32 func_0012D470();
void func_001466D0(s32 a) {
    s32 r;
    r = func_0012D420();
    *(volatile s32 *)0x1000F590 = *(volatile s32 *)0x1000F520 | 0x10000;
    *(volatile s32 *)0x1000B000 = a;
    *(volatile s32 *)0x1000F590 = *(volatile s32 *)0x1000F520 & 0xFFFEFFFF;
    if (r != 0) {
        func_0012D470();
    }
}
