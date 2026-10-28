/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00124988 (NTSC-U func_00124988, commit 403f30a9) */
#include "common.h"

typedef struct { s32 pad0; s32 f4; s32 f8; s32 fc; s32 f10; void *f14; s32 f18; s32 f1C; s32 f20; s32 f24; s32 f28; s32 f2C; s32 f30; void *f34; } Type1;
extern s32 D_00164DB0[];
extern s32 D_00164DB4[];
extern u8 D_00193390[];
extern u8 D_001933A0[];
extern s32 func_00126BA0(void *);
void func_0012D488(void) {
    Type1 s;
    s.f4 = 1;
    s.f8 = 1;
    s.f14 = D_00193390;
    s.f24 = 1;
    s.f28 = 1;
    s.f34 = D_001933A0;
    D_00164DB0[0] = func_00126BA0(&s);
    D_00164DB4[0] = func_00126BA0((u8 *)&s + 0x20);
}
