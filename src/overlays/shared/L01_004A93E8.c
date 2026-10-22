#include "common.h"

extern void func_005AC890(void *obj, int kind, int arg);

// Returns 1 when the +0x6BC sub-object of the +0xAC block has a nonzero +0x4 field, otherwise reports the event with func_005AC890(obj, 6, 0) and returns 0.
s32 func_L01_004A93E8(void *arg0) {
    char *blk = *(char **)((char *)arg0 + 0xAC);
    char *sub = *(char **)(blk + 0x6BC);

    if (sub == 0 || *(int *)(sub + 4) == 0) {
        func_005AC890(arg0, 6, 0);
        return 0;
    }
    return 1;
}
