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

// When func_00161320 succeeds and the +0x2D5 flag of D_00172160 is set: store
// value at +0x48C, clear +0x488, run func_0015B808 and func_0015B548 on the
// func_01ED7590 result for the +0x490 block, and return whether func_0015B558
// gave zero. Otherwise 0. The counter loop at the top has no effect.
s32 func_0015B970(s32 value) {
    s32 result;
    s32 counter;
    if (D_0021DFE8 != 0) {
        counter = 9;
        do {
            counter -= 1;
        } while (counter >= 0);
    }
    result = 0;
    if (func_00161320() != 0) {
        if (D_00172160.unk2D5 != 0) {
            D_00172160.unk48C = value;
            D_00172160.unk488 = 0;
            func_0015B808();
            func_0015B548(func_01ED7590((u8 *)&D_00172160 + 0x490));
            result = func_0015B558() == 0;
        }
    }
    return result;
}
