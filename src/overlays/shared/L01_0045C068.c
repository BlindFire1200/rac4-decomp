#include "common.h"

// Return whether the +0x616 byte of the linked +0xAC object is nonzero.
s32 func_L01_0045C068(u8 *object) {
    return *(u8 *)(*(u8 **)(object + 0xAC) + 0x616) != 0;
}
