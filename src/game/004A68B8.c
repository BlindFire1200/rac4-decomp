#include "common.h"

extern u8 D_308108[];

void func_004A68B8(s32 arg0) {
    *((s32 *)(D_308108 + (arg0 * 0xB8))) = 1;
}
