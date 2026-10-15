#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
};

extern s32 D_003D1460_[];
#define D_003D1460 (D_003D1460_[0])

void *func_004A2AD0(Type1 *arg0) {
    arg0->f0 = 1;
    arg0->f4 = &D_003D1460;
    arg0->f8 = 0;
    arg0->fC = 0;
    arg0->f10 = 0;
    arg0->f14 = 0;
    arg0->f18 = 0;
    arg0->f1C = 0;
    return arg0;
}
