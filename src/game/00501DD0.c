#include "common.h"

s32 D_00220B04 = 0;

extern void func_00501D70(void);

/* Increments the counter D_00220B04 and then calls func_00501D70. */
void func_00501DD0(void) {
    D_00220B04 = D_00220B04 + 1;
    func_00501D70();
}
