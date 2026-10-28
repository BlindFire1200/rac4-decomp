/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
};

extern s32 D_00170E78_[];
#define D_00170E78 (D_00170E78_[0])

void func_01F07750(Type1 *arg0) {
    arg0->f4 = 0;
    arg0->f0 = &D_00170E78;
}
