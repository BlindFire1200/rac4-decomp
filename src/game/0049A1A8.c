#include "common.h"

extern s32 *D_0021DDA4;
extern s32 D_0021EDD4;
extern s32 D_0021EDD8;
extern s32 D_306D20[];

// Set the +4 word of each of the D_0021DDA4 entries of D_306D20 (16 bytes each)
// to 0x133 when D_0021EDD4 is 1, to 0x3F when D_0021EDD4 is 0 and D_0021EDD8 is
// 1, and to 0x37 otherwise.
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
