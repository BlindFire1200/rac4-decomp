#include "common.h"

extern void func_00420B10(s32, s32);
extern void func_00474368(void *, s32, s32);

// Reset the owner's +0x1CD slot (releasing it unless it is 0x40 or 0x7F),
// clear +0x200, set +0x1CC to 0x19 and move the object to state 5 (-1).
void func_L02_004C6B18(void *object, void *owner) {
    if (*(u8 *)(owner + 0x1CD) != 0x40 && *(u8 *)(owner + 0x1CD) != 0x7F)
        func_00420B10(*(u8 *)(owner + 0x1CD), 0);
    *(u8 *)(owner + 0x200) = 0;
    *(u8 *)(owner + 0x1CD) = 0x40;
    func_00474368(object, 5, -1);
    *(u8 *)(owner + 0x1CC) = 0x19;
}
