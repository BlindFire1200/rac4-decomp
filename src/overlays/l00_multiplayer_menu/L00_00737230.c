#include "common.h"

typedef struct Type2 Type2;
typedef struct {
    u8 pad0[0x20];
    void (*f20)(Type2 *, s32, s32);
    u8 pad24[0x28 - 0x24];
    void (*f28)(Type2 *, void *);
    u8 pad2C[0x64 - 0x2C];
    void (*f64)(Type2 *, s32);
    u8 pad68[0x9C - 0x68];
    void (*f9C)(Type2 *, s32);
    void (*fA0)(Type2 *, s32);
    u8 padA4[0xE8 - 0xA4];
    void (*fE8)(Type2 *, void *);
} Type3;
struct Type2 {
    u8 pad0[0x58];
    Type3 *f58;
};
typedef struct {
    u8 pad0[0xB0];
    Type2 *fB0[5];
    Type2 *fC4[8];
    Type2 *fE4[4];
    u8 padF4[0x104 - 0xF4];
    Type2 *f104;
    Type2 *f108;
    Type2 *f10C;
    Type2 *f110;
    Type2 *f114;
    Type2 *f118;
    Type2 *f11C;
    Type2 *f120;
    Type2 *f124;
    u8 pad128[0x130 - 0x128];
    Type2 *f130;
    u8 pad134[0x240 - 0x134];
    s32 f240;
    u8 pad244[0x27C - 0x244];
    s32 f27C;
    u8 pad280[0x2EC - 0x280];
    u8 f2EC[0x14];
} Type1;

extern s32 func_0011A518(void *, s32, s32);
extern void func_0069E868(s32, s32);
extern void func_L00_0069D028(s32, s32);
extern void func_L00_0071B3C8(void *);
extern void func_L00_0071BE28(void *, s32, u32);
extern void func_L00_0071BEB8(void *, s32, s32, s32, s32);
extern void func_L00_00737AD0(void *, s32);
extern void func_L00_007391D8(void *);
extern u8 D_002210B0[];

/* Reset the menu page: hide and clear its widgets, tint the rows, then refresh. */
void func_L00_00737230(Type1 *arg0) {
    s32 i;
    s32 j;
    Type2 **q;

    q = arg0->fB0;

    func_L00_0071BE28(arg0, 0x2F, 0xFFFFFFFF);
    arg0->fB0[2]->f58->f20(arg0->fB0[2], 4, 0);
    arg0->fB0[2]->f58->f9C(arg0->fB0[2], 1);
    arg0->fB0[2]->f58->fA0(arg0->fB0[2], 1);
    arg0->fB0[3]->f58->f20(arg0->fB0[3], 2, 0);
    func_L00_0069D028(arg0->f240 | 0x1A, 0);
    func_L00_0069D028(arg0->f240 | 0x1B, 0);
    func_L00_0069D028(arg0->f240 | 0x19, 0);
    func_L00_0069D028(arg0->f240 | 0x18, 0);
    func_L00_0069D028(arg0->f240 | 0x17, 0);
    func_L00_0069D028(arg0->f240 | 0x16, 0);
    func_L00_0069D028(arg0->f240 | 0x15, 0);
    func_L00_0069D028(arg0->f240 | 0x67, 0);
    arg0->fB0[4]->f58->f20(arg0->fB0[4], 1, 0);
    arg0->f130->f58->f20(arg0->f130, 1, 0);
    arg0->f104->f58->f28(arg0->f104, D_002210B0);
    arg0->f108->f58->f28(arg0->f108, D_002210B0);
    arg0->f10C->f58->f28(arg0->f10C, D_002210B0);
    arg0->f110->f58->f28(arg0->f110, D_002210B0);
    arg0->f114->f58->f28(arg0->f114, D_002210B0);
    arg0->f118->f58->f28(arg0->f118, D_002210B0);
    arg0->f11C->f58->f28(arg0->f11C, D_002210B0);
    arg0->f120->f58->f28(arg0->f120, D_002210B0);
    arg0->f124->f58->f28(arg0->f124, D_002210B0);
    arg0->f104->f58->fE8(arg0->f104, D_002210B0);
    arg0->f108->f58->fE8(arg0->f108, D_002210B0);
    arg0->f10C->f58->fE8(arg0->f10C, D_002210B0);
    arg0->f110->f58->fE8(arg0->f110, D_002210B0);
    arg0->f114->f58->fE8(arg0->f114, D_002210B0);
    arg0->f118->f58->fE8(arg0->f118, D_002210B0);
    arg0->f11C->f58->fE8(arg0->f11C, D_002210B0);
    arg0->f120->f58->fE8(arg0->f120, D_002210B0);
    arg0->f124->f58->fE8(arg0->f124, D_002210B0);
    func_0069E868(arg0->f240 | 0x35, 0);
    func_0069E868(arg0->f240 | 0x36, 0);
    func_0069E868(arg0->f240 | 0x37, 0);
    func_0069E868(arg0->f240 | 0x38, 0);
    func_0069E868(arg0->f240 | 0x39, 0);
    func_0069E868(arg0->f240 | 0x3A, 0);
    func_0069E868(arg0->f240 | 0x3B, 0);
    func_0069E868(arg0->f240 | 0x3C, 0);
    func_0069E868(arg0->f240 | 0x3D, 0);
    func_0069E868(arg0->f240 | 0x3E, 0);
    func_0069E868(arg0->f240 | 0x3F, 0);
    func_0069E868(arg0->f240 | 0x40, 0);
    func_0069E868(arg0->f240 | 0x42, 0);
    func_0069E868(arg0->f240 | 0x43, 0);
    func_0069E868(arg0->f240 | 0x44, 0);
    func_0069E868(arg0->f240 | 0x45, 0);
    func_0069E868(arg0->f240 | 0x46, 0);
    func_0069E868(arg0->f240 | 0x47, 0);
    func_0069E868(arg0->f240 | 0x48, 0);
    func_0069E868(arg0->f240 | 0x49, 0);
    func_0069E868(arg0->f240 | 0x4A, 0);
    func_0069E868(arg0->f240 | 0x4B, 0);
    func_0069E868(arg0->f240 | 0x4D, 0);
    func_0069E868(arg0->f240 | 0x4E, 0);
    func_L00_0071BEB8(arg0, 0x43, 1, 0x2E, 0x2D);
    for (i = 0; i < 8; i++) {
        arg0->fC4[i]->f58->f64(arg0->fC4[i], 0x80404040);
    }
    for (j = 0; j < 4; j++) {
        q[13 + j]->f58->f64(q[13 + j], 0x80404040);
    }
    func_L00_0071B3C8(arg0);
    arg0->f27C = -1;
    func_0011A518(arg0->f2EC, 0, 0x14);
    func_L00_00737AD0(arg0, 1);
    func_L00_007391D8(arg0);
}
