#include "common.h"
void func_L01_00465EF0(u8 *arg0, s32 arg1) {
    u8 *base = *(u8 **)(arg0 + 0xAC);
    s32 *p32 = (s32 *)(base + arg1 * 4 + 0x20);
    s16 *p16 = (s16 *)(base + arg1 * 2 + 0x10);
    *p32 = 0;
    *p16 = -1;
}
