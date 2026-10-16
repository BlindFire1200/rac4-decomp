#include "common.h"

extern void func_L00_006EC318(void *, s32 *, s32);
extern void *func_L01_006B4FC0(s32, s32, s32, s32);
void func_L41_00443BA0(s32 unused, s32 arg1, s32 arg2) {
    s32 first, second;
    void *stream=func_L01_006B4FC0(unused,2,0,0xFA);
    if(stream) {
        first=arg1;
        func_L00_006EC318(stream,&first,4);
        second=arg2;
        func_L00_006EC318(stream,&second,4);
    }
}
