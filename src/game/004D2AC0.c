#include "common.h"

extern s32 func_00505B20(void);
extern u8 D_31B6B0[];

// Call the callback stored at +0x10 of the current owner's 0x1C-byte entry with the argument 1.
void func_004D2AC0(void) {
    u8 *entry = D_31B6B0 + func_00505B20() * 0x1C;
    void (*fn)(s32) = *(void (**)(s32))(entry + 0x10);
    fn(1);
}
