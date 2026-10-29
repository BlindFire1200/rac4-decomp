/* Store the result of the observed overlay helper in the 32-bit global. */
/* cflags: -G0 */
#include "common.h"

extern s32 D_00173A9C;
s32 func_L00_00702B60();

void func_L00_00702C60(void) {
    D_00173A9C = func_L00_00702B60();
}
