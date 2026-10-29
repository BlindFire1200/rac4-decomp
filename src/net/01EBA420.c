#include "common.h"

// Sets the flag at offset 0x18 of entry arg1 (0x50-byte entries) in the table at offset 0x184 to 1.
s32 func_01EBA420(u8 *arg0, s32 arg1) {
    s32 i;
    s32 off;
    u8 *e;

    i = arg1 & 0xFFFF;
    off = ((i << 2) + i) << 4;
    e = (u8 *)(off + *(s32 *)(arg0 + 0x184));
    if (*(s32 *)(e + 0x18) != 1) {
        *(s32 *)(e + 0x18) = 1;
    }
    return 0;
}
