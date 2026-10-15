#include "common.h"

void func_00497980(s32 a0);

extern u8 D_0030ECC0[];

void func_004CD940(s32 a0) {
    *((s32 *)(D_0030ECC0 + (a0 * 0x280))) = 2;
    func_00497980(0xC);
}
