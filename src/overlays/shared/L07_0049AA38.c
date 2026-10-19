#include "common.h"

extern void func_L07_0049A6C0(void);
extern void func_L01_00591BD8(void *, s32, s32);

// Run func_L07_0049A6C0 in state 0, then move the object to state 2 when it is
// in state 1, else keep its current state (0).
void func_L07_0049AA38(void *object) {
    if (*(u8 *)(object + 0x20) == 0) func_L07_0049A6C0();
    if (*(u8 *)(object + 0x20) == 1) func_L01_00591BD8(object, 2, 0);
    else func_L01_00591BD8(object, *(u8 *)(object + 0x20), 0);
}
