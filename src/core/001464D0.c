/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00139F90 (NTSC-U func_00139F90, commit 403f30a9) */
#include "common.h"

extern s32 func_0012D420(void);
extern s32 func_0012D470(void);

void func_001464D0(void) {
    s32 r;
    volatile s32 *p7;
    volatile s32 *p8;

    r = func_0012D420();
    p7 = (volatile s32 *)0x1000F520;
    p8 = (volatile s32 *)0x1000F590;
    *p8 = *p7 | 0x10000;
    *(volatile s32 *)0x1000B000 = 0;
    *(volatile s32 *)0x1000B400 = 0;
    *p8 = *p7 & 0xFFFEFFFF;
    if (r != 0) {
        func_0012D470();
    }
    *(volatile s32 *)0x1000B020 = 0;
    *(volatile s32 *)0x1000B420 = 0;
    *(volatile s32 *)0x10002010 = 0x40000000;
}
