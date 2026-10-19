#include "common.h"

#define W(p, o) (*(s32 *)((u8 *)(p) + (o)))
#define H(p, o) (*(u16 *)((u8 *)(p) + (o)))
#define SH(p, o) (*(s16 *)((u8 *)(p) + (o)))
#define B(p, o) (*(u8 *)((u8 *)(p) + (o)))
#define P(p, o) (*(void **)((u8 *)(p) + (o)))

// Update the flag bits (+0x34) of the linked objects of a player: clear bit 0
// of the main one at +0x634 and of the pairs in the +0x22F0 table, copy or
// clear the +0x98 word of the main one depending on the +0x25CC state, then set
// bit 0 or bits 0 and 6 of the first pair's objects under the +0x2EE8, +0x2318,
// +0x2668 and +0x2663 conditions.
void func_005239C8(void *arg0) {
    s32 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    u8 *var_a0;

    temp_v1 = P(arg0, 0x634);
    H(temp_v1, 0x34) = (u16)(H(temp_v1, 0x34) & 0xFFFE);
    temp_v1_2 = W(arg0, 0x25CC);
    if ((temp_v1_2 == 0x99) || (temp_v1_2 == 0x31)) {
        W(P(arg0, 0x634), 0x98) = 0;
    } else {
        temp_v0 = P(arg0, 0x634);
        W(temp_v0, 0x98) = W(P(temp_v0, 0x24), 0x10);
    }
    var_a0 = arg0;
    do {
        temp_v1_3 = P(var_a0, 0x22F0);
        if (temp_v1_3 != 0) H(temp_v1_3, 0x34) = (u16)(H(temp_v1_3, 0x34) & 0xFFFE);
        temp_v1_4 = P(var_a0, 0x22F4);
        var_a0 += 0x50;
        if (temp_v1_4 != 0) H(temp_v1_4, 0x34) = (u16)(H(temp_v1_4, 0x34) & 0xFFFE);
    } while ((s32)var_a0 < (s32)((u8 *)arg0 + 0x1E0));
    if ((W(arg0, 0x2EE8) != 0) && (W(arg0, 0x2318) == 1)) {
        temp_v1_5 = P(arg0, 0x22F0);
        if (temp_v1_5 != 0) H(temp_v1_5, 0x34) = (u16)(H(temp_v1_5, 0x34) | 1);
        temp_v1_6 = P(arg0, 0x22F4);
        if (temp_v1_6 != 0) H(temp_v1_6, 0x34) = (u16)(H(temp_v1_6, 0x34) | 1);
    }
    if (((B(arg0, 0x2668) != 0) && (W(arg0, 0x2318) == 1)) || (B(arg0, 0x2663) != 0)) {
        temp_a0 = P(arg0, 0x22F0);
        if (temp_a0 != 0) {
            H(temp_a0, 0x34) = (u16)(H(temp_a0, 0x34) | 0x41);
            temp_a0_2 = P(arg0, 0x22F0);
            if (SH(temp_a0_2, 0xBC) == 0x1094) {
                temp_a0_3 = P(P(temp_a0_2, 0xAC), 0x64);
                H(temp_a0_3, 0x34) = (u16)(H(temp_a0_3, 0x34) | 0x41);
            }
        }
    }
}
