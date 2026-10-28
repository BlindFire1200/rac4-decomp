#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x24];
    s32 f24;
};

extern s32 D_1DFC84_[];
#define D_1DFC84 (D_1DFC84_[0])

void func_00461E90(Type1 *arg0) {
    arg0->f24 = (s32) D_1DFC84;
}
