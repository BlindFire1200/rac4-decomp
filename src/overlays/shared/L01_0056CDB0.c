#include "common.h"

extern s32 func_L00_005C8CF0(s16);
extern void *func_L00_005C8EB8(void *);
extern void *func_L00_005DEBD0(s32, s32, s32);

// Consume one pending item: ask the registered callback (id from the object's
// type halfword, table 0xE) for a record, clear its +0x13 flag and bump the
// owner's +0x1E2 counter. Returns 1 on success, 0 when any step has nothing.
s32 func_L01_0056CDB0(u8 *object) {
    void **list;
    u8 *owner;
    void **callback;
    s32 result;
    if (object == 0) return 0;
    list = (void **)func_L00_005C8EB8(object);
    if (list == 0) return 0;
    owner = (u8 *)list[0];
    if (owner == 0) return 0;
    callback = (void **)func_L00_005DEBD0(func_L00_005C8CF0(*(s16 *)(object + 0xBC)), 0xE, 0x1C);
    if (callback == 0) return 0;
    if (callback[0] == 0) return 0;
    result = ((s32 (*)())callback[0])(object);
    if (result == 0) return 0;
    if (*(u8 *)(result + 0x13) == 0) return 0;
    *(u8 *)(result + 0x13) = 0;
    owner[0x1E2] = (u8)(owner[0x1E2] + 1);
    return 1;
}
