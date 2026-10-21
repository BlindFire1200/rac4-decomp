#include "common.h"

typedef struct Obj {
    char pad0[0x618];
    u8 f618;
} Obj;

s32 func_L01_0045B5C8(void *arg0, void *arg1, Obj *arg2) {
    return arg2->f618 == 2;
}
