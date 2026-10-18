#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004CD978(void);
extern void func_004CDC10(void);
extern void func_004CDCC8(void);

s32 D_0022192C = 0;
s32 D_00221930 = 0;
s32 D_00221934 = 0;
s32 D_00221938 = 0;
extern u8 D_0030EC30[];
extern u8 D_0030EC48[];
extern u8 D_0030EC60[];
extern u8 D_0030EC78[];
extern WordTable4 D_0021FA98;

// On first use register the four blocks D_0030EC30, D_0030EC48, D_0030EC60 and
// D_0030EC78 through func_00501458 (with the callbacks func_004CD978,
// func_004CDC10, func_004CDCC8), each guarded by its own flag, then return word
// index of the table D_0021FA98.
s32 func_004CD740(s32 index) {
    WordTable4 copy;
    if (D_0022192C == 0) {
        func_00501458(D_0030EC30, (void *)func_004CD978, (void *)func_004CDC10,
                      (void *)func_004CDCC8, 0, 0);
        D_0022192C = 1;
    }
    if (D_00221930 == 0) {
        func_00501458(D_0030EC48, (void *)func_004CD978, (void *)func_004CDC10,
                      (void *)func_004CDCC8, 0, 0);
        D_00221930 = 1;
    }
    if (D_00221934 == 0) {
        func_00501458(D_0030EC60, (void *)func_004CD978, (void *)func_004CDC10,
                      (void *)func_004CDCC8, 0, 0);
        D_00221934 = 1;
    }
    if (D_00221938 == 0) {
        func_00501458(D_0030EC78, (void *)func_004CD978, (void *)func_004CDC10,
                      (void *)func_004CDCC8, 0, 0);
        D_00221938 = 1;
    }
    copy = D_0021FA98;
    return copy.f0[index];
}
