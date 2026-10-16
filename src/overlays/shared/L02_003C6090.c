#include "common.h"
extern void func_L01_00591BD8(void *, s32, s32);
extern void func_L02_003C58D8(void *);
extern void func_L02_003C5F10(void *);
extern void func_L02_003C5FD0(void *);
extern void func_L02_003C5BB0(void *);
void func_L02_003C6090(void *arg0) {
    s32 *state;
    func_L01_00591BD8(arg0, 1, -1);
    *(u8 *)(arg0 + 0x30) = -1;
    state = *(s32 **)(arg0 + 0xAC);
    if (state[0] >= 0 && *(u8 *)((u8 *)state + 0x33) < 0x10) state[0] = -1;
    func_L02_003C58D8(state);
    func_L02_003C5F10(state);
    func_L02_003C5FD0(state);
    func_L02_003C5BB0(state);
}
