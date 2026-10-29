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

s32 func_L01_004B4870(void *);
s32 func_L01_004B57F8(void *);
s32 func_L01_004B5848(void *);


void func_L01_004B4608(Type1 *arg0) {
    if ((arg0->fAC->f410 != 0) && (func_L01_004B5848(arg0) != 0)) {
        func_L01_004B4870(arg0);
        func_L01_004B57F8(arg0);
    }
}
