/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
typedef struct Type3 Type3;
struct Type3 {
    char _p0[0x94];
    s32 f94;
};
struct Type2 {
    char _p0[0x50];
    Type3 *f50;
};
struct Type1 {
    char _p0[0x2EFC];
    Type2 *f2EFC;
};

s32 func_00420988(s32);

s32 func_00527430(Type1 *arg0) {
    return func_00420988(arg0->f2EFC->f50->f94) != 0;
}
