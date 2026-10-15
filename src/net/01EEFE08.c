/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    f32 f4;
    f32 f8;
    f32 fC;
    f32 f10;
    s32 f14;
};

extern s32 D_0016E688_[];
#define D_0016E688 (D_0016E688_[0])

void func_01EEFE08(Type1 *arg0) {
    arg0->f14 = &D_0016E688;
    arg0->fC = 150.0f;
    arg0->f4 = 245.0f;
    arg0->f8 = 20.0f;
    arg0->f10 = 25.0f;
    arg0->f0 = 0;
}
