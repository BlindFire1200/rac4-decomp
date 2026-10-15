#include "common.h"

void func_00499CE0(s32);
s32 func_00505B20(void);
void func_00505D30(s32);
extern s32 D_321140[];

/* Process multiple fields and call cleanup function */
void func_004D9268(void) {
    s32 *base;
    s32 temp;

    base = (s32 *)((u8 *)&D_321140 + func_00505B20() * 0x114);

    temp = *(s32 *)((u8 *)base + 0xC);
    if (temp != 0) {
        func_00499CE0(temp);
        *(s32 *)((u8 *)base + 0xC) = 0;
    }

    temp = *(s32 *)((u8 *)base + 0x10);
    if (temp != 0) {
        func_00499CE0(temp);
        *(s32 *)((u8 *)base + 0x10) = 0;
    }

    temp = *(s32 *)((u8 *)base + 0x14);
    if (temp != 0) {
        func_00499CE0(temp);
        *(s32 *)((u8 *)base + 0x14) = 0;
    }

    func_00505D30(0xF);
}
