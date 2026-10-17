/* Not matching yet: BYTES 14/100 (tools/try_func.py func_L00_00705188 --diff). Not part of the build. */
extern s32 func_L00_005E60D0(s32, s32);
extern s32 func_L00_006848F0(s32, s32);
extern u8 D_0036DEB0[];

// Initialize a shared record and notify its registration helpers.
s32 func_L00_00705188(s32 arg0) {
    u8 *record = D_0036DEB0;
    s32 result;
    *(s32 *)(record + 8) = arg0;
    *(s32 *)(record + 0) = 0;
    *(s32 *)(record + 4) = 0x5A;
    *(f32 *)(record + 0x14) = 1.0f;
    result = func_L00_005E60D0(0x1A, 0x23);
    *(s32 *)(record + 0xC) = 0;
    *(s32 *)(record + 0x10) = result;
    func_L00_006848F0(0, 0);
    return 1;
}
