#include "common.h"

// Store zero to arg1 at offset 0x22F8, with leftover arg0
void func_L00_006EE734(void *arg0, void *arg1) {
    *(char *)((u32)arg1 + 0x22F8) = 0;
}
