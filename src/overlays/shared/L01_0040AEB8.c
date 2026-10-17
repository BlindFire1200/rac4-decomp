#include "common.h"
void func_L00_006A99F8(void *, void *);
void func_L01_00591BD8(void *, s32, s32);
void func_L01_0040AEB8(u8 *arg0) {
    u8 *linked = *(u8 **)(arg0 + 0xAC);
    func_L00_006A99F8(arg0, linked + 0x40);
    *(s32 *)(linked + 0x3C) = -1;
    func_L01_00591BD8(arg0, 1, -1);
}
