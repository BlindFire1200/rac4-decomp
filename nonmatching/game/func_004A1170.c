/* Not matching yet: BYTES 11/128 (tools/try_func.py func_004A1170 --diff). Not part of the build. */
extern void func_00504F68(s32, s32);

/* Calls func_00504F68 on the first word of each flagged 0x18-byte entry, then clears the count and sets the next word to -1. */
void func_004A1170(void *arg0) {
    s32 var_s1;
    s32 var_s2;

    var_s1 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x50) > 0) {
        var_s2 = 0;
        do {
            u8 *temp_v0 = *(u8 **)((u8 *)arg0 + 0x34) + var_s2;
            if (temp_v0[0xD] != 0) {
                func_00504F68(*(s32 *)(temp_v0 + 4), 0);
            }
            var_s1 += 1;
            var_s2 += 0x18;
        } while (var_s1 < *(s32 *)((u8 *)arg0 + 0x50));
    }
    *(s32 *)((u8 *)arg0 + 0x50) = 0;
    *(s32 *)((u8 *)arg0 + 0x54) = -1;
}
