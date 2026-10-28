/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00120668 (NTSC-U func_00120668, commit 403f30a9) */
#include "common.h"

extern s32 func_00128310(s32);
void func_001283F8(s32 c) {
    if (c == '\n') {
        func_00128310('\r');
        func_00128310('\n');
    } else {
        func_00128310(c);
    }
}
