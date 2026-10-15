/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x1B4];
    f32 f1B4;
};
struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
};

s32 func_L00_005B0038(void *, void *, void *);
extern s32 D_0022241C_[];
extern s32 func_L15_004E0030;
#define D_0022241C (D_0022241C_[0])

void func_L15_004E0948(Type1 *arg0, f32 fparg0) {
    arg0->fAC->f1B4 = fparg0;
    func_L00_005B0038(&D_0022241C, &func_L15_004E0030, arg0);
}
