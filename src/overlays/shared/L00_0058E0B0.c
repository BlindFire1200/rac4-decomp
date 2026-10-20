#include "common.h"

typedef struct {
    u8 f0[0x204];
    f32 f204;
} Type2;

typedef struct {
    u8 f0[0x70];
    Type2 *f70;
    u8 f78[0x12];
    s16 f86;
} Type1;

typedef struct {
    u8 f0[0x50];
    Type1 *f50;
    u8 f58[0x1C];
    Type2 *f70;
    u8 f78[0x14];
    u8 f88[0x3E8];
} Type3;

extern Type3 D_0022CA80[];

// Stores a float into the object of the table entry picked by arg0
void func_L00_0058E0B0(s32 arg0, f32 fparg0) {
    Type3 *temp_v0;
    Type1 *temp_v1;

    temp_v0 = &D_0022CA80[arg0];
    temp_v1 = temp_v0->f50;
    if (temp_v1->f86 == 0) {
        temp_v1->f70->f204 = fparg0;
    }
}
