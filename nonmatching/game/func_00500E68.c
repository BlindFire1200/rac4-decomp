/* Not matching yet: BYTES 3/104 (tools/try_func.py func_00500E68 --diff). Not part of the build. */
/* Call the slot-0x10 method of each non-null entry (of 12) in the table at arg0 + 4. */
void func_00500E68(char *arg0) {
    s32 var_s0;
    s32 temp_v1;
    char *temp_v0;

    var_s0 = 0;
    do {
        temp_v1 = var_s0 * 4;
        var_s0 += 1;
        temp_v0 = *(char **)(*(char **)(arg0 + 4) + temp_v1 + 0x2C);
        if (temp_v0 != NULL) {
            (*(void (**)(char *))(*(char **)(temp_v0 + 4) + 0x10))(temp_v0);
        }
    } while (var_s0 < 0xC);
}
