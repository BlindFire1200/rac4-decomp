/* Call the catalogued PAL overlay helper at 0x70BF98, write 3 into the gp-relative global, and return 1. */
/* cflags: @ee29 -O2 -G8 */
#include "common.h"

s32 func_L00_0070BF98();
extern s32 D_0022168C;

s32 func_L00_0075A948(void) {
    func_L00_0070BF98();
    D_0022168C = 3;
    return 1;
}
