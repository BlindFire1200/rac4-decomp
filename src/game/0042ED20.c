#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x2B4];
    s32 f2B4;
};
struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
};

void func_0042ED20(Type1 *arg0, s32 arg1) {
    arg0->fAC->f2B4 = arg1;
}
