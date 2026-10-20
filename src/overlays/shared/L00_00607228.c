#include "common.h"

/* Resets the object's timer fields and re-arms the pending callback when one is due */
typedef struct {
    s32 pad0[0x66];
    s32 unk198;
    s32 pad1[1];
    s32 unk1A0;
    s32 pad2[2];
    s32 unk1AC;
    s32 unk1B0;
    s32 pad3[2];
    s32 unk1BC;
    s32 pad4[0x62];
    s32 unk348;
    s32 pad5[0x8A];
    u8 unk574;
    u8 unk575;
} Type1;

extern void func_L00_006069A0(Type1 *, u8 *, s32);

void func_L00_00607228(Type1 *arg0) {
    s32 temp_a2;

    arg0->unk1A0 = 0;
    arg0->unk1AC = arg0->unk348;
    arg0->unk1BC = arg0->unk1B0;
    arg0->unk1B0 = 0;
    if (arg0->unk198 != 0) {
        if (arg0->unk574 == 0) {
            temp_a2 = ((arg0->unk575 & 0xF) * 2) + 2;
            func_L00_006069A0(arg0, &arg0->unk574, (temp_a2 < 0x15) ? temp_a2 : 0x14);
        }
    }
}
