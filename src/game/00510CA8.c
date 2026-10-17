#include "common.h"
typedef struct { u8 pad3[3]; u8 unk3; } Type2;
typedef struct { u8 pad90[0x90]; s32 unk90; u8 pad94[0x28]; s16 unkBC; } Type1;
void *func_005112C8();                              /* extern */
extern s32 D_0021EDD4;

s32 func_00510CA8(Type1 *arg0) {
    s16 temp_v1;
    s32 var_v0;
    Type2 *temp_v0;

    if ((D_0021EDD4 != 1) && ((temp_v1 = arg0->unkBC, (temp_v1 == 0x171C)) || (temp_v1 == 0x23F7))) {
        return 1;
    }
    var_v0 = 0;
    if (arg0->unk90 != 0) {
        temp_v0 = func_005112C8();
        if (temp_v0 == NULL) {
            return 0;
        }
        var_v0 = (temp_v0->unk3 & 0xF) == 0;
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
