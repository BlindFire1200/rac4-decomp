#include "common.h"

extern void func_00591BD8(u8 *o, u8 state, s32 type);
extern void func_L01_005B4F70(u8 *o, u8 state);

/* Handles state 4: clears the flag byte in the sub-object, then notifies the actor with type 6. */
s32 func_L01_004B8C38(u8 *object, s32 arg1) {
    u8 *state = *(u8 **)(object + 0xAC);

    if (arg1 == 4) {
        state[0x611] = 0;
        func_L01_005B4F70(object, 1);
        func_00591BD8(object, 6, -1);
    }
    return 1;
}
