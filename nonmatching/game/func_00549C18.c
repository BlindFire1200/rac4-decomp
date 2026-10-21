/* Not matching yet: BYTES 16/136 (tools/try_func.py func_00549C18 --diff). Not part of the build. */
extern void *func_00549B18(s32);

// Validate index and find matching record
s32 func_00549C18(s32 arg0, s32 arg1) {
    u32 idx_check;
    s32 i;
    void *rec;
    u8 *ptr;

    idx_check = arg1 - 1;
    if (idx_check < 6) {
        rec = func_00549B18(arg1);
        ptr = (u8 *)((u32)arg0 + 0xA6C + (*(u8 *)((u32)rec + 0x8) * 0x44));

        for (i = 0; i < 2; i++) {
            if (*ptr == arg1) {
                return 1;
            }
            ptr += 4;
        }
    }

    return 0;
}
