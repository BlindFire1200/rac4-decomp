/* cflags: -mno-split-addresses */
#include "common.h"

extern s32 D_002233A4;
extern void func_L00_0070A618(void);
extern s32 func_L00_00765A40(s32);
extern s32 func_L00_0077C668(s32);

/* Reads two state words of a global object, queries it twice, and returns the first query result unless the second query fails. */
s32 func_L00_00708CF0(void) {
    s32 *obj = (s32 *)D_002233A4;
    s32 f34 = obj[0x34 / 4];
    s32 ret = func_L00_0077C668(obj[0x68 / 4]);
    func_L00_0070A618();
    if (func_L00_00765A40(f34) == 0) {
        ret = 0;
    }
    return ret;
}
