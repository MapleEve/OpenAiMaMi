// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_diagnostic::check_thread_poisoned_instructions::h3e2aa82f96b188f1; addr: 0x1008847c0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
double __fastcall codexmate_lib::core::relay::codex_diagnostic::check_thread_poisoned_instructions::h3e2aa82f96b188f1(
        __int64 a1,
        __int64 a2,
        __m128i si128)
{
  __int64 v4; // r14
  __int64 v5; // r15
  _QWORD *v6; // r12
  __int64 v7; // rsi
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  const __m128i *v13; // rax
  const __m128i *v14; // rdx
  const __m128i *v15; // rax
  const __m128i *v16; // rbx
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r14
  const void *v21; // r13
  size_t v22; // r12
  __int64 v23; // r14
  bool v24; // zf
  int v25; // r14d
  _QWORD *v26; // r12
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 *v30; // r13
  char v31; // al
  __int64 v32; // rsi
  unsigned __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rcx
  void *v39; // rax
  __int64 v40; // rdx
  void *v41; // r15
  _DWORD *v42; // rax
  __int64 v43; // rdx
  _DWORD *v44; // r12
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _QWORD *v50; // r13
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int64 (__fastcall **v53)(); // r15
  __int64 v54; // r12
  __int64 (__fastcall **v55)(); // rdi
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 (__fastcall ***v58)(); // r14
  unsigned __int64 v59; // rsi
  __int64 v60; // rdx
  void *v61; // rax
  __int64 v62; // rdx
  void *v63; // r15
  _DWORD *v64; // rax
  __int64 (__fastcall **v65)(); // r13
  __int64 v66; // r12
  __int64 v67; // rsi
  _QWORD *v68; // r14
  __int64 v69; // rdx
  __int64 v70; // rax
  void *v71; // rax
  __int64 v72; // rdx
  void *v73; // r15
  __int64 v74; // rax
  __int64 v75; // r12
  __int64 (__fastcall **v76)(); // r13
  __int64 v77; // r14
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rsi
  const __m128i *v81; // r12
  unsigned __int64 v82; // r14
  _QWORD *v83; // r15
  unsigned __int64 v84; // r14
  _QWORD *v85; // r15
  unsigned __int64 v86; // r14
  _QWORD *v87; // r15
  const __m128i *v89; // r15
  const __m128i *v90; // r12
  const __m128i *v92; // r13
  int v93; // r14d
  __int64 v94; // rax
  __int64 v95; // rsi
  unsigned __int64 v96; // rax
  const __m128i *v97; // r14
  __int64 v98; // r15
  __int64 v99; // r12
  unsigned __int64 v100; // r14
  _QWORD *v101; // r15
  unsigned __int64 v102; // r14
  _QWORD *v103; // r15
  unsigned __int64 v104; // r14
  _QWORD *v105; // r15
  const __m128i *v107; // r15
  const __m128i *v108; // r12
  const __m128i *v110; // r13
  int v111; // r14d
  __int64 v112; // rax
  __int64 v113; // rsi
  unsigned __int64 v114; // rax
  const __m128i *v115; // r14
  _QWORD v117[5]; // [rsp+0h] [rbp-250h] BYREF
  _QWORD v118[3]; // [rsp+28h] [rbp-228h] BYREF
  _QWORD v119[3]; // [rsp+40h] [rbp-210h] BYREF
  _QWORD v120[3]; // [rsp+58h] [rbp-1F8h] BYREF
  const __m128i *v121[12]; // [rsp+70h] [rbp-1E0h] BYREF
  unsigned __int64 v122; // [rsp+D0h] [rbp-180h] BYREF
  unsigned __int64 v123; // [rsp+D8h] [rbp-178h] BYREF
  unsigned __int64 v124; // [rsp+E0h] [rbp-170h] BYREF
  __int64 v125; // [rsp+E8h] [rbp-168h]
  const __m128i *v126; // [rsp+F0h] [rbp-160h]
  const __m128i *v127; // [rsp+F8h] [rbp-158h]
  const __m128i *v128; // [rsp+100h] [rbp-150h]
  __int64 v129; // [rsp+108h] [rbp-148h] BYREF
  __int64 v130; // [rsp+110h] [rbp-140h]
  __int64 v131; // [rsp+118h] [rbp-138h]
  _QWORD v132[12]; // [rsp+120h] [rbp-130h] BYREF
  __int64 v133; // [rsp+180h] [rbp-D0h] BYREF
  __int64 v134; // [rsp+188h] [rbp-C8h]
  __int64 v135; // [rsp+190h] [rbp-C0h]
  __int64 v136; // [rsp+198h] [rbp-B8h]
  __int64 v137; // [rsp+1A0h] [rbp-B0h] BYREF
  __int64 v138; // [rsp+1A8h] [rbp-A8h]
  unsigned __int64 v139; // [rsp+1B0h] [rbp-A0h]
  __int64 v140; // [rsp+1B8h] [rbp-98h] BYREF
  __int64 v141; // [rsp+1C0h] [rbp-90h]
  unsigned __int64 v142; // [rsp+1C8h] [rbp-88h]
  const __m128i *v143; // [rsp+1D0h] [rbp-80h]
  unsigned __int64 v144; // [rsp+1D8h] [rbp-78h] BYREF
  __int64 v145; // [rsp+1E0h] [rbp-70h]
  __int64 v146; // [rsp+1E8h] [rbp-68h]
  __int64 v147; // [rsp+1F0h] [rbp-60h] BYREF
  __int64 v148; // [rsp+1F8h] [rbp-58h]
  unsigned __int64 v149; // [rsp+200h] [rbp-50h]
  unsigned __int64 v150; // [rsp+208h] [rbp-48h]
  unsigned __int64 v151; // [rsp+210h] [rbp-40h] BYREF
  __int64 (__fastcall **v152)(); // [rsp+218h] [rbp-38h]
  __int64 v153; // [rsp+220h] [rbp-30h]

  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::hdcc4745326ed4935(v132, a2); /*0x1008847e1*/
  v4 = v132[2]; /*0x1008847e6*/
  if ( !v132[2] ) /*0x1008847f0*/
  {
    if ( v132[0] ) /*0x100884c50*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132[1], 24LL * v132[0], 8); /*0x100884c66*/
    codexmate_lib::core::relay::codex_diagnostic::ok_item::h1acccb3a8c182d3a( /*0x100884c98*/
      a1,
      &anon_0868f19ff3e9f3569e732f60bdb020cc_467,
      28,
      &unk_10178A40E,
      57);
    return *(double *)si128.i64; /*0x100884c98*/
  }
  v131 = a1; /*0x1008847f6*/
  v5 = v132[1]; /*0x1008847fd*/
  v6 = (_QWORD *)(v132[1] + 8LL); /*0x100884804*/
  do /*0x100884817*/
  {
    v7 = *(v6 - 1); /*0x100884819*/
    if ( v7 ) /*0x100884821*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v6, v7, 1); /*0x10088482c*/
    v6 += 3; /*0x100884810*/
    --v4; /*0x100884814*/
  }
  while ( v4 ); /*0x100884817*/
  if ( v132[0] ) /*0x10088483d*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24LL * v132[0], 8); /*0x10088484f*/
  v8 = (_QWORD *)a2; /*0x10088485b*/
  codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads::h77c8e8996f4c34a7( /*0x10088485e*/
    (__int64)v121,
    a2,
    si128);
  if ( LODWORD(v121[0]) != 11 ) /*0x10088486a*/
  {
    qmemcpy(v132, v121, sizeof(v132)); /*0x100884cb0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v133, &v122, v9); /*0x100884cb3*/
    v39 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1); /*0x100884cc2*/
    if ( !v39 ) /*0x100884cca*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28); /*0x100885a8e*/
    v41 = v39; /*0x100884cd0*/
    qmemcpy(v39, "thread_poisoned_instructions", 28); /*0x100884cf9*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(28, 1, v40); /*0x100884d04*/
    v42 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100884d13*/
    if ( !v42 ) /*0x100884d1b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100885a9f*/
    v44 = v42; /*0x100884d21*/
    *(_DWORD *)((char *)v42 + 3) = 1735289198; /*0x100884d24*/
    *v42 = 1852989815; /*0x100884d2b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v43); /*0x100884d31*/
    v45 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x100884d40*/
    if ( !v45 ) /*0x100884d48*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x100885ab0*/
    v50 = v45; /*0x100884d4e*/
    *(_QWORD *)((char *)v45 + 22) = 0x95BCE5A2B4E78BA8LL; /*0x100884d5b*/
    v45[2] = 0x8BA8E7BFBAE7968FLL; /*0x100884d69*/
    v45[1] = 0xE5BBAFE8B495E68CLL; /*0x100884d77*/
    *v45 = 0xAEE595B3E6A097E6LL; /*0x100884d85*/
    v144 = 0; /*0x100884d89*/
    v145 = 1; /*0x100884d91*/
    v146 = 0; /*0x100884d99*/
    v153 = 1610612768; /*0x100884da1*/
    v151 = (unsigned __int64)&v144; /*0x100884dad*/
    v152 = &anon_0868f19ff3e9f3569e732f60bdb020cc_1449; /*0x100884db8*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100884dc7*/
                            v132,
                            (__int64 *)&v151,
                            v46,
                            v47,
                            v48,
                            v49) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008859fc*/
        &anon_0868f19ff3e9f3569e732f60bdb020cc_1450,
        55,
        &v133,
        &anon_0868f19ff3e9f3569e732f60bdb020cc_1468,
        &anon_0868f19ff3e9f3569e732f60bdb020cc_1452);
    v51 = v131; /*0x100884dd8*/
    *(_QWORD *)(v131 + 88) = v146; /*0x100884ddf*/
    v52 = v144; /*0x100884de3*/
    *(_QWORD *)(v51 + 80) = v145; /*0x100884deb*/
    *(_QWORD *)(v51 + 72) = v52; /*0x100884def*/
    *(_QWORD *)v51 = 28; /*0x100884df3*/
    *(_QWORD *)(v51 + 8) = v41; /*0x100884dfa*/
    *(_QWORD *)(v51 + 16) = 28; /*0x100884dfe*/
    *(_QWORD *)(v51 + 24) = 7; /*0x100884e06*/
    *(_QWORD *)(v51 + 32) = v44; /*0x100884e0e*/
    *(_QWORD *)(v51 + 40) = 7; /*0x100884e12*/
    *(_QWORD *)(v51 + 48) = 30; /*0x100884e1a*/
    *(_QWORD *)(v51 + 56) = v50; /*0x100884e22*/
    *(_QWORD *)(v51 + 64) = 30; /*0x100884e26*/
    *(_BYTE *)(v51 + 96) = 0; /*0x100884e2e*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v121); /*0x100884e39*/
    return *(double *)si128.i64; /*0x100884e3e*/
  }
  v128 = v121[3]; /*0x100884877*/
  v127 = v121[2]; /*0x10088488c*/
  v126 = v121[1]; /*0x100884893*/
  v10 = (__int64 *)&std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384; /*0x10088489a*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008848a1*/
  v12 = v11; /*0x1008848a3*/
  if ( *(_BYTE *)(v11 + 16) == 1 ) /*0x1008848aa*/
  {
    v13 = *(const __m128i **)v11; /*0x1008848b0*/
    v14 = *(const __m128i **)(v12 + 8); /*0x1008848b3*/
  }
  else
  {
    v13 = (const __m128i *)std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(*(double *)si128.i64); /*0x1008859c6*/
    *(_QWORD *)v12 = v13; /*0x1008859cb*/
    *(_QWORD *)(v12 + 8) = v14; /*0x1008859ce*/
    *(_BYTE *)(v12 + 16) = 1; /*0x1008859d2*/
  }
  *(_QWORD *)v12 = (char *)v13->i64 + 1; /*0x1008848bb*/
  memset(&v121[1], 0, 24); /*0x1008848e1*/
  v121[0] = (const __m128i *)&xmmword_1016F24C0; /*0x1008848ef*/
  v121[4] = v13; /*0x1008848f6*/
  v121[5] = v14; /*0x1008848fd*/
  v137 = 0; /*0x100884904*/
  v138 = 8; /*0x10088490f*/
  v139 = 0; /*0x10088491a*/
  v140 = 0; /*0x100884925*/
  v141 = 8; /*0x100884930*/
  v142 = 0; /*0x10088493b*/
  v147 = 0; /*0x100884946*/
  v148 = 8; /*0x10088494e*/
  v149 = 0; /*0x100884956*/
  v129 = 0; /*0x10088495e*/
  v15 = v127; /*0x100884969*/
  v16 = v128; /*0x100884970*/
  v143 = v127; /*0x10088497a*/
  if ( !v128 ) /*0x10088497e*/
  {
LABEL_64:
    v59 = v149; /*0x100885040*/
    if ( v149 ) /*0x100885047*/
    {
      if ( v149 != 1 ) /*0x100885051*/
      {
        if ( v149 >= 0x15 ) /*0x100885a59*/
          core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v148, v149, &v133); /*0x100885b35*/
        else
          core::slice::sort::shared::smallsort::insertion_sort_shift_left::h738b880d4ec6665f(v148, v149, 1, &v133); /*0x100885a6b*/
      }
      alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h4e6bd327af4c30f3(&v147); /*0x10088505b*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v147, v59, v60); /*0x100885060*/
      v61 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1); /*0x10088506f*/
      if ( !v61 ) /*0x100885077*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28); /*0x100885ae3*/
      v63 = v61; /*0x10088507d*/
      qmemcpy(v61, "thread_poisoned_instructions", 28); /*0x1008850a6*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(28, 1, v62); /*0x1008850b1*/
      v64 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1008850c0*/
      if ( !v64 ) /*0x1008850c8*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100885af4*/
      *(_DWORD *)((char *)v64 + 3) = 1735289198; /*0x1008850ce*/
      v150 = (unsigned __int64)v64; /*0x1008850d5*/
      *v64 = 1852989815; /*0x1008850d9*/
      v144 = v149; /*0x1008850e3*/
      v151 = (unsigned __int64)&v144; /*0x1008850eb*/
      v152 = (__int64 (__fastcall **)())core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008850f6*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v132, &unk_1019019FE, &v151); /*0x10088510c*/
      v136 = v132[0]; /*0x100885118*/
      v130 = v132[1]; /*0x100885126*/
      v125 = v132[2]; /*0x100885134*/
      v119[0] = v148; /*0x10088514b*/
      v119[1] = v148 + 24 * v149; /*0x100885152*/
      v119[2] = 5; /*0x100885159*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h1324bfa397d156de( /*0x10088516f*/
        &v151,
        v119);
      v65 = v152; /*0x100885174*/
      v66 = v153; /*0x100885178*/
      alloc::str::join_generic_copy::h877a7dfcc3252013(v132, v152, v153, &unk_10178860B, 3); /*0x100885196*/
      v146 = v132[2]; /*0x1008851a2*/
      v145 = v132[1]; /*0x1008851b4*/
      v144 = v132[0]; /*0x1008851b8*/
      v132[0] = &v144; /*0x1008851bc*/
      v132[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008851ca*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v120, &unk_101901A23, v132); /*0x1008851e6*/
      v67 = v144; /*0x1008851eb*/
      if ( v144 ) /*0x1008851f2*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, v144, 1); /*0x1008851fd*/
      if ( v66 ) /*0x100885205*/
      {
        v68 = v65 + 1; /*0x100885207*/
        do /*0x100885217*/
        {
          v67 = *(v68 - 1); /*0x100885219*/
          if ( v67 ) /*0x100885220*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v68, v67, 1); /*0x10088522a*/
          v68 += 3; /*0x100885210*/
          --v66; /*0x100885214*/
        }
        while ( v66 ); /*0x100885217*/
      }
      if ( v151 ) /*0x100885238*/
      {
        v67 = 24 * v151; /*0x10088523e*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, 24 * v151, 8); /*0x10088524a*/
      }
      v69 = v131; /*0x100885256*/
      *(_QWORD *)(v131 + 88) = v120[2]; /*0x10088525d*/
      v70 = v120[0]; /*0x100885261*/
      *(_QWORD *)(v69 + 80) = v120[1]; /*0x10088526f*/
      *(_QWORD *)(v69 + 72) = v70; /*0x100885273*/
      *(_QWORD *)v69 = 28; /*0x100885277*/
      *(_QWORD *)(v69 + 8) = v63; /*0x10088527e*/
      *(_QWORD *)(v69 + 16) = 28; /*0x100885282*/
      *(_QWORD *)(v69 + 24) = 7; /*0x10088528a*/
      *(_QWORD *)(v69 + 32) = v150; /*0x100885296*/
      *(_QWORD *)(v69 + 40) = 7; /*0x10088529a*/
      *(_QWORD *)(v69 + 48) = v136; /*0x1008852a9*/
      *(_QWORD *)(v69 + 56) = v130; /*0x1008852b4*/
      *(_QWORD *)(v69 + 64) = v125; /*0x1008852bf*/
      *(_BYTE *)(v69 + 96) = 0; /*0x1008852c3*/
    }
    else
    {
      v151 = (unsigned __int64)&v129; /*0x1008856f0*/
      v152 = (__int64 (__fastcall **)())core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008856fb*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v132, &unk_1019019CE, &v151); /*0x100885711*/
      v98 = v132[0]; /*0x100885716*/
      v99 = v132[1]; /*0x10088571d*/
      v67 = (__int64)&anon_0868f19ff3e9f3569e732f60bdb020cc_467; /*0x10088572b*/
      codexmate_lib::core::relay::codex_diagnostic::ok_item::h1acccb3a8c182d3a( /*0x100885741*/
        v131,
        &anon_0868f19ff3e9f3569e732f60bdb020cc_467,
        28,
        v132[1],
        v132[2]);
      if ( v98 ) /*0x100885749*/
      {
        v67 = v98; /*0x100885753*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v98, 1); /*0x100885756*/
      }
    }
    v100 = v149; /*0x10088575b*/
    v81 = v143; /*0x100885762*/
    if ( v149 ) /*0x100885766*/
    {
      v101 = (_QWORD *)(v148 + 8); /*0x10088576c*/
      do /*0x100885787*/
      {
        v67 = *(v101 - 1); /*0x100885789*/
        if ( v67 ) /*0x100885790*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v101, v67, 1); /*0x10088579a*/
        v101 += 3; /*0x100885780*/
        --v100; /*0x100885784*/
      }
      while ( v100 ); /*0x100885787*/
    }
    if ( v147 ) /*0x1008857a8*/
    {
      v67 = 24 * v147; /*0x1008857b2*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v148, 24 * v147, 8); /*0x1008857bb*/
    }
    v102 = v142; /*0x1008857c0*/
    if ( v142 ) /*0x1008857ca*/
    {
      v103 = (_QWORD *)(v141 + 8); /*0x1008857d3*/
      do /*0x1008857e7*/
      {
        v67 = *(v103 - 1); /*0x1008857e9*/
        if ( v67 ) /*0x1008857f0*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v103, v67, 1); /*0x1008857fa*/
        v103 += 3; /*0x1008857e0*/
        --v102; /*0x1008857e4*/
      }
      while ( v102 ); /*0x1008857e7*/
    }
    if ( v140 ) /*0x10088580b*/
    {
      v67 = 24 * v140; /*0x100885818*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141, 24 * v140, 8); /*0x100885821*/
    }
    v104 = v139; /*0x100885826*/
    if ( v139 ) /*0x100885830*/
    {
      v105 = (_QWORD *)(v138 + 8); /*0x100885839*/
      do /*0x100885847*/
      {
        v67 = *(v105 - 1); /*0x100885849*/
        if ( v67 ) /*0x100885850*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v105, v67, 1); /*0x10088585a*/
        v105 += 3; /*0x100885840*/
        --v104; /*0x100885844*/
      }
      while ( v104 ); /*0x100885847*/
    }
    if ( v137 ) /*0x10088586b*/
    {
      v67 = 24 * v137; /*0x100885878*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v138, 24 * v137, 8); /*0x100885881*/
    }
    HIDWORD(_RAX) = HIDWORD(v121[1]); /*0x100885886*/
    if ( v121[1] ) /*0x100885890*/
    {
      v150 = (unsigned __int64)v121[1]; /*0x100885896*/
      v107 = v121[3]; /*0x10088589a*/
      if ( v121[3] ) /*0x1008858a4*/
      {
        v108 = v121[0]; /*0x1008858aa*/
        si128 = _mm_load_si128(v121[0]); /*0x1008858b1*/
        _R14D = ~_mm_movemask_epi8(si128); /*0x1008858bc*/
        v110 = v121[0] + 1; /*0x1008858bf*/
        do /*0x1008858e0*/
        {
          if ( !(_WORD)_R14D ) /*0x1008858e6*/
          {
            do /*0x10088590d*/
            {
              si128 = _mm_load_si128(v110); /*0x1008858f0*/
              v111 = _mm_movemask_epi8(si128); /*0x1008858f6*/
              v108 -= 24; /*0x1008858fb*/
              ++v110; /*0x100885902*/
            }
            while ( v111 == 0xFFFF ); /*0x10088590d*/
            _R14D = ~v111; /*0x10088590f*/
          }
          __asm { tzcnt eax, r14d } /*0x100885912*/
          v112 = -3 * _RAX; /*0x10088591a*/
          v113 = *((_QWORD *)&v108[-1] + v112 - 1); /*0x10088591e*/
          if ( v113 ) /*0x100885926*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108[-1].i64[v112], v113, 1); /*0x100885935*/
          v107 = (const __m128i *)((char *)v107 - 1); /*0x1008858d0*/
          _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x1008858d7*/
          _R14D &= _R14D - 1; /*0x1008858da*/
        }
        while ( v107 ); /*0x1008858e0*/
      }
      v114 = (24 * v150 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x10088594c*/
      v67 = v114 + v150 + 17; /*0x100885953*/
      v81 = v143; /*0x100885957*/
      if ( v114 + v150 != -17 ) /*0x10088595b*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v121[0] - v114, v67, 16); /*0x10088596c*/
    }
    if ( v16 ) /*0x100885974*/
    {
      v115 = v81; /*0x100885976*/
      do /*0x100885992*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticMainThreadRow$GT$::h6f2c4d672fa81d90( /*0x100885983*/
          v115,
          v67);
        v115 += 11; /*0x100885988*/
        v16 = (const __m128i *)((char *)v16 - 1); /*0x10088598f*/
      }
      while ( v16 ); /*0x100885992*/
    }
    goto LABEL_157; /*0x100885992*/
  }
  v136 = 176LL * (_QWORD)v128; /*0x10088498b*/
  v17 = 0; /*0x10088499c*/
  v150 = 0x8000000000000000LL; /*0x1008849a3*/
  do /*0x1008849f4*/
  {
    if ( v15[v17 / 0x10 + 4].i64[1] == v150 ) /*0x100884a03*/
    {
      v10 = v132; /*0x100884a0a*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100884a11*/
        v132,
        &v15[v17 / 0x10 + 1].u64[1]);
      v20 = v149; /*0x100884a16*/
      if ( v149 == v147 ) /*0x100884a1e*/
      {
        v10 = &v147; /*0x100884a20*/
        *(double *)si128.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v147); /*0x100884a24*/
      }
      v18 = v148; /*0x1008849b0*/
      v19 = 3 * v20; /*0x1008849b4*/
      *(_QWORD *)(v148 + 8 * v19 + 16) = v132[2]; /*0x1008849bf*/
      v14 = (const __m128i *)v132[0]; /*0x1008849c4*/
      v8 = (_QWORD *)v132[1]; /*0x1008849cb*/
      *(_QWORD *)(v18 + 8 * v19 + 8) = v132[1]; /*0x1008849d2*/
      *(_QWORD *)(v18 + 8 * v19) = v14; /*0x1008849d7*/
      v149 = v20 + 1; /*0x1008849de*/
      goto LABEL_14; /*0x1008849de*/
    }
    v21 = (const void *)v15[v17 / 0x10 + 5].i64[0]; /*0x100884a30*/
    v22 = v15[v17 / 0x10 + 5].u64[1]; /*0x100884a35*/
    if ( v22 ) /*0x100884a3d*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v8, v14); /*0x100884a3f*/
      v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v22, 1); /*0x100884a51*/
      if ( !v23 ) /*0x100884a57*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v22); /*0x100885a7d*/
    }
    else
    {
      v23 = 1; /*0x100884a5e*/
    }
    memcpy((void *)v23, v21, v22); /*0x100884a6d*/
    v132[0] = v22; /*0x100884a72*/
    v132[1] = v23; /*0x100884a79*/
    v132[2] = v22; /*0x100884a80*/
    v10 = (__int64 *)v121; /*0x100884a87*/
    v8 = v132; /*0x100884a8e*/
    v24 = (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h62a3ac88aaa81a14(v121, v132) == 0; /*0x100884a9a*/
    v15 = v143; /*0x100884a9c*/
    if ( v24 ) /*0x100884aa0*/
    {
      ++v129; /*0x100884aa6*/
      codexmate_lib::core::relay::codex_thread_visibility::find_first_session_meta_line::h964dce8827cf5275( /*0x100884abe*/
        v132,
        v143[v17 / 0x10 + 5].i64[0],
        v143[v17 / 0x10 + 5].i64[1]);
      v25 = v132[0]; /*0x100884ac3*/
      v26 = (_QWORD *)v132[1]; /*0x100884aca*/
      if ( v132[0] != 11 || v132[1] == v150 ) /*0x100884adc*/
      {
        v10 = (__int64 *)&v151; /*0x100884aef*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100884af3*/
          &v151,
          &v143[v17 / 0x10 + 1].u64[1]);
        v27 = v149; /*0x100884af8*/
        if ( v149 == v147 ) /*0x100884b00*/
        {
          v10 = &v147; /*0x100884b02*/
          *(double *)si128.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v147); /*0x100884b06*/
        }
        v28 = v148; /*0x100884b0b*/
        v29 = 3 * v27; /*0x100884b0f*/
        *(_QWORD *)(v148 + 8 * v29 + 16) = v153; /*0x100884b17*/
        v14 = (const __m128i *)v151; /*0x100884b1c*/
        v8 = v152; /*0x100884b20*/
        *(_QWORD *)(v28 + 8 * v29 + 8) = v152; /*0x100884b24*/
        *(_QWORD *)(v28 + 8 * v29) = v14; /*0x100884b29*/
        v149 = v27 + 1; /*0x100884b30*/
        if ( v25 != 11 ) /*0x100884b38*/
        {
          v10 = v132; /*0x100884b3e*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v132); /*0x100884b45*/
        }
        goto LABEL_14; /*0x100884b4a*/
      }
      v30 = (__int64 *)v132[2]; /*0x100884b4f*/
      v8 = (_QWORD *)v132[3]; /*0x100884b56*/
      v10 = (__int64 *)v132[2]; /*0x100884b5d*/
      v31 = codexmate_lib::core::relay::codex_diagnostic::session_meta_instruction_issue::h777edfdfee9e91cc( /*0x100884b60*/
              v132[2],
              v132[3]);
      if ( v31 == 2 ) /*0x100884b67*/
      {
LABEL_34:
        if ( v26 ) /*0x100884bcd*/
          goto LABEL_35; /*0x100884bcd*/
      }
      else
      {
        v32 = (__int64)&v143[v17 / 0x10 + 1].i64[1]; /*0x100884b6d*/
        if ( (v31 & 1) != 0 ) /*0x100884b74*/
        {
          v10 = (__int64 *)&v151; /*0x100884b76*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v151, v32); /*0x100884b7a*/
          v33 = v139; /*0x100884b7f*/
          if ( v139 == v137 ) /*0x100884b8d*/
          {
            v10 = &v137; /*0x100884b8f*/
            *(double *)si128.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v137); /*0x100884b96*/
          }
          v34 = v138; /*0x100884b9b*/
          v35 = 3 * v33; /*0x100884ba2*/
          *(_QWORD *)(v138 + 8 * v35 + 16) = v153; /*0x100884baa*/
          v14 = (const __m128i *)v151; /*0x100884baf*/
          v8 = v152; /*0x100884bb3*/
          *(_QWORD *)(v34 + 8 * v35 + 8) = v152; /*0x100884bb7*/
          *(_QWORD *)(v34 + 8 * v35) = v14; /*0x100884bbc*/
          v139 = v33 + 1; /*0x100884bc3*/
          goto LABEL_34; /*0x100884bc3*/
        }
        v10 = (__int64 *)&v151; /*0x100884be8*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v151, v32); /*0x100884bec*/
        v36 = v142; /*0x100884bf1*/
        if ( v142 == v140 ) /*0x100884bff*/
        {
          v10 = &v140; /*0x100884c01*/
          *(double *)si128.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v140); /*0x100884c08*/
        }
        v37 = v141; /*0x100884c0d*/
        v38 = 3 * v36; /*0x100884c14*/
        *(_QWORD *)(v141 + 8 * v38 + 16) = v153; /*0x100884c1c*/
        v14 = (const __m128i *)v151; /*0x100884c21*/
        v8 = v152; /*0x100884c25*/
        *(_QWORD *)(v37 + 8 * v38 + 8) = v152; /*0x100884c29*/
        *(_QWORD *)(v37 + 8 * v38) = v14; /*0x100884c2e*/
        v142 = v36 + 1; /*0x100884c35*/
        if ( !v26 ) /*0x100884c3f*/
          goto LABEL_14; /*0x100884c3f*/
LABEL_35:
        v10 = v30; /*0x100884bd3*/
        v8 = v26; /*0x100884bdb*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v26, 1); /*0x100884bde*/
      }
LABEL_14:
      v15 = v143; /*0x1008849e2*/
    }
    v17 += 176LL; /*0x1008849e6*/
  }
  while ( v136 != v17 ); /*0x1008849f4*/
  if ( !v139 ) /*0x100884e4d*/
  {
    if ( v142 ) /*0x100884e81*/
      goto LABEL_53; /*0x100884e81*/
    goto LABEL_64; /*0x100884e81*/
  }
  if ( v139 != 1 ) /*0x100884e53*/
  {
    if ( v139 >= 0x15 ) /*0x100884e60*/
      core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v138, v139, &v133); /*0x100885b02*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h738b880d4ec6665f(v138, v139, 1, &v133); /*0x100884e72*/
  }
LABEL_53:
  alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h4e6bd327af4c30f3(&v137); /*0x100884e87*/
  if ( v142 >= 2 ) /*0x100884e9e*/
  {
    if ( v142 >= 0x15 ) /*0x100885a11*/
      core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v141, v142, &v133); /*0x100885b13*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h738b880d4ec6665f(v141, v142, 1, &v133); /*0x100885a23*/
  }
  alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h4e6bd327af4c30f3(&v140); /*0x100884eab*/
  if ( v149 >= 2 ) /*0x100884eb8*/
  {
    if ( v149 >= 0x15 ) /*0x100885a35*/
      core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v148, v149, &v133); /*0x100885b24*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h738b880d4ec6665f(v148, v149, 1, &v133); /*0x100885a47*/
  }
  alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h4e6bd327af4c30f3(&v147); /*0x100884ec2*/
  v124 = v139; /*0x100884ed5*/
  v123 = v142; /*0x100884eea*/
  v122 = v142 + v139; /*0x100884ef5*/
  v117[0] = v138; /*0x100884f0c*/
  v117[1] = v138 + 24 * v139; /*0x100884f13*/
  v117[2] = v141; /*0x100884f1a*/
  v117[3] = v141 + 24 * v142; /*0x100884f21*/
  v117[4] = 5; /*0x100884f28*/
  ((void (__fastcall *)(unsigned __int64 *, _QWORD *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hf1d66f0a04a15251)( /*0x100884f3e*/
    &v151,
    v117);
  v53 = v152; /*0x100884f43*/
  v54 = v153; /*0x100884f47*/
  v55 = (__int64 (__fastcall **)())v132; /*0x100884f52*/
  v56 = (__int64)v152; /*0x100884f5f*/
  alloc::str::join_generic_copy::h877a7dfcc3252013(v132, v152, v153, &unk_10178860B, 3); /*0x100884f65*/
  v135 = v132[2]; /*0x100884f71*/
  v134 = v132[1]; /*0x100884f86*/
  v133 = v132[0]; /*0x100884f8d*/
  if ( v54 ) /*0x100884f97*/
  {
    v58 = (__int64 (__fastcall ***)())(v53 + 1); /*0x100884f99*/
    do /*0x100884fa7*/
    {
      v56 = (__int64)*(v58 - 1); /*0x100884fa9*/
      if ( v56 ) /*0x100884fb0*/
      {
        v55 = *v58; /*0x100884fb2*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v58, v56, 1); /*0x100884fba*/
      }
      v58 += 3; /*0x100884fa0*/
      --v54; /*0x100884fa4*/
    }
    while ( v54 ); /*0x100884fa7*/
  }
  if ( v151 ) /*0x100884fc8*/
  {
    v56 = 24 * v151; /*0x100884fce*/
    v55 = v53; /*0x100884fd7*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, 24 * v151, 8); /*0x100884fda*/
  }
  if ( v149 ) /*0x100884fe6*/
  {
    v144 = v149; /*0x100884fec*/
    v151 = (unsigned __int64)&v144; /*0x100884ff4*/
    v152 = (__int64 (__fastcall **)())core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100884fff*/
    v56 = (__int64)&unk_101900F44; /*0x100885003*/
    v55 = (__int64 (__fastcall **)())v132; /*0x10088500a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v132, &unk_101900F44, &v151); /*0x100885015*/
    v144 = v132[0]; /*0x100885028*/
    v145 = v132[1]; /*0x10088502c*/
    v146 = v132[2]; /*0x100885037*/
  }
  else
  {
    v144 = 0; /*0x1008852cc*/
    v145 = 1; /*0x1008852d4*/
    v146 = 0; /*0x1008852dc*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v55, v56, v57); /*0x1008852e4*/
  v71 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1); /*0x1008852f3*/
  if ( !v71 ) /*0x1008852fb*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28); /*0x100885ac1*/
  v73 = v71; /*0x100885301*/
  qmemcpy(v71, "thread_poisoned_instructions", 28); /*0x10088532a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(28, 1, v72); /*0x100885335*/
  v74 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100885344*/
  if ( !v74 ) /*0x10088534c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100885ad2*/
  v75 = v74; /*0x100885352*/
  *(_BYTE *)(v74 + 4) = 114; /*0x100885355*/
  *(_DWORD *)v74 = 1869771365; /*0x100885359*/
  v132[0] = &v122; /*0x100885366*/
  v132[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100885374*/
  v132[2] = &v124; /*0x100885382*/
  v132[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100885389*/
  v132[4] = &v123; /*0x100885397*/
  v132[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10088539e*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v151, &unk_101901A90, v132); /*0x1008853b7*/
  v150 = v151; /*0x1008853c0*/
  v76 = v152; /*0x1008853c4*/
  v77 = v153; /*0x1008853c8*/
  v132[0] = &v133; /*0x1008853d3*/
  v132[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008853e1*/
  v132[2] = &v144; /*0x1008853ec*/
  v132[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008853f3*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v118, &unk_10178A447, v132); /*0x10088540f*/
  v78 = v131; /*0x10088541b*/
  *(_QWORD *)(v131 + 88) = v118[2]; /*0x100885422*/
  v79 = v118[0]; /*0x100885426*/
  *(_QWORD *)(v78 + 80) = v118[1]; /*0x100885434*/
  *(_QWORD *)(v78 + 72) = v79; /*0x100885438*/
  *(_QWORD *)v78 = 28; /*0x10088543c*/
  *(_QWORD *)(v78 + 8) = v73; /*0x100885443*/
  *(_QWORD *)(v78 + 16) = 28; /*0x100885447*/
  *(_QWORD *)(v78 + 24) = 5; /*0x10088544f*/
  *(_QWORD *)(v78 + 32) = v75; /*0x100885457*/
  *(_QWORD *)(v78 + 40) = 5; /*0x10088545b*/
  *(_QWORD *)(v78 + 48) = v150; /*0x100885467*/
  *(_QWORD *)(v78 + 56) = v76; /*0x10088546b*/
  *(_QWORD *)(v78 + 64) = v77; /*0x10088546f*/
  *(_BYTE *)(v78 + 96) = 1; /*0x100885473*/
  if ( v144 ) /*0x10088547e*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, v144, 1); /*0x100885489*/
  v80 = v133; /*0x10088548e*/
  v81 = v143; /*0x100885498*/
  if ( v133 ) /*0x10088549c*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, v133, 1); /*0x1008854aa*/
  v82 = v149; /*0x1008854af*/
  if ( v149 ) /*0x1008854b6*/
  {
    v83 = (_QWORD *)(v148 + 8); /*0x1008854bc*/
    do /*0x1008854d7*/
    {
      v80 = *(v83 - 1); /*0x1008854d9*/
      if ( v80 ) /*0x1008854e0*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v83, v80, 1); /*0x1008854ea*/
      v83 += 3; /*0x1008854d0*/
      --v82; /*0x1008854d4*/
    }
    while ( v82 ); /*0x1008854d7*/
  }
  if ( v147 ) /*0x1008854f8*/
  {
    v80 = 24 * v147; /*0x100885502*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v148, 24 * v147, 8); /*0x10088550b*/
  }
  v84 = v142; /*0x100885510*/
  if ( v142 ) /*0x10088551a*/
  {
    v85 = (_QWORD *)(v141 + 8); /*0x100885523*/
    do /*0x100885537*/
    {
      v80 = *(v85 - 1); /*0x100885539*/
      if ( v80 ) /*0x100885540*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v85, v80, 1); /*0x10088554a*/
      v85 += 3; /*0x100885530*/
      --v84; /*0x100885534*/
    }
    while ( v84 ); /*0x100885537*/
  }
  if ( v140 ) /*0x10088555b*/
  {
    v80 = 24 * v140; /*0x100885568*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141, 24 * v140, 8); /*0x100885571*/
  }
  v86 = v139; /*0x100885576*/
  if ( v139 ) /*0x100885580*/
  {
    v87 = (_QWORD *)(v138 + 8); /*0x100885589*/
    do /*0x100885597*/
    {
      v80 = *(v87 - 1); /*0x100885599*/
      if ( v80 ) /*0x1008855a0*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v87, v80, 1); /*0x1008855aa*/
      v87 += 3; /*0x100885590*/
      --v86; /*0x100885594*/
    }
    while ( v86 ); /*0x100885597*/
  }
  if ( v137 ) /*0x1008855bb*/
  {
    v80 = 24 * v137; /*0x1008855c8*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v138, 24 * v137, 8); /*0x1008855d1*/
  }
  HIDWORD(_RAX) = HIDWORD(v121[1]); /*0x1008855d6*/
  if ( v121[1] ) /*0x1008855e0*/
  {
    v150 = (unsigned __int64)v121[1]; /*0x1008855e6*/
    v89 = v121[3]; /*0x1008855ea*/
    if ( v121[3] ) /*0x1008855f4*/
    {
      v90 = v121[0]; /*0x1008855fa*/
      si128 = _mm_load_si128(v121[0]); /*0x100885601*/
      _R14D = ~_mm_movemask_epi8(si128); /*0x10088560c*/
      v92 = v121[0] + 1; /*0x10088560f*/
      do /*0x100885630*/
      {
        if ( !(_WORD)_R14D ) /*0x100885636*/
        {
          do /*0x10088565d*/
          {
            si128 = _mm_load_si128(v92); /*0x100885640*/
            v93 = _mm_movemask_epi8(si128); /*0x100885646*/
            v90 -= 24; /*0x10088564b*/
            ++v92; /*0x100885652*/
          }
          while ( v93 == 0xFFFF ); /*0x10088565d*/
          _R14D = ~v93; /*0x10088565f*/
        }
        __asm { tzcnt eax, r14d } /*0x100885662*/
        v94 = -3 * _RAX; /*0x10088566a*/
        v95 = *((_QWORD *)&v90[-1] + v94 - 1); /*0x10088566e*/
        if ( v95 ) /*0x100885676*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90[-1].i64[v94], v95, 1); /*0x100885685*/
        v89 = (const __m128i *)((char *)v89 - 1); /*0x100885620*/
        _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x100885627*/
        _R14D &= _R14D - 1; /*0x10088562a*/
      }
      while ( v89 ); /*0x100885630*/
    }
    v96 = (24 * v150 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x10088569c*/
    v80 = v96 + v150 + 17; /*0x1008856a3*/
    v81 = v143; /*0x1008856a7*/
    if ( v96 + v150 != -17 ) /*0x1008856ab*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v121[0] - v96, v80, 16); /*0x1008856bc*/
  }
  v97 = v81; /*0x1008856c1*/
  do /*0x1008856e2*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticMainThreadRow$GT$::h6f2c4d672fa81d90( /*0x1008856d3*/
      v97,
      v80);
    v97 += 11; /*0x1008856d8*/
    v16 = (const __m128i *)((char *)v16 - 1); /*0x1008856df*/
  }
  while ( v16 ); /*0x1008856e2*/
LABEL_157:
  if ( v126 ) /*0x10088599e*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, 176LL * (_QWORD)v126, 8); /*0x1008859af*/
  return *(double *)si128.i64; /*0x100884c87*/
}