/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00125290 (NTSC-U func_00125290, commit 403f30a9) */
#include "common.h"

extern s32 func_0012D420(void);
extern s32 func_0012D470(void);
extern void func_0012DC10(int);
extern s32 func_0012E320(void);
extern void func_0012DE28(s32);

s32 func_0012DD90(void) {
    s32 r = func_0012D420();
    u32 v = *(volatile u32 *)0x10001010;

    if (v & 0x80) {
        if (r != 0) {
            func_0012D470();
        }
        return 1;
    }
    func_0012DC10((int)((v & 0xFFFFF3FF) | 0x80));
    func_0012DE28(func_0012E320());
    if (r != 0) {
        func_0012D470();
    }
    return 0;
}
