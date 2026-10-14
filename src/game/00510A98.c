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
};

extern s32 D_003D37A0_[];
#define D_003D37A0 (D_003D37A0_[0])

void *func_00510A98(Type1 *arg0) {
    arg0->f4 = 0;
    arg0->f0 = &D_003D37A0;
    arg0->f8 = 0;
    arg0->fC = 0;
    arg0->f18 = 0;
    arg0->f10 = 0;
    arg0->f14 = 0;
    return arg0;
}
