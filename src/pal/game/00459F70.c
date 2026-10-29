#include "common.h"
extern u32 *D_00221F20;
extern u32 D_0020BD30[];
/* Append four words to the current command stream. */
void func_00459F70(void) {
    D_00221F20[0] = 0x30000026;
    D_00221F20[1] = (u32) D_0020BD30;
    D_00221F20[2] = 0;
    D_00221F20[3] = 0x50000026;
    D_00221F20 += 4;
}
