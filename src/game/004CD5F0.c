#include "common.h"

extern void func_00461E08(s16);
extern void func_0046D668(void);
extern s16 D_00171B52_[];
#define D_00171B52 (D_00171B52_[0])

// Calls func_00461E08 with the halfword D_00171B52, then calls func_0046D668.
void func_004CD5F0(void) {
    func_00461E08(D_00171B52);
    func_0046D668();
}
