#include "common.h"

extern void func_00501458(void *, void *, void *, void *, void *, void *);
s32 D_002219E8 = 0;
extern void * D_31B720[];
extern void func_004D3338();
extern void func_004D3368();
extern void func_004D3388();
extern void func_004D3398();

/* Initialize and return pointer to D_31B720 structure */
void *func_004D36E0(void) {
    if (D_002219E8 == 0) {
        func_00501458(&D_31B720, &func_004D3338, &func_004D3388, &func_004D3368, (void *)((u32)&func_004D3398 + 8), 0);
        D_002219E8 = 1;
    }
    return &D_31B720;
}
