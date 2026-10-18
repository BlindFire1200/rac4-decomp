#include "common.h"

typedef struct Type1 {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[7];
    u8 unkE;
    u8 unkF;
    s32 unk10;
    u8 pad14[0x10];
    f32 unk24;
    u8 pad28[0x18];
    s32 unk40;
} Type1;

typedef struct Type0 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23;
    Type1 *unk24;
    u8 pad28[0xC];
    u16 unk34;
    u8 pad36[0x20];
    u8 unk56;
    u8 pad57[9];
    s32 unk60;
    u8 unk64;
    u8 unk65;
    u8 unk66;
    u8 pad67[9];
    f32 unk70;
    u8 pad74[2];
    u8 unk76;
    u8 unk77;
    f32 unk78;
    f32 unk7C;
    u8 pad80[0x18];
    s32 unk98;
    u8 pad9C[0x20];
    s16 unkBC;
} Type0;

extern u8 D_243750[];
extern Type1 *D_242C00[];
void func_004737F0(Type0 *, s32, f32);
void func_004706F0(Type0 *);

s32 func_00473DE0(Type0 *arg0, s32 arg1) {
    Type1 *t;
    Type1 *t2;

    if (arg0->unkBC == arg1) {
        return 0;
    }
    arg0->unkBC = arg1;
    arg0->unk22 = D_243750[(s16)arg1];
    arg0->unk24 = D_242C00[arg0->unk22];
    func_004737F0(arg0, 0, 0.0f);
    t = arg0->unk24;
    arg0->unk64 = t->unkE;
    arg0->unk65 = 0xFF;
    arg0->unk70 = t->unk24;
    if (arg0->unk98 != 0) {
        arg0->unk98 = t->unk10;
    }
    arg0->unk56 = 0xFF;
    t2 = arg0->unk24;
    if (t2 != 0) {
        if (t2->unk40 != 0) {
            arg0->unk34 |= 0x10;
            arg0->unk60 = t2->unk40;
        }
        if (arg0->unk24->unkF == 0) {
            arg0->unk34 &= ~0x400;
        } else {
            arg0->unk76 = 0x18;
            arg0->unk78 = 0.0f;
            arg0->unk34 |= 0x400;
            arg0->unk7C = 0.0f;
            arg0->unk77 = 0;
        }
        if (arg0->unk24->unk6 != 0) {
            arg0->unk66 = 0x18;
        }
    }
    func_004706F0(arg0);
    return 1;
}
