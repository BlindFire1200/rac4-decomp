#include "common.h"

extern void func_L00_005BCBF0(void *, s32, s32);
extern void func_L00_006FA788(void *);

s32 func_L00_00703488(s32 unused0, s32 unused1, s32 unused2, void *arg3) {
    u8 buffer[0x18];
    func_L00_005BCBF0(buffer, (s32)arg3, 0x18);
    func_L00_006FA788(buffer);
    return 0x18;
}
