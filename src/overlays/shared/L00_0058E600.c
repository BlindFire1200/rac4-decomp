#include "actor_table.h"

extern void func_L00_0058E350(void *, f32);

// Store a nonzero value and run the follow-up for the indexed actor.
void func_L00_0058E600(s32 index, f32 value, f32 rate) {
    u8 *entry = ACTOR_ENTRY(index);
    u8 *object = ENTRY_OBJECT(entry);
    if (OBJECT_BUSY(object) == 0 && value != 0.0f) {
        u8 *field = OBJECT_PARAMS(object);
        *(f32 *)(field + 0x1F4) = value;
        func_L00_0058E350(object, rate);
    }
}
