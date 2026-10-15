#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
};

extern s32 D_003D1440_[];
#define D_003D1440 (D_003D1440_[0])

void *func_004A2D10(Type1 *arg0) {
    arg0->f0 = 1;
    arg0->f4 = &D_003D1440;
    arg0->f8 = 0;
    arg0->fC = 0;
    arg0->f10 = 0;
    return arg0;
}
