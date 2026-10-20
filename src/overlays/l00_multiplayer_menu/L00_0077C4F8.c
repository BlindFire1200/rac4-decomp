#include "common.h"
s32 func_0011AB04(void *);
void *func_0011AFC8(void *, void *, s32);
void func_005C17B0(void *, void *, s32);
extern void *D_002233A4;
void func_L00_0077C4F8(void *arg0) {
    u8 *state = *(u8 **)((u8 *)D_002233A4 + 0x68);
    s32 value = *(s32 *)((u8 *)arg0 + 0x18);
    *(s32 *)(state + 0x64) = value;
    if (value != 0) {
        state[0x6C] = 0;
    } else {
        u8 buffer[0x200];
        s32 length;
        s32 offset;
        func_005C17B0(buffer, (u8 *)arg0 + 0x1C, 0x100);
        length = func_0011AB04(buffer);
        offset = *(s32 *)(state + 0x68) + 0x6C;
        func_0011AFC8(state + offset, buffer, length);
        if (*((u8 *)arg0 + 0x11C) == 0) {
            *(s32 *)(state + 0x68) += length;
            return;
        }
    }
    state[0x60] = 0;
}
