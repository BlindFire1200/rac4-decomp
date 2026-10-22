#include "common.h"

/* Calls func_0054F548 with the object, its unsigned byte at offset 0x20, and type 1. */
extern void func_0054F548(void *o, u8 state, s32 type);

void func_L14_003E9880(void *arg0) {
    func_0054F548(arg0, *(u8 *)((u8 *)arg0 + 0x20), 1);
}
