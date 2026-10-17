#include "common.h"

typedef struct { u8 pad3[3]; u8 unk3; } EntryHeader;
typedef struct { u8 pad90[0x90]; s32 unk90; u8 pad94[0x28]; s16 unkBC; } ObjectHeader;
void *func_005112C8();
extern s32 D_0021EDD4;

// Return 1 when the object is of type 0x171C or 0x23F7 (outside mode 1 of
// D_0021EDD4). Otherwise, when its +0x90 word is set, return whether the low
// nibble of the func_005112C8 entry's +3 byte is zero (0 when there is no
// entry); 0 when it is not set.
s32 func_00510CA8(ObjectHeader *object) {
    s16 type;
    s32 result;
    EntryHeader *entry;

    if ((D_0021EDD4 != 1) && ((type = object->unkBC, (type == 0x171C)) || (type == 0x23F7))) {
        return 1;
    }
    result = 0;
    if (object->unk90 != 0) {
        entry = func_005112C8();
        if (entry == NULL) {
            return 0;
        }
        result = (entry->unk3 & 0xF) == 0;
        return result;
    }
    return result;
}
