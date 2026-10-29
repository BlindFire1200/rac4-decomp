#include "common.h"

extern s32 D_00170E68;

// Clears two words of the object and stores the address of a global in a third.
void func_01F075F4(char *arg0) {
    *(s32 *)(arg0 + 0x108) = 0;
    *(s32 **)(arg0 + 0x264) = &D_00170E68;
    *(s32 *)(arg0 + 0x10C) = 0;
}
