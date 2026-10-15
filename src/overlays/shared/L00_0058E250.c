#include "common.h"

extern u8 D_0022CA80[];

void func_L00_0058E250(s32 index, s32 value) {
    u8 *record = D_0022CA80 + index * 0x470;
    u8 *object = *(u8 **)(record + 0x50);
    if (*(s16 *)(object + 0x86) == 0) {
        u8 *target = *(u8 **)(object + 0x70);
        *(s32 *)(target + 0x258) = value;
    }
}
