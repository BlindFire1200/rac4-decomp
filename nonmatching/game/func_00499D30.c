/* Not matching yet: BYTES 9/96 (tools/try_func.py func_00499D30 --diff). Not part of the build. */
void func_00499538(void *);
extern u8 D_2F3950[];

/* Iterate array and process non-zero entries */
void func_00499D30(void) {
    u8 *s0;
    u8 *s1;

    s0 = D_2F3950;
    s1 = D_2F3950 + 0x280;
    do {
        u8 *temp = *(u8 **)s0;
        if (temp == NULL || *temp == 0) {
            s0 += 0x14;
        } else {
            func_00499538(s0);
            s0 += 0x14;
        }
    } while ((s32)s0 < (s32)s1);
}
