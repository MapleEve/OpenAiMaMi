// round3 (2026-08-07) item1递归展开目标2/4：config_takeover::takeover
// mac addr=0x100aecde0 size=0x9c6(2502B) FULL BODY, NO TRUNCATION
// win对应体已确认: 0x140574EE0(改名config_takeover_takeover, 'router-takeover-backup.json'27B字符串精确匹配)

_BYTE *__fastcall codexmate_lib::core::relay::config_takeover::takeover::h211aae70da9a8385(_BYTE *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rax
  size_t v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // r12
  __int64 v13; // r15
  char v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *v18; // r14
  __int64 v19; // r15
  _QWORD *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rdx
  void *v24; // rdi
  char v26; // al
  __int64 v27; // r15
  __int64 v28; // r14
  __int128 v29; // kr30_16
  __int128 v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rax
  bool v34; // r14
  bool v35; // zf
  _QWORD v36[11]; // [rsp+0h] [rbp-270h] BYREF
  _BYTE v37[72]; // [rsp+58h] [rbp-218h] BYREF
  _QWORD v38[3]; // [rsp+A0h] [rbp-1D0h] BYREF
  void *v39; // [rsp+B8h] [rbp-1B8h]
  __int128 __n; // [rsp+C0h] [rbp-1B0h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-1A0h]
  __int128 v42; // [rsp+E0h] [rbp-190h] BYREF
  __int64 v43; // [rsp+F0h] [rbp-180h]
  __int128 v44; // [rsp+F8h] [rbp-178h] BYREF
  __int64 v45; // [rsp+108h] [rbp-168h]
  __int64 v46; // [rsp+110h] [rbp-160h] BYREF
  void *v47; // [rsp+118h] [rbp-158h]
  size_t v48; // [rsp+120h] [rbp-150h]
  __int128 v49; // [rsp+128h] [rbp-148h]
  __int64 v50; // [rsp+138h] [rbp-138h]
  __int64 v51; // [rsp+140h] [rbp-130h] BYREF
  void *__s2; // [rsp+148h] [rbp-128h]
  __int64 v53; // [rsp+150h] [rbp-120h]
  _BYTE v54[88]; // [rsp+158h] [rbp-118h] BYREF
  __int64 v55; // [rsp+1B0h] [rbp-C0h] BYREF
  __int128 v56; // [rsp+1B8h] [rbp-B8h]
  __int128 v57; // [rsp+1C8h] [rbp-A8h]
  __int64 v58; // [rsp+1D8h] [rbp-98h]
  _OWORD v59[9]; // [rsp+1E0h] [rbp-90h] BYREF

  v3 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h11ee5c38df4ac403(a2);
  if ( v3 )
  {
    *(_QWORD *)a1 = 2;
    *((_QWORD *)a1 + 1) = v3;
    return a1;
  }
  v4 = a2[73];
  v5 = a2[74];
  codexmate_lib::core::relay::config_takeover::quarantine_damaged_backups::hd7a49017e39485cc(v59, v4, v5);
  *(_QWORD *)v54 = *((_QWORD *)&v59[0] + 1);
  v6 = *(_QWORD *)&v59[0];
  *(_OWORD *)&v54[8] = v59[1];
  if ( *(_QWORD *)&v59[0] != 11 )
  {
    *((_OWORD *)a1 + 5) = v59[5];
    *((_OWORD *)a1 + 4) = v59[4];
    *((_OWORD *)a1 + 3) = v59[3];
    *((_OWORD *)a1 + 2) = v59[2];
    *((_QWORD *)a1 + 3) = *(_QWORD *)&v54[16];
    v15 = *(_QWORD *)v54;
    *((_QWORD *)a1 + 2) = *(_QWORD *)&v54[8];
    *((_QWORD *)a1 + 1) = v15;
    *(_QWORD *)a1 = v6;
    return a1;
  }
  v49 = *(_OWORD *)v54;
  v50 = *(_QWORD *)&v54[16];
  v7 = a2[8];
  v39 = (void *)a2[7];
  codexmate_lib::core::relay::config_takeover::read_optional_text::he3041665a43d12fa(v59, v39, v7);
  *(_QWORD *)v54 = *((_QWORD *)&v59[0] + 1);
  v8 = *(_QWORD *)&v59[0];
  *(_OWORD *)&v54[8] = v59[1];
  if ( *(_QWORD *)&v59[0] != 11 )
  {
    *((_OWORD *)a1 + 5) = v59[5];
    *((_OWORD *)a1 + 4) = v59[4];
    *((_OWORD *)a1 + 3) = v59[3];
    *((_OWORD *)a1 + 2) = v59[2];
    *((_QWORD *)a1 + 3) = *(_QWORD *)&v54[16];
    v16 = *(_QWORD *)v54;
    *((_QWORD *)a1 + 2) = *(_QWORD *)&v54[8];
    *((_QWORD *)a1 + 1) = v16;
    *(_QWORD *)a1 = v8;
    goto LABEL_20;
  }
  v51 = *(_QWORD *)v54;
  __s2 = *(void **)&v54[8];
  v53 = *(_QWORD *)&v54[16];
  codexmate_lib::core::relay::config_takeover::split_foreign_surface::h79be3632c7964649(
    v59,
    a2,
    *(_QWORD *)&v54[8],
    *(_QWORD *)&v54[16]);
  v57 = v59[0];
  __n = v59[1];
  v43 = *(_QWORD *)&v59[4];
  v42 = v59[3];
  v41 = v59[2];
  std::path::Path::_join::hb1a495d4f06b13b8(
    &v46,
    v4,
    v5,
    "router-takeover-backup.json# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)",
    27);
  codexmate_lib::core::relay::config_takeover::read_backup::h1caf0087b830d63d(v59, v4, v5);
  v9 = *(_QWORD *)&v59[0];
  qmemcpy(v54, (char *)v59 + 8, sizeof(v54));
  if ( *(_QWORD *)&v59[0] != 11 )
  {
    qmemcpy(a1 + 8, v54, 0x58u);
    *(_QWORD *)a1 = v9;
    goto LABEL_14;
  }
  qmemcpy(v36, v54, sizeof(v36));
  v58 = v36[0];
  codexmate_lib::core::relay::config_takeover::read_legacy_backup_lines::h2baf35fc4f1e7747(v59, v4, v5);
  *(_QWORD *)v54 = *((_QWORD *)&v59[0] + 1);
  v10 = *(_QWORD *)&v59[0];
  *(_OWORD *)&v54[8] = v59[1];
  if ( *(_QWORD *)&v59[0] != 11 )
  {
    *((_OWORD *)a1 + 5) = v59[5];
    *((_OWORD *)a1 + 4) = v59[4];
    *((_OWORD *)a1 + 3) = v59[3];
    *((_OWORD *)a1 + 2) = v59[2];
    *((_QWORD *)a1 + 3) = *(_QWORD *)&v54[16];
    v17 = *(_QWORD *)v54;
    *((_QWORD *)a1 + 2) = *(_QWORD *)&v54[8];
    *((_QWORD *)a1 + 1) = v17;
    *(_QWORD *)a1 = v10;
    if ( v58 != 0x8000000000000000LL )
LABEL_13:
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::h234c5610da23660b(v36);
LABEL_14:
    if ( v46 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v46, 1);
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..Quarantine$GT$::hebc178e86dbbba44((char *)&__n + 8);
    if ( (_QWORD)v57 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v57 + 1), v57, 1);
    if ( v51 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v51, 1);
LABEL_20:
    v18 = *((void **)&v49 + 1);
    v19 = v50;
    if ( v50 )
    {
      v20 = (_QWORD *)(*((_QWORD *)&v49 + 1) + 8LL);
      do
      {
        v21 = *(v20 - 1);
        if ( v21 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v20, v21, 1);
        v20 += 3;
        --v19;
      }
      while ( v19 );
    }
    if ( (_QWORD)v49 )
    {
      v22 = 24 * v49;
      v23 = 8;
      v24 = v18;
LABEL_27:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v22, v23);
      return a1;
    }
    return a1;
  }
  v38[0] = *(_QWORD *)v54;
  v38[1] = *(_QWORD *)&v54[8];
  v38[2] = *(_QWORD *)&v54[16];
  if ( v58 == 0x8000000000000000LL )
  {
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v44);
    v11 = chrono::naive::date::NaiveDate::num_days_from_ce::h4ac4bdebbf1792ee((unsigned int)v44);
    v12 = DWORD1(v44);
    v13 = DWORD2(v44);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h5fa6951d074a7f81(
      &v55,
      (char *)&__n + 8);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::haee91bc5dad5d0a0(v54, &v42);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v59, &v51);
    *(_OWORD *)&v37[8] = v56;
    *(_QWORD *)v37 = v55;
    *(_QWORD *)&v37[24] = *(_QWORD *)v54;
    *(_QWORD *)&v37[32] = *(_QWORD *)&v54[8];
    *(_QWORD *)&v37[40] = *(_QWORD *)&v54[16];
    *(_OWORD *)&v37[48] = v59[0];
    *(_QWORD *)&v37[64] = *(_QWORD *)&v59[1];
    qmemcpy(v54, v37, 0x48u);
    *(_QWORD *)&v54[72] = 1000 * (v12 + 86400LL * (v11 - 719163)) + ((unsigned __int64)(1125899907 * v13) >> 50);
    *(_DWORD *)&v54[80] = 1;
    v14 = 1;
  }
  else
  {
    qmemcpy(v59, v36, 0x58u);
    v26 = codexmate_lib::core::relay::config_takeover::merge_runtime_quarantine::h86a131fbdc55ac66(
            (__int64)a2,
            v59,
            (size_t *)&__n + 1);
    qmemcpy(v37, v59, sizeof(v37));
    qmemcpy(v54, v37, 0x48u);
    *(_QWORD *)&v54[72] = *((_QWORD *)&v59[4] + 1);
    *(_QWORD *)&v54[80] = *(_QWORD *)&v59[5];
    v14 = 0;
    if ( !v26 )
      goto LABEL_37;
  }
  serde_json::ser::to_vec_pretty::hf2dcbdb67f59910b(&v55, v54);
  v27 = v55;
  v28 = v56;
  if ( v55 == 0x8000000000000000LL )
  {
    codexmate_lib::core::relay::config_takeover::takeover::_$u7b$$u7b$closure$u7d$$u7d$::hdb6404a718fbcc83(v59, v56);
    v29 = v59[1];
    *((_OWORD *)a1 + 5) = v59[5];
    *((_OWORD *)a1 + 4) = v59[4];
    *((_OWORD *)a1 + 3) = v59[3];
    *((_OWORD *)a1 + 2) = v59[2];
    v30 = v59[0];
    *((_OWORD *)a1 + 1) = v29;
    *(_OWORD *)a1 = v30;
    goto LABEL_41;
  }
  v31 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::hf39edbc2f11d2716(
          v47,
          v48,
          v56,
          *((__int64 *)&v56 + 1),
          1);
  if ( v31 )
  {
    codexmate_lib::core::relay::config_takeover::takeover::_$u7b$$u7b$closure$u7d$$u7d$::h188e931d22022cfa(v59, v31);
    qmemcpy(a1, v59, 0x60u);
    if ( v27 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1);
LABEL_41:
    v34 = v58 != 0x8000000000000000LL;
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::h234c5610da23660b(v54);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hc2bf9e220a80587a(v38);
    if ( ((unsigned __int8)v14 & v34) == 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( v27 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1);
LABEL_37:
  v32 = __n;
  if ( (_QWORD)__n != v53 || memcmp(*((const void **)&v57 + 1), __s2, __n) )
  {
    v33 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::hf39edbc2f11d2716(
            v39,
            v7,
            *((__int64 *)&v57 + 1),
            v32,
            1);
    if ( v33 )
    {
      codexmate_lib::core::relay::config_takeover::takeover::_$u7b$$u7b$closure$u7d$$u7d$::hed8a61d44daa4e35(v59, v33);
      qmemcpy(a1, v59, 0x60u);
      goto LABEL_41;
    }
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h2620beece39561fa(
    &v44,
    v41,
    v41 + 24LL * *((_QWORD *)&v41 + 1));
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd8131cdb8423d42e(
    &v55,
    *((_QWORD *)&v42 + 1),
    *((_QWORD *)&v42 + 1) + 48 * v43);
  v35 = v58 == 0x8000000000000000LL;
  *(_QWORD *)&v59[4] = v50;
  v59[3] = v49;
  v59[0] = v44;
  *(_QWORD *)&v59[1] = v45;
  *((_QWORD *)&v59[1] + 1) = v55;
  v59[2] = v56;
  qmemcpy(a1 + 8, v59, 0x48u);
  a1[80] = !v35;
  *(_QWORD *)a1 = 11;
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::h234c5610da23660b(v54);
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hc2bf9e220a80587a(v38);
  if ( v46 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v46, 1);
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..Quarantine$GT$::hebc178e86dbbba44((char *)&__n + 8);
  if ( (_QWORD)v57 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v57 + 1), v57, 1);
  v22 = v51;
  if ( v51 )
  {
    v24 = __s2;
    v23 = 1;
    goto LABEL_27;
  }
  return a1;
}