#include "common.h"

typedef struct Obj {
    char pad0[0xAC];
    s32 *ptr;
} Obj;

void func_L01_004787D0(Obj *arg0, s32 arg1) {
    if (arg0->ptr != NULL) {
        *arg0->ptr = arg1;
    }
}
