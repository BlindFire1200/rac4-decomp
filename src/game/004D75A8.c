#include "common.h"

extern void func_0045DE00(void);
extern void func_0049B0D8(s32);
extern void func_0049C290(s32, s32);
extern void func_0049C4B0(s32, s32, s32, s32);
extern void func_004D7B68(void);
extern s32 func_00505B20(void);
extern s32 D_221B08;
extern char D_31E898[];

// Initialization and index-based function calls
void func_004D75A8(void) {
    s32 idx;
    void *ptr;

    func_0045DE00();
    idx = func_00505B20();

    ptr = (void *)(&D_31E898[0] + (idx * 0x528));
    *(s32 *)((u32)ptr + 0x4) = 0;

    func_0049C4B0(idx, 0, D_221B08, 0);
    func_0049C290(idx, 1);
    func_004D7B68();
    func_0049B0D8(idx);
}
