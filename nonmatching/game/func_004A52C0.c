/* Not matching yet: BYTES 3/28 (tools/try_func.py func_004A52C0 --diff). Not part of the build. */
extern u8 D_307B58[];

/* Stores a float into the 0xEC-byte entry arg0 at offset 0xD0 */
void func_004A52C0(s32 arg0, f32 arg1) {
    u8 *entry = D_307B58 + arg0 * 0xEC;
    *(f32 *)(entry + 0xD0) = arg1;
}
