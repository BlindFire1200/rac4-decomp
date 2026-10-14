/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x5C];
    s32 f5C;
};

s32 func_0069C438(s32, void *, void *);
s32 func_L00_0069C340(s32, void *, void *);

void func_L00_00714B98(Type1 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->f5C;
    if (temp_a0 != 0) {
        func_L00_0069C340(temp_a0, arg0 + 0x60, arg0 + 0x64);
        func_0069C438(arg0->f5C, arg0 + 0x68, arg0 + 0x6C);
    }
}
