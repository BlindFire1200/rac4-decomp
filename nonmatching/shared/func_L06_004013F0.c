/* Not matching yet: SIZE ours 120 / retail 112 (tools/try_func.py func_L06_004013F0 --diff). Not part of the build. */
#include "common.h"

extern u8 *D_00222614;
extern u8 D_00222398[];
extern f32 D_00222618;
extern f32 fmaxf(f32, f32);
extern void func_L06_00401460(void);
extern void func_L00_005B0038(void *, void *, void *);

void func_L06_004013F0(void *object) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    s32 index = *(s32 *)(linked + 0x10);
    if (index != -1) {
        f32 a = *(f32 *)(linked + 0x4);
        u8 *entry = *(u8 **)(D_00222614 + (index << 8) + 0xAC);
        f32 b = *(f32 *)(entry + 0x4);
        f32 maximum = fmaxf(a, b);
        if (maximum < D_00222618) {
            func_L00_005B0038(D_00222398, func_L06_00401460, object);
        }
    }
}
