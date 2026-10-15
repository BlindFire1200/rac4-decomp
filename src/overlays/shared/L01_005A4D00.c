/* cflags: -mno-split-addresses */
#include "common.h"

extern s32 D_0021DDB8;

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xC];
    s32 fC;
    s32 f10;
};

void func_L01_005A4D00(s32 arg0, Type1 *arg1, s32 arg2) {
    if ((arg1 != NULL) && (arg1->f10 == arg0)) {
        arg1->f10 = 0;
        if (arg2 != 0) {
            arg1->fC = D_0021DDB8;
        }
    }
}
