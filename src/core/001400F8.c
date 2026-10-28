/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00133BB8 (NTSC-U func_00133BB8, commit 403f30a9) */
#include "common.h"

/* libmpeg/libipu: IPU command word from the sync value; 2.9-ee-991111 */
extern s32 func_0012D420(void);
extern void func_0012D470(void);
void func_001400F8(s32 a, s32 b) {
    u32 x;
    s32 ei;

    x = a;
    ei = func_0012D420();
    if ((x >> 28) == 7) {
        x &= 0xFFFFFFF;
        x |= 0x80000000;
    } else {
        x &= 0xFFFFFFF;
    }
    *(volatile u32 *)0x1000B010 = x;
    *(volatile s32 *)0x1000B020 = b >> 4;
    *(volatile u32 *)0x1000B000 = 0x100;
    if (ei) {
        func_0012D470();
    }
}
