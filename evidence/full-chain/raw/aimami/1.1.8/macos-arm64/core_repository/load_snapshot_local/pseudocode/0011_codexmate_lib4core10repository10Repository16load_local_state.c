// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND load_snapshot_local node 0x100525fd0 depth=2
__int64 __fastcall codexmate_lib::core::repository::Repository::load_local_state::h7cf5c9b025f9346c(
        _QWORD *__dst,
        _QWORD *a2,
        __m128i a3)
{
  size_t v4; // rdx
  int v5; // edx
  __int64 v6; // rax
  size_t v7; // rdx
  __int64 v8; // r13
  void *v9; // rax
  __int64 v10; // r14
  void *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r14
  unsigned __int64 v19; // r12
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rsi
  bool v23; // zf
  int v24; // edx
  __int64 v25; // r13
  __int64 v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rcx
  const void *v29; // r13
  size_t v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r14
  char v34; // r12
  __int64 v35; // r14
  char v36; // r15
  __int64 v37; // r14
  char v38; // r13
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 result; // rax
  _BYTE v43[152]; // [rsp+8h] [rbp-788h] BYREF
  _QWORD __dsta[42]; // [rsp+A0h] [rbp-6F0h] BYREF
  _DWORD v45[38]; // [rsp+1F0h] [rbp-5A0h] BYREF
  __int64 v46; // [rsp+288h] [rbp-508h] BYREF
  _BYTE v47[80]; // [rsp+290h] [rbp-500h] BYREF
  _QWORD v48[12]; // [rsp+2E8h] [rbp-4A8h] BYREF
  __int64 __src[61]; // [rsp+348h] [rbp-448h] BYREF
  _QWORD v50[5]; // [rsp+530h] [rbp-260h] BYREF
  _QWORD v51[10]; // [rsp+558h] [rbp-238h] BYREF
  _QWORD v52[2]; // [rsp+5A8h] [rbp-1E8h] BYREF
  _QWORD v53[2]; // [rsp+5B8h] [rbp-1D8h] BYREF
  _QWORD v54[2]; // [rsp+5C8h] [rbp-1C8h] BYREF
  _QWORD v55[2]; // [rsp+5D8h] [rbp-1B8h] BYREF
  _QWORD v56[2]; // [rsp+5E8h] [rbp-1A8h] BYREF
  _QWORD v57[2]; // [rsp+5F8h] [rbp-198h] BYREF
  _QWORD v58[2]; // [rsp+608h] [rbp-188h] BYREF
  __int64 v59; // [rsp+618h] [rbp-178h]
  __int64 v60; // [rsp+620h] [rbp-170h]
  __int64 v61; // [rsp+628h] [rbp-168h]
  __int64 v62; // [rsp+630h] [rbp-160h]
  size_t v63; // [rsp+638h] [rbp-158h]
  __int64 v64; // [rsp+640h] [rbp-150h]
  __int64 v65; // [rsp+648h] [rbp-148h]
  __int64 v66; // [rsp+650h] [rbp-140h]
  __int64 v67; // [rsp+658h] [rbp-138h]
  __int64 v68; // [rsp+660h] [rbp-130h] BYREF
  __int64 v69; // [rsp+668h] [rbp-128h]
  unsigned __int64 v70; // [rsp+670h] [rbp-120h]
  size_t v71; // [rsp+678h] [rbp-118h]
  const void *v72; // [rsp+680h] [rbp-110h]
  size_t v73; // [rsp+688h] [rbp-108h]
  __int64 v74; // [rsp+690h] [rbp-100h]
  __int64 v75; // [rsp+698h] [rbp-F8h]
  __int64 v76; // [rsp+6A0h] [rbp-F0h]
  __int64 v77; // [rsp+6A8h] [rbp-E8h]
  __int64 v78; // [rsp+6B0h] [rbp-E0h]
  __int64 v79; // [rsp+6B8h] [rbp-D8h]
  __int64 v80; // [rsp+6C0h] [rbp-D0h]
  __int64 v81; // [rsp+6C8h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+6D0h] [rbp-C0h]
  __int64 v83; // [rsp+6D8h] [rbp-B8h]
  __int64 v84; // [rsp+6E0h] [rbp-B0h]
  __int64 v85; // [rsp+6E8h] [rbp-A8h]
  __int64 v86; // [rsp+6F0h] [rbp-A0h] BYREF
  __int64 v87; // [rsp+6F8h] [rbp-98h]
  __int64 v88; // [rsp+700h] [rbp-90h]
  __int64 v89; // [rsp+708h] [rbp-88h]
  __int64 v90; // [rsp+710h] [rbp-80h]
  __int64 v91; // [rsp+718h] [rbp-78h]
  __int64 v92; // [rsp+720h] [rbp-70h]
  __int64 v93; // [rsp+728h] [rbp-68h]
  __int64 v94; // [rsp+730h] [rbp-60h]
  const void *v95; // [rsp+738h] [rbp-58h]
  __int64 v96; // [rsp+740h] [rbp-50h]
  __int64 v97; // [rsp+748h] [rbp-48h] BYREF
  __int64 v98; // [rsp+750h] [rbp-40h]
  __int64 v99; // [rsp+758h] [rbp-38h]
  _BYTE v100[41]; // [rsp+767h] [rbp-29h] BYREF

  v86 = 0; /*0x100525fea*/
  v87 = 8; /*0x100525ff5*/
  v88 = 0; /*0x100526000*/
  v4 = a2[5]; /*0x10052600f*/
  v95 = (const void *)a2[4]; /*0x10052601d*/
  v71 = v4; /*0x100526021*/
  codexmate_lib::core::repository::Repository::load_current_auth_snapshot::ha447bd27a8750416(v45); /*0x100526028*/
  codexmate_lib::core::repository::Repository::load_settings::h93ac22c1afd6e8d4(v43); /*0x100526037*/
  codexmate_lib::core::repository::Repository::load_registry::h7984350630216c09(&v46, (__int64)a2); /*0x100526046*/
  if ( (_DWORD)v46 == 10 ) /*0x10052605c*/
  {
    qmemcpy(v51, v47, sizeof(v51)); /*0x100526071*/
  }
  else
  {
    __dsta[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x10052607e*/
    LODWORD(__dsta[1]) = v5; /*0x100526085*/
    std::time::SystemTime::duration_since::had059553cab94f96((__int64)__src, (__int64)__dsta, 0, 0); /*0x10052609d*/
    if ( LOBYTE(__src[0]) ) /*0x1005260a9*/
      v6 = 0; /*0x1005260b4*/
    else
      v6 = __src[1]; /*0x1005260ab*/
    HIDWORD(v51[8]) = 2; /*0x1005260b6*/
    v51[6] = v6; /*0x1005260c0*/
    v51[3] = 0x8000000000000000LL; /*0x1005260c7*/
    v51[0] = 0; /*0x1005260ce*/
    v51[1] = 8; /*0x1005260d9*/
    v51[2] = 0; /*0x1005260e4*/
    v51[7] = 0; /*0x1005260ef*/
    LOBYTE(v51[8]) = 0; /*0x1005260fa*/
    LOBYTE(v51[9]) = 1; /*0x100526101*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v46); /*0x10052610f*/
  }
  codexmate_lib::core::quota_store::load::he744ac4ef03d474a(v48, a2[52], a2[53], a3); /*0x100526129*/
  if ( LODWORD(v48[0]) == 10 ) /*0x100526135*/
  {
    v85 = v48[5]; /*0x10052613e*/
    v84 = v48[4]; /*0x10052614c*/
    v83 = v48[3]; /*0x10052615a*/
    v82 = v48[2]; /*0x10052616f*/
    v81 = v48[1]; /*0x100526176*/
  }
  else
  {
    LODWORD(v85) = 1; /*0x10052617f*/
    v84 = 0; /*0x100526189*/
    v81 = 0; /*0x100526194*/
    v82 = 8; /*0x10052619f*/
    v83 = 0; /*0x1005261aa*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v48); /*0x1005261bc*/
  }
  v7 = a2[29]; /*0x1005261c8*/
  v72 = (const void *)a2[28]; /*0x1005261d6*/
  v73 = v7; /*0x1005261dd*/
  std::sys::fs::metadata::h32fa16d3052ea535(__src, v72, v7); /*0x1005261e4*/
  if ( LOBYTE(__src[0]) ) /*0x1005261f0*/
  {
    if ( (__src[1] & 3) == 1 ) /*0x100526205*/
    {
      v8 = *(_QWORD *)(__src[1] + 7); /*0x10052620f*/
      if ( *(_QWORD *)v8 ) /*0x100526213*/
        (*(void (__fastcall **)(_QWORD))v8)(*(_QWORD *)(__src[1] - 1)); /*0x10052621f*/
      if ( *(_QWORD *)(v8 + 8) ) /*0x100526221*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100526231*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100526243*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10052624f*/
    v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x10u, 1u); /*0x10052625e*/
    if ( !v9 ) /*0x100526266*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x100526d99*/
    v10 = (__int64)v9; /*0x10052626c*/
    qmemcpy(v9, "REGISTRY_MISSING", 16); /*0x100526287*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10052628a*/
    v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x24u, 1u); /*0x100526299*/
    if ( !v11 ) /*0x1005262a1*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36); /*0x100526daa*/
    qmemcpy(v11, "No local account registry found yet.", 36); /*0x1005262db*/
    __src[0] = 16; /*0x1005262e5*/
    __src[1] = v10; /*0x1005262f0*/
    __src[2] = 16; /*0x1005262f7*/
    __src[3] = 36; /*0x100526302*/
    __src[4] = (__int64)v11; /*0x10052630d*/
    __src[5] = 36; /*0x100526314*/
    v12 = v88; /*0x10052631f*/
    if ( v88 == v86 ) /*0x10052632d*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d(&v86); /*0x100526336*/
    v13 = v87; /*0x10052633b*/
    v14 = 48 * v12; /*0x100526346*/
    *(_QWORD *)(v87 + v14 + 40) = __src[5]; /*0x100526351*/
    *(_QWORD *)(v13 + v14 + 32) = __src[4]; /*0x10052635d*/
    *(_QWORD *)(v13 + v14 + 24) = __src[3]; /*0x100526369*/
    *(_QWORD *)(v13 + v14 + 16) = __src[2]; /*0x100526375*/
    v15 = __src[0]; /*0x10052637a*/
    *(_QWORD *)(v13 + v14 + 8) = __src[1]; /*0x100526388*/
    *(_QWORD *)(v13 + v14) = v15; /*0x10052638d*/
    v88 = v12 + 1; /*0x100526394*/
  }
  v50[0] = v51[1]; /*0x1005263b0*/
  v50[1] = v51[1] + 360LL * v51[2]; /*0x1005263b7*/
  v50[2] = &v81; /*0x1005263c5*/
  v50[3] = v45; /*0x1005263cc*/
  v50[4] = a2; /*0x1005263d3*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::he9c406b362287699( /*0x1005263e8*/
    &v68,
    v50);
  v18 = v69; /*0x1005263ed*/
  v19 = v70; /*0x1005263f4*/
  __src[0] = (__int64)v100; /*0x1005263ff*/
  if ( v70 >= 2 ) /*0x10052640a*/
  {
    if ( v70 >= 0x15 ) /*0x100526c5e*/
      core::slice::sort::stable::driftsort_main::he0ae917674dd3c08(v69, v70, __src); /*0x100526dbe*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h492aa26a4a5cf38a(v69, v70, 1, __src); /*0x100526c76*/
  }
  v20 = v18 - 336; /*0x100526410*/
  v21 = 336 * v19; /*0x100526417*/
  while ( v21 ) /*0x100526423*/
  {
    v22 = v20 + 336; /*0x100526425*/
    v21 -= 336; /*0x10052642c*/
    v23 = *(_BYTE *)(v20 + 665) == 1; /*0x100526432*/
    v20 += 336; /*0x10052643a*/
    if ( v23 ) /*0x10052643d*/
    {
      _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::hf7194f57f3e2a274( /*0x100526446*/
        __src,
        v22,
        v16,
        v17);
      memcpy(__dsta, __src, sizeof(__dsta)); /*0x10052645e*/
      goto LABEL_28; /*0x100526463*/
    }
  }
  __dsta[0] = 2; /*0x100526465*/
LABEL_28:
  v97 = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x100526470*/
  LODWORD(v98) = v24; /*0x100526479*/
  std::time::SystemTime::duration_since::had059553cab94f96((__int64)__src, (__int64)&v97, 0, 0); /*0x10052648e*/
  if ( LOBYTE(__src[0]) ) /*0x10052649a*/
    v25 = 0; /*0x1005264a5*/
  else
    v25 = __src[1]; /*0x10052649c*/
  v26 = a2[2]; /*0x1005264ac*/
  v58[0] = a2[1]; /*0x1005264b0*/
  v58[1] = v26; /*0x1005264b7*/
  v97 = 0; /*0x1005264be*/
  v98 = 1; /*0x1005264c6*/
  v99 = 0; /*0x1005264ce*/
  __src[2] = 1610612768; /*0x1005264d6*/
  __src[0] = (__int64)&v97; /*0x1005264e1*/
  __src[1] = (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_429; /*0x1005264ef*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v58, __src) ) /*0x100526504*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100526c9e*/
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_430,
      55,
      (__int64)v100,
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_451,
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_432);
  v59 = v25; /*0x100526511*/
  v27 = v97; /*0x100526518*/
  v74 = v98; /*0x100526520*/
  v60 = v99; /*0x10052652b*/
  v28 = a2[26]; /*0x100526539*/
  v57[0] = a2[25]; /*0x100526540*/
  v57[1] = v28; /*0x100526547*/
  v97 = 0; /*0x10052654e*/
  v98 = 1; /*0x100526556*/
  v99 = 0; /*0x10052655e*/
  __src[2] = 1610612768; /*0x100526566*/
  __src[0] = (__int64)&v97; /*0x100526571*/
  __src[1] = (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_429; /*0x100526578*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v57, __src) ) /*0x10052658d*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100526cc6*/
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_430,
      55,
      (__int64)v100,
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_451,
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_432);
  v90 = v97; /*0x10052659e*/
  v75 = v98; /*0x1005265a6*/
  v61 = v99; /*0x1005265b1*/
  v56[0] = v95; /*0x1005265bc*/
  v56[1] = v71; /*0x1005265ca*/
  v97 = 0; /*0x1005265d1*/
  v98 = 1; /*0x1005265d9*/
  v99 = 0; /*0x1005265e1*/
  __src[2] = 1610612768; /*0x1005265e9*/
  __src[0] = (__int64)&v97; /*0x1005265f4*/
  __src[1] = (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_429; /*0x1005265fb*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v56, __src) ) /*0x100526610*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100526cee*/
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_430,
      55,
      (__int64)v100,
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_451,
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_432);
  v91 = v97; /*0x100526621*/
  v76 = v98; /*0x100526629*/
  v62 = v99; /*0x100526634*/
  v55[0] = v72; /*0x100526642*/
  v55[1] = v73; /*0x100526650*/
  v97 = 0; /*0x100526657*/
  v98 = 1; /*0x10052665f*/
  v99 = 0; /*0x100526667*/
  __src[2] = 1610612768; /*0x10052666f*/
  __src[0] = (__int64)&v97; /*0x10052667a*/
  __src[1] = (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_429; /*0x100526681*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v55, __src) ) /*0x100526696*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100526d16*/
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_430,
      55,
      (__int64)v100,
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_451,
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_432);
  v96 = v27; /*0x1005266a3*/
  v92 = v97; /*0x1005266ab*/
  v77 = v98; /*0x1005266b3*/
  v64 = v99; /*0x1005266be*/
  v29 = (const void *)a2[16]; /*0x1005266c5*/
  v30 = a2[17]; /*0x1005266cc*/
  v54[0] = v29; /*0x1005266d3*/
  v63 = v30; /*0x1005266da*/
  v54[1] = v30; /*0x1005266e1*/
  v97 = 0; /*0x1005266e8*/
  v98 = 1; /*0x1005266f0*/
  v99 = 0; /*0x1005266f8*/
  __src[2] = 1610612768; /*0x100526700*/
  __src[0] = (__int64)&v97; /*0x10052670b*/
  __src[1] = (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_429; /*0x100526712*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v54, __src) ) /*0x100526727*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100526d3e*/
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_430,
      55,
      (__int64)v100,
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_451,
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_432);
  v93 = v97; /*0x100526738*/
  v78 = v98; /*0x100526740*/
  v65 = v99; /*0x10052674b*/
  v31 = a2[80]; /*0x100526759*/
  v53[0] = a2[79]; /*0x100526760*/
  v53[1] = v31; /*0x100526767*/
  v97 = 0; /*0x10052676e*/
  v98 = 1; /*0x100526776*/
  v99 = 0; /*0x10052677e*/
  __src[2] = 1610612768; /*0x100526786*/
  __src[0] = (__int64)&v97; /*0x100526791*/
  __src[1] = (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_429; /*0x100526798*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v53, __src) ) /*0x1005267ad*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100526d63*/
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_430,
      55,
      (__int64)v100,
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_451,
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_432);
  v94 = v97; /*0x1005267be*/
  v79 = v98; /*0x1005267c6*/
  v66 = v99; /*0x1005267d1*/
  v32 = a2[41]; /*0x1005267df*/
  v52[0] = a2[40]; /*0x1005267e6*/
  v52[1] = v32; /*0x1005267ed*/
  v97 = 0; /*0x1005267f4*/
  v98 = 1; /*0x1005267fc*/
  v99 = 0; /*0x100526804*/
  __src[2] = 1610612768; /*0x10052680c*/
  __src[0] = (__int64)&v97; /*0x100526817*/
  __src[1] = (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_429; /*0x10052681e*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v52, __src) ) /*0x100526833*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100526d88*/
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_430,
      55,
      (__int64)v100,
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_451,
      (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_432);
  v89 = v97; /*0x100526844*/
  v80 = v98; /*0x10052684f*/
  v67 = v99; /*0x10052685a*/
  std::sys::fs::metadata::h32fa16d3052ea535(__src, v95, v71); /*0x100526873*/
  if ( LOBYTE(__src[0]) ) /*0x10052687f*/
  {
    if ( (__src[1] & 3) == 1 ) /*0x100526890*/
    {
      v33 = *(_QWORD *)(__src[1] + 7); /*0x10052689a*/
      if ( *(_QWORD *)v33 ) /*0x10052689e*/
        (*(void (__fastcall **)(_QWORD))v33)(*(_QWORD *)(__src[1] - 1)); /*0x1005268a9*/
      if ( *(_QWORD *)(v33 + 8) ) /*0x1005268ab*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005268bb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005268cd*/
    }
    v34 = 0; /*0x1005268d2*/
  }
  else
  {
    v34 = 1; /*0x1005268d7*/
  }
  std::sys::fs::metadata::h32fa16d3052ea535(__src, v72, v73); /*0x1005268ef*/
  if ( LOBYTE(__src[0]) ) /*0x1005268fb*/
  {
    if ( (__src[1] & 3) == 1 ) /*0x10052690c*/
    {
      v95 = (const void *)(__src[1] - 1); /*0x100526912*/
      v35 = *(_QWORD *)(__src[1] + 7); /*0x10052691a*/
      if ( *(_QWORD *)v35 ) /*0x10052691e*/
        (*(void (__fastcall **)(_QWORD))v35)(*(_QWORD *)(__src[1] - 1)); /*0x100526929*/
      if ( *(_QWORD *)(v35 + 8) ) /*0x10052692b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052693b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052694e*/
    }
    v36 = 0; /*0x100526953*/
  }
  else
  {
    v36 = 1; /*0x100526958*/
  }
  std::sys::fs::metadata::h32fa16d3052ea535(__src, v29, v63); /*0x10052696c*/
  if ( LOBYTE(__src[0]) ) /*0x100526978*/
  {
    if ( (__src[1] & 3) == 1 ) /*0x100526989*/
    {
      v95 = (const void *)(__src[1] - 1); /*0x10052698f*/
      v37 = *(_QWORD *)(__src[1] + 7); /*0x100526997*/
      if ( *(_QWORD *)v37 ) /*0x10052699b*/
        (*(void (__fastcall **)(_QWORD))v37)(*(_QWORD *)(__src[1] - 1)); /*0x1005269a6*/
      if ( *(_QWORD *)(v37 + 8) ) /*0x1005269a8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005269b8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005269cb*/
    }
    v38 = 0; /*0x1005269d0*/
  }
  else
  {
    v38 = 1; /*0x1005269d5*/
  }
  memcpy(__src, v43, 0x98u); /*0x1005269ee*/
  qmemcpy(__dst + 83, v51, 0x50u); /*0x100526a06*/
  __dst[97] = v85; /*0x100526a10*/
  __dst[96] = v84; /*0x100526a1e*/
  __dst[95] = v83; /*0x100526a2c*/
  v39 = v81; /*0x100526a33*/
  __dst[94] = v82; /*0x100526a41*/
  __dst[93] = v39; /*0x100526a48*/
  v40 = v69; /*0x100526a56*/
  __dst[98] = v68; /*0x100526a5d*/
  __dst[99] = v40; /*0x100526a64*/
  __dst[100] = v70; /*0x100526a72*/
  memcpy(&__src[19], __dsta, 0x150u); /*0x100526a8c*/
  v41 = v87; /*0x100526a98*/
  __dst[101] = v86; /*0x100526a9f*/
  __dst[102] = v41; /*0x100526aa6*/
  __dst[103] = v88; /*0x100526ab4*/
  memcpy(__dst, __src, 0x1E8u); /*0x100526ac6*/
  __dst[61] = v96; /*0x100526acf*/
  __dst[62] = v74; /*0x100526add*/
  __dst[63] = v60; /*0x100526aeb*/
  __dst[64] = v90; /*0x100526af6*/
  __dst[65] = v75; /*0x100526b04*/
  __dst[66] = v61; /*0x100526b12*/
  __dst[67] = v91; /*0x100526b1d*/
  __dst[68] = v76; /*0x100526b2b*/
  __dst[69] = v62; /*0x100526b39*/
  __dst[70] = v92; /*0x100526b44*/
  __dst[71] = v77; /*0x100526b52*/
  __dst[72] = v64; /*0x100526b60*/
  __dst[73] = v93; /*0x100526b6b*/
  __dst[74] = v78; /*0x100526b79*/
  __dst[75] = v65; /*0x100526b87*/
  __dst[76] = v94; /*0x100526b92*/
  __dst[77] = v79; /*0x100526ba0*/
  __dst[78] = v66; /*0x100526bae*/
  __dst[79] = v89; /*0x100526bbc*/
  __dst[80] = v80; /*0x100526bca*/
  __dst[81] = v67; /*0x100526bd8*/
  *((_BYTE *)__dst + 656) = v34; /*0x100526bdf*/
  *((_BYTE *)__dst + 657) = v36; /*0x100526be6*/
  *((_BYTE *)__dst + 658) = v38; /*0x100526bed*/
  __dst[104] = 0x8000000000000000LL; /*0x100526bfe*/
  __dst[107] = 0x8000000000000000LL; /*0x100526c05*/
  __dst[110] = 0; /*0x100526c0c*/
  __dst[111] = 0x8000000000000000LL; /*0x100526c17*/
  result = v59; /*0x100526c1e*/
  __dst[114] = v59; /*0x100526c25*/
  *((_BYTE *)__dst + 920) = 0; /*0x100526c2c*/
  if ( v45[0] != 2 ) /*0x100526c3a*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h3db126d9da633c1d(v45); /*0x100526c43*/
  return result; /*0x100526c48*/
}