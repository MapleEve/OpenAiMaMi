// __ZN13codexmate_lib4core10repository10Repository39get_or_create_notification_client_state @ 0x100a74160 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::get_or_create_notification_client_state::h786d325b86cdf9fa(
        _QWORD *a1,
        _QWORD *a2)
{
  double v3; // xmm0_8
  _QWORD *v4; // r14
  unsigned __int64 v5; // r12
  __int64 v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rcx
  _QWORD *v11; // r15
  __int64 v12; // r13
  int v13; // edx
  __int64 __dst; // [rsp+0h] [rbp-180h] BYREF
  __int64 v16; // [rsp+8h] [rbp-178h]
  __int64 v17; // [rsp+40h] [rbp-140h] BYREF
  __int64 v18; // [rsp+48h] [rbp-138h]
  __int64 v19; // [rsp+50h] [rbp-130h]
  _BYTE v20[16]; // [rsp+98h] [rbp-E8h] BYREF
  _QWORD v21[12]; // [rsp+A8h] [rbp-D8h] BYREF
  _QWORD *v22; // [rsp+108h] [rbp-78h] BYREF
  __int64 v23; // [rsp+110h] [rbp-70h]
  __int64 v24; // [rsp+118h] [rbp-68h] BYREF
  __int64 v25; // [rsp+120h] [rbp-60h]
  __int64 v26; // [rsp+128h] [rbp-58h]
  __int64 v27; // [rsp+130h] [rbp-50h]
  __int64 v28; // [rsp+138h] [rbp-48h] BYREF
  __int64 v29; // [rsp+140h] [rbp-40h]
  __int64 v30; // [rsp+148h] [rbp-38h]
  __int64 v31; // [rsp+150h] [rbp-30h]

  v22 = a2; /*0x100a74188*/
  v3 = codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(&__dst, (__int64)a2); /*0x100a7418c*/
  v4 = (_QWORD *)v17; /*0x100a74198*/
  v5 = 0x8000000000000000LL; /*0x100a741a5*/
  if ( !__OFSUB__(-v17, 1) ) /*0x100a741a8*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v21, &v17); /*0x100a741b4*/
    v5 = v21[0]; /*0x100a741b9*/
    v6 = v21[1]; /*0x100a741c0*/
    v31 = v21[1]; /*0x100a741ca*/
    if ( v21[0] == 0x8000000000000000LL ) /*0x100a741ce*/
    {
      v5 = 0x8000000000000000LL; /*0x100a741d0*/
    }
    else
    {
      v7 = (_QWORD *)v21[2]; /*0x100a741d5*/
      v23 = v21[2]; /*0x100a741dc*/
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v21[1], v21[2]); /*0x100a741e0*/
      if ( v8 ) /*0x100a741e8*/
      {
        v9 = v16; /*0x100a741ea*/
        v10 = v31; /*0x100a741f7*/
        v27 = v31; /*0x100a741fb*/
        v11 = (_QWORD *)v5; /*0x100a741ff*/
        v12 = v23; /*0x100a74208*/
        if ( ((v16 > 0) & (unsigned __int8)__dst) != 0 ) /*0x100a7420c*/
          goto LABEL_20; /*0x100a7420c*/
        goto LABEL_14; /*0x100a7420c*/
      }
    }
  }
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v20); /*0x100a7421e*/
  v28 = 0; /*0x100a74223*/
  v29 = 1; /*0x100a7422b*/
  v30 = 0; /*0x100a74233*/
  v21[2] = 1610612768; /*0x100a7423b*/
  v21[0] = &v28; /*0x100a7424a*/
  v21[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a74258*/
  if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c( /*0x100a7426d*/
                          v20,
                          v21) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a74429*/
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      &v24,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  v24 = v28; /*0x100a74282*/
  v25 = v29; /*0x100a74286*/
  v26 = v30; /*0x100a7428e*/
  v7 = &v24; /*0x100a74299*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v21, &v24); /*0x100a7429d*/
  v30 = v21[2]; /*0x100a742a9*/
  v29 = v21[1]; /*0x100a742bb*/
  v28 = v21[0]; /*0x100a742bf*/
  if ( v4 != (_QWORD *)0x8000000000000000LL && v4 ) /*0x100a742cb*/
  {
    v7 = v4; /*0x100a742d9*/
    v3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v4, 1); /*0x100a742dc*/
  }
  v19 = v30; /*0x100a742e5*/
  v18 = v29; /*0x100a742f1*/
  v17 = v28; /*0x100a742f5*/
  v11 = (_QWORD *)v24; /*0x100a742f8*/
  v27 = v25; /*0x100a74300*/
  v12 = v26; /*0x100a74304*/
  v6 = v31; /*0x100a74313*/
  if ( 2 * v5 ) /*0x100a74308*/
  {
    v7 = (_QWORD *)v5; /*0x100a7431e*/
    v3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v5, 1); /*0x100a74321*/
  }
  v9 = v16; /*0x100a74326*/
  if ( ((v16 > 0) & (unsigned __int8)__dst) == 0 ) /*0x100a74339*/
  {
LABEL_14:
    v28 = std::time::SystemTime::now::h1fe79e41f9d5677f(v6, v7); /*0x100a7433b*/
    LODWORD(v29) = v13; /*0x100a74344*/
    std::time::SystemTime::duration_since::had059553cab94f96(v21, &v28, 0, 0); /*0x100a74356*/
    if ( LOBYTE(v21[0]) ) /*0x100a74362*/
      v9 = 0; /*0x100a7436d*/
    else
      v9 = v21[1]; /*0x100a74364*/
    __dst = 1; /*0x100a74370*/
    v16 = v9; /*0x100a7437b*/
  }
  v7 = v22; /*0x100a74382*/
  codexmate_lib::core::repository::Repository::save_settings::hf8edda251fe14f24(v21, v22, (__int64)&__dst, v3); /*0x100a74394*/
  if ( LODWORD(v21[0]) == 11 ) /*0x100a743a0*/
  {
    v10 = v27; /*0x100a743a2*/
    v5 = (unsigned __int64)v11; /*0x100a743a6*/
LABEL_20:
    a1[1] = v5; /*0x100a743a9*/
    a1[2] = v10; /*0x100a743ad*/
    a1[3] = v12; /*0x100a743b1*/
    a1[4] = v9; /*0x100a743b5*/
    *a1 = 11; /*0x100a743b9*/
    goto LABEL_23; /*0x100a743c0*/
  }
  qmemcpy(a1, v21, 0x60u); /*0x100a743d1*/
  v7 = &v22; /*0x100a743d1*/
  if ( v11 ) /*0x100a743d7*/
  {
    v7 = v11; /*0x100a743e2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v11, 1); /*0x100a743e5*/
  }
LABEL_23:
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(&__dst, v7); /*0x100a743ea*/
  return a1; /*0x100a743f9*/
}