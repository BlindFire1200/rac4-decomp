/* Not matching yet: SIZE ours 244 / retail 256 (tools/try_func.py func_L00_006FEDE8 --diff). Not part of the build. */
#include "common.h"
extern u8 D_1738A0[];
extern u32 D_004C4418[];
s32 func_L00_006FEDE8(void) {
    u8 *base;
    u8 *start;
    u8 *end;
    s32 start_addr;
    s32 end_addr;
    s32 rem;
    u32 checksum;
    u32 value;
    u32 index;
    checksum = 0xFFFFFFFF;
    base = D_1738A0;
    start_addr = (s32) base;
    rem = start_addr - (((start_addr > -1 ? start_addr : start_addr + 0xF) >> 4) << 4);
    start = rem != 0 ? base + (0x10 - rem) : base;
    end = base + 0x178;
    end_addr = (s32) end;
    rem = end_addr - (((end_addr > -1 ? end_addr : end_addr + 0xF) >> 4) << 4);
    end -= rem;
    if (start < end) {
        u32 *ptr = (u32 *) start;
        u32 *limit = (u32 *) end;
        do {
            value = checksum ^ *ptr++;
            index = value & 0xFF;
            checksum = (value >> 8) ^ D_004C4418[index];
            index = checksum & 0xFF;
            checksum = (checksum >> 8) ^ D_004C4418[index];
            index = checksum & 0xFF;
            checksum = (checksum >> 8) ^ D_004C4418[index];
            index = checksum & 0xFF;
            checksum = (checksum >> 8) ^ D_004C4418[index];
        } while ((u8 *) ptr < (u8 *) limit);
    }
    return checksum;
}
