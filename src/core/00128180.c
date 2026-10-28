/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_001203F0 (NTSC-U func_001203F0, commit 403f30a9) */
#include "common.h"

typedef struct {
    int f0;
    volatile int f4;
    u8 *f8;
} Type1;
typedef struct {
    u8 pad0[0x18];
    Type1 *f18;
} Type2;
extern Type2 D_001A5C90;
extern void func_00127E30();

int func_00128180(char *buf, int n)
{
    int i;

    for (i = 0; i < n; i++) {
        while (D_001A5C90.f18->f4 == 0) {
        }
        buf[i] = *D_001A5C90.f18->f8;
        func_00127E30(D_001A5C90.f18);
        if (buf[i] == '\n' || buf[i] == '\r') {
            return i + 1;
        }
    }
    return i;
}
