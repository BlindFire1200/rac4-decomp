#include "common.h"

// Set two linked flags and store arg1 at +8.
void func_L01_004DC3B8(void *arg0, s32 arg1) {
    u8 *linked = *(u8 **)((u8 *)arg0 + 0xAC);
    linked[4] = 1;
    *(s32 *)(linked + 8) = arg1;
    linked[5] = 1;
}
