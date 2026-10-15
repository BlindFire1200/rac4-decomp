/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x20];
    s32 (*f20)();
};
struct Type1 {
    char _p0[0x4];
    s32 f4;
    char _p8[0x50];
    Type2 *f58;
};

s32 func_L00_007108F8(Type1 *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = arg0->f4;
    if (((temp_s0 < 4) && (arg1 >= 4)) || (arg1 < 4)) {
        arg0->f58->f20();
    }
    return temp_s0;
}
