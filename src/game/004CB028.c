/* cflags: -mno-split-addresses */
#include "common.h"

extern void func_004CA1D0(int arg0, int arg1);
extern void func_004CA850(void);
extern unsigned char D_0021EE18[];
int D_0021FA2C = 0;

// Starts the gameplay action selected by the mode argument, or opens the pause menu when no mode is given.
void func_004CB028(int arg0) {
    int var_a0;

    if (arg0 != 0) {
        var_a0 = 0xA;
        goto block_4;
    }
    if (D_0021EE18[0] != 0) {
        var_a0 = 0x12;
        D_0021FA2C = 1;
block_4:
        func_004CA1D0(var_a0, 0);
        return;
    }
    func_004CA850();
}
