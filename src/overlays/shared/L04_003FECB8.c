#include "common.h"

extern void func_L00_005BCAE0(void *, s32, s32);
extern void func_L00_005DDDE8(void *, s32, void *);
extern void func_L01_00591BD8(u8 *object, s32 new_state, s32 param);

/* Reset the state block's two 0x40-byte halves, register them, then switch to state 1. */
void func_L04_003FECB8(u8 *object) {
    u8 *state = *(u8 **)(object + 0xAC);
    *(s32 *)(state + 0x80) = 0;
    state[0x88] = 1;
    func_L00_005BCAE0(state, 0, 0x40);
    func_L00_005DDDE8(object, 0, state);
    func_L00_005BCAE0(state + 0x40, 0, 0x40);
    func_L00_005DDDE8(object, 1, state + 0x40);
    func_L01_00591BD8(object, 1, -1);
}
