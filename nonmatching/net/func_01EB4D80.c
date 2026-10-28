/* Not matching yet: BYTES 1/44 (tools/try_func.py func_01EB4D80 --diff). Not part of the build. */
// Assemble a big-endian 32-bit value from the four bytes at offset 4.
s32 func_01EB4D80(u8 *p) {
    return ((((((s32)p[4] << 8) + p[5]) << 8) + p[6]) << 8) + p[7];
}
