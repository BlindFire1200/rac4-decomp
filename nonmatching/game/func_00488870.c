/* Not matching yet: BYTES 8/108 (tools/try_func.py func_00488870 --diff). Not part of the build. */
extern void *func_004765F0(void);

// Stores four floats into the record func_004765F0 returns; 1 on success, 0 without a record.
s32 func_00488870(f32 a, f32 b, f32 c, f32 d) {
    u8 *p = (u8 *)func_004765F0();

    if (p == 0) {
        return 0;
    }
    *(f32 *)(p + 0x98) = d;
    *(f32 *)(p + 0x78) = a;
    *(f32 *)(p + 0x90) = b;
    *(f32 *)(p + 0x94) = c;
    return 1;
}
