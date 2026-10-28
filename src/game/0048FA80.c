/* cflags: -G0 */
/* C adapted from rac3-decomp func_003A30D8 (NTSC-U func_003A2F98, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 pad0[0x100];
    f32 f100[16];
    f32 f140[16];
    u8 pad180[0x20];
    s32 f1A0;
    s32 f1A4;
    s32 f1A8;
    s32 f1AC;
    s32 f1B0;
    s32 f1B4;
    s32 f1B8;
    s32 f1BC;
    s32 f1C0;
    s32 f1C4;
    s32 f1C8;
    s32 f1CC;
    s32 f1D0;
    s32 f1D4;
    s32 f1D8;
    u8 pad1DC[0x34C - 0x1DC];
    s32 f34C;
    s32 f350;
    s32 f354[7];
    s32 f370[7];
    f32 f38C[7][16];
} Type1;

void func_0048FA80(Type1 *o) {
    s32 i, j, k, n;

    for (i = 0; i < o->f350; i++) {
        k = (o->f34C - i + 7) % 7;
        o->f354[k] = 0;
        o->f370[k] = 0;
        for (j = 15; j >= 0; j--) o->f38C[k][j] = 0.0f;
    }
    o->f1B0 = 0;
    o->f1A0 = 0;
    o->f1A4 = 0;
    o->f1A8 = 0;
    o->f1D0 = 1;
    o->f1D4 = 1;
    o->f1B4 = 0;
    o->f1B8 = 0;
    o->f1C0 = 0;
    o->f1C4 = 0;
    o->f1C8 = 0;
    o->f1D8 = 0;
    for (n = 0; n < 16; n++) {
        o->f100[n] = 0.0f;
        o->f140[n] = 0.0f;
    }
}
