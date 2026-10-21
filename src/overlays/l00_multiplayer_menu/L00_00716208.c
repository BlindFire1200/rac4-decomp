#include "common.h"
s32 func_0069C890(s32, f32, f32);
typedef struct { u8 pad[0x68]; s32 count; s32 entries[64]; } EntryList;
s32 func_L00_00716208(EntryList *object, f32 x, f32 y) {
    s32 result = 0;
    s32 i;
    for (i = 0; i < object->count; i++) {
        result |= func_0069C890(object->entries[i], x, y) != 0;
    }
    return result;
}
