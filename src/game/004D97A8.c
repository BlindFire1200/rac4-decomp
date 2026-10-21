#include "common.h"

void func_00497980(s32 a0);

extern u8 D_00321650[];

void func_004D97A8(s32 a0) {
    *((s32 *)(D_00321650 + (a0 * 0x124))) = 1;
    func_00497980(0xC);
}
