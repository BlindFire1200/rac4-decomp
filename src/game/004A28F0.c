#include "common.h"

// Call the virtual method at offset 0x1C on the object's f4 field.
void func_004A28F0(void *arg0, s32 arg1) {
    (*(void (**)(void *, s32, s32))((char *)*(u32 *)((char *)arg0 + 4) + 0x1C))(arg0, arg1, 0);
}
