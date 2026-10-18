#include "common.h"

extern s32 D_0021E694;

// Clear the first count words at +0x230 of a1 (6 in mode 1 of D_0021E694,
// otherwise 12).
void func_L05_00468718(u8 *unused0, u8 *record) {
    s32 i;
    s32 count = (D_0021E694 == 1) ? 6 : 12;
    s32 *p = (s32 *)(record + 0x230);
    for (i = 0; i < count; i++) {
        if (p[i] != 0) p[i] = 0;
    }
}
