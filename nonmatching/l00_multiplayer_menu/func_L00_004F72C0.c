/* Not matching yet: BYTES 17/104 (tools/try_func.py func_L00_004F72C0 --diff). Not part of the build. */
#include "common.h"
extern s32 func_L00_004F72B0(void);
extern s32 func_L00_00516768(s32);
extern void func_L00_00516C28(s32, s32, s32, s32);
s32 func_L00_004F72C0(s32 object, s32 value) {
    s32 result = func_L00_00516768(func_L00_004F72B0());
    if (result != 0) {
        func_L00_00516C28(result, 0x68, value, object);
        return result;
    }
    return 0;
}
