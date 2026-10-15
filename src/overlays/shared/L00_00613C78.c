#include "common.h"

extern void func_L00_00607960(void *);

void func_L00_00613C78(u8 *arg0) {
    s32 count = *(u16 *)(arg0 + 0xA) - 1;
    *(u16 *)(arg0 + 0xA) = count;
    if ((count << 16) == 0) {
        *(u16 *)(arg0 + 0xA) = 2;
        *(u32 *)(arg0 + 4) += 0xFF000000;
    }
    if ((*(u32 *)(arg0 + 4) & 0xFF000000) == 0) func_L00_00607960(arg0);
}
