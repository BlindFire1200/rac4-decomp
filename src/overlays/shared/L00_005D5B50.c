#include "common.h"
extern void func_L00_005BCAE0(void *, s32, s32);
extern u8 *D_00222454;
extern u8 *D_00222470;
extern s16 D_00240000[];
extern u8 *D_002223F4;
s32 D_0021E994 = 0;
void func_L00_005D5B50(void) {
    s32 bad;
    s16 *table;
    u8 *first;
    u8 *p;
    u8 *last;
    s32 count;
    s32 total;
    u8 *input;
    if (D_0021E994 == 0) {
        first = D_00222454;
        if (first != D_00222470) {
            do {
                *(u16 *)(first + 0x2E) = 0x7F80;
                first += 0x100;
            } while (first != D_00222470);
        }
    }
    table = D_00240000;
    bad = 0;
    func_L00_005BCAE0(table, -1, 0x2000);
    total = D_0021E994;
    input = D_002223F4;
    if (total > 0) {
        count = total;
        do {
            u32 offset = *(s16 *)(input + 2) + 0x400;
            if (offset < 0x1000U) table[offset] = *(u16 *)input;
            count--;
            input += 4;
        } while (count != 0);
    }
    p = D_00222454;
    while (p[0x20] != 0xFF) {
        if (*(u16 *)(p + 0x2E) != 0x7F80) {
            s32 offset = *(s16 *)(p + 0xB2) + 0x400;
            s16 value;
            if (offset < 0x1000 && (value = table[offset]) >= 0) {
                *(u16 *)(p + 0x2E) = ((value >> 3) << 8) | (1 << (value & 7));
            } else {
                *(u16 *)(p + 0x2E) = 0x7F80;
                bad++;
            }
        }
        p += 0x100;
    }
    if (bad != 0) {
        last = D_00222454;
        while (last[0x20] != 0xFF) {
            *(u16 *)(last + 0x2E) = 0x7F80;
            last += 0x100;
        }
    }
}
