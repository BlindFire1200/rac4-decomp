#include "common.h"

extern u8 *D_00222C00;
extern void func_L00_005CBF20(s32);
extern void func_L00_005DD4A0(void *);
extern void func_L00_00607960(s32);

void func_L01_003D3F38(u8 *arg0) {
    u8 *state = *(u8 **)(arg0 + 0xAC);
    u8 *entry = state + 0x20;
    s32 i = 7;
    u8 *current;

    do {
        s32 value = *(s32 *)entry;
        if (value != 0) {
            func_L00_00607960(value);
            *(s32 *)entry = 0;
        }
        entry += 4;
        i--;
    } while (i >= 0);

    current = D_00222C00;
    if (*(s32 *)(state + 4) >= 0) {
        func_L00_005CBF20(*(s32 *)(state + 4));
        *(s32 *)(state + 4) = -1;
        current = D_00222C00;
    }
    if (current == arg0) {
        arg0[0x20] = 5;
    } else {
        func_L00_005DD4A0(arg0);
    }
}
