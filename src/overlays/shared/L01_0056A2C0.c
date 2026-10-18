#include "common.h"

void func_L01_0056A0F8(u8 *owner, u8 *node, s32 v);

void func_L01_0056A2C0(u8 *owner) {
    u8 *node;

    if (owner == 0) {
        return;
    }
    func_L01_0056A0F8(owner, 0, *(s32 *)(owner + 0x3EC));
    node = *(u8 **)(owner + 0x3F0);
    while (node != 0) {
        func_L01_0056A0F8(owner, node, *(s32 *)(node + 0x1A8));
        node = *(u8 **)(node + 0x1AC);
    }
}
