#include "common.h"

void func_00497980(s32 a0);

extern u8 D_0030F820[];

void func_004CE628(s32 a0) {
    *((s32 *)(D_0030F820 + (a0 * 0x103C))) = 2;
    func_00497980(0xC);
}
