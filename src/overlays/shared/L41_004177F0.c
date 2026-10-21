#include "common.h"

extern void func_L00_006EC318(void *, void *, s32);
extern void *func_L01_006B4FC0(s32, s32, s32, s32);

// Message writer: opens a stream with func_L01_006B4FC0 (kind 1) and writes two
// bytes. Unlike its siblings it does not check that the stream was opened.
void func_L41_004177F0(s32 target, s32 byte_a, u8 byte_b) {
    s8 value;
    void *stream = func_L01_006B4FC0(target, 1, 0, 0);
    value = byte_a;
    func_L00_006EC318(stream, &value, 1);
    value = byte_b;
    func_L00_006EC318(stream, &value, 1);
}
