/* Not matching yet: BYTES 15/140 (tools/try_func.py func_001412F8 --diff). Not part of the build. */
// Make multiple function calls with different parameters, conditionally update structure fields
extern s32 func_0013EDC8(void *, s32);

void func_001412F8(void *arg0) {
    s32 temp_v0;

    func_0013EDC8(arg0, 0x3);
    temp_v0 = func_0013EDC8(arg0, 0x1);
    if (temp_v0 != 0) {
        func_0013EDC8(arg0, 0x8);
        func_0013EDC8(arg0, 0x8);
        *(s32 *)((u8 *)arg0 + 0x154) = func_0013EDC8(arg0, 0x8);
    }
    *(s32 *)((u8 *)arg0 + 0x158) = func_0013EDC8(arg0, 0xE);
    func_0013EDC8(arg0, 0x1);
    *(s32 *)((u8 *)arg0 + 0x15C) = func_0013EDC8(arg0, 0xE);
}
