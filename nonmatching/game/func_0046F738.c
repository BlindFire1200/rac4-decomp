/* Not matching yet: BYTES 5/108 (tools/try_func.py func_0046F738 --diff). Not part of the build. */
extern void func_0046EDD8(s32);
extern u8 *D_221450;
extern s32 D_221464;
void func_0046F738(void) {
    s32 i = 0;
    if (D_221464 > 0) {
        do {
            u8 *entry = D_221450 + i * 8;
            if (entry[7] == 0) func_0046EDD8(*(s32 *)entry);
            i++;
        } while (i < D_221464);
    }
}
