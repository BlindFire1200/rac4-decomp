#include "common.h"

struct Type0 {
    u8 pad0[0x2D5];
    u8 unk2D5;
    u8 pad2D6[0x1B2];
    u8 unk488;
    s32 unk48C;
};
extern struct Type0 D_00172160;
extern s32 D_0021DFE8;
extern void func_0015B548(s32);
extern s32 func_0015B558(void);
extern void func_0015B808(void);
extern s32 func_00161320(void);
extern s32 func_01ED7590(void *);

s32 func_0015B970(s32 arg0) {
    s32 var_s1;
    s32 var_v0_2;
    if (D_0021DFE8 != 0) {
        var_v0_2 = 9;
        do {
            var_v0_2 -= 1;
        } while (var_v0_2 >= 0);
    }
    var_s1 = 0;
    if (func_00161320() != 0) {
        if (D_00172160.unk2D5 != 0) {
            D_00172160.unk48C = arg0;
            D_00172160.unk488 = 0;
            func_0015B808();
            func_0015B548(func_01ED7590((u8 *)&D_00172160 + 0x490));
            var_s1 = func_0015B558() == 0;
        }
    }
    return var_s1;
}
