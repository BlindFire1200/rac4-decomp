#include "common.h"

// Return 0x80404040 when the byte at offset 0xC is nonzero, otherwise 0x80808080.
s32 func_004CEEF8(void *arg0) {
    s32 r = 0x80404040;
    if (*(u8 *)((u8 *)arg0 + 0xC) == 0) {
        r = 0x80808080;
    }
    return r;
}
