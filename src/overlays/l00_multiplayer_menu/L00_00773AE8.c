/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x10];
    s32 f10;
    s32 f14;
    s32 f18;
};

s32 func_0015B548(s32);

void func_L00_00773AE8(Type1 *arg0) {
    arg0->f10 = 0;
    arg0->f14 = 0;
    arg0->f18 = 0;
    func_0015B548(0);
}
