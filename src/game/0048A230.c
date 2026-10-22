#include "common.h"

extern void *func_0048A970(s32 id);

// Look up the record for id; when found, store its byte at offset 8 into *out and return 1, else return 0.
s32 func_0048A230(s32 unused0, s32 id, s32 *out) {
    s32 result = 0;
    u8 *object = (u8 *)func_0048A970(id);
    if (object != 0) {
        result = 1;
        if (out != 0) {
            *out = object[8];
        }
    }
    return result;
}
