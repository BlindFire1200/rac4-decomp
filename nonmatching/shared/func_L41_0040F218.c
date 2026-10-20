/* Not matching yet: BYTES 5/376 (tools/try_func.py func_L41_0040F218 --diff). Not part of the build. */
extern s32 func_L00_005E60A0(s32);
typedef struct {
    u8 pad0[0xD];
    u8 fD;
    u8 padE[3];
    u8 f11;
    u8 pad12[0xE];
    s8 f20;
    u8 pad21[2];
    s8 f23;
} Type1;
extern Type1 *D_0021DFF0;
extern s32 D_0021DE10;

/* Pick a mode index for kind arg0, query func_L00_005E60A0, and adjust the result. */
s32 func_L41_0040F218(s32 arg0) {
    s32 mode = 0;
    s32 r;
    s32 v;

    switch (arg0) {
    case 1:
        mode = 2;
        break;
    case 2:
        mode = 3;
        if (D_0021DFF0->fD == 0 || D_0021DFF0->f23 != 0 || (v = D_0021DE10, v == 0x29) || v == 0x3D || v == 0x30 || v == 0x44) {
            mode = 2;
        }
        if (D_0021DFF0->f11 == 0) mode = mode - 1;
        break;
    case 3:
        mode = arg0;
        if (D_0021DFF0->f20 != 0) mode = 2;
        break;
    }
    r = func_L00_005E60A0(mode) + 1;
    if (arg0 == 2) {
        if (D_0021DFF0->fD == 0 || D_0021DFF0->f23 != 0 || (v = D_0021DE10, v == 0x29) || v == 0x3D || v == 0x30 || v == 0x44) {
            r++;
        }
        if (D_0021DFF0->f11 == 0) {
            if (r == 2) r++;
        }
    }
    if (arg0 == 3 && D_0021DFF0->f20 != 0) {
        if (r == 2) r++;
    }
    return r;
}
