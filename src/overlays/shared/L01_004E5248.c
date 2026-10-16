#include "common.h"
extern u8 *D_00222D14;
extern void func_L01_004E4F60(void *);

void *func_L01_004E5248(void *object) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    u8 *entry;
    void *result;
    s16 index;
    u8 *callback_owner = *(u8 **)(linked + 0x80);
    if (callback_owner == 0) return 0;
    index = *(s16 *)(linked + 0x86);
    if (index < 0) return 0;
    entry = linked + ((s32)index << 3);
    result = ((void *(*)(void *))( *(u32 **)(callback_owner + 8) ))(D_00222D14 + (*(u32 *)entry << 8));
    if (result != 0) func_L01_004E4F60(object);
    return result;
}
