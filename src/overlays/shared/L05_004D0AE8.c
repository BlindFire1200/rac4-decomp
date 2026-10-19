#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern s32 func_L05_004D09C8(s32, s32, u128 *, u128 *, u128 *);
extern void func_L05_004D0B70(s32, u128, u128, f32);

// For each of the four slots, fetch its data through func_L05_004D09C8 and pass it
// to func_L05_004D0B70 when the slot has some.
void func_L05_004D0AE8(s32 owner) {
    u128 a;
    u128 b;
    f32 c;
    s32 i = 0;
    do {
        if (func_L05_004D09C8(owner, i, &a, &b, (u128 *)&c))
            func_L05_004D0B70(owner, a, b, c);
        i++;
    } while (i < 4);
}
