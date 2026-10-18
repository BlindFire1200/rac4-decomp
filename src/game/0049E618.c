#include "common.h"
extern void func_00504F68(s32, s32);
extern u8 D_307074[];
extern u8 D_307220[];
void func_0049E618(s32 arg0) {
    u8 *target;
    s32 offset;
    s32 a;
    s32 b;
    s32 count;
    if (arg0 == 4) target = D_307074;
    else target = D_307220 + (arg0 << 9);
    offset = arg0 << 6;
    *(s32 *)(target + 0x10) = 0;
    a = offset + 0x130005;
    b = offset + 0x130006;
    count = 2;
    do {
        func_00504F68(b, 0);
        b += 2;
        func_00504F68(a, 0);
        count--;
        a += 2;
    } while (count >= 0);
}
