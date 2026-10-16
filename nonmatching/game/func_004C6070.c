/* Not matching yet: SIZE ours 300 / retail 328 (tools/try_func.py func_004C6070 --diff). Not part of the build. */
#include "common.h"
extern volatile s32 D_30D038[];
void func_004C6070(void) {
    volatile s32 *p = D_30D038;
    volatile s32 *p2;
    p[0] = 0x30F3;
    p[1] = 4;
    p[0x30 / 4] = 0x25;
    p[2] = 8;
    p[4] = 0xA;
    p[5] = 0xB;
    p[3] = 0x25;
    p2 = p + 0x34 / 4;
    p2[0] = 0x30F4;
    p2[2] = 0xD;
    p2[3] = 9;
    p2[5] = 0xC;
    p2[0x30 / 4] = 0xF;
    p2[1] = 5;
    p2[6] = 0xE;
    p2[4] = 0xF;
    p2 = p + 2;
    p2[0x60 / 4] = 0x30F5;
    p2[0x68 / 4] = 0x11;
    p2 = p2 + 0x60 / 4;
    p2[0x30 / 4] = 0x17;
    p2[1] = 6;
    p2 = p + 2;
    p2[0x94 / 4] = 0x30F6;
    p2 = p2 + 0x94 / 4;
    p2[2] = 0x15;
    p2[3] = 0x19;
    p2[0x0C / 4] = 0x16;
    p2[0x10 / 4] = 0x18;
    p2[0x0C / 4 + 1] = 0x26;
    p2[0x30 / 4] = 0x26;
    p2[1] = 5;
    p2 = p + 2;
    p2[0xC8 / 4] = 0x30F7;
    p2 = p2 + 0xC8 / 4;
    p2[2] = 0x1C;
    p2[6] = 0x24;
    p2[3] = 0x22;
    p2[7] = 0x1A;
    p2[4] = 0x27;
    p2[0x30 / 4] = 0x27;
    p2[1] = 5;
}
