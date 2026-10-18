#include "common.h"

typedef struct { s32 a, b, c; } Msg12;

extern void func_L00_006EC318(void *, s32 *, s32);
extern void *func_L01_006B4FC0(void *, s32, s32, s32);

void func_L41_00417B68(void *target, Msg12 *src) {
    Msg12 msg = *src;
    func_L00_006EC318(func_L01_006B4FC0(target, 3, 0, 0xFA), (s32 *)&msg, 0xC);
}
