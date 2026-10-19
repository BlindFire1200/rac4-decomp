#include "common.h"

extern void func_L01_00498C48(void *, void *);
extern s32 D_00222D34;

// Walk the list from D_00222D34 (next pointer at +0x28) and run func_L01_00498C48
// on every item of type 0x2682.
void func_L01_00499008(void *param) {
    void *item = (void *)D_00222D34;
    while (item) {
        if (*(s16 *)(item + 0xBC) == 0x2682) func_L01_00498C48(item, param);
        item = *(void **)(item + 0x28);
    }
}
