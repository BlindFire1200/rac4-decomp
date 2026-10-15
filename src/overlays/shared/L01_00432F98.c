/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xAC];
    s32 fAC;
};

s32 func_L00_005BBB48(void *, s32, s32, s32);
extern s32 D_00222B28_[];
#define D_00222B28 (D_00222B28_[0])

void func_L01_00432F98(Type1 *arg0, s32 arg1) {
    func_L00_005BBB48(&D_00222B28, arg0->fAC + 0x40, 1, arg1);
}
