#include "actor_table.h"

// Raise the +0x159 flag of the indexed actor (inactive objects only).
void func_L00_0058E210(s32 index) {
    u8 *entry = ACTOR_ENTRY(index);
    u8 *object = ENTRY_OBJECT(entry);
    if (OBJECT_BUSY(object) == 0) {
        u8 *field = OBJECT_PARAMS(object);
        field[0x159] = 1;
    }
}
