/* cflags: -G0 */
/* C adapted from rac3-decomp func_003E69F0 (NTSC-U func_003E68A8, commit 403f30a9) */
#include "common.h"

extern s32 func_00453608();
void func_00500950(u8 *p) {
    func_00453608((s32)(p + 8), 0, 0x2000);
    *(s32 *)(p + 4) = 0;
}
