/* Not matching yet: BYTES 3/60 (tools/try_func.py func_0047CE20 --diff). Not part of the build. */
extern s32 func_0045E038(s32);
extern s32 D_003D8500[];

// Conditional lookup in array and function call
s32 func_0047CE20(u32 arg0) {
    s32 *p;

    if (arg0 < 0xD) {
        p = (s32 *)((u8 *)D_003D8500 + (arg0 << 5));
        return func_0045E038(*(s32 *)((u8 *)p + 0x14));
    }
    return 0;
}
