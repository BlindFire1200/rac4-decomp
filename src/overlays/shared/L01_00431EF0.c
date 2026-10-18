#include "common.h"

typedef int u128 __attribute__((mode(TI)));

typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x8];
    u8 f8;
};

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x20];
    u8 f20;
    char _p21[0xAC - 0x21];
    Type2 *fAC;
    char _pB0[0xB8 - 0xB0];
    Type1 *fB8;
};

extern void func_L00_005DE048(void *, s32, void *);
Type1 *func_L01_00431CC8(u128, u128, u128, f32, s32);

Type1 *func_L01_00431EF0(Type1 *arg0, s32 arg1, u128 arg2, u128 arg3, s32 arg4, f32 arg5) {
    u128 pos;
    Type1 *obj;

    if (arg0 == NULL || arg0->f20 == 0xFE || arg0->f20 == 0xFD) {
        return NULL;
    }
    func_L00_005DE048(arg0, arg1, &pos);
    obj = func_L01_00431CC8(pos, arg2, arg3, arg5, arg4);
    if (obj == NULL || obj->f20 == 0xFE || obj->f20 == 0xFD) {
        return NULL;
    }
    obj->fAC->f8 = arg1;
    obj->fB8 = arg0;
    return obj;
}
