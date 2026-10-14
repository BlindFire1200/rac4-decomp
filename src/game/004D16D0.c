#include "common.h"

void func_00497980(s32 a0);

extern s32 D_0031B050[];

void func_004D16D0(s32 a0) {
    *(s32 *)((char *)D_0031B050 + (a0 * 0x15C)) = 2;
    func_00497980(0xC);
}
