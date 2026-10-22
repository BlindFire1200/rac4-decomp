#include "common.h"

extern void func_00568B98(void *o, u8 state, s32 type);

// Resets the object to state 6 / type -1 when the given state is zero.
void func_L05_00492CD0(void *obj, s32 state) {
    if (state == 0) {
        func_00568B98(obj, 6, -1);
    }
}
