/* Not matching yet: BYTES 2/28 (tools/try_func.py func_004B6950 --diff). Not part of the build. */
#include "common.h"

extern s32 D_3098F0_[];
#define D_3098F0 (D_3098F0_[0])

void func_004B6950(s32 arg0) {
    *((arg0 * 0x1F8) + &D_3098F0) = 0;
}
