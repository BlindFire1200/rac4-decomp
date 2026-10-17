#include "common.h"

extern void func_004535E0(s32);
s32 D_002206E8 = 0;

void func_004E7830(s32 arg0) {
    while (D_002206E8 & arg0) {
        func_004535E0(0x400);
    }
}
