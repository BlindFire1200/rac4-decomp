#include "common.h"

void func_00497980(s32 a0);

extern s32 D_00320178_[];
#define D_00320178 (D_00320178_[0])

void func_004D8560(s32 a0) {
    *(s32 *)((char *)&D_00320178 + (a0 * 0x3AC)) = 1;
    func_00497980(0xC);
}
