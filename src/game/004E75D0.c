#include "common.h"

extern s32 D_0021EDE8;
extern s32 D_0021EDEC;
extern s32 D_221314;
extern s32 D_221318;
extern s32 D_221E18[];
extern s32 D_221E28;
extern s32 D_221E2C;
extern s32 D_00221310;

// Recompute the offsets D_00221310, D_221314 and D_221318 from the current
// buffer D_221E18[D_221E2C] plus D_221E28, aligned down to 0x2000, relative to
// D_0021EDE8 and D_0021EDEC.
void func_004E75D0(void) {
    s32 value;
    s32 diff;

    value = (D_221E18[D_221E2C] + D_221E28) & 0xFFFFE000;
    diff = value - D_0021EDE8;
    D_221314 = value - D_0021EDEC;
    D_221318 = diff - 0x2000;
    D_00221310 = diff;
}
