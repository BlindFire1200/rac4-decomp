#include "common.h"

extern void func_L00_005BBF48(s32, void *, s32, u32, u32, u32, u32);
// Fill the first count slots at +0x10 with consecutive 0x80-byte addresses
// starting at start, record the count at +0xA4 and run func_L00_005BBF48 with
// four packed constant words.
void func_L01_00558E30(s32 arg0, u8 *list, s32 start, s32 count) {
    s32 *entry;
    s32 left;
    if (count > 0) {
        entry = (s32 *)(list + 0x10);
        left = count;
        do {
            *entry = start;
            left--;
            entry++;
            start += 0x80;
        } while (left != 0);
    }
    *(s32 *)(list + 0xA4) = count;
    func_L00_005BBF48(arg0, list, 2, 0x7F7F7F7F, 0x7F7F2000, 0x7F5F3F3F, 0x7F4F1000);
}
