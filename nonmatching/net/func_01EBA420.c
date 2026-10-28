/* Not matching yet: BYTES 4/48 (tools/try_func.py func_01EBA420 --diff). Not part of the build. */
// Scales the index by 0x50 into the table at offset 0x184 and sets the flag at offset 0x18 to 1.
s32 func_01EBA420(u8 *arg0, s32 arg1) {
    u8 *tbl;
    u8 *e;
    s32 i;

    tbl = *(u8 **)(arg0 + 0x184);
    i = arg1 & 0xFFFF;
    e = tbl + (((i << 2) + i) << 4);
    if (*(s32 *)(e + 0x18) != 1) {
        *(s32 *)(e + 0x18) = 1;
    }
    return 0;
}
