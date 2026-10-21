#include "actor_table.h"

// Raise the +0x266 flag of the indexed actor (inactive objects only).
void func_L00_0058E1D8(s32 index) {
    u8 *entry = ACTOR_ENTRY(index);
    u8 *object = ENTRY_OBJECT(entry);
    if (OBJECT_BUSY(object) == 0) {
        u8 *target = OBJECT_PARAMS(object);
        *(s16 *)(target + 0x266) = 1;
    }
}
