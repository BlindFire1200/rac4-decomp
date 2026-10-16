#include "common.h"

extern s32 func_L00_00500CE0(void *);
extern s32 func_L01_0056B748(void *);

s32 func_L01_0056B5B0(u8 *arg0) {
    u8 *node;

    if (arg0 == 0) {
        return 1;
    }
    if (*(u8 *)(arg0 + 0x3E1) == 0) {
        return 0;
    }
    if (arg0[0] != 0) {
        return 0;
    }
    if (*(s16 *)(arg0 + 2) > 0) {
        return 0;
    }
    node = *(u8 **)(arg0 + 0x3F0);
    while (node != 0) {
        if (func_L01_0056B748(node) == 0) {
            return 0;
        }
        node = *(u8 **)(node + 0x1AC);
    }
    return func_L00_00500CE0(arg0 + 0xD0) < 1;
}
