#include "common.h"

extern void func_00497980(s32);
extern void func_004A1310(void *);
extern void func_004A1358(void *);
extern s32 func_00505B20(void);
extern s32 D_322FC8[];

// Conditional structure access with flag setting
void func_004DC570(s32 arg0) {
    s32 *s0;
    s32 *a0;
    s32 v0;

    s0 = (s32 *)((func_00505B20() * 0x168) + (s32)D_322FC8);
    a0 = (s32 *)((s32)s0 + 0xE4);
    v0 = *(s32 *)((s32)a0 + 0x50);

    if (v0 > 0) {
        if (arg0 != 0) {
            func_004A1358(a0);
        } else {
            func_004A1310(a0);
        }
        func_00497980(0);
        s0[1] = s0[1] | 2;
    }
}
