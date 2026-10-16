/* Not matching yet: BYTES 18/96 (tools/try_func.py func_01EEE33C --diff). Not part of the build. */
extern void func_01F0C090(void *, s32);
extern void *D_0016E430;
extern void *D_0019C400;

// Check initialization and field, call func if needed
s32 func_01EEE33C(void) {
    if (!D_0016E430) {
        func_01F0C090(D_0019C400, 0x9D);
    }

    if (!*(s32 *)((u8 *)D_0016E430 + 0x94)) {
        func_01F0C090(D_0019C400, 0x9E);
    }

    return *(s32 *)((u8 *)D_0016E430 + 0x94);
}
