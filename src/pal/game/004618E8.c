#include "common.h"

extern s32 func_00460900(s32, s32);
extern u8 D_0021DDDA;
extern u8 D_0021DDDB;
extern u8 D_0021DDDC;

// When none of the three flags is set, runs func_00460900(0x8000, 7) and sets the first flag.
void func_004618E8(void) {
    if (D_0021DDDA == 0) {
        if (D_0021DDDB == 0 && D_0021DDDC == 0) {
            func_00460900(0x8000, 7);
            D_0021DDDA = 1;
        }
    }
}
