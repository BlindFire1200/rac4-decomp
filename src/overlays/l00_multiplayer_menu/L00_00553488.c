/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
};

void func_L00_00553488(Type1 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->f0 = arg2;
    arg0->f4 = arg3;
    if (arg1 == 0) {
        arg0->fC = 2;
    } else {
        arg0->fC = 0;
    }
    arg0->f8 = arg1;
}
