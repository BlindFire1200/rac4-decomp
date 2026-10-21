#include "actor_table.h"

// Store a float parameter for the indexed actor (inactive objects only).
void func_L00_0058E0B0(s32 index, f32 value) {
    u8 *entry = ACTOR_ENTRY(index);
    u8 *object = ENTRY_OBJECT(entry);
    if (OBJECT_BUSY(object) == 0) {
        u8 *target = OBJECT_PARAMS(object);
        *(f32 *)(target + 0x204) = value;
    }
}
