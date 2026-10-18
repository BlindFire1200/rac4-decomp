#include "common.h"

extern u8 D_00354720[];
void func_L00_005DDEA0(s32, void *);

// Release the entry for index (when below 0x40, 0x50 bytes each in D_00354720):
// run func_L00_005DDEA0 on its +0x40 handle and entry, then clear the handle.
void func_L01_00636E18(s32 index) {
    u8 *entry;
    if ((u32)index >= 0x40) return;
    entry = D_00354720 + index * 0x50;
    func_L00_005DDEA0(*(s32 *)(entry + 0x40), entry);
    *(s32 *)(entry + 0x40) = 0;
}
