#include "common.h"

extern void func_L00_00607960(void *);

// Count down the entry's +0xA timer, decrement the tag byte at +4 on wrap and release at zero.
void func_L00_00613C78(u8 *entry) {
    s32 count = *(u16 *)(entry + 0xA) - 1;
    *(u16 *)(entry + 0xA) = count;
    if ((count << 16) == 0) {
        *(u16 *)(entry + 0xA) = 2;
        *(u32 *)(entry + 4) += 0xFF000000;
    }
    if ((*(u32 *)(entry + 4) & 0xFF000000) == 0) func_L00_00607960(entry);
}
