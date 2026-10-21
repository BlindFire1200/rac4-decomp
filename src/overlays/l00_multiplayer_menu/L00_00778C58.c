#include "common.h"

s32 func_L00_00777520(void *, void *, s32 *);
s32 func_L00_007777A8(void *, s32, s32, s32);
void func_L00_00778580(void *, s32, s32, s32);

// Build a request packet on the stack (kind 4, code 0x4A in slot 24) and send
// it with func_L00_00777520. When that fails, or the +0xDC code is -0x3CE,
// follow up with func_L00_007777A8 on the result. Returns the result.
s32 func_L00_00778C58(void *object, s32 param, s32 *out) {
    s32 packet[33];
    s32 *result_ptr;
    s32 result;
    func_L00_00778580(packet, 4, param, 0);
    result_ptr = (out != 0) ? out : &packet[32];
    packet[24] = 0x4A;
    result = func_L00_00777520(object, packet, result_ptr);
    if ((result != 0) || (*(s32 *)((u8 *)object + 0xDC) == -0x3CE)) {
        result = func_L00_007777A8(object, *result_ptr, 0, 0);
    }
    return result;
}
