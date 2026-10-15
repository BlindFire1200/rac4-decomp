#include "common.h"

extern s32 func_00505B20(void);
extern void func_004ADE58(s32);
extern void func_004979A8(void *, s32, s32);
extern s32 D_00171B40[];
extern s32 D_3091A0[];

void func_004AD888(void) {
    s32 idx;
    void *ptr;
    s32 val;

    idx = func_00505B20() * 0x50;
    ptr = (void *)((char *)D_3091A0 + idx);

    func_004ADE58(0x50);

    val = D_00171B40[0];
    *(s32 *)((char *)ptr + 0x28) = val;
    *(s32 *)((char *)ptr + 0x2C) = val;

    func_004979A8((void *)((char *)ptr + 8), val, 0);

    *(s32 *)ptr = 0;
}
