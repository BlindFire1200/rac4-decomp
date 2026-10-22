#include "common.h"

s32 D_00220B04 = 0;

extern void func_00501BC8(void);

/* Decrements the counter D_00220B04 and then calls func_00501BC8. */
void func_00501DF8(void) {
    D_00220B04 = D_00220B04 - 1;
    func_00501BC8();
}
