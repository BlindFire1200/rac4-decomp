/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B1590 (NTSC-U func_003B13F0, commit 403f30a9) */
#include "common.h"

extern void func_0011A370();
s32 func_004F0848(u8 *a, s32 sz, u8 *b, s32 off, u8 *src1, s32 len1, u8 *src2, s32 len2) {
    s32 d;
    if (sz + off < len1 + len2) return 0;
    if (len1 >= sz) {
        d = sz - len1;
        func_0011A370(a, src1, sz);
        func_0011A370(b, src1 + sz, len1 - sz);
        func_0011A370(b + len1 - sz, src2, len2);
    } else {
        d = sz - len1;
        if (len2 >= d) {
            func_0011A370(a, src1, len1);
            func_0011A370(a + len1, src2, d);
            func_0011A370(b, src2 + sz - len1, len2 - d);
        } else {
            func_0011A370(a, src1, len1);
            func_0011A370(a + len1, src2, len2);
        }
    }
    return len1 + len2;
}
