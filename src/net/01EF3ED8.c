#include "common.h"

// Zeroes the four words at offsets 0x0, 0x4, 0x8 and 0xC of the object.
void func_01EF3ED8(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x0) = 0;
    *(s32 *)((u8 *)arg0 + 0x4) = 0;
    *(s32 *)((u8 *)arg0 + 0x8) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
}
