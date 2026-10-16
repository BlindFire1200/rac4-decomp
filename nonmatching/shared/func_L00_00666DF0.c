/* Not matching yet: BYTES 89/260 (tools/try_func.py func_L00_00666DF0 --diff). Not part of the build. */
#include "common.h"
typedef struct Type1 Type1;
typedef struct Type3 Type3;
typedef struct Type2 { Type3 *f0; s32 f4; } Type2;
struct Type3 { u8 pad0[0x10]; s32 f10; s32 f14; };
struct Type1 { u8 pad0[0x28]; s16 f28; u8 pad2A[0x16]; Type2 f40[1]; };
typedef struct Type4 { u8 pad0[0x13]; u8 f13; u8 pad14[0xC]; s32 f20; u8 pad24[0xC]; s32 f30; } Type4;
typedef struct Type5 { s16 f0; s16 f2; } Type5;
extern Type1 *D_00329960[];
extern Type5 D_00329EE0[];
extern s32 D_0032A3E0[];
void func_L00_00666DF0(void) {
    s32 *indices = D_0032A3E0;
    s32 index = *indices;
    if (index >= 0) {
        do {
            Type1 *root = D_00329960[index];
            s32 i = 0;
            if (root->f28 > 0) {
                do {
                    Type3 *object = root->f40[i].f0;
                    s32 j = 0;
                    Type4 *entries = (Type4 *) ((u8 *) object + 0x20 + object->f14 * 0x10);
                    if (object->f10 > 0) {
                        do {
                            Type5 *values = &D_00329EE0[entries[j].f13];
                            if (values->f0 != 0) {
                                entries[j].f30 = (entries[j].f30 & 0xFFFFC000) | values->f0;
                            }
                            if (values->f2 != 0) {
                                entries[j].f20 = (entries[j].f20 & 0xFFFFC000) | values->f2;
                            }
                            j += 1;
                        } while (j < object->f10);
                    }
                    i += 1;
                } while (i < root->f28);
            }
            indices += 1;
            index = *indices;
        } while (index >= 0);
    }
}
