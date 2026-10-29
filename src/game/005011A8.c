#include "common.h"

/* Returns the word at offset 0x18 of the entry at index arg1 (4-byte stride) in the table pointed to by arg0->unk4. */
s32 func_005011A8(void *arg0, s32 arg1) {
    u8 *temp = *(u8 **)((u8 *)arg0 + 4);
    return *(s32 *)(temp + (arg1 << 2) + 0x18);
}
