#include "common.h"

void func_L00_006A99F8(void *, void *);

void func_L01_00407B90(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0xAC);
    *(s32 *)(p + 0x50) = -1;
    *(s16 *)(p + 0x88) = 0;
    *(s16 *)(p + 0x8A) = 0;
    func_L00_006A99F8(arg0, p + 0x40);
}
