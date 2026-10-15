#include "common.h"

extern u8 D_0022CA80[];

void func_L00_0058E178(s32 index, f32 x, f32 y) {
    u8 *record = D_0022CA80 + index * 0x470;
    u8 *object = *(u8 **)(record + 0x50);
    if (*(s16 *)(object + 0x86) == 0) {
        u8 *field = *(u8 **)(object + 0x70) + 0x60;
        if (x != 0.0f) *(f32 *)(field + 0x104) = x;
        if (y != 0.0f) *(f32 *)(field + 0x108) = y;
    }
}
