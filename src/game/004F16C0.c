/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B2408 (NTSC-U func_003B2268, commit 403f30a9) */
#include "common.h"

typedef struct { u8 pad[0x14]; s32 f14; u8 pad2[0x28]; s32 f40; } Type1;
extern s32 func_00126BE0(s32);
extern void func_00126BC0(s32);
void func_004F16C0(Type1 *p) {
    func_00126BE0(p->f40);
    p->f14 = (p->f14 + 0x7FF) / 0x800 * 0x800;
    func_00126BC0(p->f40);
}
