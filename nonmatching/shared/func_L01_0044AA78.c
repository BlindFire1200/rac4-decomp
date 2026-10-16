/* Not matching yet: BYTES 2/172 (tools/try_func.py func_L01_0044AA78 --diff). Not part of the build. */
extern s32 func_L00_005E60D0(s32, s32);
extern void func_L01_004491B0(void);
extern void func_L01_00591BD8(void *, s32, s32);

// Initialize the timer and state for the selected object action.
void func_L01_0044AA78(void *object, s32 value, f32 timer) {
    u8 *linked;
    s32 state;

    if (*(s16 *)((u8 *)object + 0xBC) != 0x20F0) return;
    linked = *(u8 **)((u8 *)object + 0xAC);
    func_L01_004491B0();
    state = *(s16 *)(linked + 0xF2);
    if (state != 0) return;
    *(f32 *)(linked + 0x108) = 0.0f;
    if (*(f32 *)(linked + 0x108) < timer) *(f32 *)(linked + 0xF4) = timer;
    func_L01_00591BD8(object, 1, -1);
    *(s16 *)(linked + 0xF0) = value;
    linked[0x105] = 0;
    linked[0x106] = 0;
    *(s16 *)(linked + 0xF2) = 1;
    *(s32 *)(linked + 0x120) = func_L00_005E60D0(0, 0x1E);
}
