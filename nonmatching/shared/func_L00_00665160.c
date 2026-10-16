/* Not matching yet: SIZE ours 176 / retail 184 (tools/try_func.py func_L00_00665160 --diff). Not part of the build. */
#include "common.h"
typedef struct { u8 pad0[0xAC]; s32 offset; } Result;
typedef struct { s32 base; u8 pad4[4]; u16 length; s16 kind; s16 a; s16 b; } Record;
Result *func_L00_00665120(s16, s16);
void func_L00_005BCBF0(void *, void *, u16);
void func_L00_00665160(s32 *arg0) {
    s32 i = 0;
    if (*arg0 > 0) {
        u8 *var_s1 = (u8 *)arg0 + 8;
        Record *var_s0 = (Record *)((u8 *)arg0 + 4);
        do {
            Result *result = func_L00_00665120(var_s0->b, var_s0->a);
            if (result != 0) {
                void *ptr;
                if (var_s0->kind != 1) ptr = (u8 *)var_s0->base + result->offset;
                else ptr = (u8 *)var_s0->base + (u32)result;
                func_L00_005BCBF0(ptr, var_s1, var_s0->length);
            }
            i++;
            var_s1 += 0x10;
            var_s0 = (Record *)((u8 *)var_s0 + 0x10);
        } while (i < *arg0);
    }
}
