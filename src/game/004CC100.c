#include "common.h"

// Looks up the table entry D_003D2738[arg0], runs it through func_004A1A60 together with
// the global D_00221920, and passes the result on to func_00505328 with the colour 0x80808080.
extern s32 func_004A1A60(s32 *arg0, s32 arg1);
extern void func_00505328(s32, s32);
extern s32 D_00221920;
extern s32 D_003D2738[];

void func_004CC100(s32 arg0) {
    func_00505328(func_004A1A60(&D_00221920, D_003D2738[arg0]), 0x80808080);
}
