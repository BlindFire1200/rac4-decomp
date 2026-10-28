/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00124DB8 (NTSC-U func_00124DB8, commit 403f30a9) */
#include "common.h"

extern char *D_00164AC0;
extern int D_00165578[];
extern void func_0012D8A8(int a, int b);
extern void *func_0012D868(void *dst, void *src, int n);
extern int func_0011AB04();

char *func_0012D8B8(char *arg0, int arg1, char **arg2)
{
    char *p;
    char *buf;
    char *ret;
    int len;
    int i;

    p = D_00164AC0;
    buf = p + 0x40;
    ret = buf;
    func_0012D8A8(D_00165578[0], D_00165578[1]);
    if (arg1 >= 16) {
        arg1 = 15;
    }
    func_0012D868(p, &buf, 4);
    p += 4;
    len = func_0011AB04(arg0) + 1;
    func_0012D868(buf, arg0, len);
    buf += len;
    for (i = 0; i < arg1; i++) {
        func_0012D868(p, &buf, 4);
        p += 4;
        len = func_0011AB04(arg2[i]) + 1;
        func_0012D868(buf, arg2[i], len);
        buf += len;
    }
    return ret;
}
