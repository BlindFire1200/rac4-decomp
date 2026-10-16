#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern s32 func_L05_004D09C8(s32, s32, u128 *, u128 *, u128 *);
extern void func_L05_004D0B70(s32, u128, u128, f32);
void func_L05_004D0AE8(s32 arg0) {
    u128 a;
    u128 b;
    f32 c;
    s32 i = 0;
    do {
        if (func_L05_004D09C8(arg0, i, &a, &b, (u128 *)&c))
            func_L05_004D0B70(arg0, a, b, c);
        i++;
    } while (i < 4);
}
