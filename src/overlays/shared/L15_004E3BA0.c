/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x1BC];
    s32 f1BC;
};
struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
};

s32 func_L00_005AE458();
s32 func_L00_005BDB08(s32);

void func_L15_004E3BA0(Type1 *arg0, s32 arg1) {
    arg0->fAC->f1BC = arg1;
    func_L00_005AE458();
    func_L00_005BDB08(0);
}
