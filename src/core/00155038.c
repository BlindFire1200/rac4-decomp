#include "common.h"

extern s64 D_0016FBF8_[];
#define D_0016FBF8 (D_0016FBF8_[0])
extern s64 func_0012FEB0(s64 arg0, s64 arg1);

// Passes the 64-bit global shifted up 16 bits, OR'd with the low halfword of the hardware register at 0x10000000, and 0x240 to func_0012FEB0.
void func_00155038(void) {
    func_0012FEB0((D_0016FBF8 << 16) | (*(volatile int *)0x10000000 & 0xFFFF), 0x240);
}
