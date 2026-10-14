#include "common.h"

void func_00497980(s32 a0);

extern s32 D_00316D00_[];
#define D_00316D00 (D_00316D00_[0])

void func_004CF3E8(s32 a0) {
    *(s32 *)((char *)&D_00316D00 + (a0 * 0x9E0)) = 2;
    func_00497980(0xC);
}
