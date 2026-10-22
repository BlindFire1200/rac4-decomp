#include "common.h"

// Returns 1 if the object at +0x2EF4 exists and its +0x324 target's first word is 6.
s32 func_005271C0(void *arg0) {
    void *temp_v0 = *(void **)((u8 *)arg0 + 0x2EF4);

    if (temp_v0 != NULL && *(s32 *)(*(u8 **)((u8 *)temp_v0 + 0x324)) == 6) {
        return 1;
    }
    return 0;
}
