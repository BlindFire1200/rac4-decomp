#include "common.h"

extern void func_005BCAE0(void *p, s32 v, s32 n);
extern s32 D_00222354;

s32 D_0021E9FC = 0;

/* Clears the pending debug/log message queue of the given channel */
void func_L00_005D3E88(void) {
    func_005BCAE0(D_00222354, 0, D_0021E9FC);
}
