/* Not matching yet: BYTES 24/164 (tools/try_func.py func_00503B88 --diff). Not part of the build. */
#include "common.h"
extern void func_00503B58(void *, s32, s32, s32, s32);
extern void func_00503B70(void *);
typedef struct __attribute__((packed, aligned(4))) { u64 f0; u32 f8; } TypeCopy;
void *func_00503B88(void *arg0) {
    u8 temp[12];
    s32 i;
    u8 *ptr;
    i = 15;
    ptr = arg0;
    do {
        func_00503B70(ptr);
        i--;
        ptr += 12;
    } while (i != -1);
    func_00503B58(temp, 0, 0, 0, 0);
    ptr = arg0;
    do {
        *(TypeCopy *)ptr = *(TypeCopy *)temp;
        ptr += 12;
    } while ((s32)ptr < (s32)((u8 *)arg0 + 0xC0));
    return arg0;
}
