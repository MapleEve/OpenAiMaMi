// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::config_takeover::takeover::h89c1e59bb7cdcf51; addr: 0x10022ad30; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
__m256i *__fastcall codexmate_lib::core::relay::config_takeover::takeover::h89c1e59bb7cdcf51(
        __m256i *a1,
        _QWORD *a2,
        __m128i a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rax
  int v16; // r14d
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  void *v23; // r14
  __int64 v24; // r15
  _QWORD *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rdx
  void *v29; // rdi
  char v31; // al
  __int64 v32; // r15
  __int128 v33; // kr30_16
  __int128 v34; // xmm0
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rax
  size_t v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  bool v41; // r15
  double v42; // xmm0_8
  bool v43; // zf
  _QWORD v44[11]; // [rsp+8h] [rbp-278h] BYREF
  _BYTE v45[72]; // [rsp+60h] [rbp-220h] BYREF
  _QWORD v46[3]; // [rsp+A8h] [rbp-1D8h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-1C0h]
  size_t v48; // [rsp+C8h] [rbp-1B8h] BYREF
  __m256i v49; // [rsp+D0h] [rbp-1B0h] BYREF
  __int64 v50; // [rsp+F0h] [rbp-190h]
  __int128 v51; // [rsp+F8h] [rbp-188h] BYREF
  __int64 v52; // [rsp+108h] [rbp-178h]
  size_t __n; // [rsp+110h] [rbp-170h]
  __int64 v54; // [rsp+118h] [rbp-168h] BYREF
  __int64 v55; // [rsp+120h] [rbp-160h]
  __int64 v56; // [rsp+128h] [rbp-158h]
  __int128 v57; // [rsp+130h] [rbp-150h]
  __int64 v58; // [rsp+140h] [rbp-140h]
  __int64 v59; // [rsp+148h] [rbp-138h] BYREF
  void *__s2; // [rsp+150h] [rbp-130h]
  __int64 v61; // [rsp+158h] [rbp-128h]
  __int64 v62; // [rsp+160h] [rbp-120h]
  _BYTE v63[88]; // [rsp+168h] [rbp-118h] BYREF
  __int64 v64; // [rsp+1C0h] [rbp-C0h] BYREF
  __int128 v65; // [rsp+1C8h] [rbp-B8h]
  __int128 v66; // [rsp+1D8h] [rbp-A8h]
  __int64 v67; // [rsp+1E8h] [rbp-98h]
  __m256i v68[3]; // [rsp+1F0h] [rbp-90h] BYREF
  int v69; // [rsp+254h] [rbp-2Ch]

  v4 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h494e6f9ce73e9879(a2); /*0x10022ad4d*/
  if ( v4 ) /*0x10022ad55*/
  {
    a1->i64[0] = 2; /*0x10022ad57*/
    a1->i64[1] = v4; /*0x10022ad5e*/
    return a1; /*0x10022ad62*/
  }
  codexmate_lib::core::relay::config_takeover::quarantine_damaged_backups::hb80e26441217e933(v68, (__int64)a2); /*0x10022ad71*/
  *(_QWORD *)v63 = v68[0].i64[1]; /*0x10022ad84*/
  v5 = v68[0].i64[0]; /*0x10022ad84*/
  *(_OWORD *)&v63[8] = v68[0].i128[1]; /*0x10022ad8f*/
  if ( v68[0].i64[0] != 11 ) /*0x10022ada5*/
  {
    a1[2] = v68[2]; /*0x10022b13f*/
    a1[1] = v68[1]; /*0x10022b15f*/
    a1->i64[3] = *(_QWORD *)&v63[16]; /*0x10022b17a*/
    v20 = *(_QWORD *)v63; /*0x10022b17e*/
    a1->i64[2] = *(_QWORD *)&v63[8]; /*0x10022b18c*/
    a1->i64[1] = v20; /*0x10022b190*/
    a1->i64[0] = v5; /*0x10022b194*/
    return a1; /*0x10022b197*/
  }
  v57 = *(_OWORD *)v63; /*0x10022adb9*/
  v58 = *(_QWORD *)&v63[16]; /*0x10022adce*/
  v6 = a2[8]; /*0x10022add9*/
  v47 = a2[7]; /*0x10022ade4*/
  codexmate_lib::core::relay::config_takeover::read_optional_text::h5d85adc3ed684ebd(v68, *(double *)a3.i64); /*0x10022adee*/
  *(_QWORD *)v63 = v68[0].i64[1]; /*0x10022ae01*/
  v9 = v68[0].i64[0]; /*0x10022ae01*/
  *(_OWORD *)&v63[8] = v68[0].i128[1]; /*0x10022ae0c*/
  if ( v68[0].i64[0] != 11 ) /*0x10022ae22*/
  {
    a1[2] = v68[2]; /*0x10022b1a8*/
    a1[1] = v68[1]; /*0x10022b1c8*/
    a1->i64[3] = *(_QWORD *)&v63[16]; /*0x10022b1e3*/
    v21 = *(_QWORD *)v63; /*0x10022b1e7*/
    a1->i64[2] = *(_QWORD *)&v63[8]; /*0x10022b1f5*/
    a1->i64[1] = v21; /*0x10022b1f9*/
    a1->i64[0] = v9; /*0x10022b1fd*/
    goto LABEL_22; /*0x10022b200*/
  }
  v59 = *(_QWORD *)v63; /*0x10022ae36*/
  __s2 = *(void **)&v63[8]; /*0x10022ae3d*/
  v61 = *(_QWORD *)&v63[16]; /*0x10022ae4b*/
  codexmate_lib::core::relay::config_takeover::split_foreign_surface::h6723df967ae8fa8d( /*0x10022ae5c*/
    v68[0].i64,
    (__int64)a2,
    *(__int64 *)&v63[8],
    *(__int64 *)&v63[16],
    a3,
    v7,
    v8);
  v66 = v68[0].i128[0]; /*0x10022ae6f*/
  v50 = v68[2].i64[0]; /*0x10022ae7e*/
  v49 = v68[1]; /*0x10022ae94*/
  v48 = v68[0].u64[3]; /*0x10022aeb5*/
  __n = v68[0].u64[2]; /*0x10022aeca*/
  codexmate_lib::core::codex_config::validate_candidate::hd39711f2eab09697(v68, v68[0].i64[1], v68[0].i64[2]); /*0x10022aed1*/
  if ( v68[0].i32[0] != 11 ) /*0x10022aedd*/
  {
    qmemcpy(a1, v68, 0x60u); /*0x10022b214*/
LABEL_18:
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..Quarantine$GT$::h4f5bf67f1d33f975(&v48); /*0x10022b2d7*/
    if ( (_QWORD)v66 ) /*0x10022b2ed*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v66 + 1), v66, 1); /*0x10022b2fb*/
    if ( v59 ) /*0x10022b30a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v59, 1); /*0x10022b318*/
LABEL_22:
    v23 = *((void **)&v57 + 1); /*0x10022b31d*/
    v24 = v58; /*0x10022b324*/
    if ( v58 ) /*0x10022b32e*/
    {
      v25 = (_QWORD *)(*((_QWORD *)&v57 + 1) + 8LL); /*0x10022b330*/
      do /*0x10022b347*/
      {
        v26 = *(v25 - 1); /*0x10022b349*/
        if ( v26 ) /*0x10022b351*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v25, v26, 1); /*0x10022b35c*/
        v25 += 3; /*0x10022b340*/
        --v24; /*0x10022b344*/
      }
      while ( v24 ); /*0x10022b347*/
    }
    if ( (_QWORD)v57 ) /*0x10022b36d*/
    {
      v27 = 24 * v57; /*0x10022b373*/
      v28 = 8; /*0x10022b377*/
      v29 = v23; /*0x10022b37c*/
LABEL_29:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v27, v28); /*0x10022b37f*/
      return a1; /*0x10022b37f*/
    }
    return a1; /*0x10022b36d*/
  }
  v10 = a2[73]; /*0x10022aee3*/
  v11 = a2[74]; /*0x10022aeea*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v54, v10, v11, &anon_8cf26f36e03587b9a54b9e7945b707cc_90, 27); /*0x10022af0b*/
  codexmate_lib::core::relay::config_takeover::read_backup::hdd63415210acf500(v68, v10, v11); /*0x10022af1d*/
  v12 = v68[0].i64[0]; /*0x10022af22*/
  qmemcpy(v63, &v68[0].u32[2], sizeof(v63)); /*0x10022af3c*/
  if ( v68[0].i64[0] != 11 ) /*0x10022af43*/
  {
    qmemcpy(&a1->u32[2], v63, 0x58u); /*0x10022b22c*/
    a1->i64[0] = v12; /*0x10022b22f*/
    goto LABEL_16; /*0x10022b232*/
  }
  qmemcpy(v44, v63, sizeof(v44)); /*0x10022af5c*/
  v67 = v44[0]; /*0x10022af66*/
  *(double *)a3.i64 = codexmate_lib::core::relay::config_takeover::read_legacy_backup_lines::he46e193260940cf8( /*0x10022af7a*/
                        v68,
                        v10,
                        v11);
  *(_QWORD *)v63 = v68[0].i64[1]; /*0x10022af8d*/
  v15 = v68[0].i64[0]; /*0x10022af8d*/
  *(_OWORD *)&v63[8] = v68[0].i128[1]; /*0x10022af98*/
  if ( v68[0].i64[0] != 11 ) /*0x10022afae*/
  {
    a1[2] = v68[2]; /*0x10022b243*/
    a1[1] = v68[1]; /*0x10022b263*/
    a1->i64[3] = *(_QWORD *)&v63[16]; /*0x10022b27e*/
    v22 = *(_QWORD *)v63; /*0x10022b282*/
    a1->i64[2] = *(_QWORD *)&v63[8]; /*0x10022b290*/
    a1->i64[1] = v22; /*0x10022b294*/
    a1->i64[0] = v15; /*0x10022b298*/
    if ( v67 == 0x8000000000000000LL ) /*0x10022b2ac*/
      goto LABEL_16; /*0x10022b2ac*/
    goto LABEL_15; /*0x10022b2ac*/
  }
  v46[0] = *(_QWORD *)v63; /*0x10022afc2*/
  v46[1] = *(_QWORD *)&v63[8]; /*0x10022afc9*/
  v46[2] = *(_QWORD *)&v63[16]; /*0x10022afd7*/
  if ( v67 == 0x8000000000000000LL ) /*0x10022afef*/
  {
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v51); /*0x10022affc*/
    v16 = chrono::naive::date::NaiveDate::num_days_from_ce::h4ac4bdebbf1792ee((unsigned int)v51, *(double *)a3.i64); /*0x10022b00c*/
    v17 = DWORD1(v51); /*0x10022b00f*/
    v18 = DWORD2(v51); /*0x10022b016*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hed1423a2d8278088(&v64, &v48); /*0x10022b02b*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h29b6fda585edf8b4(v63, &v49.u128[1]); /*0x10022b03e*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v68, &v59); /*0x10022b051*/
    LODWORD(v19) = v16 - 719163; /*0x10022b056*/
    *(_OWORD *)&v45[8] = v65; /*0x10022b09b*/
    *(_QWORD *)v45 = v64; /*0x10022b0a2*/
    *(_QWORD *)&v45[24] = *(_QWORD *)v63; /*0x10022b0b7*/
    *(_QWORD *)&v45[32] = *(_QWORD *)&v63[8]; /*0x10022b0be*/
    *(_QWORD *)&v45[40] = *(_QWORD *)&v63[16]; /*0x10022b0cc*/
    *(_OWORD *)&v45[48] = v68[0].i128[0]; /*0x10022b0e1*/
    *(_QWORD *)&v45[64] = v68[0].i64[2]; /*0x10022b0f3*/
    qmemcpy(v63, v45, 0x48u); /*0x10022b10d*/
    *(_QWORD *)&v63[72] = 1000 * (v17 + 86400LL * (int)v19) + ((unsigned __int64)(1125899907 * v18) >> 50); /*0x10022b110*/
    *(_DWORD *)&v63[80] = 1; /*0x10022b117*/
    LOBYTE(v19) = 1; /*0x10022b121*/
  }
  else
  {
    qmemcpy(v68, v44, 0x58u); /*0x10022b3af*/
    v31 = codexmate_lib::core::relay::config_takeover::merge_runtime_quarantine::h4eafb5ff9a6e243c( /*0x10022b3bf*/
            (__int64)a2,
            v68,
            &v48,
            a3,
            0,
            v13,
            v14);
    qmemcpy(v45, v68, sizeof(v45)); /*0x10022b3da*/
    qmemcpy(v63, v45, 0x48u); /*0x10022b3f4*/
    *(_OWORD *)&v63[72] = *(__int128 *)((char *)v68[2].i128 + 8); /*0x10022b3f7*/
    if ( !v31 ) /*0x10022b407*/
    {
      v36 = v55; /*0x10022b52e*/
      v37 = codexmate_lib::core::relay::atomic_write::confirm_existing_sync::hcc70c88ef10eee6e(v55, v56); /*0x10022b542*/
      LOBYTE(v19) = 0; /*0x10022b547*/
      if ( v37 ) /*0x10022b54d*/
      {
        codexmate_lib::core::relay::config_takeover::takeover::_$u7b$$u7b$closure$u7d$$u7d$::h3caacd7b595468b7(v68, v37); /*0x10022b559*/
        qmemcpy(a1, v68, 0x60u); /*0x10022b56d*/
        LOBYTE(v19) = 0; /*0x10022b570*/
        goto LABEL_49; /*0x10022b573*/
      }
      goto LABEL_44; /*0x10022b54d*/
    }
    LODWORD(v19) = 0; /*0x10022b40d*/
  }
  serde_json::ser::to_vec_pretty::hd544561a376ba0c3(&v64, v63); /*0x10022b41e*/
  v32 = v64; /*0x10022b423*/
  if ( v64 == 0x8000000000000000LL ) /*0x10022b434*/
  {
    codexmate_lib::core::relay::config_takeover::takeover::_$u7b$$u7b$closure$u7d$$u7d$::h6d3ee1f272f4476d(v68, v65); /*0x10022b440*/
    v33 = v68[0].i128[1]; /*0x10022b449*/
    a1[2] = v68[2]; /*0x10022b459*/
    a1[1] = v68[1]; /*0x10022b479*/
    v34 = v68[0].i128[0]; /*0x10022b48d*/
    a1->i128[1] = v33; /*0x10022b494*/
    a1->i128[0] = v34; /*0x10022b49c*/
    goto LABEL_49; /*0x10022b49f*/
  }
  v69 = v19; /*0x10022b4a4*/
  v19 = v55; /*0x10022b4bd*/
  v62 = v65; /*0x10022b4c0*/
  if ( (codexmate_lib::core::relay::atomic_write::write_atomic_private_report::hba6c6a10ebc72e28( /*0x10022b4e1*/
          v55,
          v56,
          v65,
          *((_QWORD *)&v65 + 1))
      & 1) != 0
    || (v35 = codexmate_lib::core::relay::atomic_write::Publication::require_sync::he91a5964ccac7564(v35)) != 0 )
  {
    codexmate_lib::core::relay::config_takeover::takeover::_$u7b$$u7b$closure$u7d$$u7d$::hc4ba9f643a32df38(v68, v35); /*0x10022b4f1*/
    qmemcpy(a1, v68, 0x60u); /*0x10022b505*/
    LOBYTE(v19) = v69; /*0x10022b50b*/
    if ( v32 ) /*0x10022b50f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, v32, 1); /*0x10022b524*/
LABEL_49:
    v41 = v67 != 0x8000000000000000LL; /*0x10022b614*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::hffd787307f7fc18a(v63); /*0x10022b626*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::hd518b13fa1d3b615(v46); /*0x10022b632*/
    if ( ((unsigned __int8)v19 & v41) == 0 ) /*0x10022b63a*/
    {
LABEL_16:
      if ( v54 ) /*0x10022b2c4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v54, 1); /*0x10022b2d2*/
      goto LABEL_18; /*0x10022b2d2*/
    }
LABEL_15:
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::hffd787307f7fc18a(v44); /*0x10022b2ae*/
    goto LABEL_16; /*0x10022b2b5*/
  }
  if ( v32 ) /*0x10022b57b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, v32, 1); /*0x10022b58c*/
  v36 = v19; /*0x10022b591*/
  LOBYTE(v19) = v69; /*0x10022b594*/
LABEL_44:
  v38 = __n; /*0x10022b598*/
  if ( __n != v61 || (v39 = memcmp(*((const void **)&v66 + 1), __s2, __n), v38 = __n, v39) ) /*0x10022b5c7*/
  {
    if ( (codexmate_lib::core::relay::atomic_write::write_atomic_private_report::hba6c6a10ebc72e28( /*0x10022b5f1*/
            v47,
            v6,
            *((_QWORD *)&v66 + 1),
            v38)
        & 1) != 0
      || (v40 = codexmate_lib::core::relay::atomic_write::Publication::require_sync::he91a5964ccac7564(v40)) != 0 )
    {
      codexmate_lib::core::relay::config_takeover::takeover::_$u7b$$u7b$closure$u7d$$u7d$::he51e429c70d143f7(v68, v40); /*0x10022b5fd*/
      qmemcpy(a1, v68, 0x60u); /*0x10022b611*/
      goto LABEL_49; /*0x10022b611*/
    }
  }
  v42 = _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hdafa3bce145f7d61( /*0x10022b662*/
          &v51,
          v49.i64[0],
          v49.i64[0] + 24 * v49.i64[1],
          v38);
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::heb02cc75c30433a5( /*0x10022b687*/
    &v64,
    v49.i64[3],
    v49.i64[3] + 48 * v50,
    v42);
  v43 = v67 == 0x8000000000000000LL; /*0x10022b690*/
  v68[2].i64[0] = v58; /*0x10022b69e*/
  v68[1].i128[1] = v57; /*0x10022b6b4*/
  v68[0].i128[0] = v51; /*0x10022b6c6*/
  v68[0].i64[2] = v52; /*0x10022b6db*/
  v68[0].i64[3] = v64; /*0x10022b6ed*/
  v68[1].i128[0] = v65; /*0x10022b6f1*/
  qmemcpy(&a1->u32[2], v68, 0x48u); /*0x10022b70c*/
  a1[2].i8[16] = !v43; /*0x10022b70f*/
  a1->i64[0] = 11; /*0x10022b713*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::hffd787307f7fc18a(v63); /*0x10022b721*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::hd518b13fa1d3b615(v46); /*0x10022b72d*/
  if ( v54 ) /*0x10022b73c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v54, 1); /*0x10022b746*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..Quarantine$GT$::h4f5bf67f1d33f975(&v48); /*0x10022b752*/
  if ( (_QWORD)v66 ) /*0x10022b761*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v66 + 1), v66, 1); /*0x10022b76f*/
  v27 = v59; /*0x10022b774*/
  if ( v59 ) /*0x10022b77e*/
  {
    v29 = __s2; /*0x10022b784*/
    v28 = 1; /*0x10022b78b*/
    goto LABEL_29; /*0x10022b790*/
  }
  return a1; /*0x10022b387*/
}
