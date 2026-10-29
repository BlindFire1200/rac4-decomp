/* cflags: @ee29 -O2 -G8 */
#include "common.h"

extern s32 D_0021FC28;
extern s32 D_0021FC2C;
/* Set the first 32-bit global to the argument and zero the second global. */

void func_004D4808(s32 arg0) {
    D_0021FC28 = arg0;
    D_0021FC2C = 0;
}
