/* Not matching yet: BYTES 11/116 (tools/try_func.py func_00500528 --diff). Not part of the build. */
s32 func_004FFC68();
s32 func_00500528(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    u8 *temp_a2;
    s32 *temp_a3;
    temp_v0 = func_004FFC68();
    if (temp_v0 >= 0) {
        temp_a2 = (u8 *)*arg0;
        temp_a3 = (s32 *)(temp_a2 + 0x124 + (temp_v0 * 4));
        if ((*temp_a3 == 0) && (*(temp_a2 + temp_v0 + 0x1B4) == 0)) {
            *temp_a3 = arg1;
            return 1;
        }
        return 0;
    }
    return 0;
}
