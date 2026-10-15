#include "actor_table.h"

// Set up the timed entry of the indexed record's object (inactive objects only);
// the value is also stored in the alternate slot when copy_to_alt is set.
void func_L00_0058DFA0(s32 index, s32 copy_to_alt, f32 value, f32 rate) {
    u8 *entry = ACTOR_ENTRY(index);
    u8 *object = ENTRY_OBJECT(entry);
    if (OBJECT_BUSY(object) == 0) {
        u8 *field = OBJECT_PARAMS(object) + 0x180;
        *(s16 *)(field + 0x3C) = 1;
        *(f32 *)(field + 0x48) = rate;
        *(f32 *)(field + 0x40) = value;
        if (copy_to_alt != 0) {
            *(f32 *)(field + 0x58) = value;
        }
    }
}
