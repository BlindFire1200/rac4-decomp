#include "common.h"
extern void func_L07_003C9BC8(void *);
extern void func_L07_003CAE88(void *);
extern void func_L07_003C9CE8(void *);
extern void func_L07_003CA198(void *);
extern void func_L07_003CA740(void *);
void func_L07_003CAFE8(void *arg0) {
    u8 mode = *(u8 *)(arg0 + 0x20);
    if (mode == 10) {
        func_L07_003C9BC8(arg0);
        func_L07_003CAE88(arg0);
        return;
    }
    if (mode < 2) return;
    func_L07_003C9BC8(arg0);
    func_L07_003C9CE8(arg0);
    func_L07_003CA198(arg0);
    func_L07_003CA740(arg0);
    if (*(u8 *)(arg0 + 0x20) >= 8) func_L07_003CAE88(arg0);
}
