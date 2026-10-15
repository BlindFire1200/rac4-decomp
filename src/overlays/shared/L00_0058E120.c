#include "common.h"

extern u8 D_0022CA80[];

// Update nonzero coordinate values when the selected record is inactive.
void func_L00_0058E120(s32 arg0, f32 fparg0, f32 fparg1) {
    u8 *record = D_0022CA80 + arg0 * 0x470;
    u8 *object = *(u8 **)(record + 0x50);
    if (*(s16 *)(object + 0x86) == 0) {
        u8 *field = *(u8 **)(object + 0x70) + 0x60;
        if (fparg0 != 0.0f) {
            *(f32 *)(field + 0xFC) = fparg0;
        }
        if (fparg1 != 0.0f) {
            *(f32 *)(field + 0x100) = fparg1;
        }
    }
}
