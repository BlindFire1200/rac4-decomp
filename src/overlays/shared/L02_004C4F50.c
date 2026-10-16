#include "common.h"
extern void func_L01_00520C50(s32, s32);
extern void func_L01_00591BD8(void *, s32, s32);
void func_L02_004C4F50(void *arg0, void *arg1) {
    if (*(u8 *)(arg1 + 0x1CD) != 0x40 && *(u8 *)(arg1 + 0x1CD) != 0x7F)
        func_L01_00520C50(*(u8 *)(arg1 + 0x1CD), 0);
    *(u8 *)(arg1 + 0x200) = 0;
    *(u8 *)(arg1 + 0x1CD) = 0x40;
    func_L01_00591BD8(arg0, 5, -1);
    *(u8 *)(arg1 + 0x1CC) = 0x1E;
}
