#include "common.h"
s32 func_L01_0040F2F0(u8 *arg0, void *arg1) {
    u8 *linked = *(u8 **)(arg0 + 0x30);
    s32 result = 0;
    u8 stage;
    if (linked != 0 && linked != arg1) {
        stage = *(*(u8 **)(linked + 0x24) + 0x46);
        if (stage == 5 || stage == 9 || (*(u16 *)(linked + 0x34) & 0x4000)) result = 1;
    }
    return result;
}
