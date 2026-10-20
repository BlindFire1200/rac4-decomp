/* Not matching yet: BYTES 13/208 (tools/try_func.py func_L01_0049A8F0 --diff). Not part of the build. */
extern void *func_006658C0();
extern void func_L01_00585360();
extern void func_L01_00591BD8(u8 *object, s32 new_state, s32 param);
extern void func_L01_0049B448();
extern char D_00222CD0[];
extern char D_00222CE0[];
extern char D_00222CF0[];
extern char D_00222D00[];

void *D_00221CC0 = 0;

// In state 0: initialise the linked block, remember the object, register two
// handlers and move the object to state 1; returns 1, else 0.
s32 func_L01_0049A8F0(u8 *object) {
    u8 *block;

    if (object[0x20] != 0) {
        return 0;
    }
    block = *(u8 **)(object + 0xAC);
    *(s32 *)(block + 0x20) = 0x8AC;
    D_00221CC0 = object;
    *(s32 *)(block + 0x4) = -1;
    *(f32 *)(block + 0x18) = *(f32 *)((u8 *)func_006658C0(0) + 0x2E20);
    *(f32 *)(block + 0x1C) = *(f32 *)((u8 *)func_006658C0(1) + 0x2E20);
    func_L01_00585360(D_00222CD0, D_00222CE0, 4, func_L01_0049B448, object);
    func_L01_00585360(D_00222CF0, D_00222D00, 4, func_L01_0049B448, object);
    func_L01_00591BD8(object, 1, -1);
    return 1;
}
