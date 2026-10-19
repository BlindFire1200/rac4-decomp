/* Not matching yet: BYTES 78/300 (tools/try_func.py func_L00_006F6FE0 --diff). Not part of the build. */
void func_L00_006F6FE0(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    u32 var_a1_2;
    u32 var_a3;
    u8 *var_t0;

    temp_a2 = *arg2;
    temp_a3 = arg3 & 0xFF;
    temp_v1 = (s32) ((temp_a2 > -1) ? temp_a2 : (temp_a2 + 7)) >> 3;
    var_t0 = arg0 + temp_v1;
    temp_v1_2 = temp_a2 - (temp_v1 * 8);
    temp_a0 = 8 - temp_v1_2;
    if (temp_a0 < temp_a3) {
        var_a1 = temp_a0 & 0xFF;
        var_a2 = 0;
    } else {
        var_a1 = temp_a3;
        var_a2 = (8 - (temp_a3 + temp_v1_2)) & 0xFF;
    }
    *arg2 += var_a1;
    temp_a3_2 = temp_a3 - var_a1;
    temp_v1_3 = (0xFF >> (8 - var_a1)) & 0xFF;
    var_a3 = temp_a3_2 & 0xFF;
    *var_t0 = (*var_t0 & ~(temp_v1_3 << var_a2)) | ((temp_v1_3 & (arg1 >> temp_a3_2)) << var_a2);
    if (var_a3 != 0) {
        do {
            var_t0 += 1;
            if (var_a3 >= 9U) {
                var_a2_2 = 0;
                var_a1_2 = 8;
            } else {
                var_a1_2 = var_a3;
                var_a2_2 = (8 - var_a3) & 0xFF;
            }
            temp_a3_3 = var_a3 - var_a1_2;
            temp_v0 = (0xFF >> (8 - var_a1_2)) & 0xFF;
            *arg2 += var_a1_2;
            temp_a0_2 = arg1 >> temp_a3_3;
            var_a3 = temp_a3_3 & 0xFF;
            *var_t0 = (*var_t0 & ~(temp_v0 << var_a2_2)) | ((temp_v0 & temp_a0_2) << var_a2_2);
        } while (var_a3 != 0);
    }
}
