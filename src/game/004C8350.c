#include "common.h"

extern void func_00497980(s32 arg0);
extern void func_004C83C0(void);
extern char D_30D188[];

// Clears two flag bytes and one more byte in D_30D188, calls func_004C83C0, then func_00497980(5).
void func_004C8350(void) {
    D_30D188[0x13A0] = 0;
    D_30D188[0x13A9] = 1;
    D_30D188[0x13A8] = 0;
    func_004C83C0();
    func_00497980(5);
}
