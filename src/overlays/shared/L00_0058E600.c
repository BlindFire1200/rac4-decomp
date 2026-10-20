#include "common.h"

typedef struct {
    char pad00[0x1F4];
    f32 unk1F4;
} Type_0058E600_C;

typedef struct {
    char pad00[0x70];
    Type_0058E600_C *unk70;
    char pad74[0x86 - 0x74];
    s16 unk86;
} Type_0058E600_B;

typedef struct {
    char pad00[0x50];
    Type_0058E600_B *unk50;
    char pad54[0x470 - 0x54];
} Type_0058E600_A;

extern void func_L00_0058E350(Type_0058E600_B *, f32);
extern Type_0058E600_A D_0022CA80[];

/* Stores a float into a sub-object of a table entry and notifies a helper, if allowed. */
void func_L00_0058E600(s32 arg0, f32 fparg0, f32 fparg1) {
    Type_0058E600_B *p = ((Type_0058E600_A *)((arg0 * 0x470) + (s32)D_0022CA80))->unk50;

    if (p->unk86 == 0) {
        if (fparg0 != 0.0f) {
            p->unk70->unk1F4 = fparg0;
            func_L00_0058E350(p, fparg1);
        }
    }
}
