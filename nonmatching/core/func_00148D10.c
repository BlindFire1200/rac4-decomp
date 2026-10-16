/* Not matching yet: BYTES 24/132 (tools/try_func.py func_00148D10 --diff). Not part of the build. */
extern void func_001480F8(void *, s32, s32);
extern void *(*D_0016F740)(s32, s32);

/* Allocate and initialize a structure */
s32 func_00148D10(void **arg0) {
    void *temp_v0;

    temp_v0 = D_0016F740(1, 0x30);
    *arg0 = temp_v0;
    if (temp_v0 == NULL) {
        return 1;
    }
    *(s32 *)((u8 *)temp_v0 + 0x2C) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x20) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x24) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x28) = 0;
    func_001480F8(temp_v0, 0, 0x10);
    func_001480F8((u8 *)temp_v0 + 0x10, 0, 0x10);
    return 0;
}
