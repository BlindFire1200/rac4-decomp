#include "common.h"

void func_00497980(s32 a0);

extern s32 D_0031A960_[];
#define D_0031A960 (D_0031A960_[0])

void func_004D01B0(s32 a0) {
    *(s32 *)((char *)&D_0031A960 + (a0 * 0x1A4)) = 2;
    func_00497980(0xC);
}
