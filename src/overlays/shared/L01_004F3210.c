#include "common.h"

typedef struct Obj {
    char pad0[0x40];
    u8 f40;
} Obj;

s32 func_L01_004F3210(void *arg0, Obj *arg1) {
    return arg1->f40 != 0;
}
