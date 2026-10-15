#include "common.h"

extern u8 D_0022CA80[];
extern void func_L00_0058E350(void *, f32);

void func_L00_0058E600(s32 index, f32 value, f32 rate) {
    u8 *record = D_0022CA80 + index * 0x470;
    u8 *object = *(u8 **)(record + 0x50);
    if (*(s16 *)(object + 0x86) == 0 && value != 0.0f) {
        u8 *field = *(u8 **)(object + 0x70);
        *(f32 *)(field + 0x1F4) = value;
        func_L00_0058E350(object, rate);
    }
}
