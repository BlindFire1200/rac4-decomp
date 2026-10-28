/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00123D10 (NTSC-U func_00123D10, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 b[4];
} Type1;

extern s32 D_00164740[];
extern u8 D_001A9700[];
extern u8 D_001A9728[];
extern u8 D_001A9500[];
extern s32 func_0012A538(void *, u32, s32);
extern s32 func_0012A718();

s32 func_0012C4B8(void)
{
    s32 i;

    if (D_00164740[0] < 0) {
        for (;;) {
            if (func_0012A538(D_001A9700, 0x80000006, 0) < 0) {
                return -1;
            }
            if (*(s32 *)(D_001A9700 + 0x24) != 0) {
                D_00164740[0] = 0;
                if (func_0012A718(D_001A9700, 0xFF, 0, 0, 0, D_001A9500, 4, 0, 0) < 0) {
                    return 0xFFFEFFFF;
                }
                *(Type1 *)D_001A9728 = *(Type1 *)D_001A9500;
                return 0;
            }
            i = 0x100000;
            while (--i != -1) {
            }
        }
    }
    return 0;
}
