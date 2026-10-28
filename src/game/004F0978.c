/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_003B16C0 (NTSC-U func_003B1520, commit 403f30a9) */
#include "common.h"

void func_004F0978(void *a0) {
    u8 *p = (u8 *)a0 + 0x50000;
    *(s32 *)(p + 8) = 0x50000;
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
}
