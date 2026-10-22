#include "common.h"

typedef struct {
    u8 f00[0x5C];
    u8 f5C[4];
    u8 f60[0x34];
    s32 f94;
    u8 f98[0x20];
} T_004A89A0;

extern T_004A89A0 D_00308108[];
extern char D_0021F6E0[];
extern void func_0011D920(void *dst, void *fmt, s32 v, s64 v2);

// Flush the pending text of record arg0 when it carries a pending flag.
void func_004A89A0(s32 arg0, s64 arg1) {
    T_004A89A0 *p = &D_00308108[arg0];
    s32 pending = p->f94;
    if (pending != 0) {
        func_0011D920(&p->f5C, D_0021F6E0, pending, arg1);
    }
}
