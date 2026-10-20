#include "common.h"
extern void func_004E6440(void *);
extern void func_L00_005B0038(void *, void *, void *);
extern void func_L01_004E5E50(void *);
extern void func_L01_00591BD8(void *, s32, s32);
extern void func_L01_004E6080(void *);
extern s32 D_00222A9C;

void func_L01_004E5DD0(void *object) {
    switch (*((u8 *)object + 0x20)) {
    case 0:
        func_004E6440(object);
        func_L01_00591BD8(object, 1, -1);
        break;
    case 1:
        func_L01_004E5E50(object);
        func_L00_005B0038(&D_00222A9C, func_L01_004E6080, object);
        break;
    }
}
