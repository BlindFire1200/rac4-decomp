#include "actor_table.h"

// Store the x/y values that are nonzero into the indexed record's object
// (inactive objects only).
void func_L00_0058E120(s32 index, f32 x, f32 y) {
    u8 *entry = ACTOR_ENTRY(index);
    u8 *object = ENTRY_OBJECT(entry);
    if (OBJECT_BUSY(object) == 0) {
        u8 *field = OBJECT_PARAMS(object) + 0x60;
        if (x != 0.0f) {
            *(f32 *)(field + 0xFC) = x;
        }
        if (y != 0.0f) {
            *(f32 *)(field + 0x100) = y;
        }
    }
}
