/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012B098 (NTSC-U func_0012B098, commit 403f30a9) */
#include "common.h"

extern s32 D_00165FD0;
extern s32 D_00165FF4;
extern s32 D_00167190;
extern s32 func_001294F0();
extern u8 D_00194938[];
extern s32 func_0012A918(void *);
extern s32 func_00127A08(s32);
s32 func_00137448(s32 arg0) {
    if (arg0 == 0) {
        if (D_00165FD0 > 0) {
            func_001294F0(D_00194938);
        }
        while (D_00165FF4 != 0 || func_0012A918(&D_00167190) != 0) {
            func_00127A08(0xFA0);
        }
        return 0;
    }
    if (D_00165FF4 != 0 || func_0012A918(&D_00167190) != 0) {
        return 1;
    }
    return 0;
}
