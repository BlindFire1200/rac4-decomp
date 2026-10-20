#include "common.h"

typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x8];
    s32 f8;
    u8 fC;
    u8 fD;
    char _pE[0xA];
};

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x2C];
    s32 f2C;
    char _p30[0x4];
    Type2 *f34;
    char _p38[0x4];
    s32 f3C;
    char _p40[0xC];
    s32 f4C;
    s32 f50;
    s32 f54;
    s32 f58;
};

void func_00430E80(s32);
void func_004A0B68(void *arg0, s32 arg1);
void func_005040B0(s32);
void func_00505040(s32, s32);
void func_00505328(s32, s32);
s32 func_00505DD0(s32, s32);
void func_00506508(s32, s32, s32);

void func_004A1010(Type1 *arg0, Type2 *arg1, s32 arg2, s32 arg3) {
    s32 i;

    func_004A0B68(arg0, 0);
    func_00506508(arg0->f2C, 1, 0);
    func_005040B0(arg0->f2C + 2);
    func_00506508(arg0->f2C + 2, 1, 1);
    func_00505DD0(arg0->f2C, arg0->f2C + 2);
    arg0->f34 = arg1;
    arg0->f3C = arg3;
    arg0->f54 = -1;
    arg0->f4C = arg2;
    arg0->f50 = 0;
    for (i = 0; i < arg0->f4C; i++) {
        arg0->f34[i].fD = 0;
        arg0->f34[i].fC = 0;
        arg0->f34[i].f8 = 0;
    }
    func_00430E80(arg0->f2C + 1);
    func_00505328(arg0->f2C + 1, 0x80202020);
    func_00505040(arg0->f2C + 1, 1);
    func_00505DD0(arg0->f2C, arg0->f2C + 1);
    arg0->f58 |= 3;
}
