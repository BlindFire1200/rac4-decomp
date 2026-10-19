#include "common.h"

// Set two linked flags and store value at +8.
void func_L01_004DC3B8(void *object, s32 value) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    linked[4] = 1;
    *(s32 *)(linked + 8) = value;
    linked[5] = 1;
}
