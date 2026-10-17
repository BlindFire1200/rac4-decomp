#include "common.h"
extern s32 D_308B60[];
extern u8 D_308B80[];
void func_004AD310(void);
void func_004AD3E0(s32 arg0) {
    s32 value = D_308B60[0] & ~(1 << arg0);
    D_308B60[0] = value;
    if (value == 0) func_004AD310();
    *(s32 *)(D_308B80 + arg0 * 0x170) = 1;
}
