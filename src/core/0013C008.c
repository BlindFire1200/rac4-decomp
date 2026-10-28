/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012F9E0 (NTSC-U func_0012F9E0, commit 403f30a9) */
#include "common.h"

typedef struct {
    s32 cmd;
    s32 f4;
    s32 f8;
    u8 fC[8];
    s32 f14;
    u8 pad18[0x80 - 0x18];
} Type1;

extern Type1 D_001AF200;
extern u8 D_001AEFC0[];
extern s32 func_0012A718();
extern s32 func_0013BB18(s32, s32, s32);

s32 func_0013C008(s32 f4, s32 f8, u8 *fC)
{
    s32 i;
    Type1 *b = &D_001AF200;

    b->cmd = 8;
    b->f4 = f4;
    b->f8 = f8;
    for (i = 0; i < 6; i++) {
        b->fC[i] = fC[i];
    }
    if (func_0012A718(D_001AEFC0, 1, 0, b, 0x80, b, 0x80, 0, 0) < 0) {
        return 0;
    }
    if (b->f14 == 1) {
        func_0013BB18(f4, f8, 2);
    }
    return b->f14;
}
