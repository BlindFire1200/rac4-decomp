#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x34];
    u16 f34;
    char _p36[0x62];
    s32 f98;
};

s32 func_004E29B8(void *, s32);


void func_L01_004549F0(Type1 *arg0) {
    arg0->f98 = 0;
    arg0->f34 = (u16) ((arg0->f34 | 0x41) & 0xEFFF);
    func_004E29B8(arg0, 1);
}
