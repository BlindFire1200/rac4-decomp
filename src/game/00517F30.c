#include "common.h"

extern s32 D_00220B98;

// Clear the word at 0x2DF4, set the word at 0x2E7C to -1 and copy the global into 0x2E78.
void func_00517F30(void *arg0) {
    s32 var_v0;

    var_v0 = D_00220B98;
    *(s32 *)((char *)arg0 + 0x2DF4) = 0;
    *(s32 *)((char *)arg0 + 0x2E78) = var_v0;
    *(s32 *)((char *)arg0 + 0x2E7C) = -1;
}
