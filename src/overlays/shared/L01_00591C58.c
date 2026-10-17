#include "common.h"

// Store the byte at +0x69 and clear bit 1 of the +0xBE flags.
void func_L01_00591C58(u8 *object, s8 value) {
    object[0x69] = value;
    object[0xBE] &= 0xFD;
}
