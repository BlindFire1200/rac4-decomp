#include "common.h"

extern void func_L00_005BCBF0(void *, s32, s32);
extern void func_L00_006FA788(void *);

// Decode a 0x18-byte message and process it. Returns the message size.
s32 func_L00_00703488(s32 unused0, s32 unused1, s32 unused2, void *data) {
    u8 buffer[0x18];
    func_L00_005BCBF0(buffer, (s32)data, 0x18);
    func_L00_006FA788(buffer);
    return 0x18;
}
