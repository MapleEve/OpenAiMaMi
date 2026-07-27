// __ZN13codexmate_lib4core5relay15config_takeover8takeover @ 0x1009009f0 | 基线 same-set
_BYTE *__fastcall codexmate_lib::core::relay::config_takeover::takeover::h0751a2fbecf2bbb0(
        _BYTE *a1,
        _QWORD *a2,
        __m128i a3)
{
  __int64 v4; // rax
  size_t v5; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  size_t v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r14d
  __int64 v13; // r12
  __int64 v14; // r15
  char v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  void *v19; // r14
  __int64 v20; // r15
  _QWORD *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rdx
  void *v25; // rdi
  char v27; // al
  _BYTE *v28; // r15
  __int64 v29; // r14
  _BYTE *v30; // rsi
  __int128 v31; // kr30_16
  __int128 v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  bool v36; // r14
  double v37; // xmm0_8
  bool v38; // zf
  _QWORD v39[11]; // [rsp+0h] [rbp-270h] BYREF
  _BYTE v40[72]; // [rsp+58h] [rbp-218h] BYREF
  _QWORD v41[3]; // [rsp+A0h] [rbp-1D0h] BYREF
  void *v42; // [rsp+B8h] [rbp-1B8h]
  __int128 __n; // [rsp+C0h] [rbp-1B0h] BYREF
  __int128 v44; // [rsp+D0h] [rbp-1A0h]
  __int128 v45; // [rsp+E0h] [rbp-190h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-180h]
  __int128 v47; // [rsp+F8h] [rbp-178h] BYREF
  __int64 v48; // [rsp+108h] [rbp-168h]
  __int64 v49; // [rsp+110h] [rbp-160h] BYREF
  void *v50; // [rsp+118h] [rbp-158h]
  size_t v51; // [rsp+120h] [rbp-150h]
  __int128 v52; // [rsp+128h] [rbp-148h]
  __int64 v53; // [rsp+138h] [rbp-138h]
  __int64 v54; // [rsp+140h] [rbp-130h] BYREF
  void *__s2; // [rsp+148h] [rbp-128h]
  __int64 v56; // [rsp+150h] [rbp-120h]
  _BYTE v57[88]; // [rsp+158h] [rbp-118h] BYREF
  _BYTE *v58; // [rsp+1B0h] [rbp-C0h] BYREF
  __int128 v59; // [rsp+1B8h] [rbp-B8h]
  __int128 v60; // [rsp+1C8h] [rbp-A8h]
  __int64 v61; // [rsp+1D8h] [rbp-98h]
  _OWORD v62[6]; // [rsp+1E0h] [rbp-90h] BYREF
  _BYTE v63[48]; // [rsp+240h] [rbp-30h] BYREF

  v4 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(a2); /*0x100900a0d*/
  if ( v4 ) /*0x100900a15*/
  {
    *(_QWORD *)a1 = 2; /*0x100900a17*/
    *((_QWORD *)a1 + 1) = v4; /*0x100900a1e*/
    return a1; /*0x100900a22*/
  }
  v5 = a2[73]; /*0x100900a27*/
  v6 = a2[74]; /*0x100900a2e*/
  codexmate_lib::core::relay::config_takeover::quarantine_damaged_backups::he1fa00f5327fc085((__int64)v62, v5, v6); /*0x100900a42*/
  *(_QWORD *)v57 = *((_QWORD *)&v62[0] + 1); /*0x100900a55*/
  v7 = *(_QWORD *)&v62[0]; /*0x100900a55*/
  *(_OWORD *)&v57[8] = v62[1]; /*0x100900a60*/
  if ( *(_QWORD *)&v62[0] != 11 ) /*0x100900a76*/
  {
    *((_OWORD *)a1 + 5) = v62[5]; /*0x100900ddf*/
    *((_OWORD *)a1 + 4) = v62[4]; /*0x100900def*/
    *((_OWORD *)a1 + 3) = v62[3]; /*0x100900dff*/
    *((_OWORD *)a1 + 2) = v62[2]; /*0x100900e0f*/
    *((_QWORD *)a1 + 3) = *(_QWORD *)&v57[16]; /*0x100900e1a*/
    v16 = *(_QWORD *)v57; /*0x100900e1e*/
    *((_QWORD *)a1 + 2) = *(_QWORD *)&v57[8]; /*0x100900e2c*/
    *((_QWORD *)a1 + 1) = v16; /*0x100900e30*/
    *(_QWORD *)a1 = v7; /*0x100900e34*/
    return a1; /*0x100900e37*/
  }
  v52 = *(_OWORD *)v57; /*0x100900a8a*/
  v53 = *(_QWORD *)&v57[16]; /*0x100900a9f*/
  v8 = a2[8]; /*0x100900aaa*/
  v42 = (void *)a2[7]; /*0x100900ab5*/
  *(double *)a3.i64 = codexmate_lib::core::relay::config_takeover::read_optional_text::hb639c55c55ba33b6( /*0x100900abf*/
                        v62,
                        (__int64)v42,
                        v8);
  *(_QWORD *)v57 = *((_QWORD *)&v62[0] + 1); /*0x100900ad2*/
  v9 = *(_QWORD *)&v62[0]; /*0x100900ad2*/
  *(_OWORD *)&v57[8] = v62[1]; /*0x100900add*/
  if ( *(_QWORD *)&v62[0] != 11 ) /*0x100900af3*/
  {
    *((_OWORD *)a1 + 5) = v62[5]; /*0x100900e48*/
    *((_OWORD *)a1 + 4) = v62[4]; /*0x100900e58*/
    *((_OWORD *)a1 + 3) = v62[3]; /*0x100900e68*/
    *((_OWORD *)a1 + 2) = v62[2]; /*0x100900e78*/
    *((_QWORD *)a1 + 3) = *(_QWORD *)&v57[16]; /*0x100900e83*/
    v17 = *(_QWORD *)v57; /*0x100900e87*/
    *((_QWORD *)a1 + 2) = *(_QWORD *)&v57[8]; /*0x100900e95*/
    *((_QWORD *)a1 + 1) = v17; /*0x100900e99*/
    *(_QWORD *)a1 = v9; /*0x100900e9d*/
    goto LABEL_20; /*0x100900ea0*/
  }
  v54 = *(_QWORD *)v57; /*0x100900b07*/
  __s2 = *(void **)&v57[8]; /*0x100900b0e*/
  v56 = *(_QWORD *)&v57[16]; /*0x100900b1c*/
  codexmate_lib::core::relay::config_takeover::split_foreign_surface::h312bc0dc86a91007( /*0x100900b2d*/
    (__int64 *)v62,
    (__int64)a2,
    *(__int64 *)&v57[8],
    *(__int64 *)&v57[16],
    a3);
  v60 = v62[0]; /*0x100900b39*/
  __n = v62[1]; /*0x100900b52*/
  v46 = *(_QWORD *)&v62[4]; /*0x100900b5d*/
  v45 = v62[3]; /*0x100900b73*/
  v44 = v62[2]; /*0x100900b89*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x100900bb5*/
    &v49,
    v5,
    v6,
    "router-takeover-backup.json# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)",
    27);
  codexmate_lib::core::relay::config_takeover::read_backup::hd8bcee2af149bcd9(v62, v5, v6); /*0x100900bc7*/
  v10 = *(_QWORD *)&v62[0]; /*0x100900bcc*/
  qmemcpy(v57, (char *)v62 + 8, sizeof(v57)); /*0x100900be6*/
  if ( *(_QWORD *)&v62[0] != 11 ) /*0x100900bed*/
  {
    qmemcpy(a1 + 8, v57, 0x58u); /*0x100900eb5*/
    *(_QWORD *)a1 = v10; /*0x100900eb8*/
    goto LABEL_14; /*0x100900ebb*/
  }
  qmemcpy(v39, v57, sizeof(v39)); /*0x100900c06*/
  v61 = v39[0]; /*0x100900c10*/
  *(double *)a3.i64 = codexmate_lib::core::relay::config_takeover::read_legacy_backup_lines::h7a336c29ef32316f( /*0x100900c24*/
                        v62,
                        v5,
                        v6);
  *(_QWORD *)v57 = *((_QWORD *)&v62[0] + 1); /*0x100900c37*/
  v11 = *(_QWORD *)&v62[0]; /*0x100900c37*/
  *(_OWORD *)&v57[8] = v62[1]; /*0x100900c42*/
  if ( *(_QWORD *)&v62[0] != 11 ) /*0x100900c58*/
  {
    *((_OWORD *)a1 + 5) = v62[5]; /*0x100900ecc*/
    *((_OWORD *)a1 + 4) = v62[4]; /*0x100900edc*/
    *((_OWORD *)a1 + 3) = v62[3]; /*0x100900eec*/
    *((_OWORD *)a1 + 2) = v62[2]; /*0x100900efc*/
    *((_QWORD *)a1 + 3) = *(_QWORD *)&v57[16]; /*0x100900f07*/
    v18 = *(_QWORD *)v57; /*0x100900f0b*/
    *((_QWORD *)a1 + 2) = *(_QWORD *)&v57[8]; /*0x100900f19*/
    *((_QWORD *)a1 + 1) = v18; /*0x100900f1d*/
    *(_QWORD *)a1 = v11; /*0x100900f21*/
    if ( v61 != 0x8000000000000000LL ) /*0x100900f35*/
LABEL_13:
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::hc16d7bf4b9db4817(v39); /*0x100900f37*/
LABEL_14:
    if ( v49 ) /*0x100900f4d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1); /*0x100900f5b*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..Quarantine$GT$::h06c77773d9c0f4c1((char *)&__n + 8); /*0x100900f67*/
    if ( (_QWORD)v60 ) /*0x100900f76*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v60 + 1), v60, 1); /*0x100900f84*/
    if ( v54 ) /*0x100900f93*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v54, 1); /*0x100900fa1*/
LABEL_20:
    v19 = *((void **)&v52 + 1); /*0x100900fa6*/
    v20 = v53; /*0x100900fad*/
    if ( v53 ) /*0x100900fb7*/
    {
      v21 = (_QWORD *)(*((_QWORD *)&v52 + 1) + 8LL); /*0x100900fb9*/
      do /*0x100900fc7*/
      {
        v22 = *(v21 - 1); /*0x100900fc9*/
        if ( v22 ) /*0x100900fd1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v21, v22, 1); /*0x100900fdc*/
        v21 += 3; /*0x100900fc0*/
        --v20; /*0x100900fc4*/
      }
      while ( v20 ); /*0x100900fc7*/
    }
    if ( (_QWORD)v52 ) /*0x100900fed*/
    {
      v23 = 24 * v52; /*0x100900ff3*/
      v24 = 8; /*0x100900ff7*/
      v25 = v19; /*0x100900ffc*/
LABEL_27:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v23, v24); /*0x100900fff*/
      return a1; /*0x100900fff*/
    }
    return a1; /*0x100900fed*/
  }
  v41[0] = *(_QWORD *)v57; /*0x100900c6c*/
  v41[1] = *(_QWORD *)&v57[8]; /*0x100900c73*/
  v41[2] = *(_QWORD *)&v57[16]; /*0x100900c81*/
  if ( v61 == 0x8000000000000000LL ) /*0x100900c99*/
  {
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v47); /*0x100900ca6*/
    v12 = chrono::naive::date::NaiveDate::num_days_from_ce::h4ac4bdebbf1792ee((unsigned int)v47, *(double *)a3.i64); /*0x100900cb6*/
    v13 = DWORD1(v47); /*0x100900cb9*/
    v14 = DWORD2(v47); /*0x100900cc0*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44( /*0x100900cd5*/
      &v58,
      (char *)&__n + 8);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h09291867ea0739c3(v57, &v45); /*0x100900ce8*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v62, &v54); /*0x100900cfb*/
    *(_OWORD *)&v40[8] = v59; /*0x100900d45*/
    *(_QWORD *)v40 = v58; /*0x100900d4c*/
    *(_QWORD *)&v40[24] = *(_QWORD *)v57; /*0x100900d61*/
    *(_QWORD *)&v40[32] = *(_QWORD *)&v57[8]; /*0x100900d68*/
    *(_QWORD *)&v40[40] = *(_QWORD *)&v57[16]; /*0x100900d76*/
    *(_OWORD *)&v40[48] = v62[0]; /*0x100900d8b*/
    *(_QWORD *)&v40[64] = *(_QWORD *)&v62[1]; /*0x100900d9d*/
    qmemcpy(v57, v40, 0x48u); /*0x100900db7*/
    *(_QWORD *)&v57[72] = 1000 * (v13 + 86400LL * (v12 - 719163)) + ((unsigned __int64)(1125899907 * v14) >> 50); /*0x100900dba*/
    *(_DWORD *)&v57[80] = 1; /*0x100900dc1*/
    v15 = 1; /*0x100900dcb*/
  }
  else
  {
    qmemcpy(v62, v39, 0x58u); /*0x10090102f*/
    v27 = codexmate_lib::core::relay::config_takeover::merge_runtime_quarantine::h4f0ea673af9e00f5( /*0x10090103f*/
            (__int64)a2,
            v62,
            (__m128i *)((char *)&__n + 8),
            a3);
    qmemcpy(v40, v62, sizeof(v40)); /*0x10090105a*/
    qmemcpy(v57, v40, 0x48u); /*0x100901074*/
    *(_QWORD *)&v57[72] = *((_QWORD *)&v62[4] + 1); /*0x100901077*/
    *(_QWORD *)&v57[80] = *(_QWORD *)&v62[5]; /*0x10090107e*/
    v15 = 0; /*0x100901085*/
    if ( !v27 ) /*0x10090108a*/
      goto LABEL_37; /*0x10090108a*/
  }
  serde_json::ser::to_vec_pretty::h448391027304d086(&v58, v57); /*0x10090109e*/
  v28 = v58; /*0x1009010a3*/
  v29 = v59; /*0x1009010aa*/
  if ( v58 == (_BYTE *)0x8000000000000000LL ) /*0x1009010be*/
  {
    v30 = (_BYTE *)v59; /*0x1009010c7*/
    codexmate_lib::core::relay::config_takeover::takeover::_$u7b$$u7b$closure$u7d$$u7d$::hf6cbb97cbf650730(v62, v59); /*0x1009010ca*/
    v31 = v62[1]; /*0x1009010d3*/
    *((_OWORD *)a1 + 5) = v62[5]; /*0x1009010e3*/
    *((_OWORD *)a1 + 4) = v62[4]; /*0x1009010f3*/
    *((_OWORD *)a1 + 3) = v62[3]; /*0x100901103*/
    *((_OWORD *)a1 + 2) = v62[2]; /*0x100901113*/
    v32 = v62[0]; /*0x100901117*/
    *((_OWORD *)a1 + 1) = v31; /*0x10090111e*/
    *(_OWORD *)a1 = v32; /*0x100901126*/
    goto LABEL_41; /*0x100901129*/
  }
  v33 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x10090114c*/
          v50,
          v51,
          v59,
          *((__int64 *)&v59 + 1),
          1);
  if ( v33 ) /*0x100901154*/
  {
    codexmate_lib::core::relay::config_takeover::takeover::_$u7b$$u7b$closure$u7d$$u7d$::he88585db1f88bdb5(v62, v33); /*0x100901160*/
    qmemcpy(a1, v62, 0x60u); /*0x100901174*/
    v30 = v63; /*0x100901174*/
    if ( v28 ) /*0x10090117a*/
    {
      v30 = v28; /*0x100901188*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1); /*0x10090118b*/
    }
LABEL_41:
    v36 = v61 != 0x8000000000000000LL; /*0x10090121d*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::hc16d7bf4b9db4817(v57); /*0x100901239*/
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4f9ccf4de3b51eef(v41, v30); /*0x100901245*/
    if ( ((unsigned __int8)v15 & v36) == 0 ) /*0x10090124d*/
      goto LABEL_14; /*0x10090124d*/
    goto LABEL_13; /*0x10090124d*/
  }
  if ( v28 ) /*0x100901198*/
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1); /*0x1009011a5*/
LABEL_37:
  v34 = __n; /*0x1009011aa*/
  if ( (_QWORD)__n != v56 || memcmp(*((const void **)&v60 + 1), __s2, __n) ) /*0x1009011cb*/
  {
    v35 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x1009011f2*/
            v42,
            v8,
            *((__int64 *)&v60 + 1),
            v34,
            1);
    if ( v35 ) /*0x1009011fa*/
    {
      codexmate_lib::core::relay::config_takeover::takeover::_$u7b$$u7b$closure$u7d$$u7d$::h22c597c1b5817ae9( /*0x100901206*/
        v62,
        v35,
        *(double *)a3.i64);
      qmemcpy(a1, v62, 0x60u); /*0x10090121a*/
      v30 = v63; /*0x10090121a*/
      goto LABEL_41; /*0x10090121a*/
    }
  }
  v37 = _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hb189780393f1e7c4( /*0x100901275*/
          &v47,
          v44,
          v44 + 24LL * *((_QWORD *)&v44 + 1),
          *(double *)a3.i64);
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc4c33f253406965f( /*0x10090129a*/
    &v58,
    *((_QWORD *)&v45 + 1),
    *((_QWORD *)&v45 + 1) + 48 * v46,
    v37);
  v38 = v61 == 0x8000000000000000LL; /*0x1009012ad*/
  *(_QWORD *)&v62[4] = v53; /*0x1009012bb*/
  v62[3] = v52; /*0x1009012d1*/
  v62[0] = v47; /*0x1009012e3*/
  *(_QWORD *)&v62[1] = v48; /*0x1009012f8*/
  *((_QWORD *)&v62[1] + 1) = v58; /*0x10090130a*/
  v62[2] = v59; /*0x10090130e*/
  qmemcpy(a1 + 8, v62, 0x48u); /*0x100901329*/
  a1[80] = !v38; /*0x10090132c*/
  *(_QWORD *)a1 = 11; /*0x100901330*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::hc16d7bf4b9db4817(v57); /*0x10090133e*/
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4f9ccf4de3b51eef( /*0x10090134a*/
    v41,
    (char *)&v62[4] + 8);
  if ( v49 ) /*0x100901359*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1); /*0x100901367*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..Quarantine$GT$::h06c77773d9c0f4c1((char *)&__n + 8); /*0x100901373*/
  if ( (_QWORD)v60 ) /*0x100901382*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v60 + 1), v60, 1); /*0x100901390*/
  v23 = v54; /*0x100901395*/
  if ( v54 ) /*0x10090139f*/
  {
    v25 = __s2; /*0x1009013a5*/
    v24 = 1; /*0x1009013ac*/
    goto LABEL_27; /*0x1009013b1*/
  }
  return a1; /*0x100901007*/
}