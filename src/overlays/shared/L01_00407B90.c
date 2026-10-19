#include "common.h"

void func_L00_006A99F8(void *, void *);

// Reset the linked object's +0x50 word to -1 and its +0x88/+0x8A halfwords to
// 0, then run func_L00_006A99F8 on its +0x40 block.
void func_L01_00407B90(u8 *object) {
    u8 *linked = *(u8 **)(object + 0xAC);
    *(s32 *)(linked + 0x50) = -1;
    *(s16 *)(linked + 0x88) = 0;
    *(s16 *)(linked + 0x8A) = 0;
    func_L00_006A99F8(object, linked + 0x40);
}
