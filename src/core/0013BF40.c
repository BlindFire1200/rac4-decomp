/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012F918 (NTSC-U func_0012F918, commit 403f30a9) */
#include "common.h"

/* libpad: set the actuator alignment; 2.9-ee-991111 */
typedef struct { u8 pad0[4]; s32 x4; s32 x8; u8 act[6]; } Type1;
typedef struct { u8 pad0[4]; Type1 *x4; u8 pad8[0x1C - 8]; } Type2;

extern void func_0013B8C8(s32, s32, u8 *);
extern s32 func_0013B510(s32, s32);
extern Type2 D_001AF010[][4];

s32 func_0013BF40(s32 arg0, s32 arg1, u8 *arg2) {
    u8 var1[0x80];
    Type1 *buf;
    s32 i;

    func_0013B8C8(arg0, arg1, var1);
    if (var1[0x72] != 1) {
        return 0;
    }
    buf = D_001AF010[arg0][arg1].x4;
    for (i = 0; i < 6; i++) {
        buf->act[i] = arg2[i];
    }
    buf->x4 = 1;
    buf->x8 = 6;
    if (func_0013B510(arg0, arg1) != 1) {
        return 0;
    }
    return 1;
}
