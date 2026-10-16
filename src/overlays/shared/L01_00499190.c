#include "common.h"
extern void func_L01_00498CC8(void *, s32, void *);
extern s32 D_00222D34;
void func_L01_00499190(void *arg0) {
    void *node = (void *)D_00222D34;
    while (node) {
        if (*(s16 *)(node + 0xBC) == 0x2682) func_L01_00498CC8(node, 4, arg0);
        node = *(void **)(node + 0x28);
    }
}
