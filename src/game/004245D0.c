#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xAC];
    s32 fAC;
};

s32 func_00452958(void *, s32, void *);
extern s32 D_003CFC88_[];
extern s32 D_221288_[];
#define D_003CFC88 (D_003CFC88_[0])
#define D_221288 (D_221288_[0])

void func_004245D0(Type1 *arg0) {
    func_00452958(&D_221288, arg0->fAC + 0x80, &D_003CFC88);
}
