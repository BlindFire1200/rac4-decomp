/* cflags: -mno-split-addresses */
#include "common.h"

extern s32 D_221454;
extern s32 D_221458;
extern s32 D_22145C;
extern s32 D_221464;
extern s32 D_221468;
extern s32 D_22146C;

s32 D_221460 = 0;

/* func_0046F6B0: initialises the 0x2214xx state block (copies a base pointer,
   sets a counter limit and clears the counters/flags). */
void func_0046F6B0(void) {
    D_221458 = D_221454;
    D_22145C = 0x3094;
    D_22146C = 0x7FFFFFFF;
    D_221464 = 0;
    D_221468 = 0;
    D_221460 = 0;
}
