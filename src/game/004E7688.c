#include "common.h"

extern s32 D_0021EDE8;
extern s32 D_0021EDEC;
extern s32 D_00221310;
extern s32 D_221314;
extern s32 D_221318;
extern s32 D_221E18[];
extern s32 D_221E20;
extern s32 D_221E28;
extern s32 D_221E2C;

void func_004E7688(void) {
    s32 index;
    s32 selected;
    s32 value;
    s32 diff;

    index = 1 - D_221E2C;
    selected = D_221E18[index];
    value = (selected + D_221E28) & 0xFFFFE000;
    D_221E2C = index;
    diff = value - D_0021EDE8;
    D_221E20 = selected;
    D_221314 = value - D_0021EDEC;
    D_221318 = diff - 0x2000;
    D_00221310 = diff;
}
