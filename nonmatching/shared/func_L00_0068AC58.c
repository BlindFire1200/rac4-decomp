/* Not matching yet: BYTES 9/684 (tools/try_func.py func_L00_0068AC58 --diff). Not part of the build. */
extern s32 D_1DFCF0[];
void func_L00_00679210(s32, u64, s32);

/* Set up GS registers and draw 32 textured strips, then a coloured sprite */
void func_L00_0068AC58(s32 r, s32 g, s32 b) {
    s32 i;
    s32 tw, sw, u, x, u2, x2;

    x = 8;
    i = 0x3E;

    func_L00_00679210(0x4D, (u64)(D_1DFCF0[1] >> 13) | 0x02080000 | 0x3FFF00000000ULL, 0);
    func_L00_00679210(0x4F, (u64)(D_1DFCF0[2] >> 13) | 0x31000000 | 0x100000000ULL, 0);
    func_L00_00679210(0x48, 0x30000, 0);
    func_L00_00679210(0x19, 0, 0);
    func_L00_00679210(0x41, 0x33F000001FF0000ULL, 0);
    func_L00_00679210(0x3F, 0, 0);
    func_L00_00679210(0x15, 0, 0);
    func_L00_00679210(7, (u64)(D_1DFCF0[1] >> 8) | 0x28220000 | 0xE80000000ULL, 0);
    func_L00_00679210(0, 0x316, 0);
    func_L00_00679210(1, 0x3F80000080808080ULL, 0);
    tw = 8;
    sw = 8;
    x2 = 0x100;
    u2 = 0x88;
    u = 8;
    do {
        func_L00_00679210(3, u | 0x80000, 0);
        func_L00_00679210(5, x << 4, 0);
        func_L00_00679210(3, u2 | 0x34080000, 0);
        func_L00_00679210(5, x2 | 0x34000000, 0);
        u += tw << 5;
        x += sw * 2;
        u2 += tw << 5;
        x2 += sw << 5;
        i -= 2;
    } while (i >= 0);
    func_L00_00679210(0x47, 0x30000, 0);
    func_L00_00679210(1, (u64)r | ((u64)g << 8) | ((u64)b << 16) | 0x3F80000080000000ULL, 0);
    func_L00_00679210(0x42, 0x8000000098ULL, 0);
    func_L00_00679210(0, 0x146, 0);
    func_L00_00679210(5, 0x7FFF73007000ULL, 0);
    func_L00_00679210(5, 0x7FFF8D009000ULL, 0);
}
