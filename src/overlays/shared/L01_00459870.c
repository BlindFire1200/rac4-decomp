#include "common.h"

typedef struct Type2 {
    char _p0[0xAC];
    void *fAC;
    char _pB0[0x3A8];
    u8 f458;
    char _p459[0x197];
    s32 f5F0;
    char _p5F4[0x8];
    s32 f5FC;
} Type2;

typedef struct Type3 {
    char _p0[0x10];
    s32 (*f10)(s32, void *);
    s32 (*f14)(s32, void *);
} Type3;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

extern void func_L00_005DD4A0(void *);
extern void *func_L00_005DEBD0(s32, s32, s32);
extern s32 func_L01_0056CDB0(u8 *object);
extern void func_L01_0056E7F8(void *);
extern void func_L01_00588B08(void *);
extern void func_L01_00591BD8(u8 *object, s32 new_state, s32 param);
extern void func_L01_005A8928(void *);
extern void func_L01_005B4EB0(void *, s32);

/* Releases the object's attached action, resets state and frees linked objects. */
void func_L01_00459870(Type1 *arg0, s32 arg1) {
    Type2 *s2;
    Type3 *cb;

    s2 = arg0->fAC;
    if (s2->f5FC != 0) {
        cb = func_L00_005DEBD0(0x263E, 0, 0x18);
        if (cb != 0) {
            cb->f14(s2->f5FC, arg0);
            cb->f10(s2->f5FC, arg0);
        }
        s2->f5FC = 0;
        func_L01_005B4EB0(arg0, 0);
    }
    func_L01_0056CDB0((u8 *)arg0);
    func_L01_0056E7F8(arg0);
    func_L01_005A8928(arg0);
    func_L01_00591BD8((u8 *)arg0, 0x1B, 7);
    if (s2->f458 == 0) {
        func_L01_00588B08(arg0);
    } else if (arg1 == 0) {
        if (s2->fAC != 0) {
            func_L00_005DD4A0(s2->fAC);
        }
        s2->fAC = 0;
        s2->f5F0 = 0;
        func_L00_005DD4A0(arg0);
    }
}
