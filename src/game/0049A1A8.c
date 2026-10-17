#include "common.h"

extern s32 *D_0021DDA4;
extern s32 D_0021EDD4;
extern s32 D_0021EDD8;
extern s32 D_306D20[];

void func_0049A1A8(void) {
    s32 value;
    s32 i;
    if (D_0021EDD4 == 1) {
        value = 0x133;
    } else if (D_0021EDD4 != 0) {
        value = 0x37;
    } else if ((D_0021EDD8 ^ 1) == 0) {
        value = 0x3F;
    } else {
        value = 0x37;
    }
    for (i = 0; i < *D_0021DDA4; i++) {
        D_306D20[1 + i * 4] = value;
    }
}
