/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x2EF0];
    s32 f2EF0;
};

s32 func_004E19D8(s32, s32);

void func_0051FCD0(Type1 *arg0, s32 arg1) {
    func_004E19D8(arg1, arg0->f2EF0);
}
