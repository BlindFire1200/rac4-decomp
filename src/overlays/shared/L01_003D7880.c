#include "common.h"

// Raise the +0x48B flag of the linked +0xAC object.
void func_L01_003D7880(u8 *object) {
    *(u8 *)(*(u8 **)(object + 0xAC) + 0x48B) = 1;
}
