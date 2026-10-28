/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B07C0 (NTSC-U func_003B0620, commit 403f30a9) */
#include "common.h"

extern s32 func_004F0220(void);
extern void func_004EFE28(s32 *);
extern void func_004EFFB0(s32 *);
void func_004EFA68(s32 *p) {
    if (p[0] != 0) {
        s32 t = p[1];
        if (t == 4) func_004F0220();
        else if (t == 2) func_004EFE28(p);
        else if (t == 3) func_004EFFB0(p);
    }
}
