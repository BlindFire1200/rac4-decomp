#include "common.h"

typedef struct Obj {
    char pad0[0xBC];
    s16 fBC;
} Obj;

s32 func_L01_004D2B58(Obj *arg0) {
    return arg0->fBC == 0xCBE;
}
