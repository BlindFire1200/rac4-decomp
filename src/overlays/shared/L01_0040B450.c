#include "common.h"

void func_L00_0066D220(s32, s32, s32);                     /* extern */
extern s32 D_003946F0[];

typedef struct { u8 pad0[0x2F10]; s32 f2F10; } Type1;
void func_L01_0040B450(s32 arg0, Type1 *arg1) {
    func_L00_0066D220(1, 0, arg0);
    D_003946F0[arg1->f2F10] = 0;
}
