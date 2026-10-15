#include "common.h"

// Clears bit 1 in field at offset 0xE0
void func_L00_005C1C80(void *arg0) {
    u16 *addr = (u16 *)((u32)arg0 + 0xE0);
    *addr = *addr & 0xFFFD;
}
