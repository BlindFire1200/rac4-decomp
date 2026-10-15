#include "common.h"

extern u8 D_0022CA80[];

// Set up the timed entry of the indexed record's object (inactive objects only);
// the value is also stored in the alternate slot when copy_to_alt is set.
void func_L00_0058DFA0(s32 index, s32 copy_to_alt, f32 value, f32 rate) {
    u8 *record = D_0022CA80 + index * 0x470;
    u8 *object = *(u8 **)(record + 0x50);
    if (*(s16 *)(object + 0x86) == 0) {
        u8 *field = *(u8 **)(object + 0x70) + 0x180;
        *(s16 *)(field + 0x3C) = 1;
        *(f32 *)(field + 0x48) = rate;
        *(f32 *)(field + 0x40) = value;
        if (copy_to_alt != 0) {
            *(f32 *)(field + 0x58) = value;
        }
    }
}
