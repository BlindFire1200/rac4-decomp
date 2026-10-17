/* Not matching yet: BYTES 11/152 (tools/try_func.py func_L00_0071B9B0 --diff). Not part of the build. */
s32 func_L00_0071B768(void); /* extern */
s32 func_L00_0071B7D0(void *, s32); /* extern */
void func_L00_0071B8E8(void *, s32, s32); /* extern */
s32 func_L00_0071B9B0(void *arg0) {
    s32 temp_s1;
    s32 temp_v1;
    s32 var_v0;
    temp_s1 = *(s32 *)((u8 *)arg0 + 0x230);
    if (temp_s1 == -1) {
        var_v0 = func_L00_0071B768();
        goto block_4;
    }
    temp_v1 = *(s32 *)((u8 *)*(s32 **)((u8 *)arg0 + temp_s1 * 4 + 0xB0) + 4);
    if (temp_v1 < 4) {
        var_v0 = func_L00_0071B7D0(arg0, -1);
block_4:
        func_L00_0071B8E8(arg0, var_v0, 0);
        return temp_s1;
    }
    if (temp_v1 < 5) func_L00_0071B8E8(arg0, temp_s1, 0);
    return temp_s1;
}
