#include "common.h"

extern void func_00474368(void *o, u8 state, s32 type);

/* PAL version of func_L01_004FBE10 (33 frames instead of 40): initialises a linked object's fields and switches its owner object to state 3. */
void func_L01_004FDE50(void *o, u8 *obj) {
    *(u8 *)(obj + 0x226) = 0x21;
    *(s32 *)(obj + 0x23C) = 0;
    *(u8 *)(obj + 0x225) = 0;
    *(s32 *)(obj + 0x244) = 0;
    *(s32 *)(obj + 0x248) = 0;
    *(u8 *)(obj + 0x27E) = 0;
    *(s32 *)(obj + 0x230) = 0;
    func_00474368(o, 3, -1);
}
