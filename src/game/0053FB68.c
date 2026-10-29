#include "common.h"

extern s32 func_0045E038(s32);
extern s32 D_003D4B20[];

// Calls func_0045E038 with the table entry at index arg0.
void func_0053FB68(s32 arg0) {
    func_0045E038(D_003D4B20[arg0]);
}
