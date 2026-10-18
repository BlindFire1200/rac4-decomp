#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004C57C0(void);
extern void func_004C5910(void);
extern void func_004C59A0(void);

s32 D_00221894 = 0;
s32 D_00221898 = 0;
s32 D_0022189C = 0;
s32 D_002218A0 = 0;
extern u8 D_30B870[];
extern u8 D_30B888[];
extern u8 D_30B8A0[];
extern u8 D_30B8B8[];
extern WordTable4 D_0021F9D8;

// On first use register the four blocks D_30B870, D_30B888, D_30B8A0 and
// D_30B8B8 through func_00501458 (with the callbacks func_004C57C0,
// func_004C5910, func_004C59A0), each guarded by its own flag, then return word
// index of the table D_0021F9D8.
s32 func_004C5670(s32 index) {
    WordTable4 copy;
    if (D_00221894 == 0) {
        func_00501458(D_30B870, (void *)func_004C57C0, (void *)func_004C5910,
                      (void *)func_004C59A0, 0, 0);
        D_00221894 = 1;
    }
    if (D_00221898 == 0) {
        func_00501458(D_30B888, (void *)func_004C57C0, (void *)func_004C5910,
                      (void *)func_004C59A0, 0, 0);
        D_00221898 = 1;
    }
    if (D_0022189C == 0) {
        func_00501458(D_30B8A0, (void *)func_004C57C0, (void *)func_004C5910,
                      (void *)func_004C59A0, 0, 0);
        D_0022189C = 1;
    }
    if (D_002218A0 == 0) {
        func_00501458(D_30B8B8, (void *)func_004C57C0, (void *)func_004C5910,
                      (void *)func_004C59A0, 0, 0);
        D_002218A0 = 1;
    }
    copy = D_0021F9D8;
    return copy.f0[index];
}
