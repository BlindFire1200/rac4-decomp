#include "common.h"

/* Check if pointer is valid and flag is set. */
s32 func_0045D090(void *arg0) {
    void *v1;

    if (arg0 != NULL) {
        v1 = *(void **)(arg0 + 0xAC);
        if (v1 != NULL) {
            if (*(u16 *)(arg0 + 0x34) & 0x20) {
                return *(s32 *)(v1 + 0x30);
            }
        }
    }
    return 0;
}
