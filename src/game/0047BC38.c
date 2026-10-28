#include "common.h"

extern void *func_00476690();
/* Stores arg1 at offset 0x2C of the object returned by func_00476690, when there is one. */
void func_0047BC38(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00476690();
    if (temp_v0 != NULL) {
        *(s16 *)((u8 *)temp_v0 + 0x2C) = arg1;
    }
}
