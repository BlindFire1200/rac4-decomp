#include "common.h"
typedef struct __attribute__((packed)) { u32 f0[4]; } Type1;
void *func_00501458(void *, void *, void *, void *, void *, void *);
void func_004D7488(void); void func_004D75A8(void); void func_004D7628(void);
s32 D_00221AE4=0, D_00221AE8=0, D_00221AEC=0, D_00221AF0=0;
extern u8 D_31E7F8[], D_31E810[], D_31E828[], D_31E840[];
extern Type1 D_0021FC00;
s32 func_004D7250(s32 arg0) {
 Type1 copy;
 if(!D_00221AE4){func_00501458(D_31E7F8,(void*)func_004D7488,(void*)func_004D75A8,(void*)func_004D7628,0,0);D_00221AE4=1;}
 if(!D_00221AE8){func_00501458(D_31E810,(void*)func_004D7488,(void*)func_004D75A8,(void*)func_004D7628,0,0);D_00221AE8=1;}
 if(!D_00221AEC){func_00501458(D_31E828,(void*)func_004D7488,(void*)func_004D75A8,(void*)func_004D7628,0,0);D_00221AEC=1;}
 if(!D_00221AF0){func_00501458(D_31E840,(void*)func_004D7488,(void*)func_004D75A8,(void*)func_004D7628,0,0);D_00221AF0=1;}
 copy=D_0021FC00; return copy.f0[arg0];
}
