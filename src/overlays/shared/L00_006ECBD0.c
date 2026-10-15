#include "common.h"

extern void func_L00_006069A0(void *, void *, s32);

// Save and clear fields, then initialize the associated record.
void func_L00_006ECBD0(u8 *arg0) {
    u8 *first;
    u8 *second;

    first = *(u8 **)(arg0 + 0x2F00);
    *(s32 *)(first + 0x1AC) = *(s32 *)(first + 0x348);
    *(s32 *)(*(u8 **)(arg0 + 0x2F00) + 0x1A0) = 0;
    second = *(u8 **)(arg0 + 0x2F00);
    *(s32 *)(second + 0x1BC) = *(s32 *)(second + 0x1B0);
    *(s32 *)(*(u8 **)(arg0 + 0x2F00) + 0x1B0) = 0;
    func_L00_006069A0(*(void **)(arg0 + 0x2F00), (u8 *)*(void **)(arg0 + 0x2F28) + 0xAB4, 0x14);
}
