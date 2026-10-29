#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x410];
    s32 f410;
};
struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
};

s32 func_L01_0046A130(void *);
s32 func_L01_0046AA98(void *);
s32 func_L01_0046B070(void *);


void func_L01_00469F48(Type1 *arg0) {
    if ((arg0->fAC->f410 != 0) && (func_L01_0046B070(arg0) != 0)) {
        func_L01_0046A130(arg0);
        func_L01_0046AA98(arg0);
    }
}
