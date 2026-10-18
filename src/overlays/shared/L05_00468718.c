#include "common.h"
extern s32 D_0021E694;
void func_L05_00468718(u8 *a0, u8 *a1) {
    s32 i;
    s32 count = (D_0021E694 == 1) ? 6 : 12;
    s32 *p = (s32 *)(a1 + 0x230);
    for (i = 0; i < count; i++) {
        if (p[i] != 0) p[i] = 0;
    }
}
