/* cflags: -G0 */
/* C adapted from rac4-decomp func_004D2B00 (commit 5d517a2) */
#include "common.h"


extern s32 func_00505B20(void);
extern u8 D_0031B6B0[];

/* Calls the handler stored at +0x10 of the current player's 0x1C-byte table entry with 3. */

void func_004D2B40(void) {
    u8 *var7 = D_0031B6B0 + func_00505B20() * 0x1C;
    (*(void (*)(s32))*(s32 *)(var7 + 0x10))(3);
}
