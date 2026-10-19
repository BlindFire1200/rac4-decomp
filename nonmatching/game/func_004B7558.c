/* Not matching yet: BYTES 11/96 (tools/try_func.py func_004B7558 --diff). Not part of the build. */
extern s32 func_00505B20(void);
extern s32 func_004A0208(s32);
extern void func_0047F568(s32, s32, s32, s32, s32);
extern s32 D_3098F0[];

void func_004B7558(void) {
    s32 temp;
    s32 val;

    temp = func_00505B20();
    val = func_004A0208(temp);

    *(s32 *)((u8 *)D_3098F0 + (temp * 0x1F8) + 0xC) = val;

    func_0047F568(9, 1, 0, 0, 0);
}
