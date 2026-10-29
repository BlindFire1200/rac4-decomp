/* cflags: -G0 */
#include "common.h"

extern s32 D_004668B8;
s64 func_L00_004F89C8();

s64 func_L00_004F8690(void) {
    if (D_004668B8) return ((s64 (*)(void))D_004668B8)();
    func_L00_004F89C8(26, 100, 14, 0, 0);
    return 0;
}
