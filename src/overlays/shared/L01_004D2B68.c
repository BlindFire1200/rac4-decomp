#include "common.h"

typedef struct Obj {
    char pad0[0xBC];
    s16 fBC;
} Obj;

s32 func_L01_004D2B68(Obj *arg0) {
    return arg0->fBC == 0x1A47;
}
