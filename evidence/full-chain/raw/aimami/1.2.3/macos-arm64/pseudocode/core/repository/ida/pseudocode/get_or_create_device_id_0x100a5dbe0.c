// __ZN13codexmate_lib4core10repository10Repository23get_or_create_device_id @ 0x100a5dbe0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::get_or_create_device_id::h9c8ab60e55847caa(
        _QWORD *a1,
        _QWORD *a2)
{
  double v2; // xmm0_8
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _WORD __dst[32]; // [rsp+8h] [rbp-158h] BYREF
  _QWORD v7[11]; // [rsp+48h] [rbp-118h] BYREF
  _BYTE v8[16]; // [rsp+A0h] [rbp-C0h] BYREF
  _QWORD v9[12]; // [rsp+B0h] [rbp-B0h] BYREF
  _QWORD *v10; // [rsp+110h] [rbp-50h] BYREF
  __int64 v11; // [rsp+118h] [rbp-48h]
  __int64 v12; // [rsp+120h] [rbp-40h]
  _QWORD *v13; // [rsp+128h] [rbp-38h] BYREF
  __int64 v14; // [rsp+130h] [rbp-30h]
  __int64 v15; // [rsp+138h] [rbp-28h]
  char v16[25]; // [rsp+147h] [rbp-19h] BYREF

  v2 = codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(__dst, (__int64)a2); /*0x100a5dbfd*/
  if ( !__OFSUB__(0, v7[0]) ) /*0x100a5dc12*/
  {
    a2 = v7; /*0x100a5dcfb*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v9, v7); /*0x100a5dcfe*/
    a1[3] = v9[2]; /*0x100a5dd0a*/
    v3 = (_QWORD *)v9[0]; /*0x100a5dd0e*/
    v4 = v9[1]; /*0x100a5dd15*/
    goto LABEL_6; /*0x100a5dd15*/
  }
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v8); /*0x100a5dc1f*/
  v10 = nullptr; /*0x100a5dc24*/
  v11 = 1; /*0x100a5dc2c*/
  v12 = 0; /*0x100a5dc34*/
  v9[2] = 1610612768; /*0x100a5dc3c*/
  v9[0] = &v10; /*0x100a5dc4b*/
  v9[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a5dc59*/
  if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c( /*0x100a5dc6e*/
                          v8,
                          v9) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a5dd91*/
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      v16,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  v13 = v10; /*0x100a5dc83*/
  v14 = v11; /*0x100a5dc87*/
  v15 = v12; /*0x100a5dc8f*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v9, &v13); /*0x100a5dc9e*/
  v7[2] = v9[2]; /*0x100a5dcaa*/
  v7[1] = v9[1]; /*0x100a5dcbc*/
  v7[0] = v9[0]; /*0x100a5dcc0*/
  codexmate_lib::core::repository::Repository::save_settings::hf8edda251fe14f24(v9, a2, (__int64)__dst, v2); /*0x100a5dcd4*/
  if ( LODWORD(v9[0]) == 11 ) /*0x100a5dce0*/
  {
    a1[3] = v15; /*0x100a5dce6*/
    v3 = v13; /*0x100a5dcea*/
    v4 = v14; /*0x100a5dcee*/
LABEL_6:
    a1[2] = v4; /*0x100a5dd1c*/
    a1[1] = v3; /*0x100a5dd20*/
    *a1 = 11; /*0x100a5dd24*/
    goto LABEL_7; /*0x100a5dd24*/
  }
  qmemcpy(a1, v9, 0x60u); /*0x100a5dd57*/
  a2 = v13; /*0x100a5dd5a*/
  if ( v13 ) /*0x100a5dd61*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x100a5dd6c*/
LABEL_7:
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(__dst, a2); /*0x100a5dd2b*/
  return a1; /*0x100a5dd3a*/
}