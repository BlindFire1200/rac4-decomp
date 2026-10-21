#include "common.h"

extern void func_01EA95C0(void *);

// Release the four pointer fields at +0x10, +0x1C, +0x14 and +0x18 through
// func_01EA95C0 (each only when set), then release the owner itself. The
// stack copy of the pointer is what gives the final call its address argument.
void func_01EB2F70(void *owner) {
    s32 self_ref = (s32)owner;
    if (owner != NULL) {
        if (*(s32 *)((u8 *)owner + 0x10) != 0) {
            func_01EA95C0((u8 *)owner + 0x10);
        }
        if (*(s32 *)((u8 *)owner + 0x1C) != 0) {
            func_01EA95C0((u8 *)owner + 0x1C);
        }
        if (*(s32 *)((u8 *)owner + 0x14) != 0) {
            func_01EA95C0((u8 *)owner + 0x14);
        }
        if (*(s32 *)((u8 *)owner + 0x18) != 0) {
            func_01EA95C0((u8 *)owner + 0x18);
        }
        func_01EA95C0(&self_ref);
    }
}
