#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004B7E78(void);
extern void func_004B8038(void);
extern void func_004B80D0(void);

s32 D_0022177C = 0;
s32 D_00221780 = 0;
s32 D_00221784 = 0;
s32 D_00221788 = 0;
extern u8 D_30A0D0[];
extern u8 D_30A0E8[];
extern u8 D_30A100[];
extern u8 D_30A118[];
extern WordTable4 D_0021F848;

// On first use register the four blocks D_30A0D0, D_30A0E8, D_30A100 and
// D_30A118 through func_00501458 (with the callbacks func_004B7E78,
// func_004B8038, func_004B80D0), each guarded by its own flag, then return word
// index of the table D_0021F848.
s32 func_004B7BC0(s32 index) {
    WordTable4 copy;
    if (D_0022177C == 0) {
        func_00501458(D_30A0D0, (void *)func_004B7E78, (void *)func_004B8038,
                      (void *)func_004B80D0, 0, 0);
        D_0022177C = 1;
    }
    if (D_00221780 == 0) {
        func_00501458(D_30A0E8, (void *)func_004B7E78, (void *)func_004B8038,
                      (void *)func_004B80D0, 0, 0);
        D_00221780 = 1;
    }
    if (D_00221784 == 0) {
        func_00501458(D_30A100, (void *)func_004B7E78, (void *)func_004B8038,
                      (void *)func_004B80D0, 0, 0);
        D_00221784 = 1;
    }
    if (D_00221788 == 0) {
        func_00501458(D_30A118, (void *)func_004B7E78, (void *)func_004B8038,
                      (void *)func_004B80D0, 0, 0);
        D_00221788 = 1;
    }
    copy = D_0021F848;
    return copy.f0[index];
}
