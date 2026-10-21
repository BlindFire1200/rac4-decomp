#include "common.h"

extern void *func_006658C0();
extern void func_005D7538(s32, s32, s32);
extern void func_L00_005F2E38(s32);
extern void func_L00_006CB868(void *, s32);
extern void func_L00_006CBB48(void *, s32, s32, s32);
extern s32 func_L00_006FF250(s32);
extern void func_L00_00701688(s32, s32, s32, s32);
extern void func_L00_00701728(s32, s32, s32, s32);
extern void func_L00_00701870(s32, s32, s32, s32);
extern s32 D_0021E824;
extern s32 D_0021E828;
extern s32 *D_0021DDA4;

// Apply a 5-byte record of ids to the current player and its +0x26E4 object.
void func_L01_006C1388(u8 *arg0) {
    void *p;
    s32 obj;
    s32 i;

    p = func_006658C0(0);
    obj = *(s32 *)((u8 *)p + 0x26E4);
    if (arg0[0] != 0) {
        func_L00_006CBB48(p, arg0[0], 0, -1);
        if (D_0021E824 != 0 || D_0021E828 != 1) {
            if (func_L00_006FF250(arg0[0]) != 0) goto next;
        }
        for (i = 0; i < *D_0021DDA4; i++) {
            func_005D7538(i, arg0[0], -1);
        }
        if (D_0021E824 == 0 && D_0021E828 == 0) {
            func_L00_006CB868(p, arg0[0]);
        }
    }
next:
    if (arg0[1] != 0) func_L00_00701688(obj, arg0[1], -1, 0);
    if (arg0[2] != 0) func_L00_00701728(obj, arg0[2], -1, 0);
    if (arg0[3] != 0) func_L00_00701870(obj, arg0[3], -1, 0);
    if (arg0[4] != 0) func_L00_005F2E38(arg0[4]);
}
