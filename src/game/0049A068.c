#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_0049A668(void);
extern void func_0049A610(void);

s32 D_00221564 = 0;
s32 D_00221568 = 0;
s32 D_0022156C = 0;
s32 D_00221570 = 0;
extern u8 D_306CC0[];
extern u8 D_306CD8[];
extern u8 D_306CF0[];
extern u8 D_306D08[];
extern WordTable4 D_0021F618;

// On first use register the four blocks D_306CC0, D_306CD8, D_306CF0 and
// D_306D08 through func_00501458 (with the callbacks func_0049A668 and
// func_0049A610), each guarded by its own flag, then return word index of the
// table D_0021F618.
s32 func_0049A068(s32 index) {
    WordTable4 copy;
    if (D_00221564 == 0) {
        func_00501458(D_306CC0, 0, (void *)func_0049A668, (void *)func_0049A610,
                      0, 0);
        D_00221564 = 1;
    }
    if (D_00221568 == 0) {
        func_00501458(D_306CD8, 0, (void *)func_0049A668, (void *)func_0049A610,
                      0, 0);
        D_00221568 = 1;
    }
    if (D_0022156C == 0) {
        func_00501458(D_306CF0, 0, (void *)func_0049A668, (void *)func_0049A610,
                      0, 0);
        D_0022156C = 1;
    }
    if (D_00221570 == 0) {
        func_00501458(D_306D08, 0, (void *)func_0049A668, (void *)func_0049A610,
                      0, 0);
        D_00221570 = 1;
    }
    copy = D_0021F618;
    return copy.f0[index];
}
