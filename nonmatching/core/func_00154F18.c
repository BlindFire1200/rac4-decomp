/* Not matching yet: BYTES 1/80 (tools/try_func.py func_00154F18 --diff). Not part of the build. */
/* Stores the 5-bit field of table entry arg0 - 1 through arg1 and returns 0; returns 0x80000004 when the index is out of range. */
extern u8 D_1BCC28[];

s32 func_00154F18(s32 arg0, s16 *arg1) {
    s32 temp_a0;
    u8 *base;

    temp_a0 = arg0 - 1;
    base = D_1BCC28;
    if ((*(s32 *)(base + 0x40) < temp_a0) || (temp_a0 < 0)) {
        return 0x80000004;
    }
    *arg1 = *(u8 *)(base + (((temp_a0 << 4) + temp_a0) << 4) + 0xA8) & 0x1F;
    return 0;
}
