/* Not matching yet: BYTES 12/296 (tools/try_func.py func_L01_00468FB0 --diff). Not part of the build. */
extern void func_L00_005F6AE0(void *, s32, void *, s32, s32, s32, f32);
extern void func_L01_004698D8(void);
extern void func_004699E0(void);
extern void func_L01_00591BD8(void *, s32, s32);

// Select the callback and update state based on the event code.
void func_L01_00468FB0(void *object, s32 event) {
    s32 state;
    s32 field;

    switch (event) {
    case 0:
        field = *(u8 *)((u8 *)object + 0x69) ^ 4;
        func_L01_00591BD8(object, 0xF, field != 0 ? 4 : -1);
        return;
    case 1:
        func_L00_005F6AE0(object, 6, func_L01_004698D8, 0, 0, 0, 0.0f);
        field = *(u8 *)((u8 *)object + 0x69) ^ 4;
        state = 4;
        if (field == 0) state = -1;
        func_L01_00591BD8(object, 0x11, state);
        return;
    case 2:
        func_L00_005F6AE0(object, 9, func_004699E0, 0, 0, 0, 0.0f);
        field = *(u8 *)((u8 *)object + 0x69) ^ 4;
        state = 4;
        if (field == 0) state = -1;
        func_L01_00591BD8(object, 0x12, state);
        return;
    case 3:
        field = *(u8 *)((u8 *)object + 0x69) ^ 4;
        state = 4;
        if (field == 0) state = -1;
        func_L01_00591BD8(object, 0x13, state);
        return;
    }
}
