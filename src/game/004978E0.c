#include "common.h"

extern u8 D_2F32B8[];

// OR the given bits into the word at offset 8 of the per-index record.
void func_004978E0(s32 arg0, s32 arg1) {
    u8 *base = D_2F32B8;

    base += 8;
    *(s32 *)(base + arg0 * 0x54) |= arg1;
}
