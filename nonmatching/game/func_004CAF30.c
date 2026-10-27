/* Not matching yet: BYTES 1/32 (tools/try_func.py func_004CAF30 --diff). Not part of the build. */
extern u8 D_00171948[];

// Returns nonzero when the word at offset 0x34 of record arg0 (32-byte records) is nonzero.
s32 func_004CAF30(s32 arg0) {
    u8 *rec = D_00171948;

    rec += arg0 << 5;
    return ~*(s32 *)(rec + 0x34) != 0;
}
