/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012B800 (NTSC-U func_0012B800, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 pad0[0x24];
    int f24;
    u8 pad28[0x40 - 0x28];
} Type1;
extern int D_00165FD0;
extern volatile int D_00165FF0;
extern int D_00166000;
extern int D_00166010;
extern char D_001949E0[];
extern char D_00194A00[];
extern char D_00194A18[];
extern Type1 D_001AD810;
extern int D_001AD850;
extern int D_00167A40[];
extern int func_001294F0();
extern int func_00126BC0();
extern int func_00126BF0();
extern int func_00129D90();
extern void func_00129CE0();
extern int func_00136F70();
extern int func_00137998();
extern int func_0012D420();
extern int func_0012D470();
extern s32 func_0012A538(void *, s32, s32);
extern s32 func_0012A718();

int func_00137BB0(int arg0)
{
    int i;
    int j;
    int r;
    int k;

    if (D_00165FD0 > 0) {
        func_001294F0(D_00194A18);
    }
    func_00136F70();
    if (D_00165FF0 != func_00126BF0(D_00165FF0)) {
        return arg0 != 8 ? 6 : -1;
    }
    func_00129D90(0);
    i = 0;
    if (D_00166010 < 0) {
        for (;;) {
    L1:
        if (func_0012A538(&D_001AD810, 0x8000059C, 0) < 0) {
            if (D_00165FD0 > 0) {
                func_001294F0(D_001949E0);
            }
            j = 0x100000;
            while (j--) {
            }
            goto L1;
        }
        if (D_001AD810.f24 != 0) {
            D_00166010 = 0;
            break;
        }
        if (i > 16) {
            func_00126BC0(D_00165FF0);
            return func_00137998(arg0);
        }
        k = i + 1;
        j = 0x100000;
        while (j--) {
        }
        i = k;
        }
    }
    r = func_0012D420();
    D_00166000 = 0;
    if (r) {
        func_0012D470();
    }
    D_001AD850 = arg0;
    func_00129CE0(&D_001AD850, 4);
    if (func_0012A718(&D_001AD810, 0, 0, &D_001AD850, 4, D_00167A40, 4, 0, 0) < 0) {
        func_00126BC0(D_00165FF0);
        return arg0 != 8 ? 6 : -1;
    }
    if (D_00165FD0 > 0) {
        func_001294F0(D_00194A00);
    }
    r = *(int *)((u32)D_00167A40 | 0x20000000);
    func_00126BC0(D_00165FF0);
    return r;
}
