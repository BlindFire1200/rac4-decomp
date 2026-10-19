#include "common.h"

void func_L00_00599C48(s32);

// Release the handle at +0x28 (func_L00_00599C48) when it is set and reset it
// to -1.
void func_L01_00413950(void *object) {
    s32 handle;

    handle = *(s32 *)((u8 *)object + 0x28);
    if (handle >= 0) {
        func_L00_00599C48(handle);
        *(s32 *)((u8 *)object + 0x28) = -1;
    }
}
