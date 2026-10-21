/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x30];
    f32 f30;
};
struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
};

extern s32 D_0021E824_[];
extern s32 D_0021E828_[];
extern f32 D_00222A50_[];
#define D_0021E824 (D_0021E824_[0])
#define D_0021E828 (D_0021E828_[0])
#define D_00222A50 (D_00222A50_[0])

void func_L01_0045E510(Type1 *arg0) {
    f32 var_f1;

    if ((D_0021E824 != 0) || (D_0021E828 != 1)) {
        var_f1 = arg0->fAC->f30;
        if (var_f1 > 1.0f) {
            var_f1 = 1.0f;
        } else if (var_f1 < 0.0f) {
            var_f1 = 0.0f;
        }
        D_00222A50 = 1.0f - var_f1;
    }
}
