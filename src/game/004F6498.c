/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_003D6DD8 (NTSC-U func_003D6C70, commit 403f30a9) */
#include "common.h"

void func_004F6498(s32 *p, s32 n)
{
    s32 t = *p;
    t = (t + 0x1FFF) & -0x2000;
    *p = t + n;
}
