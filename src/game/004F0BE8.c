/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B1930 (NTSC-U func_003B1790, commit 403f30a9) */
#include "common.h"

extern void func_0012D420(void);
extern void func_0012D470(void);
void func_004F0BE8(s32 a) {
    func_0012D420();
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 | 0x10000;
    *(volatile u32 *)0x1000B000 = a;
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 & ~0x10000;
    func_0012D470();
}
