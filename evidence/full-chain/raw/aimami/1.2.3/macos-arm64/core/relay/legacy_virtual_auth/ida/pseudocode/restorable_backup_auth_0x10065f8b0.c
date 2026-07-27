// __ZN13codexmate_lib4core5relay19legacy_virtual_auth22restorable_backup_auth @ 0x10065f8b0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::legacy_virtual_auth::restorable_backup_auth::h9e0a67d19b88b522(
        _QWORD *__dst,
        __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r13
  __int64 v13; // rsi
  __int64 v14; // rdi
  _QWORD __src[22]; // [rsp+8h] [rbp-108h] BYREF
  __int64 v16; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-50h]
  __int64 v18; // [rsp+C8h] [rbp-48h]
  __int64 v19; // [rsp+D0h] [rbp-40h]
  __int64 v20; // [rsp+D8h] [rbp-38h]
  __int64 v21; // [rsp+E0h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 584); /*0x10065f8d1*/
  v4 = *(_QWORD *)(a2 + 592); /*0x10065f8d8*/
  codexmate_lib::core::relay::legacy_virtual_auth::read_marker::hf0b1311d546014fd(__src, v3, v4); /*0x10065f8ec*/
  if ( LODWORD(__src[0]) != 11 ) /*0x10065f8f8*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src); /*0x10065f9f9*/
    goto LABEL_11; /*0x10065f9f9*/
  }
  v5 = __src[1]; /*0x10065f8fe*/
  if ( __src[1] < (__int64)0x8000000000000002LL ) /*0x10065f90c*/
  {
LABEL_11:
    *__dst = 0x8000000000000001LL; /*0x10065f9fe*/
    return __dst; /*0x10065f9fe*/
  }
  v21 = __src[2]; /*0x10065f919*/
  if ( (__src[4] & 1) == 0 ) /*0x10065f924*/
  {
    *__dst = 0x8000000000000001LL; /*0x10065fa16*/
    goto LABEL_21; /*0x10065fa19*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v16, v3, v4, &unk_1016028F5, 26); /*0x10065f941*/
  v6 = v17; /*0x10065f946*/
  codexmate_lib::core::relay::legacy_virtual_auth::read_user_owned_backup::h095b77a961713878(__src, v17, v18); /*0x10065f958*/
  if ( LODWORD(__src[0]) == 11 ) /*0x10065f964*/
  {
    v7 = __src[1]; /*0x10065f96a*/
    if ( __src[1] != 0x8000000000000000LL ) /*0x10065f978*/
    {
      v20 = __src[2]; /*0x10065f985*/
      v8 = __src[3]; /*0x10065f989*/
      if ( v16 ) /*0x10065f997*/
      {
        v9 = v6; /*0x10065f99e*/
        v10 = __src[3]; /*0x10065f9a1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v16, 1); /*0x10065f9a4*/
        v8 = v10; /*0x10065f9a9*/
      }
      v11 = v20; /*0x10065f9ac*/
      v16 = v20; /*0x10065f9b0*/
      v17 = v8; /*0x10065f9b4*/
      v18 = 0; /*0x10065f9b8*/
      v19 = 0; /*0x10065f9c0*/
      serde_json::de::from_trait::hee93ab9047d5d7fd(__src, &v16); /*0x10065f9d3*/
      if ( __src[0] == 0x8000000000000001LL ) /*0x10065f9df*/
      {
        *__dst = 0x8000000000000001LL; /*0x10065f9e1*/
        core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..auth..AuthFile$C$serde_json..error..Error$GT$$GT$::hf5b7657b26f32e8b(__src); /*0x10065f9eb*/
      }
      else
      {
        memcpy(__dst, __src, 0xB0u); /*0x10065fa4c*/
      }
      if ( !v7 ) /*0x10065fa54*/
        goto LABEL_21; /*0x10065fa54*/
      v14 = v11; /*0x10065fa5b*/
      v13 = v7; /*0x10065fa5e*/
      goto LABEL_20; /*0x10065fa5e*/
    }
  }
  else
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src); /*0x10065fa22*/
  }
  *__dst = 0x8000000000000001LL; /*0x10065fa27*/
  v13 = v16; /*0x10065fa2a*/
  if ( !v16 ) /*0x10065fa31*/
    goto LABEL_21; /*0x10065fa31*/
  v14 = v6; /*0x10065fa38*/
LABEL_20:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x10065fa61*/
LABEL_21:
  if ( v5 ) /*0x10065fa69*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v5, 1); /*0x10065fa77*/
  return __dst; /*0x10065fa04*/
}