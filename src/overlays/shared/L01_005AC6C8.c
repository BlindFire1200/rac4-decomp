#include "common.h"

extern void *func_00595D00(void *);

// Look up the record for key (func_00595D00). When found, store data at +0x10C,
// clear bit 2 of its +4 flags, set +0x10B to index (data[0] - 1 when index is
// -1), set +0x10A to param and return 1; otherwise return 0.
s32 func_L01_005AC6C8(void *key, u8 *data, s32 index, s32 param) {
    u8 *record = func_00595D00(key);
    if (!record) return 0;
    *(s32 *)(record + 0x10C) = (s32)data;
    *(s32 *)(record + 4) &= ~4;
    if (index == -1) *(u8 *)(record + 0x10B) = data[0] - 1;
    else *(u8 *)(record + 0x10B) = index;
    *(u8 *)(record + 0x10A) = param;
    return 1;
}
