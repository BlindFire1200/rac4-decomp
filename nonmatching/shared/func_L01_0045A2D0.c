/* Not matching yet: BYTES 8/204 (tools/try_func.py func_L01_0045A2D0 --diff). Not part of the build. */
s32 func_L01_0045C038(void);
s32 func_L01_0045C068(void *);
s32 func_L00_005E6058(void *, s32, s32);
s32 func_L01_0056CCC8(s32, void *, s32);
void func_L01_00591BD8(void *, s32, s32);
void func_L01_0045A2D0(unsigned char *arg0) {
    unsigned char *owner = *(unsigned char **)(arg0 + 0xAC);
    if (func_L01_0045C038() != 0) {
        if (*(s32 *)(owner + 0x320) != 0 &&
            func_L00_005E6058(owner + 0x310, *(s32 *)(owner + 0x600), 0) != 0 &&
            func_L01_0056CCC8(*(s32 *)(owner + 0x410), arg0, 0) != 0) {
            func_L01_00591BD8(arg0, 0x16, 4);
        } else {
            func_L01_00591BD8(arg0, 0x15, 4);
        }
        return;
    }
    if (func_L01_0045C068(arg0) != 0 && arg0[0x69] == 5) {
        func_L01_00591BD8(arg0, 0x1A, -1);
        return;
    }
    func_L01_00591BD8(arg0, 0xF, 4);
}
