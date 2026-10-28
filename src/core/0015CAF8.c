#include "common.h"

u8 D_0021DFA4 = 0;
extern u8 D_00172160[];

void func_0015CAF8(void) {
    u8 *g = D_00172160;

    D_0021DFA4 = 0;
    *(s32 *)(g + 0x7F4) = *(s32 *)(g + 0x218);
}
