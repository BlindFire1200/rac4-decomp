#include "common.h"

void func_L00_005DD4A0(s32);

// Release (func_L00_005DD4A0) and clear the two handles at +0x2F0 and +0x2F4 of
// a1.
void func_L04_00498038(u8 *arg0, u8 *arg1) {
    s32 i;
    s32 *p = (s32 *)(arg1 + 0x2F0);
    for (i = 1; i >= 0; i--, p++) {
        s32 value = *p;
        if (value != 0) {
            func_L00_005DD4A0(value);
            *p = 0;
        }
    }
}
