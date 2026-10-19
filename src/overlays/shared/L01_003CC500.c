#include "common.h"

// Set bit 1 of the flags halfword at +0x34.
void func_L01_003CC500(u8 *object) {
    *(u16 *)(object + 0x34) |= 2;
}
