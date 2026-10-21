/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x1CC];
    s32 f1CC;
};
struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
};

s32 func_L01_00591BD8(void *, s32, s32);

void func_L01_00500888(Type1 *arg0) {
    if (arg0->fAC->f1CC != -1) {
        func_L01_00591BD8(arg0, 4, 2);
        return;
    }
    func_L01_00591BD8(arg0, 5, 2);
}
