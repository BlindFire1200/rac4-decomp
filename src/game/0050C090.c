#include "common.h"

typedef struct { u8 pad[0xC]; s32 flags; } FlagsHolder;
typedef struct { u8 pad0[4]; u16 type; u8 pad6[2]; s32 value; } FlagMessage;

// Apply a flag message: type 0x6B sets or clears bit 0 of the target's flags
// according to the message value, type 0x6C does the same for bit 1. Returns 1
// for those two types, 0 for any other.
s32 func_0050C090(FlagsHolder *target, FlagMessage *message) {
    s32 result = 1;
    switch (message->type) {
    case 0x6B:
        if (message->value != 0) target->flags |= 1;
        else target->flags &= -2;
        break;
    case 0x6C:
        if (message->value != 0) target->flags |= 2;
        else target->flags &= -3;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}
