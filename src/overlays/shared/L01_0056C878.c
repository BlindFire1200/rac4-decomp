#include "common.h"

extern s32 func_L00_005C8CF0(s16);
extern void *func_L00_005DEBD0(s32, s32, s32);
extern s32 func_L00_005E6560(void *);
extern s32 func_L01_0056B640(void *, s32);
extern s32 func_L01_0056B6E0(void *, s32);
extern s32 func_L01_0056B748(void *);
extern void func_L01_0056C2F8(void *, void *, void *);
extern void func_L01_0056C450(void *, void *, void *);
extern void func_L01_0056C5A0(void *, void *, void *);
extern void func_L01_0056D280(void *, s32, s32, void *, void *);
extern void func_L01_0056D620(void *, void *);
extern void func_L01_0056E630(void *, s16);
extern char *D_00222D14;
extern s32 D_00222D60;
extern s32 D_0021DDB4;
extern s16 *D_0028BFE0[];

typedef s32 (*Fn1)(void *);
typedef void (*Fn3)(void *, void *, void *);
typedef u8 *(*FnP)(void *);

/* Run the per-slot update for the current mode, then trigger linked mobys once. */
void func_L01_0056C878(char *arg0, u8 *arg1) {
    s32 i;
    char *obj;
    void **tbl;
    char *obj1;
    void **tbl1;
    u8 *r;
    FnP fn;
    s16 *p1;
    char *obj2;
    s16 *p2;

    if (arg0 == 0 || arg1 == 0) {
        return;
    }
    arg1[0x17C] = 1;
    if (D_0021DDB4 != 2) {
        switch (*(u8 *)(arg1 + 0x17D)) {
        case 0:
            for (i = 0; i < 8; i++) {
                if (func_L01_0056B640(arg1, i) == 0 && func_L01_0056B6E0(arg1, i) != 0) {
                    func_L01_0056C2F8(arg1 + 0x50 + i * 0x24, arg1, arg0);
                }
            }
            break;
        case 1:
            for (i = 0; i < 8; i++) {
                if (func_L01_0056B640(arg1, i) == 0 && func_L01_0056B6E0(arg1, i) != 0) {
                    func_L01_0056C5A0(arg1 + 0x50 + i * 0x24, arg1, arg0);
                }
            }
            break;
        case 2:
            if (*(s32 *)(arg1 + 0x188) != -1) {
                obj = D_00222D14 + (*(s32 *)(arg1 + 0x188) << 8);
                tbl = func_L00_005DEBD0(func_L00_005C8CF0(*(s16 *)(obj + 0xBC)), 0xB, 0x10);
                if (tbl != 0 && tbl[0] != 0 && tbl[1] != 0 && tbl[2] != 0 && tbl[3] != 0) {
                    if (((Fn1)tbl[2])(obj) == 0) {
                        if (((Fn1)tbl[1])(obj) == 0) {
                            ((Fn3)tbl[0])(obj, arg0, arg1);
                        }
                        ((Fn1)tbl[3])(obj);
                    }
                }
            }
            break;
        case 3:
            for (i = 0; i < 8; i++) {
                if (func_L01_0056B640(arg1, i) == 0 && func_L01_0056B6E0(arg1, i) != 0) {
                    func_L01_0056C450(arg1 + 0x50 + i * 0x24, arg1, arg0);
                }
            }
            break;
        }
    }
    if (arg1[0x1DC] == 0) {
        arg1[0x1DC] = 1;
        for (p1 = D_0028BFE0[*(s32 *)(arg1 + 0x170)];
             (*(s32 *)(arg1 + 0x170) & 0xFF) != 0xFF && *(s32 *)(arg1 + 0x170) <= D_00222D60 && p1 != 0 &&
             (p1[-1] >= 0 || p1 == D_0028BFE0[*(s32 *)(arg1 + 0x170)]);
             p1++) {
            obj1 = D_00222D14 + ((*(u16 *)p1 & 0x7FFF) << 8);
            if (obj1 == 0) {
                break;
            }
            tbl1 = func_L00_005DEBD0(func_L00_005C8CF0(*(s16 *)(obj1 + 0xBC)), 0xE, 0x1C);
            if (tbl1 == 0) {
                continue;
            }
            fn = (FnP)tbl1[0];
            if (fn == 0) {
                continue;
            }
            r = fn(obj1);
            if (r[0x20] == 0 || r[0x4B] != 0) {
                continue;
            }
            if (func_L00_005E6560(obj1) != 0) {
                continue;
            }
            func_L01_0056D280(obj1, 1, 0, arg1, arg0);
            func_L01_0056D620(arg0 + 0xD0, obj1);
        }
    }
    if (arg1[0x1DB] == 0) {
        if (*(s32 *)(arg1 + 0x1CC) != -1) {
            func_L01_0056E630(D_00222D14 + (*(s32 *)(arg1 + 0x1CC) << 8), *(s16 *)(arg1 + 0x1D0));
        }
        if (*(s32 *)(arg1 + 0x1D4) != -1) {
            for (p2 = D_0028BFE0[*(s32 *)(arg1 + 0x1D4)];
                 (*(s32 *)(arg1 + 0x1D4) & 0xFF) != 0xFF && *(s32 *)(arg1 + 0x1D4) <= D_00222D60 && p2 != 0 &&
                 (p2[-1] >= 0 || p2 == D_0028BFE0[*(s32 *)(arg1 + 0x1D4)]);
                 p2++) {
                obj2 = D_00222D14 + ((*(u16 *)p2 & 0x7FFF) << 8);
                if (obj2 == 0) {
                    break;
                }
                func_L01_0056E630(obj2, *(s16 *)(arg1 + 0x1D8));
            }
        }
        arg1[0x1DB] = 1;
    }
    if (func_L01_0056B748(arg1) != 0) {
        arg1[0x17C] = 0;
    }
}
