#include "common.h"

extern s32 func_0058FF08(s32 a0);
extern void func_00591BD8(void *o, u8 state, s32 type);

// Sets the object's state to 4 when the mode-2 check passes, otherwise to 5.
void func_L01_004957F8(void *obj) {
    u8 state;

    if (func_0058FF08(2) != 0) {
        state = 4;
    } else {
        state = 5;
    }
    func_00591BD8(obj, state, -1);
}
