/* Not matching yet: BYTES 3/84 (tools/try_func.py func_00502478 --diff). Not part of the build. */
extern s32 func_00506B90(s32 arg0, s32 arg1);

/* Scans up to arg1 bytes from arg0 for a zero byte; on a hit, calls func_00506B90 on the byte after it, else returns 0. */
s32 func_00502478(u8 *arg0, u32 arg1) {
    u32 i = 0;
    u8 *p;

    if (arg1 != 0) {
        p = arg0;
        do {
            i++;
            if (*p == 0) {
                return func_00506B90((s32)(p + 1), 4);
            }
            p = arg0 + i;
        } while (i < arg1);
    }
    return 0;
}
