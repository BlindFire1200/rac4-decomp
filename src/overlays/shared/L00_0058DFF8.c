#include "actor_table.h"

// Set up the second timed entry of the indexed actor's object (inactive objects only).
void func_L00_0058DFF8(s32 index, f32 value, f32 rate) {
    u8 *entry = ACTOR_ENTRY(index);
    u8 *object = ENTRY_OBJECT(entry);
    if (OBJECT_BUSY(object) == 0) {
        u8 *field = OBJECT_PARAMS(object) + 0x180;
        *(s16 *)(field + 0x3E) = 1;
        *(f32 *)(field + 0x4C) = value;
        *(f32 *)(field + 0x54) = rate;
    }
}
