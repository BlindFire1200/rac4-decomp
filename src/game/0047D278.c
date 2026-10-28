#include "common.h"

extern s32 func_0047D4E8(void);

// Returns the byte at offset 0x1F4 of the object func_0047D4E8 yields, offset by arg0.
u8 func_0047D278(s32 arg0) {
    return ((u8 *)(func_0047D4E8() + arg0))[0x1F4];
}
