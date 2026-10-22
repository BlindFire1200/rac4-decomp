#include "common.h"

extern s32 func_00505B20(void);
extern u8 D_31B6B0[];

// Calls the callback stored at +0x10 of the current player's entry (D_31B6B0, 0x1C bytes per entry) with argument 4.
void func_004D2B80(void) {
    u8 *entry = D_31B6B0 + func_00505B20() * 0x1C;
    ((void (*)(s32))*(s32 *)(entry + 0x10))(4);
}
