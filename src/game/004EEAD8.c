#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x4];
    s32 f4;
    char _p8[0x20];
    s32 f28;
    s32 f2C;
};

s32 func_004EE6E8(void *, s32);
s32 func_004EED78(s32, s32);
extern s32 D_003D2FC8_[];
#define D_003D2FC8 (D_003D2FC8_[0])

void func_004EEAD8(Type1 *arg0, s32 arg1) {
    arg0->f4 = &D_003D2FC8;
    func_004EED78(arg0->f2C, arg0->f28);
    func_004EE6E8(arg0, arg1);
}
