#include "common.h"
typedef struct __attribute__((packed)) Type1 { u64 f0; } Type1;
extern u8 *D_00222B14;
extern u8 *D_00222B18;
s32 func_L01_00559D98(s32 arg0, s32 index, s32 value, Type1 *data) {
    *(s32 *)(index * 4 + D_00222B14) = value;
    *(s32 *)(index * 4 + D_00222B14 + 4) = value;
    *(Type1 *)(index * 8 + D_00222B18) = data[0];
    *(Type1 *)(index * 8 + D_00222B18 + 8) = data[2];
    return index + 2;
}
