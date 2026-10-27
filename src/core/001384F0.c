/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012C088 (NTSC-U func_0012C088, commit 403f30a9) */
#include "common.h"

extern s32 func_0012B338(void *, s32);
extern s32 func_0012B980(s32, void *, s32);
extern void func_0012B5C8(s32);
extern s32 func_0011EB90(void *);
extern u8 D_00194A80[];

s32 func_001384F0(void) {
    s8 buf[0x100];
    s8 *p;
    s32 fd;
    u32 i;
    s8 c;

    fd = func_0012B338(D_00194A80, 1);
    if (fd < 0) {
        return -1;
    }
    i = 0;
    p = buf;
    while (i < 0x100) {
        func_0012B980(fd, p, 1);
        c = *p;
        p++;
        if (c == 0) {
            break;
        }
        i++;
    }
    func_0012B5C8(fd);
    return 0x1315670 < func_0011EB90(buf + (i - 9));
}
