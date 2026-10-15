#include "common.h"

extern u8 D_0022CA80[];

// Set fields for the selected record when it is inactive.
void func_L00_0058DFA0(s32 arg0, s32 arg1, f32 fparg0, f32 fparg1) {
    u8 *record = D_0022CA80 + arg0 * 0x470;
    u8 *object = *(u8 **)(record + 0x50);
    if (*(s16 *)(object + 0x86) == 0) {
        u8 *field = *(u8 **)(object + 0x70) + 0x180;
        *(s16 *)(field + 0x3C) = 1;
        *(f32 *)(field + 0x48) = fparg1;
        *(f32 *)(field + 0x40) = fparg0;
        if (arg1 != 0) {
            *(f32 *)(field + 0x58) = fparg0;
        }
    }
}
