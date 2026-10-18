/* Not matching yet: BYTES 1/112 (tools/try_func.py func_00526FD8 --diff). Not part of the build. */
extern void func_00526E80(void *, s32);
extern void func_00526F20(void *, s32);
extern u8 D_00171D38[];
void func_00526FD8(void *handle, s32 value, s32 alternate) {
    u8 *base = D_00171D38;
    base += *(s32 *)((u8 *)handle + 0x2F10);
    if (base[0xA8] != 0) {
        func_00526F20(handle, alternate);
    } else {
        func_00526F20(handle, value);
    }
    func_00526E80(handle, value);
}
