#include "common.h"

extern s32 D_2F3408[];

// Record the new value in field 0xC0, marking the record dirty if it changed.
void func_00499270(s32 arg0) {
    u8 *base = (u8 *)D_2F3408;

    if (*(s32 *)(base + 0xC0) != arg0) {
        *(s32 *)(base + 0xC0) = arg0;
        *(u8 *)D_2F3408 = 1;
    }
}
