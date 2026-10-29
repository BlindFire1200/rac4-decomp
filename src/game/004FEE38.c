#include "common.h"

extern void func_0015DB88(void);
extern u8 D_003D3508[];

/* Store address of D_003D3508 to arg0+8, then conditionally call func_0015DB88 if arg1 & 1 != 0 */
void func_004FEE38(void *arg0, s32 arg1) {
    *(void **)((char *)arg0 + 8) = D_003D3508;

    if ((arg1 & 1) != 0) {
        func_0015DB88();
    }
}
