#include "common.h"

extern void func_L07_003C9BC8(void *);
extern void func_L07_003CAE88(void *);
extern void func_L07_003C9CE8(void *);
extern void func_L07_003CA198(void *);
extern void func_L07_003CA740(void *);

// Per-frame update by the state byte at +0x20: state 10 runs two calls, states
// below 2 do nothing, other states run four calls plus a fifth from state 8 up.
void func_L07_003CAFE8(void *object) {
    u8 state = *(u8 *)(object + 0x20);
    if (state == 10) {
        func_L07_003C9BC8(object);
        func_L07_003CAE88(object);
        return;
    }
    if (state < 2) return;
    func_L07_003C9BC8(object);
    func_L07_003C9CE8(object);
    func_L07_003CA198(object);
    func_L07_003CA740(object);
    if (*(u8 *)(object + 0x20) >= 8) func_L07_003CAE88(object);
}
