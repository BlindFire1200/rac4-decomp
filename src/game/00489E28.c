/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_003A2E90 (NTSC-U func_003A2D50, commit 403f30a9) */
#include "common.h"

void func_00489E28(s32 a, long l) {
    u8 *p = (u8 *)(s32)l;
    if (p == 0) return;
    if (*(u32 *)p == 0xFFFFFFFF) {
        *(s32 *)p = a;
        if (a == 0) *(s16 *)(p + 0xA) = 7;
    }
}
