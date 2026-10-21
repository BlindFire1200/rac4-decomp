#include "common.h"

extern void func_L00_005BCBF0(void *, s32, s32);
extern s32 func_L00_006F75F0(u32, void *);

// Decode the record, copying it to aligned storage when required.
s32 func_L00_00702D90(s32 unused0, s32 unused1, s32 unused2, s32 arg3) {
    u8 buffer[0x98];
    u8 *data = (u8 *)arg3;
    s32 value;
    u32 flags;

    if ((arg3 & 3) != 0) {
        func_L00_005BCBF0(buffer, arg3, 0x98);
        data = buffer;
    }
    value = func_L00_006F75F0(*(u32 *)(data + 0x14) >> 28, data + 0x18);
    flags = *(u32 *)(data + 0x14) & 0x01000000;
    return flags ? value + 0x29 : value + 0x18;
}
