/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B04E8 (NTSC-U func_003B0348, commit 403f30a9) */
#include "common.h"

extern void func_001597B8(s32, s32, s32, s32, s32);
typedef struct { s32 f0, f4; s32 f8, fC, f10; s32 f14, f18; u8 p1C[0x2C]; s32 f48, f4C; u8 p50[0xC]; s32 f5C; } Type1;
void func_004EF790(Type1 *a) {
    if (a->f4 != 3) {
        func_001597B8(a->f48, (a->f4C / 1024) * 1024, a->f48 + a->f5C, 0, 0);
    } else {
        func_001597B8(a->f48, (a->f4C / 1024) * 1024, a->f5C, a->f14, a->f18);
    }
    a->f0 = 2;
}
