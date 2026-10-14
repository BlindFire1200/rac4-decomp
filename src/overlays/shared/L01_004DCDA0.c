/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x588];
    s32 f588;
};
struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
};

s32 func_L01_004DCDE0();
s32 func_L01_004DD4D8();

void func_L01_004DCDA0(Type1 *arg0) {
    if (arg0->fAC->f588 != 0) {
        func_L01_004DCDE0();
        return;
    }
    func_L01_004DD4D8();
}
