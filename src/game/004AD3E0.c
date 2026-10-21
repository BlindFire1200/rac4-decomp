#include "common.h"

extern s32 D_308B60[];
extern u8 D_308B80[];
void func_004AD310(void);

// Clear bit index of the mask D_308B60[0] (running func_004AD310 once no bit is
// left) and set the first word of the 0x170-byte entry at D_308B80 for that
// index to 1.
void func_004AD3E0(s32 index) {
    s32 value = D_308B60[0] & ~(1 << index);
    D_308B60[0] = value;
    if (value == 0) func_004AD310();
    *(s32 *)(D_308B80 + index * 0x170) = 1;
}
