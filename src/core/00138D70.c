/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012C908 (NTSC-U func_0012C908, commit 403f30a9) */
#include "common.h"

extern s32 func_001384E0();
/* libgraph: 2.9-ee-991111, @ee29 -O2 -G0 */
extern long func_001270C0();
extern void func_00127030();

s32 func_00138D70(void)
{
    u8 *p;
    p = func_001384E0();
    if (*(s32 *)(p + 8) == 0)
    {
        func_00127030();
        if (*(s16 *)p != 1)
        {
            return 1;
        }
        return (s32)((*(volatile unsigned long *)0x12001000 >> 13) & 1);
    }
    else
    {
        long v = func_001270C0();
        long b = (v >> 13) & 1;
        if (*(s16 *)p != 1)
        {
            return 1;
        }
        return (s32)b;
    }
}
