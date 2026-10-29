#include "common.h"

void func_004B4A98(void);
void func_004B4B80(void);
extern s32 D_3096A8[];
// Call the two setup functions, then clear the word at D_3096A8 and the word at +0x80.
void func_004B22A0(void) {
    func_004B4B80();
    func_004B4A98();
    D_3096A8[0] = 0;
    D_3096A8[32] = 0;
}
