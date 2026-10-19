#include "common.h"

// Return the float at +0x74 of the linked +0xAC object.
f32 func_L01_00481780(u8 *object) {
    return *(f32 *)(*(u8 **)(object + 0xAC) + 0x74);
}
