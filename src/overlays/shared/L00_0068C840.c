#include "common.h"
typedef struct Type1 { u8 pad0[0x18]; s32 f18; s32 f1C; u8 pad20[0x14]; s32 f34; s32 f38; s32 f3C; s32 f40; } Type1;
extern Type1 D_003360B0;
extern u8 D_00336100[];
extern s32 D_0021DF10;
extern s32 D_0021DEE4;
extern void func_L00_0068FE60(void);
extern void func_L00_006900F8(s32, void *);
extern void func_L00_00690980(s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_L00_0068C840(void) {
    func_L00_0068FE60();
    func_L00_006900F8(D_0021DF10, D_00336100);
    func_L00_00690980(D_0021DEE4, D_003360B0.f18, D_003360B0.f1C,
        D_003360B0.f34 << 4, D_003360B0.f38 << 4, D_003360B0.f3C << 4, D_003360B0.f40 << 4, 0xFFFF, D_0021DF10);
}
