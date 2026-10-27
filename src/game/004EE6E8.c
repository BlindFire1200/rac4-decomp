/* cflags: -G0 */
/* C adapted from rac3-decomp func_003AACC8 (NTSC-U func_003AAB70, commit 403f30a9) */
#include "common.h"

extern s32 func_0015DB88();
extern u8 D_003D3070[];
void func_004EE6E8(u8 *p, s32 f) {
    *(void **)(p + 4) = D_003D3070;
    if (f & 1) func_0015DB88(p);
}
