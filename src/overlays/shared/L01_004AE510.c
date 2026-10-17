#include "common.h"

extern void func_L01_00591BD8(void *, s32, s32);
extern s32 D_003660F8[];

// In state 0 only: for each of the ten D_003660F8 flags that is set, clear the
// matching word of the linked object (from +0x6C), then move to state 1 (-1).
// Returns 1 when it ran.
s32 func_L01_004AE510(void *object) {
    s32 *flag_ptr;
    s32 *slot;
    s32 flag;
    s32 remaining;
    s32 result;
    if (*((u8 *)object + 0x20) != 0) return 0;
    {
        flag = D_003660F8[0];
        remaining = 9;
        flag_ptr = &D_003660F8[0];
        slot = *(s32 **)((u8 *)object + 0xAC) + 0x1B;
        do {
            if (flag != 0) *slot = 0;
            flag_ptr += 1;
            slot += 1;
            remaining -= 1;
            flag = *flag_ptr;
        } while (remaining >= 0);
        func_L01_00591BD8(object, 1, -1);
        result = 1;
    }
    return result;
}
