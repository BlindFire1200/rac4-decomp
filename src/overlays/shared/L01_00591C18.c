#include "common.h"
void func_L01_00591C18(u8 *a0, s32 a1, s32 a2) {
    u8 old = a0[0x20];
    if (old != a1) {
        u8 flags = a0[0xBE] & 0xFE;
        a0[0x68] = old;
        a0[0x20] = a1;
        *(u16 *)(a0 + 0x6A) = 0;
        a0[0xBE] = flags;
        if (a2 != -1) {
            a0[0x69] = a2;
            a0[0xBE] = flags & 0xFD;
        }
    }
}
