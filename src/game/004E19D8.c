#include "common.h"

extern void func_004E1B18(void *);
extern char D_1D24C0[];

// Loop through structure array with condition checking
void func_004E19D8(s32 arg0, s32 arg1) {
    void *s0;
    s32 s2;

    s0 = (void *)&D_1D24C0[0];
    s2 = 0x33;

    do {
        s32 field_1c;
        s16 field_a;

        s2 -= 1;

        if (arg1 != 0) {
            field_1c = *(s32 *)((u32)s0 + 0x1C);
            if (arg1 != field_1c) {
                s0 = (void *)((u32)s0 + 0x80);
                continue;
            }
        }

        field_a = *(s16 *)((u32)s0 + 0xA);
        if (arg0 != field_a) {
            s0 = (void *)((u32)s0 + 0x80);
            continue;
        }

        func_004E1B18(s0);
        s0 = (void *)((u32)s0 + 0x80);
    } while (s2 >= 0);
}
