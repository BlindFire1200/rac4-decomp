#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x20];
    u8 f20;
};

s32 func_L01_004E70C0();


void func_L01_004E6E48(Type1 *arg0) {
    if (arg0->f20 == 0) {
        func_L01_004E70C0();
    }
}
