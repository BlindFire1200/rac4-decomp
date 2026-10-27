/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012B5E8 (NTSC-U func_0012B5E8, commit 403f30a9) */
#include "common.h"

/* libcdvd: mode command over the CD RPC (sema, bind loop, uncached reply); 2.9-ee-991111 */
typedef struct { u8 pad[0x24]; s32 x24; } Type1;

extern s32 func_001374E8(s32);
extern void func_00129D90(s32);
extern s32 func_0012A538(void *, s32, s32);
extern void func_001294F0();
extern void func_00129CE0();
extern s32 func_0012A718();
extern s32 func_0012D420(void);
extern void func_0012D470(void);
extern void func_00136F70(void);
extern s32 func_00126BF0(s32);
extern s32 func_00126BC0(s32);
extern s32 D_00165FD0;
extern volatile s32 D_00165FEC;
extern s32 D_00166000;
extern s32 D_00166010;
extern Type1 D_001AD810;
extern s32 D_001AD850;
extern s32 D_001671C0[];
extern char D_001949C8[];
extern char D_001949E0[];
extern char D_00194A00[];

s32 func_00137998(s32 arg0) {
    s32 ei;
    s32 r;

    if (D_00165FD0 > 0) {
        func_001294F0(D_001949C8);
    }
    ei = func_0012D420();
    D_00166000 = 1;
    if (ei) {
        func_0012D470();
    }
    func_00136F70();
    if (D_00165FEC != func_00126BF0(D_00165FEC)) {
        return 6;
    }
    if (func_001374E8(1) != 0) {
        func_00126BC0(D_00165FEC);
        return arg0 != 8 ? 6 : -1;
    }
    func_00129D90(0);
    if (D_00166010 < 0) {
        while (1) {
            s32 i;
            if (func_0012A538(&D_001AD810, 0x8000059A, 0) < 0) {
                if (D_00165FD0 > 0) {
                    func_001294F0(D_001949E0);
                }
                i = 0x100000;
                while (--i != -1) {
                }
            } else if (D_001AD810.x24 != 0) {
                D_00166010 = 0;
                break;
            } else {
                i = 0x100000;
                while (--i != -1) {
                }
            }
        }
    }
    D_001AD850 = arg0;
    func_00129CE0(&D_001AD850, 4);
    if (func_0012A718(&D_001AD810, 0, 0, &D_001AD850, 4, D_001671C0, 4, 0, 0) < 0) {
        func_00126BC0(D_00165FEC);
        return arg0 != 8 ? 6 : -1;
    }
    if (D_00165FD0 > 0) {
        func_001294F0(D_00194A00);
    }
    r = *(s32 *)((u32)D_001671C0 | 0x20000000);
    func_00126BC0(D_00165FEC);
    return r;
}
