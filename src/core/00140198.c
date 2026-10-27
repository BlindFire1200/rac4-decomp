/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00133C58 (NTSC-U func_00133C58, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 pad0[0x12C];
    int f12C;
    u8 pad130[0x13C - 0x130];
    int f13C;
    u8 pad140[0x1C0 - 0x140];
    int f1C0;
    int f1C4;
    u8 pad1C8[0x878 - 0x1C8];
    int f878;
} Type1;
void func_001412A8(void *s);
void func_001412A0(void *s);
int func_0013EEB0(void *s, int n);
int func_0013EDC8(void *s, int n);
void func_00141140(void *s, int n);
int func_0013E968(void *s);
void func_00146690(void *s, char *fmt, int x);
extern s32 func_00146638();
extern char D_00195310[];
extern char D_00195338[];

int func_00140198(Type1 *s, int a1, int *arg0, int *arg1, int *arg2)
{
    int var1;
    int v;

    s->f12C = 0;
    func_001412A8(s);
    while (func_0013EEB0(s, 0x18) != 1 && s->f878 == 0) {
        func_00141140(s, 8);
    }
    var1 = func_0013EEB0(s, 0x20);
    if ((u32)(var1 - 0x101) >= 0xAF) {
        func_00146690(s, D_00195310, var1);
        return 2;
    }
    func_001412A0(s);
    s->f1C4 = func_0013EDC8(s, 5);
    if (func_0013EDC8(s, 1)) {
        func_0013EDC8(s, 1);
        func_00141140(s, 7);
        while (func_0013EDC8(s, 1)) {
            func_00141140(s, 8);
        }
    }
    v = func_0013E968(s);
    *arg1 = v;
    if (s->f12C) {
        func_00146638(s, D_00195338);
        return 1;
    }
    *arg0 = ((var1 & 0xFF) - 1) * s->f13C + v - 1;
    *arg1 = 1;
    s->f1C0 = 1;
    arg2[5] = 0;
    arg2[4] = 0;
    arg2[1] = 0;
    arg2[0] = 0;
    arg2[7] = 0;
    arg2[6] = 0;
    arg2[3] = 0;
    arg2[2] = 0;
    return 0;
}
