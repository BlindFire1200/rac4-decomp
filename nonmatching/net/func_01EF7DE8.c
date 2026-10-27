/* Not matching yet: BYTES 3/24 (tools/try_func.py func_01EF7DE8 --diff). Not part of the build. */
/* Returns the element of the table at +0xD0 indexed by the value at +0xC8. */
s32 func_01EF7DE8(void *arg0) {
    s32 idx = *(s32 *)((u8 *)arg0 + 0xC8);
    s32 *base = *(s32 **)((u8 *)arg0 + 0xD0);
    return *(s32 *)((u32)base + (idx << 2));
}
