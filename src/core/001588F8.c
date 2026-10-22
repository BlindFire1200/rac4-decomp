#include "common.h"

extern void func_00158A30(s32 id, s32 size, void *data);

// Sends a 4-byte message (id 0x19) carrying the argument through func_00158A30.
void func_001588F8(s32 arg0) {
    s32 data;
    data = arg0;
    func_00158A30(0x19, 4, &data);
}
