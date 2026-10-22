#include "common.h"

extern void func_0054F548(void *o, u8 state, s32 type);

/* Clear the sub-state counter and raise the linked object's flag once its timer is non-negative. */
void func_L14_003E9DD8(void *object) {
    void *sub = *(void **)((u8 *)object + 0xAC);

    *(s32 *)((u8 *)sub + 0x98) = 0;
    func_0054F548(object, 1, -1);
    if (*(s32 *)((u8 *)sub + 0x90) >= 0) {
        *(s32 *)((u8 *)*(void **)((u8 *)sub + 0x94) + 0x18) = 1;
    }
}
