#include "common.h"
extern u8 D_0022CA80[];

// Update enabled components of the indexed object parameters.
void func_L00_0058E288(s32 index, f32 value0, f32 value1, f32 value2) {
    u8 *entry = D_0022CA80 + index * 0x470;
    u8 *object = *(u8 **)(entry + 0x50);
    if (*(s16 *)(object + 0x86) == 0) {
        u8 *params = *(u8 **)(object + 0x70) + 0x210;
        if (value0 != -1.0f) *(f32 *)(params + 0x3C) = value0;
        if (value1 != -1.0f) *(f32 *)(params + 0x40) = value1;
        if (value2 != -1.0f) *(f32 *)(params + 0x44) = value2;
    }
}
