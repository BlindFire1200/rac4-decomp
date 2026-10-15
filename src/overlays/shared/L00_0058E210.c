#include "common.h"

extern u8 D_0022CA80[];

void func_L00_0058E210(s32 index) {
    u8 *record = D_0022CA80 + index * 0x470;
    u8 *object = *(u8 **)(record + 0x50);
    if (*(s16 *)(object + 0x86) == 0) {
        u8 *field = *(u8 **)(object + 0x70);
        field[0x159] = 1;
    }
}
