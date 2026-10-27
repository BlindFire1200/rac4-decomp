/* C adapted from rac3-decomp func_003A9DF8 (NTSC-U func_003A9CB0, commit 403f30a9) */
#include "common.h"

extern s32 D_00221E48;
extern s32 D_00221E4C;
extern void func_004E8168();
extern void func_004E8268();
extern s32 func_001268B0();
extern void func_00127738();
void func_004E8068(void) {
    if (D_00221E48 == 0 && D_00221E4C == 0) {
        volatile u32 *r = (volatile u32 *)0x1000E010;
        if ((*r & 0x20000) == 0) {
            *(u32 *)0x1000E010 = 0x20000;
        }
        D_00221E48 = func_001268B0(1, func_004E8168, 0);
        D_00221E4C = func_001268B0(0xF, func_004E8268, 0);
        func_00127738(1);
    }
}
