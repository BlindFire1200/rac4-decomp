#include "common.h"

extern void func_001619C0(void);
extern s32 func_00139940(void (*callback)(void));
extern void func_001617B0(void);

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fc;
    s32 f10;
} Unk_002173B8;

extern Unk_002173B8 D_00173BB8;

s32 D_0021E070 = 0;

/* Stores the argument into a global table (with a flag), then notifies two subsystems. */
void func_00161A98(s32 arg0) {
    func_001619C0();
    if (arg0 != 0) {
        D_00173BB8.f8 = arg0;
        D_00173BB8.f10 = 1;
    }
    func_00139940(func_001617B0);
    D_0021E070 = 1;
}
