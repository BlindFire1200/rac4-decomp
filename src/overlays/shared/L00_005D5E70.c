#include "common.h"

extern void func_L00_005D2000(void);
s32 D_0021EA00 = 0;

// Run the action once per pending count, decrementing it to zero.
void func_L00_005D5E70(void) {
    while (D_0021EA00 > 0) {
        func_L00_005D2000();
        D_0021EA00--;
    }
}
