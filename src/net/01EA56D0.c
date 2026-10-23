#include "common.h"

// Call the virtual method at +0x3C of the object in D_00167F40_[0], when set.
extern s32 D_00167F40_[];

void func_01EA56D0(void) {
    u8 *obj = (u8 *)D_00167F40_[0];

    if (obj != NULL) {
        (*(void (**)(void))(obj + 0x3C))();
    }
}
