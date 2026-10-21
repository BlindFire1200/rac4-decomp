/* Not matching yet: SIZE ours 296 / retail 280 (tools/try_func.py func_L05_004DF3B8 --diff). Not part of the build. */
#include "common.h"
typedef struct { u8 pad0[0x90]; s32 result; u8 pad94[4]; u8 divisor_byte; u8 pad99[0x258-0x99]; s32 toggle; } Inner;
typedef struct { u8 pad0[0x20]; u8 mode; u8 pad21[0x8B]; Inner *inner; } Root;
typedef struct { u8 pad[8]; f32 divisor; } Rate;
extern Rate D_003B74C8[];
extern s32 D_0021DF64;
void func_L00_005DE048(s32, void *);
void *func_L05_0040C548(void *, s32, void *, s32, s32, s32, s32, f32);
void func_L05_004DF3B8(Root *root, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    Inner *inner = root->inner;
    u32 scratch[4];
    s32 result;
    s32 i = D_0021DF64;
    f32 f = (f32)inner->divisor_byte / D_003B74C8[i].divisor;
    inner->toggle = arg3;
    func_L00_005DE048(arg3 + 2, scratch);
    if (root->mode == 6) f = (f32)inner->divisor_byte;
    else f = (f32)(s32)f;
    result = (s32)func_L05_0040C548(root, arg1, scratch, root->mode == 6 ? 1 : 0x800, arg2, 1, arg4, f);
    if (result != 0 && arg5 != -1) *(s32 *)((u8 *)result + 0x90) = arg5;
    inner->toggle ^= 1;
}
