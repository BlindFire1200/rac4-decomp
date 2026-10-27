/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B06A0 (NTSC-U func_003B0500, commit 403f30a9) */
#include "common.h"

void func_004EF948(void *arg0, s32 arg1) {
    s32 var1;
    s32 var2;
    s32 var3;
    s32 var4;
    s32 var5;

    var5 = arg1;
    if ((*(s32 *)((u8 *)arg0 + 0)) == 0) {
        if ((*(s32 *)((u8 *)arg0 + 4)) != 4) {
            var3 = (*(s32 *)((u8 *)arg0 + 0x30));
            var1 = 0x28 - var3;
            var2 = (var1 >= var5) ? var5 : var1;
            var4 = var3 + var2;
            (*(s32 *)((u8 *)arg0 + 0x30)) = var4;
            if (var4 >= 0x28) {
                (*(s32 *)((u8 *)arg0 + 0)) = 1;
            }
            var5 -= var2;
        } else {
            (*(s32 *)((u8 *)arg0 + 0)) = 1;
        }
    }
    if ((*(s32 *)((u8 *)arg0 + 4)) == 3) {
        (*(s32 *)((u8 *)arg0 + 0x40)) = ((*(s32 *)((u8 *)arg0 + 0x40)) / 256) * 256;
    }
    (*(s32 *)((u8 *)arg0 + 0x3C)) = (*(s32 *)((u8 *)arg0 + 0x3C)) + var5;
    (*(s32 *)((u8 *)arg0 + 0x44)) = (*(s32 *)((u8 *)arg0 + 0x44)) + var5;
    (*(s32 *)((u8 *)arg0 + 0x38)) = ((*(s32 *)((u8 *)arg0 + 0x38)) + var5) % (*(s32 *)((u8 *)arg0 + 0x40));
}
