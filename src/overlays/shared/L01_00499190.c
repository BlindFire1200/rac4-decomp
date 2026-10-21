#include "common.h"

extern void func_L01_00498CC8(void *, s32, void *);
extern s32 D_00222D34;

// Walk the list from D_00222D34 (next pointer at +0x28) and run func_L01_00498CC8
// (mode 4) on every item of type 0x2682.
void func_L01_00499190(void *param) {
    void *item = (void *)D_00222D34;
    while (item) {
        if (*(s16 *)(item + 0xBC) == 0x2682) func_L01_00498CC8(item, 4, param);
        item = *(void **)(item + 0x28);
    }
}
