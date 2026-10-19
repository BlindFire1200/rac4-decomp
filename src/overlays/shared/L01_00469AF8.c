#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
typedef struct Type3 Type3;
struct Type1 {
    char pad0[0x24];
    Type3 *f24;
    char pad28[0x70];
    s32 f98;
    char pad9C[0x10];
    Type2 *fAC;
};
struct Type2 {
    char pad0[0x50];
    s32 f50;
    s32 f54;
    char pad58[0x44];
    s32 f9C;
    char padA0[0x171];
    u8 f211;
    char pad212[0x2E8];
    u16 f4FA;
};
struct Type3 {
    char pad0[0x10];
    s32 f10;
};
extern s32 func_L00_005BC9B8(void *);
extern void func_L01_00591BD8(void *, s32, s32);
extern void func_L01_005ABDE8(void *, f32, f32, f32);

s32 func_L01_00469AF8(Type1 *arg0, s32 arg1) {
    Type2 *temp_t0 = arg0->fAC;
    if (arg1 == 1) goto case1;
    if (arg1 < 2) {
        if (arg1 == 0) goto case0;
        goto done;
    }
    if (arg1 == 4) goto case4;
    goto done;
case0:
    arg0->f98 = 0;
    temp_t0->f4FA = 6;
    temp_t0->f211 = 0;
    temp_t0->f50 |= 0x80;
    goto done;
case1:
    if (func_L00_005BC9B8(&temp_t0->f4FA) != 0) {
        arg0->f98 = arg0->f24->f10;
    }
    func_L01_005ABDE8(arg0, 8.5f, 14.5f, 17.0f);
    goto done;
case4:
    arg0->f98 = arg0->f24->f10;
    temp_t0->f211 = 1;
    temp_t0->f9C = 0;
    temp_t0->f54 |= 0x800;
    temp_t0->f50 &= ~0x80;
    func_L01_00591BD8(arg0, 2, 2);
done:
    return 1;
}
