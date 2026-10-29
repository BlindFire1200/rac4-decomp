#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x70];
    s32 f70;
};
struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
};

s32 func_004259E0(Type1 *arg0) {
    return arg0->fAC->f70 != 0;
}
