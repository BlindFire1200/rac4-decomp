/* Not matching yet: BYTES 12/132 (tools/try_func.py func_004FC408 --diff). Not part of the build. */
// Count total set bits across array elements
extern s32 D_00171BA8_[];

s32 func_004FC408(void) {
    s32 var_t2 = 0;
    s32 var_v1 = 1;
    s32 var_a0;
    s32 var_a3;
    s32 temp_v1;

    do {
        var_a3 = 0;
        if (var_v1 != 0xF) {
            if ((var_v1 ^ 0x23) != 0) {
                var_a3 = 0xF;
            }
        }

        var_a0 = 0;
        if (var_a3 != 0) {
            do {
                temp_v1 = (D_00171BA8_[((var_v1 - 1) % 20)] >> var_a0) & 1;
                var_a0 += 1;
                var_t2 += temp_v1;
            } while (var_a0 < var_a3);
        }

        var_v1 += 1;
    } while (var_v1 < 0x10);

    return var_t2;
}
