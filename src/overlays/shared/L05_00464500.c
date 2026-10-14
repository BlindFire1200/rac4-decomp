/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
typedef struct Type3 Type3;
struct Type3 {
    char _p0[0x2B0];
    s32 f2B0;
};
struct Type2 {
    char _p0[0x170];
    Type3 *f170;
};
struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
};

s32 func_L05_00465258(s32);

void func_L05_00464500(Type1 *arg0) {
    func_L05_00465258(arg0->fAC->f170->f2B0);
}
