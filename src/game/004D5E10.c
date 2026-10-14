#include "common.h"

void func_00497980(s32 a0);

extern s32 D_0031D100_[];
#define D_0031D100 (D_0031D100_[0])

void func_004D5E10(s32 a0) {
    *(s32 *)((char *)&D_0031D100 + (a0 * 0x528)) = 1;
    func_00497980(0xC);
}
