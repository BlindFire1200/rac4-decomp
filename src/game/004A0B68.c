#include "common.h"

// Initialize a record and its associated state using the supplied identifier or a generated one.
extern s32 func_00501810(void);
extern void func_00506508(s32, s32, s32);
extern void func_00506B70(s32, s32);
void func_004A0B68(void *arg0, s32 arg1) {
    u8 *object = (u8 *)arg0;
    s32 id = arg1;
    *(f32 *)(object + 0) = 1.0f;
    *(s32 *)(object + 4) = 0;
    *(s32 *)(object + 8) = 0;
    *(s32 *)(object + 0xC) = 0;
    *(s32 *)(object + 0x10) = 0;
    object[0x24] = 0;
    *(s32 *)(object + 0x28) = 0;
    if (*(s32 *)(object + 0x2C) == 0) {
        if (id == 0) id = func_00501810();
        *(s32 *)(object + 0x2C) = id;
    }
    func_00506B70(*(s32 *)(object + 0x2C), id);
    func_00506508(*(s32 *)(object + 0x2C), 1, 1);
}
