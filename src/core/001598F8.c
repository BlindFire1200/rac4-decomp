#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s64);

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
    s32 f3;
    s32 f4;
    s32 f5;
    s32 f6;
} Struct_7f;

/* Packs seven incoming values into a local struct and hands it to func_00158C60 */
void func_001598F8(s32 p0, s32 p1, s32 p2, s32 p3, s32 p4, s32 p5, s32 p6, s32 p7, s64 p8) {
    Struct_7f s;
    s.f0 = p0;
    s.f1 = p1;
    s.f2 = p2;
    s.f3 = p3;
    s.f4 = p4;
    s.f5 = p5;
    s.f6 = p6;
    func_00158C60(0x4C, 0x1C, &s, p7, p8);
}
