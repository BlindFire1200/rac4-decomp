#include "common.h"

void func_00497980(s32 a0);

extern u8 D_0030B7F8[];

void func_004C5620(s32 a0) {
    *((s32 *)(D_0030B7F8 + (a0 * 0x74))) = 4;
    func_00497980(0x6);
}
