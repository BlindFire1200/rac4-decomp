#include "common.h"

extern s32 D_2F3408[];

// Record the new value in field 0xBC, marking the record dirty if it changed.
void func_00498FC8(s32 arg0) {
    u8 *base = (u8 *)D_2F3408;

    if (*(s32 *)(base + 0xBC) != arg0) {
        *(s32 *)(base + 0xBC) = arg0;
        *(u8 *)D_2F3408 = 1;
    }
}
