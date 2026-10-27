#include "common.h"

// Clears the word at offset 0x18 and clears bit 0 of the word at offset 0x10.
void func_00155CC8(char *arg0) {
    *(s32 *)(arg0 + 0x18) = 0;
    *(s32 *)(arg0 + 0x10) = *(s32 *)(arg0 + 0x10) & 0xFFFFFFFE;
}
