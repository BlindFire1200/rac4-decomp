#include "common.h"
extern void func_00497980(s32); extern s32 func_004CD740(s32); extern void func_00501498(s32); extern void func_00505AD8(s32); extern s32 func_00505B20(void); extern void func_00505C90(s32);
typedef struct { u8 pad[0x27C]; s32 f27C; } Entry;
extern Entry D_30ECC0[];
void func_004CD8B8(s32 arg0) {
    s32 saved = func_00505B20();
    func_00505AD8(arg0);
    func_00501498(func_004CD740(arg0));
    func_00505C90(func_004CD740(arg0));
    func_00505AD8(saved);
    func_00497980(0xB);
    D_30ECC0[arg0].f27C = -1;
}
