/* Not matching yet: BYTES 7/100 (tools/try_func.py func_L00_00536290 --diff). Not part of the build. */
extern void *func_L00_004FACD8(s32);
extern s32 func_L00_004F84C8(s32, s32, s32, s32, s32);

void *func_L00_00536290(s32 arg0) {
    void *object = func_L00_004FACD8(0x18);
    if (object != 0) {
        *(s32 *)((u8 *)object + 4) = arg0;
        *(s32 *)object = 0;
        *(s32 *)((u8 *)object + 8) = 0;
        *(u64 *)((u8 *)object + 0x10) = 0;
        return object;
    }
    func_L00_004F84C8(0xD, 0x74, 0x21, 0, 0);
    return 0;
}
