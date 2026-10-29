/* If the gp-relative word at 0x21EF94 is nonzero, pass it to the observed helper and clear the word. */
/* cflags: @ee29 -O2 -G8 */
#include "common.h"

s32 func_0011EFB0(s32);
extern s32 D_0021EF94;

void func_00460790(void) {
    if (D_0021EF94 != 0) {
        func_0011EFB0(D_0021EF94);
        D_0021EF94 = 0;
    }
}
