/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B1D00 (NTSC-U func_003B1B60, commit 403f30a9) */
#include "common.h"

typedef struct { u8 pad[0x14]; s32 f14; u8 pad2[0x28]; s32 f40; u8 pad3[4]; unsigned long f48; } Type1;
extern s32 func_00126BE0(s32);
extern void func_00126BC0(s32);
void func_004F0FB8(p, n)
Type1 *p;
s32 n;
{
    func_00126BE0(p->f40);
    p->f14 += n;
    p->f48 = n + p->f48;
    func_00126BC0(p->f40);
}
