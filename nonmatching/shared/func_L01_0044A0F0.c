/* Not matching yet: BYTES 5/140 (tools/try_func.py func_L01_0044A0F0 --diff). Not part of the build. */
extern void *D_003660F8[];
extern void func_L01_00591BD8(void *, s32, s32);

// Find the matching entry and advance its action if it is ready.
s32 func_L01_0044A0F0(void *object) {
    void **cursor;
    void *entry;
    s32 index;

    if (*(u8 *)((u8 *)object + 0x20) != 1) return 1;
    cursor = D_003660F8;
    entry = *cursor;
    for (index = 0; index < 10; index++) {
        cursor++;
        if (entry != 0 && *(void **)((u8 *)entry + 0x2EC) == object && *(s32 *)((u8 *)entry + 0x2F0) >= 3) {
            func_L01_00591BD8(object, 5, -1);
            return 1;
        }
        entry = *cursor;
    }
    return 0;
}
