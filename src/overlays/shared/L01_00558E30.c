#include "common.h"

extern void func_L00_005BBF48(s32, void *, s32, u32, u32, u32, u32);
void func_L01_00558E30(s32 arg0, u8 *arg1, s32 value, s32 count) {
    s32 *entry;
    s32 remaining;
    if (count > 0) {
        entry = (s32 *)(arg1 + 0x10);
        remaining = count;
        do {
            *entry = value;
            remaining--;
            entry++;
            value += 0x80;
        } while (remaining != 0);
    }
    *(s32 *)(arg1 + 0xA4) = count;
    func_L00_005BBF48(arg0, arg1, 2, 0x7F7F7F7F, 0x7F7F2000, 0x7F5F3F3F, 0x7F4F1000);
}
