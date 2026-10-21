#include "common.h"

extern int D_00297680[];
extern void func_L01_00500AF8(void *, int);
extern void func_L01_00500C70(void);

// Run func_L01_00500AF8 with the D_00297680 entry for the linked +0x1D0 state,
// or func_L01_00500C70 when that state is -1.
void func_L01_00500AA8(unsigned char *object) {
    int state = *(int *)(*(unsigned char **)(object + 0xAC) + 0x1D0);
    if (state != -1) {
        func_L01_00500AF8(object, D_00297680[state]);
    } else {
        func_L01_00500C70();
    }
}
