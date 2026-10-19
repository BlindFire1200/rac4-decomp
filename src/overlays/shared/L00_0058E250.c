#include "actor_table.h"

// Store a word parameter for the indexed actor (inactive objects only).
void func_L00_0058E250(s32 index, s32 value) {
    u8 *entry = ACTOR_ENTRY(index);
    u8 *object = ENTRY_OBJECT(entry);
    if (OBJECT_BUSY(object) == 0) {
        u8 *target = OBJECT_PARAMS(object);
        *(s32 *)(target + 0x258) = value;
    }
}
