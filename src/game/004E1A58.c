#include "common.h"

extern char D_1D24C0[];
extern void func_004E1B18(void *);

// Walk the 0x34 entries (0x80 bytes each) of D_1D24C0 and release
// (func_004E1B18) those whose +0x1C word is the object, only the ones with bit
// 2 of +0x54 set when only_flagged is nonzero. Then set the object's +0x6E
// halfword to -1.
void func_004E1A58(s32 object, s32 only_flagged) {
    void *entry;
    s32 i;
    if (object == 0) return;
    entry = D_1D24C0;
    i = 0x33;
    do {
        if (object == *(s32 *)((u32)entry + 0x1C)) {
            if (only_flagged == 0 || (*(u32 *)((u32)entry + 0x54) & 4) != 0) {
                func_004E1B18(entry);
            }
        }
        i--;
        entry = (void *)((u32)entry + 0x80);
    } while (i >= 0);
    *(s16 *)((u32)object + 0x6E) = -1;
}
