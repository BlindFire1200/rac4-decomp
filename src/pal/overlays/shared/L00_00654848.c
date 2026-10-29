/* Write 27 to the global at 0x3147D8, then invoke the helper with argument 12. */
/* cflags: -G0 */
#include "common.h"

extern s32 D_003147D8;
s32 func_004985F0(s32);

void func_L00_00654848(void) {
    D_003147D8 = 0x1B;
    func_004985F0(0xC);
}
