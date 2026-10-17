#include "common.h"

extern volatile void *D_221E20;

// Append a four-word record (tag | 0x30000000, word_a, 0, 0) at the write
// pointer D_221E20 and advance the pointer by 0x10.
void func_004E7878(s32 word_a, s32 tag) {
    *(s32 *)D_221E20 = tag | 0x30000000;
    *(s32 *)((u8 *)D_221E20 + 4) = word_a;
    *(s32 *)((u8 *)D_221E20 + 8) = 0;
    *(s32 *)((u8 *)D_221E20 + 0xC) = 0;
    D_221E20 = (void *)((u8 *)D_221E20 + 0x10);
}
