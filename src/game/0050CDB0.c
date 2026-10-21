#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x8];
    s32 f8;
    char _pC[0x1D8];
    s32 f1E4;
};

s32 func_0015DB88(void *);
s32 func_005015C8(s32);
s32 func_0050C768();
extern s32 D_003D3508_[];
extern s32 D_003D3610_[];
#define D_003D3508 (D_003D3508_[0])
#define D_003D3610 (D_003D3610_[0])

void func_0050CDB0(Type1 *arg0, s32 arg1) {
    s32 temp_a0;

    arg0->f8 = &D_003D3610;
    func_0050C768();
    temp_a0 = arg0->f1E4;
    if (temp_a0 != 0) {
        func_005015C8(temp_a0);
    }
    arg0->f1E4 = 0;
    arg0->f8 = &D_003D3508;
    if (arg1 & 1) {
        func_0015DB88(arg0);
    }
}
