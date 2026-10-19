#include "common.h"

typedef struct { u8 pad[7]; u8 flags; u8 state; } Record;
Record *func_0048A970(s32);

// Look up the record for id; unless it is in state 5, 6 or 7, raise bit 0 of
// its flags byte and return 1. Returns 0 otherwise.
s32 func_0048A290(s32 unused0, s32 id) {
    s32 result = 0;
    Record *object = func_0048A970(id);
    if (object != 0 && object->state != 5 && object->state != 6 && object->state != 7) {
        result = 1;
        object->flags |= 1;
    }
    return result;
}
