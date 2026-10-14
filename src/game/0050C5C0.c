/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x14];
    s32 (*f14)();
};
struct Type1 {
    char _p0[0x8];
    Type2 *f8;
};

s32 func_005015E0(s32, void *);
s32 func_0050BFA8(s32, void *);
s32 func_0050D2C8(s32, void *, s32);

s32 func_0050C5C0(s32 arg0, Type1 *arg1) {
    if (arg1->f8->f14(arg1, 8) != 0) {
        func_0050BFA8(arg0, arg1);
        func_005015E0(arg0, arg1);
        func_0050D2C8(arg0 + 0x40, arg1 + 0x40, 0x1C8);
    }
    return 0;
}
