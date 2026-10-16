#include "common.h"

extern void func_L00_006EC318(void *, void *, s32);
extern void *func_L01_006B4FC0(s32, s32, s32, s32);
void func_L41_004177F0(s32 unused, s32 arg1, u8 arg2) {
    s8 value;
    void *stream=func_L01_006B4FC0(unused,1,0,0);
    value=arg1;
    func_L00_006EC318(stream,&value,1);
    value=arg2;
    func_L00_006EC318(stream,&value,1);
}
