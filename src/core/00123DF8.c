/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x54];
    s32 f54;
};

s32 func_00123E28(s32, void *, s32, s32);

void func_00123DF8(Type1 *arg0, s32 arg1, s32 arg2) {
    func_00123E28(arg0->f54, arg0, arg1, arg2);
}
