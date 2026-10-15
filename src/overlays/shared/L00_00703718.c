#include "common.h"

extern void func_L00_005BCBF0(void *, s32, s32);
extern void func_L00_006F7E18(void *);

s32 func_L00_00703718(s32 unused0, s32 unused1, s32 unused2, void *arg3) {
    u8 buffer[0x4E8];
    func_L00_005BCBF0(buffer, (s32)arg3, 0x4E8);
    func_L00_006F7E18(buffer);
    return 0x4E8;
}
