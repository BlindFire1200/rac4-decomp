#include "common.h"

extern void func_005AC748(f32 f, void *a, s32 b, s32 c, s32 d, s32 e, s32 g);
extern void func_00591BD8(void *o, u8 state, s32 type);

// Handles an event of type 4: fires the effect helper on the object and switches the object to state 0xB, always returning 1.
s32 func_L01_00495970(void *o, s32 arg1) {
    if (arg1 == 4) {
        func_005AC748(0.0f, o, 6, 0, 0, 0, 0);
        func_00591BD8(o, 0xB, -1);
    }
    return 1;
}
