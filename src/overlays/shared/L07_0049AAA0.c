#include "common.h"

extern void func_0052DA28(void *o, u8 state, s32 type);
extern void func_L07_0049A6C0(void *o);

// If the object's state byte at +0x20 is zero, run func_L07_0049A6C0 on it, then set the object to state 1.
void func_L07_0049AAA0(void *object) {
    if (*(u8 *)(object + 0x20) == 0) func_L07_0049A6C0(object);
    func_0052DA28(object, *(u8 *)(object + 0x20), 1);
}
