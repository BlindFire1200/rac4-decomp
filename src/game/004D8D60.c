#include "common.h"

void func_00497980(s32 a0);

extern u8 D_00321140[];

void func_004D8D60(s32 a0) {
    *((s32 *)(D_00321140 + (a0 * 0x114))) = 1;
    func_00497980(0xC);
}
