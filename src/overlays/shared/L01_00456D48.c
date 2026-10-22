#include "common.h"

extern void func_00591BD8(void *o, u8 state, s32 type);

/* Sets the object's state to 4 (type -1) unless it is null or its state byte is 0xFD/0xFE. */
void func_L01_00456D48(u8 *arg0) {
    u8 t;

    if (arg0 != 0) {
        t = arg0[0x20];
        if (t == 0xFE) {
            return;
        }
        if (t == 0xFD) {
            return;
        }
        func_00591BD8(arg0, 4, -1);
    }
}
