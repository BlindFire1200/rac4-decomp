#include "common.h"

extern s32 D_0021DE10;
extern s32 D_171BA8[];
extern void *func_006658C0();
extern void func_L01_00591BD8(void *a, s32 b, s32 c);

typedef struct {
    s32 f0;
    s32 f4;
    f32 f8;
    f32 fC;
    s32 f10;
    s32 f14;
    s32 pad18[2];
    s16 f20;
    u8 pad22[5];
    u8 f27;
    u8 pad28[4];
    u8 f2C;
    u8 pad2D[3];
    s32 f30;
    s32 pad34[7];
    s32 f50;
    s32 pad54[3];
    s32 f60;
    s32 pad64[11];
    s32 f90;
    s32 pad94;
    u8 f98;
    u8 pad99[7];
    s32 fA0[64];
    s32 f1A0[64];
} Type2;

typedef struct {
    u8 pad0[0x20];
    u8 f20;
    u8 pad21[0x13];
    u16 f34;
    u8 pad36[0x76];
    Type2 *fAC;
    u8 padB0[0xE];
    u8 fBE;
} Type1;

static inline s32 func_set_once(u8 *p) {
    if ((*p ^ 1) & 1) {
        *p |= 1;
        return 1;
    }
    return 0;
}

/* Resets a slot's tables and picks state 1 or 2 from its flags. */
s32 func_L01_00497878(Type1 *arg0) {
    Type2 *s0;
    s32 idx;
    s32 flag;
    s32 i;

    if (arg0->f20 != 0) {
        return 0;
    }
    s0 = arg0->fAC;
    idx = (D_0021DE10 - 1) % 20;
    if ((D_171BA8[idx] >> (s0->f0 - idx * 30)) & 1) {
        goto set2;
    }
    if (func_set_once(&arg0->fBE)) {
        return 1;
    }
    for (i = 0; i < 64; i++) {
        s0->fA0[i] = -1;
        s0->f1A0[i] = 0;
    }
    s0->f4 = 0;
    s0->f98 = 0;
    s0->f8 = *(f32 *)((u8 *)func_006658C0(0) + 0x2E20);
    s0->fC = *(f32 *)((u8 *)func_006658C0(1) + 0x2E20);
    s0->f90 = 0;
    flag = 0;
    if (s0->f10 && (s0->f30 || s0->f50 || s0->f60)) flag = 1;
    if (s0->f30 && (s0->f10 || s0->f50 || s0->f60)) flag = 1;
    if (s0->f50 && (s0->f10 || s0->f30 || s0->f60)) flag = 1;
    if (s0->f60 && (s0->f10 || s0->f30 || s0->f50)) flag = 1;
    if (s0->f10) {
        if (s0->f20 && s0->f14 > 0x40) flag = 1;
        if (s0->f27 && !s0->f2C && s0->f20) flag = 1;
    }
    if (flag) goto set2;
    func_L01_00591BD8(arg0, 1, -1);
    return 1;
set2:
    arg0->f34 |= 2;
    func_L01_00591BD8(arg0, 2, -1);
    return 1;
}
