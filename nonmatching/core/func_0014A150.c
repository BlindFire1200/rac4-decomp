/* Not matching yet: BYTES 26/132 (tools/try_func.py func_0014A150 --diff). Not part of the build. */
// Multiply elements of arrays arg0 and arg1, store result in arg2, handling odd lengths
void func_0014A150(f32 *arg0, f32 *arg1, f32 *arg2, s32 arg3) {
    s32 temp_t0, temp_v0;
    f32 *var_t1, *var_t2;

    temp_t0 = arg3 >> 1;
    temp_v0 = (arg3 * 4) - 4;
    var_t2 = arg2 + temp_v0;
    var_t1 = arg0 + temp_v0;

    if (temp_t0 > 0) {
        s32 temp_v0_2;
        f32 temp_f0, temp_f0_2, temp_f1;

        temp_t0 -= 1;
        do {
            temp_v0_2 = temp_t0;
            temp_f0 = *arg0;
            temp_t0 -= 1;
            arg0 += 1;
            *arg2 = temp_f0 * *arg1;
            arg2 += 1;
            temp_f0_2 = *var_t1;
            temp_f1 = *arg1;
            var_t1 -= 1;
            arg1 += 1;
            *var_t2 = temp_f0_2 * temp_f1;
            var_t2 -= 1;
        } while (temp_v0_2 > 0);
    }

    if (arg3 & 1) {
        *arg2 = *arg0 * *arg1;
    }
}
