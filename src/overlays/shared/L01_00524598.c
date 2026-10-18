#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern s32 func_L00_005E6058(void *, s32, s32);
extern s32 func_L00_005E7E48(void *, void *, s32);
extern s32 func_L00_005EC2D0(u128, s32, s32);
extern s32 func_L00_005EC3C8(u128, s32, s32);
extern u8 *D_00222990;
extern s32 *D_00297680[];
extern u8 *D_003660F8[];

// Test the actor's class entry against each of the ten slots, then fall back to two flags.
s32 func_L01_00524598(u8 *actor) {
    u8 *info = *(u8 **)(D_00222990 + *(s16 *)(actor + 0x84) * 32 + 0x1C);
    s32 i;
    u8 *p;
    s32 *q;
    u8 **list;

    if (*(s32 *)(actor + 0x94) != 0) {
        return 0;
    }
    list = D_003660F8;
    p = *list;
    i = 0;
    do {
        if (p == 0) {
            goto next;
        }
        if (*(s32 *)(info + 0xC) >= 0) {
            if (func_L00_005E6058(p + 0xA0, *(s32 *)(info + 0xC), 0)) {
                return 1;
            }
        } else if (*(s32 *)(info + 0x10) >= 0) {
            if (func_L00_005EC2D0(*(u128 *)(p + 0xA0), *(s32 *)(info + 0x10), 0)) {
                return 1;
            }
        } else if (*(s32 *)(info + 0x8) >= 0) {
            if (func_L00_005EC3C8(*(u128 *)(p + 0xA0), *(s32 *)(info + 0x8), 0)) {
                return 1;
            }
        } else if (*(s32 *)(info + 0x14) >= 0) {
            q = D_00297680[*(s32 *)(info + 0x14)];
            if (func_L00_005E7E48(p + 0xA0, q + 4, *q)) {
                return 1;
            }
        }
    next:
        list++;
        i++;
        p = *list;
    } while (i < 10);
    if (info[0x105] && !info[0x106]) {
        return 1;
    }
    return 0;
}
