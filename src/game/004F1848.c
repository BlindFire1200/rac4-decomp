/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B2590 (NTSC-U func_003B23F0, commit 403f30a9) */
#include "common.h"

typedef struct { long f0; long f8; s32 f10; s32 f14; } Type1;
typedef struct { u8 p0[0x40]; s32 f40; u8 p44[0xC]; Type1 *f50; s32 f54; s32 f58; s32 f5C; } Type2;
extern s32 func_00126BE0(s32);
extern void func_00126BC0(s32);
extern s32 func_004F1718();
s32 func_004F1848(Type2 *a, Type1 *b) {
    s32 r = 0;
    func_00126BE0(a->f40);
    if (a->f58 < a->f54) {
        func_004F1718(a, b);
        if (b->f0 >= 0 || b->f8 >= 0) {
        a->f50[a->f5C].f0 = b->f0;
        a->f50[a->f5C].f8 = b->f8;
        a->f50[a->f5C].f10 = b->f10;
        a->f50[a->f5C].f14 = b->f14;
        a->f58 = a->f58 + 1;
        a->f5C = (a->f5C + 1) % a->f54;
        }
        r = 1;
    }
    func_00126BC0(a->f40);
    return r;
}
