/* Not matching yet: SIZE ours 288 / retail 304 (tools/try_func.py func_L00_006D1C68 --diff). Not part of the build. */
#include "common.h"
typedef struct { s16 a, b; } Pair;
typedef struct { u8 pad[8]; s32 limit; } Limit;
extern Pair D_004C4818[];
extern Limit D_171B40;
s32 func_L00_005C88C0(void);
void func_L00_006D1C68(s32 unused, s32 *out1, s32 *out2, s32 *out3) {
    s32 max = func_L00_005C88C0() ? 0x3DE : 0x5A;
    s32 i = 0;
    *out1 = 0; *out2 = 0; *out3 = 9;
    if (max == 0) goto end;
    for (;;) {
        if (i < 0x28) {
            *out2 += D_004C4818[i].a;
            *out3 += D_004C4818[i].b;
        } else if (i < 0x5A) {
            *out2 += (i - 0x28) * 0x28 + 0xBB8;
            *out3 += 1;
        } else {
            *out2 += (i - 0x5A) * 0x64 + 0x1388;
            *out3 += 1;
        }
        if (D_171B40.limit < *out2) break;
        i++;
        *out1 = *out2;
        if (i >= max) goto end;
    }
end:
    *out3 += 1;
}
