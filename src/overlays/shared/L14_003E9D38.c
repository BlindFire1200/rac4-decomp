#include "common.h"

typedef struct {
    s32 f0;
    u8 f4[0x14];
    s32 f18;
    u8 f1C[0x04];
} Type1;

Type1 *D_002226F4 = 0;

extern void func_0054F548(void *o, u8 state, s32 type);

/* Rebind the object to its slot in the global table, clear the state counters and re-init the object. */
void func_L14_003E9D38(void *object) {
    void *state;
    s32 index;
    Type1 *entry;

    state = *(void **)((u8 *)object + 0xAC);
    index = *(s32 *)((u8 *)state + 0x90);
    if (index >= 0) {
        entry = &D_002226F4[index];
        *(void **)((u8 *)state + 0x94) = (void *)entry;
        entry->f18 = 1;
    }
    *(s32 *)((u8 *)state + 0x98) = 0;
    *(s32 *)((u8 *)state + 0x9C) = 0;
    func_0054F548(object, 3, -1);
}
