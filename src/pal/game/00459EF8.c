#include "common.h"
extern unsigned int *D_00221F20;
extern unsigned int D_0021DAFC;

void func_00459EF8(void) {
    D_00221F20[0] = 0x30000009;
    D_00221F20[1] = (D_0021DAFC + 0xC0) & 0x0FFFFFFF;
    D_00221F20[2] = 0;
    D_00221F20[3] = 0x50000009;
    D_00221F20 += 4;
}
