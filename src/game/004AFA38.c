#include "common.h"

typedef struct __attribute__((packed)) { u32 f0[4]; } Type1;
extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004AFC80(void);
extern void func_004AFCC8(void);
extern void func_004AFD20(void);
s32 D_002216EC = 0;
s32 D_002216F0 = 0;
s32 D_002216F4 = 0;
s32 D_002216F8 = 0;
extern u8 D_309498[];
extern u8 D_3094B0[];
extern u8 D_3094C8[];
extern u8 D_3094E0[];
extern Type1 D_0021F760;

s32 func_004AFA38(s32 arg0) {
    Type1 copy;
    if (D_002216EC == 0) {
        func_00501458(D_309498, (void *)func_004AFC80, (void *)func_004AFCC8, (void *)func_004AFD20, 0, 0);
        D_002216EC = 1;
    }
    if (D_002216F0 == 0) {
        func_00501458(D_3094B0, (void *)func_004AFC80, (void *)func_004AFCC8, (void *)func_004AFD20, 0, 0);
        D_002216F0 = 1;
    }
    if (D_002216F4 == 0) {
        func_00501458(D_3094C8, (void *)func_004AFC80, (void *)func_004AFCC8, (void *)func_004AFD20, 0, 0);
        D_002216F4 = 1;
    }
    if (D_002216F8 == 0) {
        func_00501458(D_3094E0, (void *)func_004AFC80, (void *)func_004AFCC8, (void *)func_004AFD20, 0, 0);
        D_002216F8 = 1;
    }
    copy = D_0021F760;
    return copy.f0[arg0];
}
