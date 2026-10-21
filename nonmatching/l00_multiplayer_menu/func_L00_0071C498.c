/* Not matching yet: BYTES 34/472 (tools/try_func.py func_L00_0071C498 --diff). Not part of the build. */
typedef struct TypeObj TypeObj; typedef struct TypeVT TypeVT;
struct TypeVT { u8 pad0[0x20]; void (*unk20)(TypeObj *, s32, s32); u8 pad24[0xC4]; void (*unkE8)(TypeObj *, s32); };
struct TypeObj { u8 pad0[0x58]; TypeVT *unk58; };
typedef struct { u8 pad0[0xB0]; TypeObj *unkB0; TypeObj *unkB4; TypeObj *unkB8; TypeObj *unkBC; TypeObj *unkC0; TypeObj *unkC4; u8 padC8[0x178]; void *unk240; u8 pad244[0x20]; s32 unk264; u8 unk268; u8 pad269[3]; s32 unk26C; s32 unk270; } TypeRoot;
void func_L00_0071BAF8(void); void func_L00_0071BB90(void *, s32, u32); void func_L00_0069BED8(void *, f32, f32); void func_L00_0071B3C8(void *); void func_0011D920(void *, s32, s32); s32 func_L00_005C9F50(s32);
void func_0011D920(void *, s32, s32);                  /* extern */
s32 func_L00_005C9F50(s32);                           /* extern */
void func_L00_0069BED8(void *, f32, f32);                     /* extern */
void func_L00_0071B3C8(void *);                        /* extern */
void func_L00_0071BAF8(void);                              /* extern */
void func_L00_0071BB90(void *, s32, u32);                  /* extern */

void func_L00_0071C498(TypeRoot *arg0) {
    TypeObj *temp_a0;
    TypeObj *temp_a0_2;
    TypeObj *temp_a0_3;
    TypeObj *temp_a0_4;
    TypeVT *temp_s0;
    TypeVT *temp_s0_2;
    TypeVT *temp_s0_3;
    TypeVT *temp_s0_4;
    TypeVT *temp_s0_5;
    TypeVT *temp_s0_6;
    TypeObj *temp_v0;
    TypeObj *temp_v0_2;

    u8 sp[0x40];

    func_L00_0071BAF8();
    func_L00_0071BB90(arg0, 0x1A, 0xFFFFFFFF);
    func_L00_0069BED8(arg0->unk240, 0, 0);
    func_L00_0071B3C8(arg0);
    temp_a0 = arg0->unkC0;
    temp_a0->unk58->unk20(temp_a0, 1, 0);
    temp_a0_2 = arg0->unkC4;
    temp_a0_2->unk58->unk20(temp_a0_2, 1, 0);
    if (arg0->unk264 == 0) {
        temp_s0 = arg0->unkB0->unk58;
        temp_s0->unkE8(arg0->unkB0, func_L00_005C9F50(0x1672));
    } else {
        func_0011D920(sp, func_L00_005C9F50(0x1671), arg0->unk264);
        temp_a0_3 = arg0->unkB0;
        temp_a0_3->unk58->unkE8(temp_a0_3, sp);
    }
    if (arg0->unk26C == 0) {
        temp_s0_2 = arg0->unkB4->unk58;
        temp_s0_2->unkE8(arg0->unkB4, func_L00_005C9F50(0x168C));
    } else {
        func_0011D920(sp, func_L00_005C9F50(0x168D), arg0->unk26C);
        temp_a0_4 = arg0->unkB4;
        temp_a0_4->unk58->unkE8(temp_a0_4, sp);
    }
    temp_v0 = arg0->unkB8;
    if (arg0->unk268 != 0) {
        temp_s0_3 = temp_v0->unk58;
        temp_s0_3->unkE8(arg0->unkB8, func_L00_005C9F50(0x1673));
    } else {
        temp_s0_4 = temp_v0->unk58;
        temp_s0_4->unkE8(arg0->unkB8, func_L00_005C9F50(0x1674));
    }
    temp_v0_2 = arg0->unkBC;
    if (arg0->unk270 != 0) {
        temp_s0_5 = temp_v0_2->unk58;
        temp_s0_5->unkE8(arg0->unkBC, func_L00_005C9F50(0x192E));
        return;
    }
    temp_s0_6 = temp_v0_2->unk58;
    temp_s0_6->unkE8(arg0->unkBC, func_L00_005C9F50(0x192D));
}
