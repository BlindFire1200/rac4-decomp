#include "common.h"
extern void func_L07_0049A6C0(void);
extern void func_L01_00591BD8(void *, s32, s32);
void func_L07_0049AA38(void *arg0) {
    if (*(u8 *)(arg0 + 0x20) == 0) func_L07_0049A6C0();
    if (*(u8 *)(arg0 + 0x20) == 1) func_L01_00591BD8(arg0, 2, 0);
    else func_L01_00591BD8(arg0, *(u8 *)(arg0 + 0x20), 0);
}
