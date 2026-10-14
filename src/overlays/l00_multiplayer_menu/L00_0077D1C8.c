#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    f32 f4;
};

extern s32 D_004C1E90_[];
#define D_004C1E90 (D_004C1E90_[0])

void *func_L00_0077D1C8(Type1 *arg0) {
    arg0->f0 = &D_004C1E90;
    arg0->f4 = 1.0f;
    return arg0;
}
