/* Not matching yet: SIZE ours 240 / retail 224 (tools/try_func.py func_L00_006017A8 --diff). Not part of the build. */
#include "common.h"
typedef struct Type1 {
    char pad0[0x3014];
    s32 f3014;
    u8 *f3018;
    char pad301C[0x20];
    s32 f303C;
    u8 *f3040;
    s32 f3044;
    u8 *f3048;
} Type1;
extern Type1 * volatile D_00222550;
void func_L00_006017A8(void) {
    s32 i;
    s32 offset;
    u8 *data;
    i = 0;
    if (D_00222550->f3044 > 0) {
        data = D_00222550->f3048;
    loop1:
        *(u16 *)(data + i * 8) = 0xFFFF;
        i += 1;
        if (i < D_00222550->f3044) {
            data = D_00222550->f3048;
            goto loop1;
        }
    }
    i = 0;
    if (D_00222550->f303C > 0) {
        offset = 0;
    loop2:
        i += 1;
        *(u16 *)(D_00222550->f3040 + offset + 4) = 0xFFFF;
        if (i < D_00222550->f303C) {
            offset += 0xC;
            goto loop2;
        }
    }
    i = 0;
    if (D_00222550->f3014 > 0) {
        data = D_00222550->f3018;
    loop3:
        *(u16 *)(data + i * 0x20 + 2) &= 0xEFFF;
        i += 1;
        if (i < D_00222550->f3014) {
            data = D_00222550->f3018;
            goto loop3;
        }
    }
}
