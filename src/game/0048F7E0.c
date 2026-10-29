#include "common.h"

extern s32 D_1EE600_[];
#define D_1EE600 (D_1EE600_[0])

// Clear the word at 0x190 and the halfword at 0x18E of the object, or of D_1EE600 when the pointer is null.
void func_0048F7E0(u8 *arg0) {
    u8 *p = arg0;
    if (p == 0) {
        p = (u8 *)D_1EE600_;
    }
    *(s16 *)(p + 0x18E) = 0;
    *(s32 *)(p + 0x190) = 0;
}
