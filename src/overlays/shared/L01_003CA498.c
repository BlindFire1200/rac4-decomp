#include "common.h"

extern void func_L00_005DD4A0(void *);

void func_L01_003CA498(void *arg0) {
    u8 *object = *(u8 **)((u8 *)arg0 + 0xAC);
    s32 *count = *(s32 **)(*(u8 **)(object + 0x100) + 0x10);
    s32 i;
    for (i = 0; i < *count - 1; i++) {
        void **entry = (void **)(object + 4 + i * 4);
        if (*entry != NULL) {
            func_L00_005DD4A0(*entry);
            *entry = NULL;
        }
    }
}
