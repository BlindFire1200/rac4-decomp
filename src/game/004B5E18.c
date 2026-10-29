/* C adapted from OpenRAC/rac4-decomp pull request #43 (SCES_532.85 reconstruction of the same routine) */
#include "common.h"
typedef struct {
    u8 f0;
    u8 pad1[3];
    s32 f4;
    s32 f8;
} Type2;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    u8 pad14[0x194 - 0x14];
    Type2 f194[8];
    s32 f1F4;
} Type1;

extern Type1 D_003098F0[];
void func_004B5E18(int arg0, int arg1, int arg2, int arg3) {
    Type1 *var1 = &D_003098F0[arg0];
    var1->f194[var1->f1F4].f0 = arg3;
    var1->f194[var1->f1F4].f8 = arg2;
    var1->f194[var1->f1F4].f4 = arg1;
    var1->f1F4++;
}
