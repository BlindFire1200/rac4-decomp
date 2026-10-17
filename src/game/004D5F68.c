#include "common.h"
s32 func_00505B20(void);
void func_0049C4B0(s32, s32, s32, s32);
void func_004D64A0(void);
void func_0049B0D8(s32);
extern u8 D_31D100[];
extern s32 D_221AD8;
void func_004D5F68(void) {
    s32 index = func_00505B20();
    u8 *base = D_31D100;
    *(s32 *)(base + index * 0x528 + 4) = 0;
    func_0049C4B0(index, 0, D_221AD8, 0);
    func_004D64A0();
    func_0049B0D8(index);
}
