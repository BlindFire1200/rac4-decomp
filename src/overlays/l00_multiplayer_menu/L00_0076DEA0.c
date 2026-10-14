#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x4];
    u32 f4;
};

s32 func_0011D920(s32, void *, s32, u32);
extern s32 D_002217F8_[];
#define D_002217F8 (D_002217F8_[0])

void func_L00_0076DEA0(Type1 *arg0, s32 arg1) {
    u32 temp_a2;

    temp_a2 = arg0->f4;
    func_0011D920(arg1, &D_002217F8, temp_a2 & 0xFFF, temp_a2 >> 0xC);
}
