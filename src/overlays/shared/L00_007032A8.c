#include "common.h"

extern void func_L00_005BCBF0(void *, void *, s32);
s32 D_00222454 = 0;

s32 func_L00_007032A8(s32 a0, s32 a1, s32 a2, void *arg3) {
    u8 buffer[8];
    s32 index;
    u8 *entry;
    u8 *next;
    func_L00_005BCBF0(buffer, arg3, 8);
    index = *(s32 *)buffer;
    if (index >= 0) {
        entry = (u8 *)(D_00222454 + (index << 8));
        if (entry != 0 && entry[0x20] != 0xFE && entry[0x20] != 0xFD) {
            next = *(u8 **)(entry + 0xAC);
            if (next != 0 && *(s32 *)next == -1) {
                *(s32 *)next = *(s32 *)(buffer + 4);
            }
        }
    }
    return 8;
}
