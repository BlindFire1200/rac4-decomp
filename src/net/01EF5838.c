/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xC];
    s32 fC;
};

s32 func_01EA6D00(s32);
s32 func_01EA7538();
s32 func_01EA76E8(s32);
s32 func_01EA95C0(s32);

s32 func_01EF5838(Type1 *arg0) {
    func_01EA95C0(arg0 + 0x7C);
    func_01EA6D00(arg0 + 0x10);
    func_01EA76E8(arg0->fC);
    func_01EA7538();
    return 1;
}
