#include "common.h"

extern s32 func_0054A7E0(s32, s32);

/* Calls func_0054A7E0 with both arguments, then returns byte 0xA40 of entry i (0x44 bytes each) of base. */
u8 func_0054A810(s32 base, s32 i)
{
    func_0054A7E0(base, i);
    return *(u8 *)(base + i * 0x44 + 0xA40);
}
