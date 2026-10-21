/* Not matching yet: SIZE ours 176 / retail 184 (tools/try_func.py func_L00_0067FE68 --diff). Not part of the build. */
#include "common.h"
extern u32 D_00222454;
extern u32 D_00222470;
extern u32 D_00335AE8[];
extern u32 g_overlay_scan_limit;
void func_L00_0067FE68(void) {
    u32 ptr = D_00222454;
    u32 limit = g_overlay_scan_limit;
    s32 count = 0;
    u32 *out = D_00335AE8;
    if (D_00222470 < ptr) goto clear;
    if (*(s16 *)(ptr + 0xBC) != 0x135F) goto loop;
    count = 1;
    *out++ = ptr;
first:
    limit = D_00222470;
loop:
    ptr += 0x100;
    if (limit < ptr) goto clear;
    limit = g_overlay_scan_limit;
    if (*(s16 *)(ptr + 0xBC) != 0x135F) goto loop;
    *out++ = ptr;
    count++;
    if (count < 0x10) goto first;
clear:
    if (count < 0x10) {
        do {
            *out++ = 0;
            count++;
        } while (count < 0x10);
    }
}
