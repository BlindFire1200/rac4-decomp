#include "common.h"

extern s32 func_0015A750(void);
extern void func_0015C760(void);
extern void func_0015DA10(void);
extern s32 func_001615C0(void);
extern void func_00161C70(void);
extern void func_00162C50(s32);
extern s32 func_01E9DF88(void);
typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u8 pad18[0x250 - 0x18];
    u8 unk250;
    u8 unk251;
    u8 pad252[0x1681 - 0x252];
    u8 unk1681;
} Type0;
extern Type0 D_00172160;
extern s32 D_0021E0A4;
s32 func_0015DA28(void) {
    func_00161C70();
    func_001615C0();
    func_00162C50(D_0021E0A4);
    D_0021E0A4 = 0;
    func_0015DA10();
    func_0015C760();
    if (D_00172160.unk8 != 0) {
        func_0015A750();
        D_00172160.unk8 = 0;
        D_00172160.unk4 = 1;
        D_00172160.unk14 = 1;
    }
    if (D_00172160.unk0 >= 4) {
        D_00172160.unk0 = 3;
    }
    D_00172160.unk250 = 0;
    D_00172160.unk251 = 0;
    D_00172160.unk1681 = 0;
    return func_01E9DF88() != 0;
}
