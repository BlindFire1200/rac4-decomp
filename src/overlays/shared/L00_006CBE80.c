#include "common.h"

extern s32 func_L00_006CBE68(s32, s32, void *, void *);

void func_L00_006CBE80(u8 *arg0) {
    s32 result;
    u8 *object;
    u32 local0;
    u32 local1;
    void *first;
    void *second;
    if (*(s32 *)(arg0 + 0x2404) != 2) return;
    object = *(u8 **)(arg0 + 0x2EF0);
    result = func_L00_006CBE68((s32)arg0, object[0x54], &local0, &local1);
    if (result == 0) return;
    first = *(void **)(arg0 + 0x23E0);
    if (first != 0) *(f32 *)((u8 *)first + 0x48) = *(f32 *)(arg0 + 0x640);
    second = *(void **)(arg0 + 0x23E4);
    if (second != 0) *(f32 *)((u8 *)second + 0x48) = *(f32 *)(arg0 + 0x640);
}
