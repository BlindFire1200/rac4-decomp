#include "common.h"

typedef struct Obj {
    char pad0[0x69];
    u8 f69;
    char pad6A[0xBE - 0x6A];
    u8 fBE;
} Obj;

void func_L01_00591C58(Obj *arg0, u8 arg1) {
    u32 temp_v0;

    temp_v0 = arg0->fBE;
    arg0->f69 = arg1;
    arg0->fBE = temp_v0 & 0xFD;
}
