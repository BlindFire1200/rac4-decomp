/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B0AE0 (NTSC-U func_003B0940, commit 403f30a9) */
#include "common.h"

extern void func_00126E20();
extern s32 func_00126F60();
extern s32 func_00126F40();
extern void func_00159818();
void func_004EFD88(u8 *o, s32 a, s32 b, s32 c) {
    s32 s[4];
    s32 h;
    func_00126E20(0);
    s[0] = a;
    s[1] = *(s32 *)(o + 0x48);
    s[2] = b;
    s[3] = 0;
    do {
        h = func_00126F60(s, 1);
    } while (h == 0);
    do {
    } while (func_00126F40(h) >= 0);
    func_00159818(b, c);
}
