#include "common.h"

s32 func_0011A518(void *, s32, s32);
void func_0077CFA0(s32, void *);

void func_L00_0077B958(u8 *object) {
    s32 minusOne = -1;
    object[0] = 0;
    object[0x60] = 0;
    object[0x2F4C] = 0;
    object[0x2F54] = 0;
    object[0x2F5D] = 0;
    object[0x2F5C] = 0;
    object[0x2F89] = 0;
    *(s32 *)(object + 0x2F8C) = minusOne;
    *(s32 *)(object + 0x2F90) = minusOne;
    *(s32 *)(object + 0x2F94) = minusOne;
    func_0077CFA0(*(s32 *)(object + 0x2FB4), object + 0x2F9C);
    func_0011A518(object + 0x2FBC, 0, 0x2EE0);
}
