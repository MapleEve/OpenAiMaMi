// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND get_or_create_notification_client_state node 0x100535f80 depth=0
_QWORD *__fastcall codexmate_lib::core::repository::Repository::get_or_create_notification_client_state::h2b23ec095a6908e7(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned __int64 v7; // r15
  __int64 v8; // r13
  int v9; // edx
  __int64 __dst; // [rsp+0h] [rbp-180h] BYREF
  __int64 v12; // [rsp+8h] [rbp-178h]
  __int64 v13; // [rsp+40h] [rbp-140h] BYREF
  __int64 v14; // [rsp+48h] [rbp-138h]
  __int64 v15; // [rsp+50h] [rbp-130h]
  _BYTE v16[16]; // [rsp+98h] [rbp-E8h] BYREF
  _QWORD v17[12]; // [rsp+A8h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+108h] [rbp-78h]
  __int64 v19; // [rsp+110h] [rbp-70h]
  __int64 v20; // [rsp+118h] [rbp-68h] BYREF
  __int64 v21; // [rsp+120h] [rbp-60h]
  __int64 v22; // [rsp+128h] [rbp-58h]
  __int64 v23; // [rsp+130h] [rbp-50h]
  __int64 v24; // [rsp+138h] [rbp-48h] BYREF
  __int64 v25; // [rsp+140h] [rbp-40h]
  __int64 v26; // [rsp+148h] [rbp-38h]
  __int64 v27; // [rsp+150h] [rbp-30h]

  v18 = a2; /*0x100535fa8*/
  codexmate_lib::core::repository::Repository::load_settings::h93ac22c1afd6e8d4(&__dst); /*0x100535fac*/
  v2 = v13; /*0x100535fb8*/
  v3 = 0x8000000000000000LL; /*0x100535fc5*/
  if ( !__OFSUB__(-v13, 1) ) /*0x100535fc8*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v17, &v13); /*0x100535fd4*/
    v3 = v17[0]; /*0x100535fd9*/
    v27 = v17[1]; /*0x100535fea*/
    if ( v17[0] == 0x8000000000000000LL ) /*0x100535fee*/
    {
      v3 = 0x8000000000000000LL; /*0x100535ff0*/
    }
    else
    {
      v19 = v17[2]; /*0x100535ffc*/
      core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v17[1], v17[2]); /*0x100536000*/
      if ( v4 ) /*0x100536008*/
      {
        v5 = v12; /*0x10053600a*/
        v6 = v27; /*0x100536017*/
        v23 = v27; /*0x10053601b*/
        v7 = v3; /*0x10053601f*/
        v8 = v19; /*0x100536028*/
        if ( ((v12 > 0) & (unsigned __int8)__dst) != 0 ) /*0x10053602c*/
          goto LABEL_20; /*0x10053602c*/
        goto LABEL_14; /*0x10053602c*/
      }
    }
  }
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v16); /*0x10053603e*/
  v24 = 0; /*0x100536043*/
  v25 = 1; /*0x10053604b*/
  v26 = 0; /*0x100536053*/
  v17[2] = 1610612768; /*0x10053605b*/
  v17[0] = &v24; /*0x10053606a*/
  v17[1] = &anon_daf50d54a2d3ecbdf54de6a8568b21ab_429; /*0x100536078*/
  if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c( /*0x10053608d*/
                          v16,
                          v17) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100536249*/
      &anon_daf50d54a2d3ecbdf54de6a8568b21ab_430,
      55,
      &v20,
      &anon_daf50d54a2d3ecbdf54de6a8568b21ab_451,
      &anon_daf50d54a2d3ecbdf54de6a8568b21ab_432);
  v20 = v24; /*0x1005360a2*/
  v21 = v25; /*0x1005360a6*/
  v22 = v26; /*0x1005360ae*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v17, &v20); /*0x1005360bd*/
  v26 = v17[2]; /*0x1005360c9*/
  v25 = v17[1]; /*0x1005360db*/
  v24 = v17[0]; /*0x1005360df*/
  if ( v2 != 0x8000000000000000LL && v2 ) /*0x1005360eb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v2, 1); /*0x1005360fc*/
  v15 = v26; /*0x100536105*/
  v14 = v25; /*0x100536111*/
  v13 = v24; /*0x100536115*/
  v7 = v20; /*0x100536118*/
  v23 = v21; /*0x100536120*/
  v8 = v22; /*0x100536124*/
  if ( 2 * v3 ) /*0x100536128*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v3, 1); /*0x100536141*/
  v5 = v12; /*0x100536146*/
  if ( ((v12 > 0) & (unsigned __int8)__dst) == 0 ) /*0x100536159*/
  {
LABEL_14:
    v24 = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x10053615b*/
    LODWORD(v25) = v9; /*0x100536164*/
    std::time::SystemTime::duration_since::had059553cab94f96(v17, &v24, 0, 0); /*0x100536176*/
    if ( LOBYTE(v17[0]) ) /*0x100536182*/
      v5 = 0; /*0x10053618d*/
    else
      v5 = v17[1]; /*0x100536184*/
    __dst = 1; /*0x100536190*/
    v12 = v5; /*0x10053619b*/
  }
  codexmate_lib::core::repository::Repository::save_settings::h760b790d1e1aa2e7(v17, v18, &__dst); /*0x1005361a2*/
  if ( LODWORD(v17[0]) == 10 ) /*0x1005361c0*/
  {
    v6 = v23; /*0x1005361c2*/
    v3 = v7; /*0x1005361c6*/
LABEL_20:
    a1[1] = v3; /*0x1005361c9*/
    a1[2] = v6; /*0x1005361cd*/
    a1[3] = v8; /*0x1005361d1*/
    a1[4] = v5; /*0x1005361d5*/
    *a1 = 10; /*0x1005361d9*/
    goto LABEL_23; /*0x1005361e0*/
  }
  qmemcpy(a1, v17, 0x60u); /*0x1005361f1*/
  if ( v7 ) /*0x1005361f7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v7, 1); /*0x100536205*/
LABEL_23:
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h7a65c6381a6c4fba(&__dst); /*0x10053620a*/
  return a1; /*0x100536219*/
}