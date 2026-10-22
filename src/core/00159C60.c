#include "common.h"

extern void func_0011A518(void *, s32, s32);

typedef struct {
    s32 unk0;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    s32 unk8;
    u8 unkC;
    u8 unkD;
    u16 unkE;
    s32 unk10;
    u8 unk14;
    u8 unk15;
    u16 unk16;
    s32 unk18;
    u8 unk1C;
    u8 unk1D;
    u16 unk1E;
    s32 unk20;
    u8 unk24;
    u8 unk25;
    u16 unk26;
    s32 unk28;
    u8 unk2C;
    u8 unk2D;
    u16 unk2E;
    s32 unk30;
    u8 unk34;
    u8 unk35;
    u16 unk36;
    s32 unk38;
    u8 unk3C;
    u8 unk3D;
    u16 unk3E;
    u8 unk40;
    u8 pad41[0x1E0 - 0x42];
} Type1;

extern Type1 D_001DFD70[];

/* Clears each of the 15 table entries with the helper, then fills in the default field values. */
void func_00159C60(void) {
    Type1 *p = D_001DFD70;
    Type1 *end = p + 8;

    do {
        func_0011A518(p, 0, 0x1E0);
        p->unk4 = 1;
        p->unk5 = 1;
        p->unk8 = 0x32;
        p->unkC = 1;
        p->unkD = 1;
        p->unk10 = 0x32;
        p->unk14 = 1;
        p->unk15 = 1;
        p->unk18 = 0x32;
        p->unk1C = 1;
        p->unk40 = 1;
        p++;
    } while ((s32)p < (s32)end);
}
