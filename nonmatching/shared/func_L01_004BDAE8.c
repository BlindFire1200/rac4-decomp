/* Not matching yet: SIZE ours 204 / retail 240 (tools/try_func.py func_L01_004BDAE8 --diff). Not part of the build. */
#include "common.h"
typedef struct { u8 pad0[0x380]; s32 group; } Inner;
typedef struct { u8 pad[0xAC]; Inner *inner; } Root;
typedef struct { u8 pad[0xC]; s32 value; } Global;
extern s32 D_003AAED8[];
extern Global D_0024AD20;
s32 func_L01_004BDA50(void);
s32 func_L00_005CA278(s32);
s32 func_L01_004BDAE8(Root *root) {
    Inner *inner = root->inner;
    s32 i, group, value;
    s32 *row;
    if (func_L01_004BDA50() == 0) return 0;
    group = inner->group;
    row = (s32 *)((u8 *)D_003AAED8 + group * 0x18);
    for (i = 0; i < 3; i++) {
        value = row[i];
        if (value != -1 && D_0024AD20.value == func_L00_005CA278(value)) {
            if ((row[5] >> i) & 1) return 1;
        }
    }
    return 0;
}
