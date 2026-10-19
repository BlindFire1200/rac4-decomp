#include "common.h"

// Store the byte value at +0x35F of the linked +0xAC object.
void func_L01_004ED1A0(u8 *object, s32 value) {
    *(u8 *)(*(u8 **)(object + 0xAC) + 0x35F) = value;
}
