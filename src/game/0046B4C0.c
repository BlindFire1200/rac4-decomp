#include "common.h"

extern void func_0046B8C8(void);
s32 D_0021F1A4 = 0;
/* Clears the block via func_0046B8C8, then resets the global flag at D_0021F1A4. */
void func_0046B4C0(void) {
    func_0046B8C8();
    D_0021F1A4 = 0;
}
