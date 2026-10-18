#include "common.h"

extern void *func_005A16E8(void *);
extern s32 func_L00_005C8CF0(s16);
extern void *func_L00_005DEBD0(s32, s32, s32);
extern s32 func_L01_005A2F40(void *, void *);

typedef struct {
    u8 pad[0x28];
    s32 f28;
    s32 f2C;
} Type1;

// Ask the object's table-0xE callback for a record and pick one of its two ids.
s32 func_L01_0056E6F0(u8 *arg0) {
    void *owner;
    Type1 *(**action)(void *);
    Type1 *result;

    owner = func_005A16E8(arg0);
    if (owner == 0) return -1;
    action = func_L00_005DEBD0(func_L00_005C8CF0(*(s16 *)(arg0 + 0xBC)), 0xE, 0x1C);
    if (action == 0 || *action == 0) return -1;
    result = (*action)(arg0);
    if (result->f28 == -1) return result->f2C;
    if (result->f2C == -1) return result->f28;
    if (func_L01_005A2F40(arg0, owner) == 0) return result->f28;
    return result->f2C;
}
