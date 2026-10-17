/* Not matching yet: BYTES 3/112 (tools/try_func.py func_00526FD8 --diff). Not part of the build. */
extern void func_00526E80(void *, s32);
extern void func_00526F20(void *, s32);
extern u8 D_00171D38[];
void func_00526FD8(void *handle, s32 value, s32 alternate) {
    u8 *object = handle;
    s32 offset = *(s32 *)(object + 0x2F10);
    if (D_00171D38[offset + 0xA8] != 0) {
        func_00526F20(handle, alternate);
    } else {
        func_00526F20(handle, value);
    }
    func_00526E80(handle, value);
}
