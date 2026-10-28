#include "common.h"

extern s32 D_0021EDD4;
extern u8 D_306DC0[];

// Set the byte at +0x1 of the 0x3C-byte entry of D_306DC0 selected by arg0 (or entry 0 when D_0021EDD4 is 1).
void func_0049ABB8(s32 arg0) {
    s32 idx = arg0;
    u8 *p;
    if ((D_0021EDD4 ^ 1) != 0) {
        idx = 0;
    }
    p = D_306DC0 + idx * 0x3C;
    p[1] = 1;
}
