#ifndef PAL_COMMAND_BUFFER_H
#define PAL_COMMAND_BUFFER_H

#include "common.h"

/* Word and doubleword views of the same command-stream cursor. */
typedef union {
    u32 *words;
    u64 *pairs;
} PalCommandCursor;

void func_004F7538(PalCommandCursor *, s32 *, s32, s32, s32, s32, s32);
void func_004FAFA8(PalCommandCursor *, s32 *);

#endif
