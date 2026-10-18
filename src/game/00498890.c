#include "common.h"

extern s32 func_004986E0(s32);
extern s32 func_00498708(s32);
extern s32 func_00498730(s32);
typedef struct { s32 id; s32 a; s32 b; s32 c; } Type1;
extern Type1 D_003D8D30[];

void func_00498890(void) {
    s32 i;

    for (i = 0; i < 11; i++) {
        if (D_003D8D30[i].a == 0) {
            D_003D8D30[i].a = func_00498730(D_003D8D30[i].id);
        }
        if (D_003D8D30[i].b == 0) {
            D_003D8D30[i].b = func_00498708(D_003D8D30[i].id);
        }
        if (D_003D8D30[i].c == 0) {
            D_003D8D30[i].c = func_004986E0(D_003D8D30[i].id);
        }
    }
}
