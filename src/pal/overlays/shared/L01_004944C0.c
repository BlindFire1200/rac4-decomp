#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xBE];
    u8 fBE;
};

s32 func_00474368(void *, s32, s32);


void func_L01_004944C0(Type1 *arg0) {
    arg0->fBE = (u8) (arg0->fBE & 0xFB);
    func_00474368(arg0, 2, -1);
}
