#include "common.h"

extern s32 func_0047C018(u32);
extern u32 D_002213F4;
extern u32 D_00221410;
extern u32 D_003D8760[];

s32 D_0021F2D0 = 0;
u8 D_0021F2D4 = 0;

// Collects up to 0x100 entries accepted by func_0047C018 into D_003D8760.
void func_0047C058(void) {
    u32 s0;
    u32 *s2;
    s32 s1;
    u8 f;

    if (D_0021F2D4 == 0) {
        s0 = D_002213F4;
        s2 = D_003D8760;
        s1 = 0;
        for (;;) {
            if (s0 >= D_00221410) {
                f = 1;
                break;
            }
            if (func_0047C018(s0) != 0) {
                *s2 = s0;
                s2++;
                s1++;
                if (s1 >= 0x100) {
                    f = 1;
                    break;
                }
            }
            s0 += 0x100;
        }
        D_0021F2D0 = s1;
        D_0021F2D4 = f;
    }
}
