#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x88];
    s32 f88;
};
struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
};

s32 func_004312A8(Type1 *arg0) {
    return arg0->fAC->f88;
}
