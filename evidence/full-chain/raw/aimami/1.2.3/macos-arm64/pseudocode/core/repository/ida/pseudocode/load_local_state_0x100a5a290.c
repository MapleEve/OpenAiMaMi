// __ZN13codexmate_lib4core10repository10Repository16load_local_state @ 0x100a5a290 | 基线 same-set
void __fastcall codexmate_lib::core::repository::Repository::load_local_state::h0e6ef74d3b184ef0(
        _QWORD *__dst,
        _QWORD *a2)
{
  __int64 v4; // rdx
  double v5; // xmm0_8
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  _QWORD *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rsi
  _QWORD *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rsi
  void *v20; // rax
  void *v21; // r15
  void *v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 *v27; // rdi
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // r15
  unsigned __int64 v32; // r12
  _QWORD *v33; // r15
  __int64 v34; // rax
  bool v35; // zf
  int v36; // edx
  __int64 v37; // r12
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // rcx
  __int64 v41; // r12
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r13
  __int64 v45; // r14
  __int64 v46; // rsi
  char v47; // r14
  __int64 v48; // r13
  __int64 v49; // rsi
  char v50; // r13
  __int64 v51; // r12
  __int64 v52; // r15
  __int64 v53; // rsi
  char v54; // r12
  __int64 v55; // rax
  _QWORD *v56; // rcx
  __int64 v57; // rcx
  _WORD v58[76]; // [rsp+0h] [rbp-6F0h] BYREF
  _QWORD __dsta[44]; // [rsp+98h] [rbp-658h] BYREF
  _DWORD v60[38]; // [rsp+1F8h] [rbp-4F8h] BYREF
  _QWORD v61[11]; // [rsp+290h] [rbp-460h] BYREF
  _QWORD __src[63]; // [rsp+2E8h] [rbp-408h] BYREF
  _QWORD v63[5]; // [rsp+4E0h] [rbp-210h] BYREF
  _QWORD v64[2]; // [rsp+508h] [rbp-1E8h] BYREF
  _QWORD v65[2]; // [rsp+518h] [rbp-1D8h] BYREF
  _QWORD v66[2]; // [rsp+528h] [rbp-1C8h] BYREF
  _QWORD v67[2]; // [rsp+538h] [rbp-1B8h] BYREF
  _QWORD v68[2]; // [rsp+548h] [rbp-1A8h] BYREF
  _QWORD v69[2]; // [rsp+558h] [rbp-198h] BYREF
  _QWORD v70[2]; // [rsp+568h] [rbp-188h] BYREF
  __int64 v71; // [rsp+578h] [rbp-178h]
  __int64 v72; // [rsp+580h] [rbp-170h]
  __int64 v73; // [rsp+588h] [rbp-168h]
  __int64 v74; // [rsp+590h] [rbp-160h]
  __int64 v75; // [rsp+598h] [rbp-158h]
  __int64 v76; // [rsp+5A0h] [rbp-150h]
  __int64 v77; // [rsp+5A8h] [rbp-148h]
  __int64 v78; // [rsp+5B0h] [rbp-140h]
  __int64 v79; // [rsp+5B8h] [rbp-138h]
  __int64 v80; // [rsp+5C0h] [rbp-130h] BYREF
  _QWORD *v81; // [rsp+5C8h] [rbp-128h]
  unsigned __int64 v82; // [rsp+5D0h] [rbp-120h]
  __int64 v83; // [rsp+5D8h] [rbp-118h]
  __int64 v84; // [rsp+5E0h] [rbp-110h]
  __int64 v85; // [rsp+5E8h] [rbp-108h]
  __int64 v86; // [rsp+5F0h] [rbp-100h]
  __int64 v87; // [rsp+5F8h] [rbp-F8h]
  __int64 v88; // [rsp+600h] [rbp-F0h]
  __int64 v89; // [rsp+608h] [rbp-E8h]
  __int64 v90; // [rsp+610h] [rbp-E0h]
  __int64 v91; // [rsp+618h] [rbp-D8h]
  __int64 v92; // [rsp+620h] [rbp-D0h] BYREF
  __int64 v93; // [rsp+628h] [rbp-C8h]
  __int64 v94; // [rsp+630h] [rbp-C0h]
  __int64 v95; // [rsp+638h] [rbp-B8h]
  __int64 v96; // [rsp+640h] [rbp-B0h]
  __int64 v97; // [rsp+648h] [rbp-A8h]
  __int64 v98; // [rsp+650h] [rbp-A0h] BYREF
  __int64 v99; // [rsp+658h] [rbp-98h]
  __int64 v100; // [rsp+660h] [rbp-90h]
  __int64 v101; // [rsp+668h] [rbp-88h]
  __int64 v102; // [rsp+670h] [rbp-80h]
  __int64 v103; // [rsp+678h] [rbp-78h]
  __int64 v104; // [rsp+680h] [rbp-70h]
  __int64 v105; // [rsp+688h] [rbp-68h]
  __int64 v106; // [rsp+690h] [rbp-60h]
  __int64 v107; // [rsp+698h] [rbp-58h]
  __int64 v108; // [rsp+6A0h] [rbp-50h]
  __int64 v109; // [rsp+6A8h] [rbp-48h] BYREF
  __int64 v110; // [rsp+6B0h] [rbp-40h]
  __int64 v111; // [rsp+6B8h] [rbp-38h]
  _BYTE v112[41]; // [rsp+6C7h] [rbp-29h] BYREF

  v98 = 0; /*0x100a5a2aa*/
  v99 = 8; /*0x100a5a2b5*/
  v100 = 0; /*0x100a5a2c0*/
  v4 = a2[5]; /*0x100a5a2cf*/
  v108 = a2[4]; /*0x100a5a2dd*/
  v101 = v4; /*0x100a5a2e1*/
  codexmate_lib::core::repository::Repository::load_current_auth_snapshot::h8bef7fb94ca7d6d7(v60); /*0x100a5a2e8*/
  v5 = codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(v58, (__int64)a2); /*0x100a5a2f7*/
  v6 = a2[28]; /*0x100a5a2fc*/
  v7 = a2[29]; /*0x100a5a303*/
  codexmate_lib::core::repository::Repository::load_registry_for_mutation::h2b0f27ffcaeb4a0b( /*0x100a5a317*/
    (__int64)__src,
    a2[28],
    a2[29]);
  v8 = __src[0]; /*0x100a5a31c*/
  qmemcpy(__dsta, &__src[1], 0x58u); /*0x100a5a336*/
  if ( __src[0] == 11 ) /*0x100a5a33d*/
  {
    qmemcpy(v61, __dsta, sizeof(v61)); /*0x100a5a356*/
    codexmate_lib::core::quota_store::load::h655f425e55903b24(__dsta, a2[52], a2[53]); /*0x100a5a36e*/
    if ( LODWORD(__dsta[0]) == 11 ) /*0x100a5a37a*/
    {
      v96 = __dsta[5]; /*0x100a5a387*/
      v95 = __dsta[4]; /*0x100a5a395*/
      v94 = __dsta[3]; /*0x100a5a3a3*/
      v93 = __dsta[2]; /*0x100a5a3b8*/
      v92 = __dsta[1]; /*0x100a5a3bf*/
    }
    else
    {
      qmemcpy(__src, __dsta, 0x60u); /*0x100a5a4b4*/
      LODWORD(v96) = 3; /*0x100a5a4b7*/
      v95 = 0; /*0x100a5a4c1*/
      v92 = 0; /*0x100a5a4cc*/
      v93 = 8; /*0x100a5a4d7*/
      v94 = 0; /*0x100a5a4e2*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src); /*0x100a5a4f0*/
    }
    v14 = __src; /*0x100a5a4f5*/
    v15 = v6; /*0x100a5a4fc*/
    std::sys::fs::metadata::h32fa16d3052ea535(__src, v6, v7); /*0x100a5a502*/
    v83 = v7; /*0x100a5a50e*/
    if ( LOBYTE(__src[0]) ) /*0x100a5a515*/
    {
      if ( (__src[1] & 3) == 1 ) /*0x100a5a52a*/
      {
        v16 = v6; /*0x100a5a52c*/
        v106 = __src[1] - 1LL; /*0x100a5a533*/
        v17 = *(_QWORD *)(__src[1] - 1LL); /*0x100a5a537*/
        v18 = *(_QWORD *)(__src[1] + 7LL); /*0x100a5a53b*/
        if ( *(_QWORD *)v18 ) /*0x100a5a53f*/
          (*(void (__fastcall **)(__int64, double))v18)(v17, v5); /*0x100a5a54b*/
        v19 = *(_QWORD *)(v18 + 8); /*0x100a5a54d*/
        if ( v19 ) /*0x100a5a554*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v19, *(_QWORD *)(v18 + 16)); /*0x100a5a55d*/
        v15 = 24; /*0x100a5a562*/
        v14 = (_QWORD *)v106; /*0x100a5a56c*/
        v5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, 24, 8); /*0x100a5a570*/
        v6 = v16; /*0x100a5a575*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, v15); /*0x100a5a578*/
      v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x100a5a587*/
      if ( !v20 ) /*0x100a5a58f*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x100a5b0f2*/
      v21 = v20; /*0x100a5a595*/
      qmemcpy(v20, "REGISTRY_MISSING", 16); /*0x100a5a5b0*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(16, 1); /*0x100a5a5b3*/
      v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x100a5a5c2*/
      if ( !v22 ) /*0x100a5a5ca*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36); /*0x100a5b103*/
      qmemcpy(v22, "No local account registry found yet.", 36); /*0x100a5a604*/
      __src[0] = 16; /*0x100a5a60e*/
      __src[1] = v21; /*0x100a5a619*/
      __src[2] = 16; /*0x100a5a620*/
      __src[3] = 36; /*0x100a5a62b*/
      __src[4] = v22; /*0x100a5a636*/
      __src[5] = 36; /*0x100a5a63d*/
      v23 = v100; /*0x100a5a648*/
      if ( v100 == v98 ) /*0x100a5a656*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v98); /*0x100a5a65f*/
      v24 = v99; /*0x100a5a664*/
      v25 = 48 * v23; /*0x100a5a66f*/
      *(_QWORD *)(v99 + v25 + 40) = __src[5]; /*0x100a5a67a*/
      *(_QWORD *)(v24 + v25 + 32) = __src[4]; /*0x100a5a686*/
      *(_QWORD *)(v24 + v25 + 24) = __src[3]; /*0x100a5a692*/
      *(_QWORD *)(v24 + v25 + 16) = __src[2]; /*0x100a5a69e*/
      v26 = __src[0]; /*0x100a5a6a3*/
      *(_QWORD *)(v24 + v25 + 8) = __src[1]; /*0x100a5a6b1*/
      *(_QWORD *)(v24 + v25) = v26; /*0x100a5a6b6*/
      v100 = v23 + 1; /*0x100a5a6bd*/
    }
    v63[0] = v61[1]; /*0x100a5a6e0*/
    v63[1] = v61[1] + 424LL * v61[2]; /*0x100a5a6e7*/
    v63[2] = a2; /*0x100a5a6ee*/
    v63[3] = &v92; /*0x100a5a6fc*/
    v63[4] = v60; /*0x100a5a703*/
    v27 = &v80; /*0x100a5a70a*/
    v28 = v63; /*0x100a5a711*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h6a5068862d02c625( /*0x100a5a718*/
      &v80,
      v63,
      v5);
    v31 = v81; /*0x100a5a71d*/
    v32 = v82; /*0x100a5a724*/
    __src[0] = v112; /*0x100a5a72f*/
    if ( v82 >= 2 ) /*0x100a5a73a*/
    {
      v27 = v81; /*0x100a5afc9*/
      v28 = (_QWORD *)v82; /*0x100a5afcc*/
      if ( v82 >= 0x15 ) /*0x100a5afb7*/
        core::slice::sort::stable::driftsort_main::hf0b2c10cd4d5750e(v81, v82, __src); /*0x100a5b117*/
      else
        core::slice::sort::shared::smallsort::insertion_sort_shift_left::h3552bd85c9085a11(v81, v82, 1, __src); /*0x100a5afcf*/
    }
    v33 = v31 - 44; /*0x100a5a740*/
    v34 = 352 * v32; /*0x100a5a747*/
    v84 = v6; /*0x100a5a74e*/
    while ( v34 ) /*0x100a5a763*/
    {
      v28 = v33 + 44; /*0x100a5a765*/
      v34 -= 352; /*0x100a5a76c*/
      v35 = *((_BYTE *)v33 + 689) == 1; /*0x100a5a772*/
      v33 += 44; /*0x100a5a77a*/
      if ( v35 ) /*0x100a5a77d*/
      {
        _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::heb3942d327e4141a( /*0x100a5a786*/
          __src,
          v28,
          v29,
          v30);
        v27 = __dsta; /*0x100a5a78b*/
        v28 = __src; /*0x100a5a792*/
        memcpy(__dsta, __src, sizeof(__dsta)); /*0x100a5a79e*/
        goto LABEL_34; /*0x100a5a7a3*/
      }
    }
    __dsta[0] = 2; /*0x100a5a7a5*/
LABEL_34:
    v109 = std::time::SystemTime::now::h1fe79e41f9d5677f(v27, v28); /*0x100a5a7b0*/
    LODWORD(v110) = v36; /*0x100a5a7b9*/
    std::time::SystemTime::duration_since::had059553cab94f96(__src, &v109, 0, 0); /*0x100a5a7ce*/
    if ( LOBYTE(__src[0]) ) /*0x100a5a7da*/
      v37 = 0; /*0x100a5a7e5*/
    else
      v37 = __src[1]; /*0x100a5a7dc*/
    v38 = a2[2]; /*0x100a5a7ec*/
    v70[0] = a2[1]; /*0x100a5a7f0*/
    v70[1] = v38; /*0x100a5a7f7*/
    v109 = 0; /*0x100a5a7fe*/
    v110 = 1; /*0x100a5a806*/
    v111 = 0; /*0x100a5a80e*/
    __src[2] = 1610612768; /*0x100a5a816*/
    __src[0] = &v109; /*0x100a5a821*/
    __src[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a5a82f*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v70, __src) ) /*0x100a5a844*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a5aff7*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        v112,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v71 = v37; /*0x100a5a851*/
    v39 = v109; /*0x100a5a858*/
    v85 = v110; /*0x100a5a860*/
    v72 = v111; /*0x100a5a86b*/
    v40 = a2[26]; /*0x100a5a879*/
    v69[0] = a2[25]; /*0x100a5a880*/
    v69[1] = v40; /*0x100a5a887*/
    v109 = 0; /*0x100a5a88e*/
    v110 = 1; /*0x100a5a896*/
    v111 = 0; /*0x100a5a89e*/
    __src[2] = 1610612768; /*0x100a5a8a6*/
    __src[0] = &v109; /*0x100a5a8b1*/
    __src[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a5a8b8*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v69, __src) ) /*0x100a5a8cd*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a5b01f*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        v112,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v106 = v109; /*0x100a5a8de*/
    v86 = v110; /*0x100a5a8e6*/
    v73 = v111; /*0x100a5a8f1*/
    v68[0] = v108; /*0x100a5a8fc*/
    v68[1] = v101; /*0x100a5a90a*/
    v109 = 0; /*0x100a5a911*/
    v110 = 1; /*0x100a5a919*/
    v111 = 0; /*0x100a5a921*/
    __src[2] = 1610612768; /*0x100a5a929*/
    __src[0] = &v109; /*0x100a5a934*/
    __src[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a5a93b*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v68, __src) ) /*0x100a5a950*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a5b047*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        v112,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v102 = v109; /*0x100a5a961*/
    v87 = v110; /*0x100a5a969*/
    v74 = v111; /*0x100a5a974*/
    v67[0] = v84; /*0x100a5a982*/
    v67[1] = v83; /*0x100a5a990*/
    v109 = 0; /*0x100a5a997*/
    v110 = 1; /*0x100a5a99f*/
    v111 = 0; /*0x100a5a9a7*/
    __src[2] = 1610612768; /*0x100a5a9af*/
    __src[0] = &v109; /*0x100a5a9ba*/
    __src[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a5a9c1*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v67, __src) ) /*0x100a5a9d6*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a5b06f*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        v112,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v107 = v39; /*0x100a5a9e3*/
    v103 = v109; /*0x100a5a9eb*/
    v88 = v110; /*0x100a5a9f3*/
    v76 = v111; /*0x100a5a9fe*/
    v41 = a2[17]; /*0x100a5aa0c*/
    v75 = a2[16]; /*0x100a5aa13*/
    v66[0] = v75; /*0x100a5aa1a*/
    v66[1] = v41; /*0x100a5aa21*/
    v109 = 0; /*0x100a5aa28*/
    v110 = 1; /*0x100a5aa30*/
    v111 = 0; /*0x100a5aa38*/
    __src[2] = 1610612768; /*0x100a5aa40*/
    __src[0] = &v109; /*0x100a5aa4b*/
    __src[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a5aa52*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v66, __src) ) /*0x100a5aa67*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a5b097*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        v112,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v104 = v109; /*0x100a5aa78*/
    v89 = v110; /*0x100a5aa80*/
    v77 = v111; /*0x100a5aa8b*/
    v42 = a2[80]; /*0x100a5aa99*/
    v65[0] = a2[79]; /*0x100a5aaa0*/
    v65[1] = v42; /*0x100a5aaa7*/
    v109 = 0; /*0x100a5aaae*/
    v110 = 1; /*0x100a5aab6*/
    v111 = 0; /*0x100a5aabe*/
    __src[2] = 1610612768; /*0x100a5aac6*/
    __src[0] = &v109; /*0x100a5aad1*/
    __src[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a5aad8*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v65, __src) ) /*0x100a5aaed*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a5b0bc*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        v112,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v105 = v109; /*0x100a5aafe*/
    v90 = v110; /*0x100a5ab06*/
    v78 = v111; /*0x100a5ab11*/
    v43 = a2[41]; /*0x100a5ab1f*/
    v64[0] = a2[40]; /*0x100a5ab26*/
    v64[1] = v43; /*0x100a5ab2d*/
    v109 = 0; /*0x100a5ab34*/
    v110 = 1; /*0x100a5ab3c*/
    v111 = 0; /*0x100a5ab44*/
    __src[2] = 1610612768; /*0x100a5ab4c*/
    __src[0] = &v109; /*0x100a5ab57*/
    __src[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a5ab5e*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v64, __src) ) /*0x100a5ab73*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a5b0e1*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        v112,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v97 = v109; /*0x100a5ab84*/
    v79 = v111; /*0x100a5ab93*/
    v91 = v110; /*0x100a5abac*/
    std::sys::fs::metadata::h32fa16d3052ea535(__src, v108, v101); /*0x100a5abb3*/
    if ( LOBYTE(__src[0]) ) /*0x100a5abbf*/
    {
      if ( (__src[1] & 3) == 1 ) /*0x100a5abd0*/
      {
        v108 = __src[1] - 1LL; /*0x100a5abd6*/
        v44 = *(_QWORD *)(__src[1] - 1LL); /*0x100a5abda*/
        v45 = *(_QWORD *)(__src[1] + 7LL); /*0x100a5abde*/
        if ( *(_QWORD *)v45 ) /*0x100a5abe2*/
          (*(void (__fastcall **)(__int64))v45)(v44); /*0x100a5abed*/
        v46 = *(_QWORD *)(v45 + 8); /*0x100a5abef*/
        if ( v46 ) /*0x100a5abf6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v46, *(_QWORD *)(v45 + 16)); /*0x100a5abff*/
        v5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, 24, 8); /*0x100a5ac12*/
      }
      v47 = 0; /*0x100a5ac17*/
    }
    else
    {
      v47 = 1; /*0x100a5ac1c*/
    }
    std::sys::fs::metadata::h32fa16d3052ea535(__src, v84, v83); /*0x100a5ac34*/
    if ( LOBYTE(__src[0]) ) /*0x100a5ac40*/
    {
      if ( (__src[1] & 3) == 1 ) /*0x100a5ac51*/
      {
        v101 = __src[1] - 1LL; /*0x100a5ac57*/
        v108 = *(_QWORD *)(__src[1] - 1LL); /*0x100a5ac62*/
        v48 = *(_QWORD *)(__src[1] + 7LL); /*0x100a5ac66*/
        if ( *(_QWORD *)v48 ) /*0x100a5ac6a*/
          (*(void (__fastcall **)(__int64, double))v48)(v108, v5); /*0x100a5ac77*/
        v49 = *(_QWORD *)(v48 + 8); /*0x100a5ac7d*/
        if ( v49 ) /*0x100a5ac84*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v49, *(_QWORD *)(v48 + 16)); /*0x100a5ac8a*/
        v5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101, 24, 8); /*0x100a5aca0*/
      }
      v50 = 0; /*0x100a5aca5*/
    }
    else
    {
      v50 = 1; /*0x100a5acaa*/
    }
    std::sys::fs::metadata::h32fa16d3052ea535(__src, v75, v41); /*0x100a5acbe*/
    if ( LOBYTE(__src[0]) ) /*0x100a5acca*/
    {
      if ( (__src[1] & 3) == 1 ) /*0x100a5acdb*/
      {
        v108 = __src[1] - 1LL; /*0x100a5ace1*/
        v51 = *(_QWORD *)(__src[1] - 1LL); /*0x100a5ace5*/
        v52 = *(_QWORD *)(__src[1] + 7LL); /*0x100a5ace9*/
        if ( *(_QWORD *)v52 ) /*0x100a5aced*/
          (*(void (__fastcall **)(__int64, double))v52)(v51, v5); /*0x100a5acf8*/
        v53 = *(_QWORD *)(v52 + 8); /*0x100a5acfa*/
        if ( v53 ) /*0x100a5ad01*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v53, *(_QWORD *)(v52 + 16)); /*0x100a5ad0a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, 24, 8); /*0x100a5ad1d*/
      }
      v54 = 0; /*0x100a5ad22*/
    }
    else
    {
      v54 = 1; /*0x100a5ad27*/
    }
    memcpy(__src, v58, 0x98u); /*0x100a5ad40*/
    qmemcpy(__dst + 85, v61, 0x58u); /*0x100a5ad58*/
    __dst[100] = v96; /*0x100a5ad62*/
    __dst[99] = v95; /*0x100a5ad70*/
    __dst[98] = v94; /*0x100a5ad7e*/
    v55 = v92; /*0x100a5ad85*/
    __dst[97] = v93; /*0x100a5ad93*/
    __dst[96] = v55; /*0x100a5ad9a*/
    v56 = v81; /*0x100a5ada8*/
    __dst[101] = v80; /*0x100a5adaf*/
    __dst[102] = v56; /*0x100a5adb6*/
    __dst[103] = v82; /*0x100a5adc4*/
    memcpy(&__src[19], __dsta, 0x160u); /*0x100a5adde*/
    v57 = v99; /*0x100a5adea*/
    __dst[104] = v98; /*0x100a5adf1*/
    __dst[105] = v57; /*0x100a5adf8*/
    __dst[106] = v100; /*0x100a5ae06*/
    memcpy(__dst, __src, 0x1F8u); /*0x100a5ae18*/
    __dst[63] = v107; /*0x100a5ae21*/
    __dst[64] = v85; /*0x100a5ae2f*/
    __dst[65] = v72; /*0x100a5ae3d*/
    __dst[66] = v106; /*0x100a5ae48*/
    __dst[67] = v86; /*0x100a5ae56*/
    __dst[68] = v73; /*0x100a5ae64*/
    __dst[69] = v102; /*0x100a5ae6f*/
    __dst[70] = v87; /*0x100a5ae7d*/
    __dst[71] = v74; /*0x100a5ae8b*/
    __dst[72] = v103; /*0x100a5ae96*/
    __dst[73] = v88; /*0x100a5aea4*/
    __dst[74] = v76; /*0x100a5aeb2*/
    __dst[75] = v104; /*0x100a5aebd*/
    __dst[76] = v89; /*0x100a5aecb*/
    __dst[77] = v77; /*0x100a5aed9*/
    __dst[78] = v105; /*0x100a5aee4*/
    __dst[79] = v90; /*0x100a5aef2*/
    __dst[80] = v78; /*0x100a5af00*/
    __dst[81] = v97; /*0x100a5af0e*/
    __dst[82] = v91; /*0x100a5af1c*/
    __dst[83] = v79; /*0x100a5af2a*/
    *((_BYTE *)__dst + 672) = v47; /*0x100a5af31*/
    *((_BYTE *)__dst + 673) = v50; /*0x100a5af38*/
    *((_BYTE *)__dst + 674) = v54; /*0x100a5af3f*/
    __dst[107] = 0x8000000000000000LL; /*0x100a5af50*/
    __dst[110] = 0x8000000000000000LL; /*0x100a5af57*/
    __dst[113] = 0; /*0x100a5af5e*/
    __dst[114] = 0x8000000000000000LL; /*0x100a5af69*/
    __dst[117] = 0x8000000000000000LL; /*0x100a5af70*/
    __dst[132] = v71; /*0x100a5af7e*/
    *((_BYTE *)__dst + 1064) = 0; /*0x100a5af85*/
    if ( v60[0] != 2 ) /*0x100a5af93*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v60); /*0x100a5af9c*/
  }
  else
  {
    qmemcpy(__dst + 2, __dsta, 0x58u); /*0x100a5a3db*/
    __dst[1] = v8; /*0x100a5a3de*/
    *__dst = 2; /*0x100a5a3e2*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2( /*0x100a5a3f0*/
      v58,
      &__dsta[11]);
    if ( v60[0] != 2 ) /*0x100a5a3fc*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v60); /*0x100a5a405*/
    v9 = v99; /*0x100a5a40a*/
    v10 = v100; /*0x100a5a411*/
    if ( v100 ) /*0x100a5a41b*/
    {
      v11 = (_QWORD *)(v99 + 32); /*0x100a5a41d*/
      do /*0x100a5a437*/
      {
        v12 = *(v11 - 4); /*0x100a5a439*/
        if ( v12 ) /*0x100a5a440*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v11 - 3), v12, 1); /*0x100a5a44b*/
        v13 = *(v11 - 1); /*0x100a5a450*/
        if ( v13 ) /*0x100a5a457*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v11, v13, 1); /*0x100a5a461*/
        v11 += 6; /*0x100a5a430*/
        --v10; /*0x100a5a434*/
      }
      while ( v10 ); /*0x100a5a437*/
    }
    if ( v98 ) /*0x100a5a472*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 48 * v98, 8); /*0x100a5a499*/
  }
}