#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x1041C];
    s32 f1041C;
};

s32 func_01EF0430();
extern s32 D_004C1FB8_[];
#define D_004C1FB8 (D_004C1FB8_[0])

void *func_L00_0077DEC0(Type1 *arg0) {
    func_01EF0430();
    arg0->f1041C = &D_004C1FB8;
    return arg0;
}
