/* When the byte at 0x172444 is nonzero, call the observed helper; in either case return one. */
/* cflags: -G0 */
#include "common.h"

extern u8 D_00172444;
s32 func_01E9A000();

s32 func_00460A20(void) {
    if (D_00172444 != 0) {
        func_01E9A000();
    }
    return 1;
}
