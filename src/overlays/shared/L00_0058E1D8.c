#include "common.h"

/* Set a flag field on the object of entry arg0 when its flag is clear. */

typedef struct Type1 Type1;

struct Type1 {
    u8 pad_00[0x10];
    s16 f10;
    u8 pad_12[0x70 - 0x12];
    Type1 *f70;
    u8 pad_74[0x86 - 0x74];
    s16 f86;
    u8 pad_88[0x266 - 0x88];
    s16 f266;
};

typedef struct {
    u8 pad_00[0x50];
    Type1 *f50;
    u8 pad_54[0x70 - 0x54];
    Type1 *f70;
    u8 pad_74[0x86 - 0x74];
    s16 f86;
    u8 pad_88[0x470 - 0x88];
} Type2;

extern Type2 D_0022CA80[];

void func_L00_0058E1D8(s32 arg0) {
    Type1 *temp_v1;

    temp_v1 = ((Type2 *)(arg0 * 0x470 + (u32)D_0022CA80))->f50;
    if (temp_v1->f86 == 0) {
        temp_v1->f70->f266 = 1;
    }
}
