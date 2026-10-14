/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
};

s32 func_004993D0(s32);
s32 func_004A2D90(s32, s32, s32);

void func_004994E0(Type1 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->f8 - 1;
    arg0->f8 = temp_v0;
    if (temp_v0 == 0) {
        func_004A2D90(arg0->f4, 0, 0);
        arg0->f10 = 0;
        arg0->fC = 0;
        func_004993D0(arg0->f0);
        arg0->f0 = 0;
    }
}
