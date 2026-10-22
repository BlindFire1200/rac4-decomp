#include "common.h"

extern void func_00591BD8(void *o, u8 state, s32 type);

// Set the object's state byte to 4 unless it is already 0 or 4.
void func_L01_004D8F68(u8 *object) {
    u8 temp_v1 = *(u8 *)(object + 0x20);

    if (temp_v1 != 0 && temp_v1 != 4) {
        func_00591BD8(object, 4, -1);
    }
}
