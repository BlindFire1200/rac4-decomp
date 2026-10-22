#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 f12;
    s32 f16;
    s32 f20;
    s32 f24;
} Type1;

extern void func_00158C60(s32, s32, void *, s32, s32);

/* Packs its arguments into a 7-word block and calls the renderer with it */
void func_001598B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    Type1 s;
    s.f0 = a0;
    s.f4 = a1;
    s.f8 = a2;
    s.f12 = a3;
    s.f16 = a4;
    s.f20 = a5;
    s.f24 = a6;
    func_00158C60(0x4C, 0x1C, &s, 0, 0);
}
