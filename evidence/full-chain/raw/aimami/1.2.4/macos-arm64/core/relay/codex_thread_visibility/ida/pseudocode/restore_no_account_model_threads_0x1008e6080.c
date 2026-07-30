// __ZN13codexmate_lib4core5relay23codex_thread_visibility32restore_no_account_model_threads @ 0x1008e6080 | 1.2.4 NEW-delta
char *__fastcall codexmate_lib::core::relay::codex_thread_visibility::restore_no_account_model_threads::h31b19e64551bdc98(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r15
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v19; // rsi
  unsigned __int128 v20; // rax
  unsigned __int64 v21; // rbx
  _QWORD *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // r12
  unsigned __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // r13
  __int64 v35; // r15
  __int64 v36; // rdi
  __int64 v37; // r14
  const void *v38; // rsi
  int v39; // eax
  void *v40; // rdi
  __int64 v41; // rsi
  size_t v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rsi
  _QWORD *v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rsi
  __int8 *v53; // rdi
  __int64 v54; // rdx
  char *v55; // r13
  __int64 v56; // rbx
  __int8 *v57; // r15
  unsigned __int64 v58; // rax
  _QWORD *v59; // r14
  unsigned __int64 v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // rdi
  unsigned __int64 i; // r15
  _QWORD *v64; // r14
  __int64 v65; // rsi
  __int64 v66; // rsi
  __int64 v67; // rsi
  const __m128i *v68; // r12
  __m128i si128; // xmm0
  unsigned __int64 v70; // rax
  __int64 v71; // r15
  const __m128i *v72; // r14
  int v75; // eax
  unsigned __int64 v77; // rdi
  int v78; // r13d
  char *v79; // rbx
  __int64 v80; // r14
  unsigned __int64 v81; // r12
  __int64 v82; // rdi
  _QWORD *v83; // rdx
  __int64 v84; // rax
  _QWORD *v85; // rdx
  __int64 v86; // rax
  void *v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // r8
  __int64 v90; // rcx
  _QWORD *v91; // r9
  _BYTE v92[24]; // [rsp+8h] [rbp-3B8h] BYREF
  _QWORD v93[3]; // [rsp+20h] [rbp-3A0h] BYREF
  _QWORD v94[3]; // [rsp+38h] [rbp-388h] BYREF
  _QWORD v95[3]; // [rsp+50h] [rbp-370h] BYREF
  _QWORD v96[9]; // [rsp+68h] [rbp-358h] BYREF
  __int64 v97; // [rsp+B0h] [rbp-310h] BYREF
  __int64 v98; // [rsp+B8h] [rbp-308h]
  const __m128i *v99; // [rsp+C0h] [rbp-300h] BYREF
  __int64 v100; // [rsp+C8h] [rbp-2F8h]
  __int64 v101; // [rsp+D0h] [rbp-2F0h]
  __int64 v102; // [rsp+D8h] [rbp-2E8h]
  __int64 v103; // [rsp+E0h] [rbp-2E0h]
  __int64 v104; // [rsp+E8h] [rbp-2D8h]
  __int64 v105; // [rsp+F0h] [rbp-2D0h] BYREF
  __int64 v106; // [rsp+F8h] [rbp-2C8h]
  __int64 v107; // [rsp+100h] [rbp-2C0h]
  __int64 v108; // [rsp+108h] [rbp-2B8h] BYREF
  __int64 v109; // [rsp+110h] [rbp-2B0h]
  __int64 v110; // [rsp+118h] [rbp-2A8h]
  __int64 v111; // [rsp+120h] [rbp-2A0h]
  _QWORD v112[9]; // [rsp+128h] [rbp-298h] BYREF
  __int64 v113; // [rsp+170h] [rbp-250h]
  __int64 v114; // [rsp+178h] [rbp-248h]
  __int64 v115; // [rsp+180h] [rbp-240h]
  __int64 v116; // [rsp+188h] [rbp-238h]
  int v117[2]; // [rsp+190h] [rbp-230h]
  _QWORD v118[13]; // [rsp+198h] [rbp-228h] BYREF
  __int128 v119; // [rsp+200h] [rbp-1C0h] BYREF
  __int128 v120; // [rsp+210h] [rbp-1B0h] BYREF
  int v121[28]; // [rsp+220h] [rbp-1A0h] BYREF
  _QWORD v122[19]; // [rsp+290h] [rbp-130h] BYREF
  __int64 v123; // [rsp+328h] [rbp-98h]
  __int64 v124; // [rsp+330h] [rbp-90h]
  void *__s1; // [rsp+338h] [rbp-88h]
  __int64 v126; // [rsp+340h] [rbp-80h] BYREF
  __int64 v127; // [rsp+348h] [rbp-78h]
  unsigned __int64 v128; // [rsp+350h] [rbp-70h]
  int v129[2]; // [rsp+358h] [rbp-68h]
  __int64 v130; // [rsp+360h] [rbp-60h]
  char *v131; // [rsp+368h] [rbp-58h]
  unsigned __int64 v132; // [rsp+370h] [rbp-50h]
  __int64 v133; // [rsp+378h] [rbp-48h]
  __int64 v134; // [rsp+380h] [rbp-40h]
  __int64 v135; // [rsp+388h] [rbp-38h]
  __int64 v136; // [rsp+390h] [rbp-30h]

  v2 = a1; /*0x1008e6097*/
  v3 = *(_QWORD *)(a2 + 592); /*0x1008e60a1*/
  v113 = *(_QWORD *)(a2 + 584); /*0x1008e60af*/
  v136 = v3; /*0x1008e60b6*/
  codexmate_lib::core::relay::codex_thread_visibility::load_no_account_model_restore_journal::h39b1694914bbc528(v122); /*0x1008e60ba*/
  v4 = v122[0]; /*0x1008e60bf*/
  *(_QWORD *)v121 = v122[1]; /*0x1008e60cd*/
  *(_QWORD *)&v121[2] = v122[2]; /*0x1008e60db*/
  *(_QWORD *)&v121[4] = v122[3]; /*0x1008e60e9*/
  *(_QWORD *)&v121[6] = v122[4]; /*0x1008e60f7*/
  if ( v122[0] != 11 ) /*0x1008e6102*/
  {
    a1[11] = v122[11]; /*0x1008e636b*/
    a1[10] = v122[10]; /*0x1008e6376*/
    a1[9] = v122[9]; /*0x1008e6381*/
    a1[8] = v122[8]; /*0x1008e638c*/
    a1[7] = v122[7]; /*0x1008e6397*/
    v15 = v122[5]; /*0x1008e639b*/
    a1[6] = v122[6]; /*0x1008e63a9*/
    a1[5] = v15; /*0x1008e63ad*/
    a1[4] = *(_QWORD *)&v121[6]; /*0x1008e63b8*/
    a1[3] = *(_QWORD *)&v121[4]; /*0x1008e63c3*/
    v16 = *(_QWORD *)v121; /*0x1008e63c7*/
    a1[2] = *(_QWORD *)&v121[2]; /*0x1008e63d5*/
    a1[1] = v16; /*0x1008e63d9*/
    *a1 = v4; /*0x1008e63dd*/
    return (char *)v2; /*0x1008e63e0*/
  }
  v108 = *(_QWORD *)v121; /*0x1008e6116*/
  v109 = *(_QWORD *)&v121[2]; /*0x1008e611d*/
  v110 = *(_QWORD *)&v121[4]; /*0x1008e612b*/
  v111 = *(_QWORD *)&v121[6]; /*0x1008e6139*/
  v124 = *(_QWORD *)&v121[4]; /*0x1008e6140*/
  if ( !*(_QWORD *)&v121[4] ) /*0x1008e614a*/
  {
    a1[4] = 0; /*0x1008e63e2*/
    a1[3] = 0; /*0x1008e63ea*/
    a1[2] = 0; /*0x1008e63f2*/
    a1[1] = 0; /*0x1008e63fa*/
    *a1 = 11; /*0x1008e6402*/
    v17 = v109; /*0x1008e6409*/
    goto LABEL_19; /*0x1008e6409*/
  }
  v126 = 0; /*0x1008e6150*/
  v127 = 8; /*0x1008e6158*/
  v128 = 0; /*0x1008e6160*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h2c37c38d14365ff6(v122); /*0x1008e6172*/
  v5 = v122[1]; /*0x1008e6188*/
  v134 = 24LL * v122[2]; /*0x1008e61a2*/
  v112[0] = v122[1]; /*0x1008e61a9*/
  v112[1] = v122[1]; /*0x1008e61b0*/
  v132 = v122[0]; /*0x1008e61b7*/
  v112[2] = v122[0]; /*0x1008e61bb*/
  v123 = v122[1] + 24LL * v122[2]; /*0x1008e61c2*/
  v112[3] = v123; /*0x1008e61c9*/
  v6 = v122[1]; /*0x1008e61d0*/
  v131 = (char *)a1; /*0x1008e61d6*/
  if ( !v122[2] ) /*0x1008e61da*/
    goto LABEL_25; /*0x1008e61da*/
  v7 = 0; /*0x1008e61e0*/
  v135 = v122[1]; /*0x1008e61e3*/
  while ( 1 ) /*0x1008e6202*/
  {
    v8 = *(_QWORD *)(v5 + v7); /*0x1008e6202*/
    if ( v8 == 0x8000000000000000LL ) /*0x1008e6209*/
    {
      v6 = v5 + v7 + 24; /*0x1008e6446*/
      goto LABEL_24; /*0x1008e644b*/
    }
    v9 = v5; /*0x1008e620f*/
    v10 = *(_QWORD *)(v5 + v7 + 8); /*0x1008e6212*/
    v11 = *(_QWORD *)(v9 + v7 + 16); /*0x1008e6217*/
    std::sys::fs::metadata::h32fa16d3052ea535(v122, v10, v11); /*0x1008e6229*/
    v12 = v122[0]; /*0x1008e622e*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h2adb4e876f561eac( /*0x1008e623f*/
      v122[0],
      v122[1]);
    if ( v12 ) /*0x1008e6247*/
      goto LABEL_15; /*0x1008e6247*/
    codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_for_convergence::hc08e0d6d503da7a5( /*0x1008e625a*/
      v122,
      v10,
      v11);
    if ( LOBYTE(v122[13]) == 3 ) /*0x1008e6268*/
    {
      qmemcpy(v118, v122, 0x60u); /*0x1008e6c88*/
      qmemcpy(v131, v118, 0x60u); /*0x1008e6c97*/
      goto LABEL_85; /*0x1008e6c97*/
    }
    qmemcpy(v118, v122, sizeof(v118)); /*0x1008e6287*/
    v121[27] = HIDWORD(v122[13]); /*0x1008e629d*/
    *(int *)((char *)&v121[26] + 1) = *(_DWORD *)((char *)&v122[13] + 1); /*0x1008e62a0*/
    qmemcpy(v121, v118, 0x68u); /*0x1008e62b4*/
    LOBYTE(v121[26]) = v122[13]; /*0x1008e62b7*/
    codexmate_lib::core::relay::codex_thread_visibility::read_thread_columns::he43dfa633b2e7de2(v122, v121); /*0x1008e62c3*/
    v13 = v122[0]; /*0x1008e62c8*/
    if ( v122[0] != 11 ) /*0x1008e62d3*/
      break; /*0x1008e62d3*/
    if ( LOBYTE(v122[1]) ) /*0x1008e62e0*/
    {
      qmemcpy(v122, v121, 0x70u); /*0x1008e62f5*/
      v14 = v128; /*0x1008e62f8*/
      if ( v128 == v126 ) /*0x1008e6300*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfbb99f069fba791e(&v126); /*0x1008e6306*/
      qmemcpy((void *)(v127 + 112 * v14), v122, 0x70u); /*0x1008e631f*/
      v128 = v14 + 1; /*0x1008e6325*/
    }
    else
    {
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h90954de88122d433(v121); /*0x1008e6337*/
    }
LABEL_15:
    if ( v8 ) /*0x1008e6349*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v8, 1); /*0x1008e635a*/
    v7 += 24; /*0x1008e61f0*/
    v5 = v135; /*0x1008e61f8*/
    if ( v134 == v7 ) /*0x1008e61fc*/
    {
      v6 = v123; /*0x1008e644d*/
LABEL_24:
      v112[1] = v6; /*0x1008e6454*/
      v2 = v131; /*0x1008e645b*/
LABEL_25:
      v19 = v123; /*0x1008e645f*/
      v20 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)(v123 - v6); /*0x1008e6476*/
      if ( v123 != v6 ) /*0x1008e647c*/
      {
        v21 = (v123 - v6) / 0x18uLL; /*0x1008e6481*/
        v22 = (_QWORD *)(v6 + 8); /*0x1008e6485*/
        do /*0x1008e6497*/
        {
          v19 = *(v22 - 1); /*0x1008e6499*/
          if ( v19 ) /*0x1008e64a0*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v22, v19, 1); /*0x1008e64aa*/
          v22 += 3; /*0x1008e6490*/
          --v21; /*0x1008e6494*/
        }
        while ( v21 ); /*0x1008e6497*/
      }
      if ( v132 ) /*0x1008e64b8*/
      {
        v19 = 24 * v132; /*0x1008e64be*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24 * v132, 8); /*0x1008e64ca*/
      }
      if ( !v128 ) /*0x1008e64d4*/
      {
        codexmate_lib::core::relay::codex_thread_visibility::remove_no_account_model_restore_journal::haea7c83ed816a14b( /*0x1008e6c3e*/
          v113,
          v136,
          *((_QWORD *)&v20 + 1));
        v2[2] = 0; /*0x1008e6c43*/
        v2[1] = 0; /*0x1008e6c4b*/
        v2[3] = v124; /*0x1008e6c5a*/
        v2[4] = 0; /*0x1008e6c5e*/
        *v2 = 11; /*0x1008e6c66*/
        goto LABEL_95; /*0x1008e6c6d*/
      }
      v120 = 0; /*0x1008e64de*/
      v119 = 0; /*0x1008e64e6*/
      std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008e64f5*/
      v26 = v23; /*0x1008e64f7*/
      if ( *(_BYTE *)(v23 + 16) == 1 ) /*0x1008e64fe*/
      {
        v27 = *(_QWORD *)v23; /*0x1008e6504*/
        v28 = *(_QWORD *)(v26 + 8); /*0x1008e6507*/
      }
      else
      {
        v27 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008e72ad*/
                &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                v19,
                v24,
                v25);
        *(_QWORD *)v26 = v27; /*0x1008e72b2*/
        *(_QWORD *)(v26 + 8) = v28; /*0x1008e72b5*/
        *(_BYTE *)(v26 + 16) = 1; /*0x1008e72b9*/
      }
      *(_QWORD *)v26 = v27 + 1; /*0x1008e650f*/
      v102 = 0; /*0x1008e6519*/
      v101 = 0; /*0x1008e6527*/
      v100 = 0; /*0x1008e6535*/
      v99 = (const __m128i *)anon_727917ecdb2ab9f22bcf5eba88f4827d_38; /*0x1008e6543*/
      v103 = v27; /*0x1008e654a*/
      v104 = v28; /*0x1008e6551*/
      v98 = v109 + 72 * v124; /*0x1008e656e*/
      v123 = 0; /*0x1008e6575*/
      v132 = 0x8000000000000009LL; /*0x1008e6584*/
      v29 = v109; /*0x1008e6588*/
      v114 = 0; /*0x1008e658b*/
      v116 = 0; /*0x1008e6596*/
      v115 = 0; /*0x1008e65a1*/
LABEL_36:
      if ( !v128 ) /*0x1008e65b3*/
      {
LABEL_43:
        *(_QWORD *)&v120 = ++v123; /*0x1008e67d0*/
        goto LABEL_44; /*0x1008e67d0*/
      }
      v30 = v127; /*0x1008e65b9*/
      v135 = -112LL * v128; /*0x1008e65c1*/
      v31 = 0; /*0x1008e65c5*/
      v32 = 0; /*0x1008e65c8*/
      v134 = v29; /*0x1008e65ca*/
      while ( 1 ) /*0x1008e65d0*/
      {
        v33 = *(_QWORD *)(v29 + 8); /*0x1008e65d0*/
        v34 = *(_QWORD *)(v29 + 16); /*0x1008e65d4*/
        rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x1008e65ee*/
          v122,
          v30,
          "SELECT model, model_provider, COALESCE(rollout_path, '') FROM threads WHERE id = ?1 AND COALESCE(archived, 0) = 0no-account-model-restorerelay_no_account_model_restoreno-account model restore",
          113);
        v118[0] = v122[1]; /*0x1008e6607*/
        v118[1] = v122[2]; /*0x1008e660e*/
        v118[2] = v122[3]; /*0x1008e6619*/
        v118[3] = v122[4]; /*0x1008e6624*/
        v118[4] = v122[5]; /*0x1008e662f*/
        v118[5] = v122[6]; /*0x1008e663a*/
        v118[6] = v122[7]; /*0x1008e6645*/
        v118[7] = v122[8]; /*0x1008e6650*/
        if ( LODWORD(v122[0]) == 1 ) /*0x1008e665a*/
        {
          *(_QWORD *)&v121[16] = v118[7]; /*0x1008e666a*/
          *(_QWORD *)&v121[14] = v118[6]; /*0x1008e6675*/
          *(_QWORD *)&v121[12] = v118[5]; /*0x1008e6680*/
          *(_QWORD *)&v121[10] = v118[4]; /*0x1008e668b*/
          *(_QWORD *)&v121[8] = v118[3]; /*0x1008e6696*/
          *(_QWORD *)&v121[6] = v118[2]; /*0x1008e66a1*/
          *(_QWORD *)&v121[4] = v118[1]; /*0x1008e66b3*/
          *(_QWORD *)&v121[2] = v118[0]; /*0x1008e66b7*/
          *(_QWORD *)v121 = 0x8000000000000000LL; /*0x1008e66c4*/
        }
        else
        {
          v112[7] = v118[7]; /*0x1008e66d7*/
          v112[6] = v118[6]; /*0x1008e66e5*/
          v112[5] = v118[5]; /*0x1008e66f3*/
          v112[4] = v118[4]; /*0x1008e6701*/
          v112[3] = v118[3]; /*0x1008e670f*/
          v112[2] = v118[2]; /*0x1008e671d*/
          v112[1] = v118[1]; /*0x1008e6732*/
          v112[0] = v118[0]; /*0x1008e6739*/
          v122[0] = v33; /*0x1008e6740*/
          v122[1] = v34; /*0x1008e6747*/
          rusqlite::statement::Statement::query_row::h718533b5b76f4c63(v121, v112, v122); /*0x1008e6766*/
          core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h38b9ee1cf8eee5e7(v112); /*0x1008e676e*/
          if ( *(_QWORD *)v121 != 0x8000000000000000LL ) /*0x1008e6787*/
          {
            v133 = *(_QWORD *)v121; /*0x1008e67ed*/
            v135 = *(_QWORD *)&v121[2]; /*0x1008e67f8*/
            v35 = *(_QWORD *)&v121[6]; /*0x1008e67fc*/
            __s1 = *(void **)&v121[8]; /*0x1008e680a*/
            v130 = *(_QWORD *)&v121[12]; /*0x1008e6818*/
            v36 = *(_QWORD *)&v121[14]; /*0x1008e681c*/
            if ( *(_QWORD *)&v121[4] != 6 /*0x1008e688c*/
              || (v28 = 1634560353,
                  (*(_DWORD *)v135 ^ 0x616D6961 | *(unsigned __int16 *)(v135 + 4) ^ 0x3169) != 0
               || *(_QWORD *)&v121[6] == 0x8000000000000000LL)
              || (v28 = *(_QWORD *)&v121[10], *(_QWORD *)&v121[10] != *(_QWORD *)(v134 + 40))
              || (v37 = *(_QWORD *)&v121[16],
                  v38 = *(const void **)(v134 + 32),
                  *(_QWORD *)v129 = *(_QWORD *)&v121[14],
                  v39 = memcmp(__s1, v38, *(size_t *)&v121[10]),
                  v36 = *(_QWORD *)v129,
                  v39) )
            {
              *((_QWORD *)&v119 + 1) = ++v114; /*0x1008e689f*/
              if ( v130 ) /*0x1008e68ad*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v130, 1); /*0x1008e68b4*/
              v29 = v134; /*0x1008e68c0*/
              if ( v133 ) /*0x1008e68c4*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, v133, 1); /*0x1008e68cf*/
              if ( 2 * v35 ) /*0x1008e68d4*/
              {
                v40 = __s1; /*0x1008e68ea*/
                v41 = v35; /*0x1008e68f1*/
LABEL_56:
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v41, 1); /*0x1008e68f4*/
                goto LABEL_44; /*0x1008e68f9*/
              }
              goto LABEL_44; /*0x1008e68df*/
            }
            *(_QWORD *)v117 = v37; /*0x1008e68fe*/
            v42 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(*(_QWORD *)v129, v37); /*0x1008e6908*/
            if ( !v43 ) /*0x1008e6910*/
            {
              v96[0] = 0x8000000000000000LL; /*0x1008e6921*/
              goto LABEL_64; /*0x1008e6928*/
            }
            if ( *(_QWORD *)(v134 + 48) == 0x8000000000000000LL ) /*0x1008e691a*/
            {
              LODWORD(v44) = 0; /*0x1008e691c*/
            }
            else
            {
              v44 = *(_QWORD *)(v134 + 56); /*0x1008e692a*/
              v42 = *(_QWORD *)(v134 + 64); /*0x1008e692e*/
            }
            codexmate_lib::core::relay::codex_thread_visibility::patch_no_account_model_restore_rollout::h73d1b77a49177d6b( /*0x1008e6950*/
              (int)v121,
              v129[0],
              v117[0],
              *(_QWORD *)(v134 + 32),
              *(_QWORD *)(v134 + 40),
              v44,
              v42);
            if ( *(_QWORD *)v121 == 0x8000000000000001LL ) /*0x1008e6960*/
            {
              v107 = *(_QWORD *)&v121[6]; /*0x1008e72c9*/
              v106 = *(_QWORD *)&v121[4]; /*0x1008e72de*/
              v105 = *(_QWORD *)&v121[2]; /*0x1008e72e5*/
              codexmate_lib::core::relay::codex_thread_visibility::restore_no_account_model_threads::_$u7b$$u7b$closure$u7d$$u7d$::h3ef5f03d012dc6f5( /*0x1008e72fe*/
                v122,
                v134,
                &v105);
              v89 = v122[0]; /*0x1008e7303*/
              qmemcpy(v118, &v122[1], 0x48u); /*0x1008e7320*/
              v90 = v122[10]; /*0x1008e7323*/
              v91 = v131; /*0x1008e7331*/
              *((_QWORD *)v131 + 11) = v122[11]; /*0x1008e7335*/
              v91[10] = v90; /*0x1008e7339*/
              qmemcpy(v112, v118, sizeof(v112)); /*0x1008e734f*/
              qmemcpy(v91 + 1, v112, 0x48u); /*0x1008e735e*/
              *v91 = v89; /*0x1008e7361*/
              if ( v130 ) /*0x1008e7369*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v129, v130, 1); /*0x1008e7378*/
              if ( v133 ) /*0x1008e7382*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, v133, 1); /*0x1008e7391*/
              if ( v35 ) /*0x1008e7399*/
              {
                v87 = __s1; /*0x1008e73a4*/
                v88 = v35; /*0x1008e73ab*/
                goto LABEL_147; /*0x1008e73ab*/
              }
            }
            else
            {
              qmemcpy(v118, v121, 0x48u); /*0x1008e697c*/
              qmemcpy(v112, v118, sizeof(v112)); /*0x1008e6991*/
              qmemcpy(v96, v112, sizeof(v96)); /*0x1008e69a3*/
LABEL_64:
              if ( v32 >= v128 ) /*0x1008e69ad*/
                core::panicking::panic_bounds_check::h56740b1198b22635(v32, v128, &off_10197CD88); /*0x1008e73d0*/
              v45 = v127 - v31; /*0x1008e69b7*/
              v97 = v134; /*0x1008e69be*/
              if ( *(_QWORD *)(v134 + 48) == 0x8000000000000000LL ) /*0x1008e69c9*/
              {
                v46 = 0; /*0x1008e69cb*/
              }
              else
              {
                v46 = *(_QWORD *)(v134 + 56); /*0x1008e69cf*/
                v106 = *(_QWORD *)(v134 + 64); /*0x1008e69d7*/
              }
              v47 = v35; /*0x1008e69de*/
              v105 = v46; /*0x1008e69e1*/
              v112[0] = &v97; /*0x1008e69ef*/
              v112[1] = &unk_10197CDA0; /*0x1008e69fd*/
              v112[2] = &v105; /*0x1008e6a0b*/
              v112[3] = &unk_10197CB58; /*0x1008e6a19*/
              rusqlite::Connection::execute::h6126d3d40dfec4ea( /*0x1008e6a40*/
                v121,
                v45,
                "UPDATE threads SET model = ?2 WHERE id = ?1model restore/payload/model_provider",
                43,
                v112,
                2);
              if ( *(_QWORD *)v121 == 0x8000000000000016LL ) /*0x1008e6a50*/
              {
                if ( *(_QWORD *)&v121[2] == 1 ) /*0x1008e6a61*/
                {
                  hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7a2f0353fc23e039(&v99, v32); /*0x1008e6a71*/
                  *(_QWORD *)&v119 = ++v115; /*0x1008e6a87*/
                  if ( v96[0] != 0x8000000000000000LL ) /*0x1008e6a95*/
                  {
                    *((_QWORD *)&v120 + 1) = ++v116; /*0x1008e6aa8*/
                    core::ptr::drop_in_place$LT$codexmate_lib..core..voice..llm..StoredLlmConfig$GT$::hcef705e975c1b5a4(v96); /*0x1008e6ab6*/
                  }
                  v48 = v133; /*0x1008e6abb*/
                  v29 = v134; /*0x1008e6abf*/
                  if ( v130 ) /*0x1008e6ace*/
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v129, v130, 1); /*0x1008e6ad8*/
                    v48 = v133; /*0x1008e6add*/
                  }
                  if ( v48 ) /*0x1008e6ae4*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, v48, 1); /*0x1008e6aef*/
                  if ( v35 ) /*0x1008e6af7*/
                  {
                    v40 = __s1; /*0x1008e6b02*/
                    v41 = v35; /*0x1008e6b09*/
                    goto LABEL_56; /*0x1008e6b0c*/
                  }
LABEL_44:
                  v29 += 72; /*0x1008e67d7*/
                  if ( v29 == v98 ) /*0x1008e67e2*/
                  {
                    v68 = v99; /*0x1008e6e3c*/
                    si128 = _mm_load_si128(v99); /*0x1008e6e4a*/
                    v124 = v100; /*0x1008e6e53*/
                    if ( v100 ) /*0x1008e6e5a*/
                    {
                      v70 = (8 * v100 + 23) & 0xFFFFFFFFFFFFFFF0LL; /*0x1008e6e64*/
                      v134 = v100 + v70 + 17; /*0x1008e6e6d*/
                      v132 = (unsigned __int64)v99 - v70; /*0x1008e6e77*/
                      v135 = 16; /*0x1008e6e80*/
                    }
                    else
                    {
                      v135 = 0; /*0x1008e6e86*/
                    }
                    v71 = v102; /*0x1008e6e8e*/
                    v72 = v99 + 1; /*0x1008e6e95*/
                    for ( _EAX = ~_mm_movemask_epi8(si128); v71-- != 0; _EAX = v78 ) /*0x1008e6e9e*/
                    {
                      if ( !(_WORD)_EAX ) /*0x1008e6eb9*/
                      {
                        do /*0x1008e6ed6*/
                        {
                          si128 = _mm_load_si128(v72); /*0x1008e6ec0*/
                          v75 = _mm_movemask_epi8(si128); /*0x1008e6ec5*/
                          v68 -= 8; /*0x1008e6ec9*/
                          ++v72; /*0x1008e6ecd*/
                        }
                        while ( v75 == 0xFFFF ); /*0x1008e6ed6*/
                        _EAX = ~v75; /*0x1008e6ed8*/
                      }
                      __asm { tzcnt ecx, eax } /*0x1008e6eda*/
                      v77 = *(unsigned __int64 *)((char *)&v68->u64[-1] - (unsigned int)(8 * _ECX)); /*0x1008e6ee7*/
                      if ( v77 >= v128 ) /*0x1008e6ef2*/
                        core::panicking::panic_bounds_check::h56740b1198b22635(v77, v128, &off_10197CDC0); /*0x1008e73bf*/
                      v78 = _EAX & (_EAX - 1); /*0x1008e6efc*/
                      codexmate_lib::core::relay::codex_thread_visibility::checkpoint_after_committed_write::hb142cdfb1b3021b2( /*0x1008e6f0f*/
                        v127 + 112 * v77,
                        "no-account model restore",
                        24);
                    }
                    if ( v124 && v134 ) /*0x1008e6f2a*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v134, v135); /*0x1008e6f34*/
                    codexmate_lib::core::relay::codex_thread_visibility::remove_no_account_model_restore_journal::haea7c83ed816a14b( /*0x1008e6f44*/
                      v113,
                      v136,
                      v28);
                    v79 = v131; /*0x1008e6f49*/
                    v122[0] = &v119; /*0x1008e6f69*/
                    v122[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e6f77*/
                    v122[2] = (char *)&v119 + 8; /*0x1008e6f7e*/
                    v122[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e6f85*/
                    v122[4] = &v120; /*0x1008e6f8c*/
                    v122[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e6f93*/
                    v122[6] = (char *)&v120 + 8; /*0x1008e6f9a*/
                    v122[7] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e6fa1*/
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v92, &unk_1017D0674, v122); /*0x1008e6fbd*/
                    codexmate_lib::platform::debug_log::app_event::h6c61a8f2657e5fc6( /*0x1008e6fe1*/
                      "relay_no_account_model_restoreno-account model restore",
                      30,
                      "donehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody",
                      4,
                      v92,
                      *(double *)si128.i64);
                    *(_OWORD *)(v79 + 24) = v120; /*0x1008e6ff8*/
                    *(_OWORD *)(v79 + 8) = v119; /*0x1008e700e*/
                    *(_QWORD *)v79 = 11; /*0x1008e7012*/
                    v80 = v127; /*0x1008e7019*/
                    v81 = v128 + 1; /*0x1008e7021*/
                    v82 = v127; /*0x1008e7024*/
                    while ( v81 != 1 ) /*0x1008e7034*/
                    {
                      --v81; /*0x1008e703a*/
                      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h90954de88122d433(); /*0x1008e703d*/
                      v82 += 112; /*0x1008e7042*/
                    }
                    if ( v126 ) /*0x1008e704e*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, 112 * v126, 8); /*0x1008e705c*/
                    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..NoAccountModelRestoreJournal$GT$::hf1a93bf69e159ebd(&v108); /*0x1008e7068*/
                    return v131; /*0x1008e7071*/
                  }
                  goto LABEL_36; /*0x1008e67e2*/
                }
                v118[0] = *(_QWORD *)&v121[2]; /*0x1008e71a9*/
                LOBYTE(v132) = v96[0] == 0x8000000000000000LL; /*0x1008e71ba*/
                if ( v96[0] != 0x8000000000000000LL ) /*0x1008e71be*/
                {
                  codexmate_lib::core::relay::codex_thread_visibility::revert_rollout_patch::h44cb301fe555e8be( /*0x1008e71d3*/
                    "no-account-model-restorerelay_no_account_model_restoreno-account model restore",
                    24,
                    v96);
                  core::ptr::drop_in_place$LT$codexmate_lib..core..voice..llm..StoredLlmConfig$GT$::hcef705e975c1b5a4(v96); /*0x1008e71df*/
                  v47 = v35; /*0x1008e71e4*/
                }
                v122[0] = v134; /*0x1008e71eb*/
                v122[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e71f9*/
                v122[2] = v118; /*0x1008e7207*/
                v122[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e7215*/
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v94, (char *)&loc_1017D1F13 + 1, v122); /*0x1008e7231*/
                v85 = v131; /*0x1008e723d*/
                *((_QWORD *)v131 + 3) = v94[2]; /*0x1008e7241*/
                v86 = v94[0]; /*0x1008e7245*/
                v85[2] = v94[1]; /*0x1008e7253*/
                v85[1] = v86; /*0x1008e7257*/
                *v85 = 10; /*0x1008e725b*/
              }
              else
              {
                v122[7] = *(_QWORD *)&v121[14]; /*0x1008e707d*/
                v122[6] = *(_QWORD *)&v121[12]; /*0x1008e708b*/
                v122[5] = *(_QWORD *)&v121[10]; /*0x1008e7099*/
                v122[4] = *(_QWORD *)&v121[8]; /*0x1008e70a7*/
                v122[3] = *(_QWORD *)&v121[6]; /*0x1008e70b5*/
                v122[2] = *(_QWORD *)&v121[4]; /*0x1008e70c3*/
                v122[1] = *(_QWORD *)&v121[2]; /*0x1008e70d8*/
                v122[0] = *(_QWORD *)v121; /*0x1008e70df*/
                LOBYTE(v132) = v96[0] == 0x8000000000000000LL; /*0x1008e70f0*/
                if ( v96[0] != 0x8000000000000000LL ) /*0x1008e70f4*/
                {
                  codexmate_lib::core::relay::codex_thread_visibility::revert_rollout_patch::h44cb301fe555e8be( /*0x1008e7109*/
                    "no-account-model-restorerelay_no_account_model_restoreno-account model restore",
                    24,
                    v96);
                  core::ptr::drop_in_place$LT$codexmate_lib..core..voice..llm..StoredLlmConfig$GT$::hcef705e975c1b5a4(v96); /*0x1008e7115*/
                }
                v118[0] = v134; /*0x1008e711e*/
                v118[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e712c*/
                v118[2] = v122; /*0x1008e713a*/
                v118[3] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x1008e7148*/
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v93, &unk_1017D1F40, v118); /*0x1008e7164*/
                v83 = v131; /*0x1008e7170*/
                *((_QWORD *)v131 + 3) = v93[2]; /*0x1008e7174*/
                v84 = v93[0]; /*0x1008e7178*/
                v83[2] = v93[1]; /*0x1008e7186*/
                v83[1] = v84; /*0x1008e718a*/
                *v83 = 10; /*0x1008e718e*/
                v47 = v35; /*0x1008e719c*/
                core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(v122); /*0x1008e719f*/
              }
              if ( v130 ) /*0x1008e726d*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v129, v130, 1); /*0x1008e7274*/
              if ( v133 ) /*0x1008e7280*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, v133, 1); /*0x1008e728b*/
              if ( v47 ) /*0x1008e7293*/
              {
                v87 = __s1; /*0x1008e729e*/
                v88 = v47; /*0x1008e72a5*/
LABEL_147:
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v88, 1); /*0x1008e73ae*/
              }
            }
LABEL_79:
            if ( v100 ) /*0x1008e6c00*/
            {
              v51 = (8 * v100 + 23) & 0xFFFFFFFFFFFFFFF0LL; /*0x1008e6c0e*/
              v52 = v51 + v100 + 17; /*0x1008e6c15*/
              if ( v51 + v100 != -17 ) /*0x1008e6c19*/
              {
                v53 = &v99->i8[-v51]; /*0x1008e6c26*/
                v54 = 16; /*0x1008e6c29*/
                goto LABEL_94; /*0x1008e6c2e*/
              }
            }
            goto LABEL_95; /*0x1008e6c19*/
          }
        }
        if ( *(_QWORD *)&v121[2] != v132 ) /*0x1008e6794*/
        {
          v122[7] = *(_QWORD *)&v121[16]; /*0x1008e6b1c*/
          v122[6] = *(_QWORD *)&v121[14]; /*0x1008e6b27*/
          v122[5] = *(_QWORD *)&v121[12]; /*0x1008e6b32*/
          v122[4] = *(_QWORD *)&v121[10]; /*0x1008e6b3d*/
          v122[3] = *(_QWORD *)&v121[8]; /*0x1008e6b48*/
          v122[2] = *(_QWORD *)&v121[6]; /*0x1008e6b53*/
          v122[1] = *(_QWORD *)&v121[4]; /*0x1008e6b61*/
          v122[0] = *(_QWORD *)&v121[2]; /*0x1008e6b68*/
          v118[0] = v134; /*0x1008e6b73*/
          v118[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e6b81*/
          v118[2] = v122; /*0x1008e6b8f*/
          v118[3] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x1008e6b9d*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v95, &loc_1017D1F6C, v118); /*0x1008e6bb9*/
          v49 = v131; /*0x1008e6bc5*/
          *((_QWORD *)v131 + 3) = v95[2]; /*0x1008e6bc9*/
          v50 = v95[0]; /*0x1008e6bcd*/
          v49[2] = v95[1]; /*0x1008e6bdb*/
          v49[1] = v50; /*0x1008e6bdf*/
          *v49 = 10; /*0x1008e6be3*/
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(v122); /*0x1008e6bf1*/
          goto LABEL_79; /*0x1008e6bf1*/
        }
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h6a1ebeb6036acc7e(&v121[2]); /*0x1008e67a1*/
        v30 += 112; /*0x1008e67a6*/
        v31 -= 112; /*0x1008e67aa*/
        ++v32; /*0x1008e67ae*/
        v29 = v134; /*0x1008e67b5*/
        if ( v135 == v31 ) /*0x1008e67b9*/
          goto LABEL_43; /*0x1008e67b9*/
      }
    }
  }
  v112[1] = v135 + v7 + 24; /*0x1008e6ca5*/
  LOWORD(v136) = v122[1]; /*0x1008e6cb3*/
  v55 = v131; /*0x1008e6cbe*/
  memcpy(v131 + 10, (char *)&v122[1] + 2, 0x56u); /*0x1008e6ccb*/
  *(_QWORD *)v55 = v13; /*0x1008e6cd0*/
  *((_WORD *)v55 + 4) = v136; /*0x1008e6cd8*/
  core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h90954de88122d433(v121); /*0x1008e6ce4*/
LABEL_85:
  v56 = v134 - 24; /*0x1008e6ce9*/
  if ( v8 ) /*0x1008e6cf4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v8, 1); /*0x1008e6d01*/
  v57 = (__int8 *)v135; /*0x1008e6d13*/
  if ( v56 != v7 ) /*0x1008e6d17*/
  {
    v58 = v134 - v7 - 24; /*0x1008e6d20*/
    v59 = (_QWORD *)(v135 + v7 + 32); /*0x1008e6d24*/
    v60 = v58 / 0x18; /*0x1008e6d39*/
    do /*0x1008e6d47*/
    {
      v61 = *(v59 - 1); /*0x1008e6d49*/
      if ( v61 ) /*0x1008e6d50*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v59, v61, 1); /*0x1008e6d5a*/
      v59 += 3; /*0x1008e6d40*/
      --v60; /*0x1008e6d44*/
    }
    while ( v60 ); /*0x1008e6d47*/
  }
  if ( v132 ) /*0x1008e6d68*/
  {
    v52 = 24 * v132; /*0x1008e6d6e*/
    v54 = 8; /*0x1008e6d72*/
    v53 = v57; /*0x1008e6d77*/
LABEL_94:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v52, v54); /*0x1008e6d7a*/
  }
LABEL_95:
  v62 = v127; /*0x1008e6d7f*/
  for ( i = v128 + 1; i != 1; --i ) /*0x1008e6d87*/
  {
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h90954de88122d433(); /*0x1008e6d9d*/
    v62 += 112; /*0x1008e6da2*/
  }
  if ( v126 ) /*0x1008e6dae*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127, 112 * v126, 8); /*0x1008e6dbd*/
  v17 = v109; /*0x1008e6dc2*/
  v64 = (_QWORD *)(v109 + 56); /*0x1008e6dc9*/
  v2 = v131; /*0x1008e6dcd*/
  do /*0x1008e6deb*/
  {
    v65 = *(v64 - 7); /*0x1008e6df1*/
    if ( v65 ) /*0x1008e6df8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v64 - 6), v65, 1); /*0x1008e6e03*/
    v66 = *(v64 - 1); /*0x1008e6e08*/
    if ( v66 != 0x8000000000000000LL && v66 ) /*0x1008e6e14*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v64, v66, 1); /*0x1008e6e1e*/
    v67 = *(v64 - 4); /*0x1008e6e23*/
    if ( v67 ) /*0x1008e6e2a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v64 - 3), v67, 1); /*0x1008e6e35*/
    v64 += 9; /*0x1008e6de0*/
    --v124; /*0x1008e6de4*/
  }
  while ( v124 ); /*0x1008e6deb*/
LABEL_19:
  if ( v108 ) /*0x1008e641a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, 72 * v108, 8); /*0x1008e642c*/
  return (char *)v2; /*0x1008e6434*/
}