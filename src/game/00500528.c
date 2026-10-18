#include "common.h"
typedef struct {
    u8 pad0[0x124];
    s32 unk124[36];
    u8 unk1B4[1];
} Type1;
s32 func_004FFC68();
s32 func_00500528(Type1 **arg0, s32 arg1) {
    s32 idx = func_004FFC68();
    if (idx < 0) return 0;
    if ((*arg0)->unk124[idx] == 0 && (*arg0)->unk1B4[idx] == 0) {
        (*arg0)->unk124[idx] = arg1;
        return 1;
    }
    return 0;
}
