/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012F2A0 (NTSC-U func_0012F2A0, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 f0[0x58];
    s32 f58;
    u8 pad5C[0x80 - 0x5C];
} Type1;

typedef struct {
    Type1 *f0;
    u8 pad4[0x1C - 4];
} Type2;

extern Type2 D_001AF010[2][4];
extern s32 func_0012D420(void);
extern s32 func_0012D470(void);
extern void func_00127438(void *, void *);

Type1 *func_0013B8C8(s32 arg0, s32 arg1, Type1 *out)
{
    s32 r;
    Type1 *pd;
    s32 i;

    r = func_0012D420();
    pd = D_001AF010[arg0][arg1].f0;
    func_00127438(pd, (u8 *)pd + 0xFF);
    i = pd[0].f58 < pd[1].f58;
    if (out != 0) {
        *out = pd[i];
    }
    if (r == 1) {
        func_0012D470();
    }
    return &pd[i];
}
