#include "common.h"

extern void *func_L01_006B4FC0(void *, s32, s32, s32);
extern void func_00611808(void *, void *, s32);

// Opens a message stream with func_L01_006B4FC0 (kind 1) and writes one float word to it.
void func_L41_00440CB8(void *target, f32 value) {
    f32 local;
    void *stream = func_L01_006B4FC0(target, 1, 0, 0);
    local = value;
    func_00611808(stream, &local, 4);
}
