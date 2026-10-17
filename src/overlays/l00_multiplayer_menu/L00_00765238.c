#include "common.h"
extern s32 func_0011A518(void *, s32, s32);
void func_L00_00765238(u8 *arg0) {
    *(s32 *)(arg0 + 0x24) = 0;
    arg0[0x28] = 0;
    arg0[0x29] = 0;
    arg0[0x2A] = 0;
    arg0[0x2B] = 0;
    arg0[0x2C] = 0;
    arg0[0x2D] = 0;
    *(s32 *)arg0 = -1;
    func_0011A518(arg0 + 0x30, 0, 0x20);
    func_0011A518(arg0 + 0x50, 0, 0xC4);
    func_0011A518(arg0 + 0x114, 0, 0x1C);
}
