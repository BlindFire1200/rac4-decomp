#include "common.h"

// Fill the two optional out records from the object's linked +4 and +8 blocks:
// the first gets kind 6 with the +0xC and +0x10 words, the second gets three
// words of the +8 block. Returns 1 when either record was filled.
s32 func_L00_00517358(void *object, void *out1, void *out2) {
    s32 result = 0;
    if (out1 != 0) {
        result = 1;
        *(s32 *)out1 = 6;
        *(s32 *)((u8 *)out1 + 0x10) = *(s32 *)(*(u8 **)((u8 *)object + 4) + 0x10);
        *(s64 *)((u8 *)out1 + 8) = *(s32 *)(*(u8 **)((u8 *)object + 4) + 0xC);
    }
    if (out2 != 0) {
        result = 1;
        *(s32 *)out2 = *(s32 *)(*(u8 **)((u8 *)object + 8) + 4);
        *(s32 *)((u8 *)out2 + 0x10) = *(s32 *)(*(u8 **)((u8 *)object + 8) + 8);
        *(u64 *)((u8 *)out2 + 8) = *(u32 *)*(u8 **)((u8 *)object + 8);
    }
    return result;
}
