#include "common.h"

/* Clear the state record's flag, re-init the object type, and zero the linked sub-record's field. */
extern void func_0054F548(void *o, u8 state, s32 type);

void func_L14_003E9D90(void *arg0) {
    void *temp_s0;

    temp_s0 = *(void **)((u8 *)arg0 + 0xAC);
    *(s32 *)((u8 *)temp_s0 + 0x98) = 0;
    func_0054F548(arg0, 2, -1);
    if (*(s32 *)((u8 *)temp_s0 + 0x90) >= 0) {
        *(s32 *)(*(u8 **)((u8 *)temp_s0 + 0x94) + 0x18) = 0;
    }
}
