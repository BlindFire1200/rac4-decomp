#include "common.h"

extern s32 func_01EA9618(s32, s32, s32);

/* Net send request: forwards the socket, buffer and masked flags to func_01EA9618 and returns 0 on success, -1 on failure. */
s32 func_01E9DD40(s32 a0, s32 a1, s32 a2) {
    return (func_01EA9618(a0, a1, a2 & 0xFFFF) == 0) ? 0 : -1;
}
