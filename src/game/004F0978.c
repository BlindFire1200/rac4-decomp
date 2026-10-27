#include "common.h"

// Clears two words at arg0 + 0x50000 and stores that offset as a pointer value.
void func_004F0978(void *arg0) {
    s32 *p = (s32 *)((u8 *)arg0 + 0x50000);
    p[2] = 0x50000;
    p[0] = 0;
    p[1] = 0;
}
