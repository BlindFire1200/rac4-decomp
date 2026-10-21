/* Not matching yet: SIZE ours 340 / retail 400 (tools/try_func.py func_L00_005D5CE0 --diff). Not part of the build. */
#include "common.h"
typedef struct TypeRoot TypeRoot;
typedef struct TypeObject { u8 pad0[0x10]; s32 f10; s32 f14; } TypeObject;
typedef struct TypeRecord { TypeObject *f0; s32 f4; } TypeRecord;
struct TypeRoot { u8 pad0[0xD]; u8 fD; u8 padE[0x1A]; u8 *f28; u8 pad2C[0x14]; TypeRecord f40[1]; };
typedef struct TypeEntry { u8 pad0[0x13]; u8 f13; u8 pad14[6]; s16 f1A; s32 f1C; u8 pad20[0x20]; } TypeEntry;
extern TypeRoot *D_00248800[];
extern u8 D_00249350[];
extern u32 *D_206BC0[];
extern s32 D_1711A8[];
extern s32 D_0021EA00;
extern void func_L00_005D1AB8(s32, void *, void *, s32);
void func_L00_005D5CE0(u8 *arg0) {
    s32 count = *(s32 *)arg0;
    u8 *record = arg0 + 0x10;
    s32 index = 0;
    D_0021EA00 = count;
    if (count > 0) {
        do {
            s32 offsetA = *(s32 *)(record + 4);
            s32 offsetB = *(s32 *)(record + 8);
            s32 key = *(s32 *)record;
            func_L00_005D1AB8(key, offsetA == 0 ? NULL : arg0 + offsetA,
                              offsetB == 0 ? NULL : arg0 + offsetB,
                              *(s32 *)(record + 0xC));
            {
                u32 *pointerList = D_206BC0[D_1711A8[1]];
                u8 *keyData = D_00249350 + key;
                TypeRoot *root = D_00248800[*keyData];
                if (pointerList[index] != 0 && root->fD != 0) {
                    s32 j = 0;
                    TypeEntry *entries = (TypeEntry *) ((u8 *)root->f28);
                    do {
                        entries[j].f1C = 3;
                        entries[j].f1A = *(u16 *)((u8 *)pointerList[index] + j * 4);
                        j += 1;
                    } while (j < root->fD);
                }
            }
            index += 1;
            record += 0x10;
        } while (index < count);
    }
}
