#include "common.h"

typedef struct {
    u8 pad[0x158];
    s32 a;
    s32 b;
    s32 c;
    s32 pad2;
    s32 d;
    s32 pad3;
} Slot;

extern s32 func_004ABF78(void);
extern s32 func_00506BB8(void);
extern void func_00506B70(s32);
extern void func_00506000(s32, s32);
extern void func_00497780(void *, s32);
extern Slot D_00308C80[];

// When func_004ABF78 returns non-zero, keeps func_00506BB8()'s value, calls func_00506B70(arg0),
// resets four words of entry arg0 of D_00308C80 (0x170 bytes each), calls func_00506000 with
// 0x7000B, 0x7000C, 0x70009 and 0x7000A, calls func_00497780 on the entry with 7 and calls
// func_00506B70 with the kept value.
void func_004ABEA0(s32 arg0) {
    if (func_004ABF78() != 0) {
        s32 saved = func_00506BB8();
        func_00506B70(arg0);
        D_00308C80[arg0].a = -1;
        D_00308C80[arg0].b = 0;
        D_00308C80[arg0].c = 0;
        D_00308C80[arg0].d = 0;
        func_00506000(0x7000B, 0);
        func_00506000(0x7000C, 0);
        func_00506000(0x70009, 0);
        func_00506000(0x7000A, 0);
        func_00497780(&D_00308C80[arg0], 7);
        func_00506B70(saved);
    }
}
