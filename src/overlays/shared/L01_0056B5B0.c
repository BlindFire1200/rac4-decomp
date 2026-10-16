#include "common.h"

extern s32 func_L00_00500CE0(void *);
extern s32 func_L01_0056B748(void *);

// Return 1 when the owner is null or idle: its +0x3E1 byte is set, +0 is zero,
// +2 is not positive, every node of the +0x3F0 list (next at +0x1AC) passes
// func_L01_0056B748 and func_L00_00500CE0 on +0xD0 is below 1. Otherwise 0.
s32 func_L01_0056B5B0(u8 *owner) {
    u8 *node;

    if (owner == 0) {
        return 1;
    }
    if (*(u8 *)(owner + 0x3E1) == 0) {
        return 0;
    }
    if (owner[0] != 0) {
        return 0;
    }
    if (*(s16 *)(owner + 2) > 0) {
        return 0;
    }
    node = *(u8 **)(owner + 0x3F0);
    while (node != 0) {
        if (func_L01_0056B748(node) == 0) {
            return 0;
        }
        node = *(u8 **)(node + 0x1AC);
    }
    return func_L00_00500CE0(owner + 0xD0) < 1;
}
