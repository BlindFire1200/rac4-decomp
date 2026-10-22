#include "common.h"

extern void func_00591BD8(void *o, u8 state, s32 type);
extern void func_005AB340(void *o);

/* Picks the object's action for the given state: state 4 calls func_00591BD8, anything else calls func_005AB340, and always returns 1. */
s32 func_L01_00456D08(void *o, s32 state) {
    if (state == 4) {
        func_00591BD8(o, 4, -1);
    } else {
        func_005AB340(o);
    }
    return 1;
}
