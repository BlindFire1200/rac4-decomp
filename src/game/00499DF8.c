#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_0049A320(s32);
extern void func_0049A368(s32);

s32 D_00221544 = 0;
s32 D_00221548 = 0;
s32 D_0022154C = 0;
s32 D_00221550 = 0;
extern u8 D_306C00[];
extern u8 D_306C18[];
extern u8 D_306C30[];
extern u8 D_306C48[];
extern WordTable4 D_0021F5F8;

s32 func_00499DF8(s32 index) {
    WordTable4 copy;
    if (D_00221544 == 0) {
        func_00501458(D_306C00, (void *)func_0049A320, 0,
                      (void *)func_0049A368, 0, 0);
        D_00221544 = 1;
    }
    if (D_00221548 == 0) {
        func_00501458(D_306C18, (void *)func_0049A320, 0,
                      (void *)func_0049A368, 0, 0);
        D_00221548 = 1;
    }
    if (D_0022154C == 0) {
        func_00501458(D_306C30, (void *)func_0049A320, 0,
                      (void *)func_0049A368, 0, 0);
        D_0022154C = 1;
    }
    if (D_00221550 == 0) {
        func_00501458(D_306C48, (void *)func_0049A320, 0,
                      (void *)func_0049A368, 0, 0);
        D_00221550 = 1;
    }
    copy = D_0021F5F8;
    return copy.f0[index];
}
