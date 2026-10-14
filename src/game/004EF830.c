/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    char _p4[0x2C];
    s32 f30;
    char _p34[0x4];
    s32 f38;
    s32 f3C;
    char _p40[0x4];
    s32 f44;
    char _p48[0x8];
    s32 f50;
    char _p54[0x4];
    s32 f58;
    s32 f5C;
};

s32 func_00159758();

void func_004EF830(Type1 *arg0) {
    func_00159758();
    arg0->f5C = 0;
    arg0->f0 = 0;
    arg0->f30 = 0;
    arg0->f38 = 0;
    arg0->f3C = 0;
    arg0->f44 = 0;
    arg0->f50 = 0;
    arg0->f58 = 0;
}
