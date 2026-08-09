// codexmate_lib::core::relay::codex_thread_visibility::reconcile_threads_with_progress
// owner_ea: 0x1007507c0, size: 0x145b
// source: ida decompile (mac 1.2.6 IDB, hexrays_ready=true)
// binary_sha256: 1.2.6-mac-arm64
// session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
// notes: Reconcile: repair->converge->patch->fallback->cleanup with rayon. Successor of removed reconcile_threads

// 1.2.4→1.2.6 delta 新增函数(reconcile_threads 的后继): 线程对账带进度追踪。调用 repair_missing_rollouts_for_convergence→converge_threads_to_provider→(条件)patch_relay_thread_instructions_excluding→(条件)fallback_relay_model_threads_excluding→collect_active_rollout_paths→cleanup_private_reasoning_items_in_existing_rollout(并行 rayon)。使用 Instant 计时各阶段,app_event(phase_split) 汇报。A-level owner for codex_thread_visibility::reconcile_threads_with_progress
__m128i *__fastcall codexmate_lib::core::relay::codex_thread_visibility::reconcile_threads_with_progress::hedb8602cf4909d61(
        __m128i *a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 a5)
{
  int v5; // edx
  const __m128i *v6; // rax
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // edx
  __int64 *v10; // rax
  __int64 v11; // rsi
  __int64 *v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // r13
  __int64 v16; // rbx
  void (**v17)(void); // rdi
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // edx
  __int64 v23; // rax
  unsigned int v24; // edx
  int v25; // edx
  __int64 v26; // r13
  __int64 v27; // rdx
  __m128i v29; // xmm0
  __int64 v30; // rax
  unsigned int v31; // edx
  int v32; // edx
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // r15
  __int64 v37; // r14
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // r12
  __int64 v44; // r14
  unsigned __int64 v45; // rbx
  __int64 v46; // rbx
  __m128i *v47; // rdx
  __int64 v48; // r15
  __int64 v49; // rbx
  const __m128i *v50; // r14
  const __m128i *v52; // r12
  int v53; // r13d
  __int64 v54; // rax
  __int64 v55; // rsi
  unsigned __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // rbx
  __int64 v59; // r14
  _QWORD *v60; // r15
  __int64 v61; // rsi
  __int64 *v62; // rax
  __int64 v63; // rsi
  unsigned __int128 v64; // rax
  unsigned __int64 v65; // rbx
  _QWORD *v66; // r13
  __int64 v67; // rsi
  __int64 v69; // r12
  __int64 v70; // rbx
  const __m128i *v71; // r14
  const __m128i *v73; // r15
  int v74; // r13d
  __int64 v75; // rax
  __int64 v76; // rsi
  unsigned __int64 v77; // rax
  __int64 v78; // r12
  unsigned __int64 v79; // rbx
  const __m128i *v80; // r13
  __int64 v81; // rsi
  unsigned __int64 v82; // rcx
  __m128i v83; // xmm1
  __int64 v84; // r14
  __int64 v85; // rcx
  __int64 v86; // rbx
  unsigned __int64 v87; // r12
  __int64 v88; // r15
  __int64 v89; // rbx
  unsigned __int64 v90; // r12
  __int64 v91; // r15
  unsigned __int64 v92; // r12
  unsigned __int64 v93; // r12
  unsigned __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rbx
  unsigned __int64 v97; // r14
  _QWORD *v98; // r15
  __int64 v99; // rsi
  __int64 v100; // rax
  unsigned int v101; // edx
  __m128i *v102; // rdx
  __int64 v103; // rcx
  __int64 v105; // r15
  __int64 v106; // rbx
  const __m128i *v107; // r14
  const __m128i *v109; // r12
  int v110; // r13d
  __int64 v111; // rax
  __int64 v112; // rsi
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // r15
  unsigned __int64 v115; // r15
  _QWORD *v117; // r13
  _BYTE v118[24]; // [rsp+0h] [rbp-400h] BYREF
  _QWORD v119[11]; // [rsp+18h] [rbp-3E8h] BYREF
  _QWORD v120[15]; // [rsp+70h] [rbp-390h] BYREF
  _QWORD v121[5]; // [rsp+E8h] [rbp-318h] BYREF
  __int64 v122; // [rsp+110h] [rbp-2F0h] BYREF
  int v123; // [rsp+118h] [rbp-2E8h]
  __int64 v124; // [rsp+120h] [rbp-2E0h] BYREF
  int v125; // [rsp+128h] [rbp-2D8h]
  __int64 v126; // [rsp+130h] [rbp-2D0h] BYREF
  int v127; // [rsp+138h] [rbp-2C8h]
  __int64 v128; // [rsp+140h] [rbp-2C0h] BYREF
  int v129; // [rsp+148h] [rbp-2B8h]
  __int64 v130; // [rsp+150h] [rbp-2B0h] BYREF
  int v131; // [rsp+158h] [rbp-2A8h]
  unsigned __int128 v132; // [rsp+160h] [rbp-2A0h] BYREF
  unsigned __int128 v133; // [rsp+170h] [rbp-290h] BYREF
  unsigned __int128 v134; // [rsp+180h] [rbp-280h] BYREF
  unsigned __int128 v135; // [rsp+190h] [rbp-270h] BYREF
  unsigned __int64 v136; // [rsp+1A8h] [rbp-258h] BYREF
  unsigned __int64 v137; // [rsp+1B0h] [rbp-250h]
  __m128i v138; // [rsp+1B8h] [rbp-248h]
  __int64 v139; // [rsp+1C8h] [rbp-238h]
  const __m128i *v140; // [rsp+1D0h] [rbp-230h]
  __m128i v141; // [rsp+1D8h] [rbp-228h]
  __int64 v142; // [rsp+1E8h] [rbp-218h]
  unsigned __int64 v143; // [rsp+1F0h] [rbp-210h] BYREF
  __int64 v144; // [rsp+1F8h] [rbp-208h]
  __int64 v145; // [rsp+200h] [rbp-200h]
  __int128 v146; // [rsp+208h] [rbp-1F8h]
  unsigned __int64 v147; // [rsp+218h] [rbp-1E8h]
  const __m128i *v148; // [rsp+220h] [rbp-1E0h] BYREF
  __m128i v149; // [rsp+228h] [rbp-1D8h]
  __m128i v150; // [rsp+238h] [rbp-1C8h]
  __int64 v151; // [rsp+248h] [rbp-1B8h]
  __int64 v152; // [rsp+250h] [rbp-1B0h]
  __int64 v153; // [rsp+258h] [rbp-1A8h]
  __m128i v154; // [rsp+260h] [rbp-1A0h]
  _OWORD v155[6]; // [rsp+270h] [rbp-190h] BYREF
  unsigned __int64 v156; // [rsp+2D8h] [rbp-128h] BYREF
  __m128i si128; // [rsp+2E0h] [rbp-120h] BYREF
  __int64 v158; // [rsp+2F0h] [rbp-110h] BYREF
  __int64 v159; // [rsp+2F8h] [rbp-108h]
  __m128i *v160; // [rsp+300h] [rbp-100h]
  unsigned __int64 v161; // [rsp+308h] [rbp-F8h]
  __int64 v162; // [rsp+310h] [rbp-F0h]
  volatile signed __int64 *v163; // [rsp+318h] [rbp-E8h] BYREF
  const __m128i *v164; // [rsp+320h] [rbp-E0h] BYREF
  __m128i v165[6]; // [rsp+328h] [rbp-D8h] BYREF
  __int64 (__fastcall *v166)(); // [rsp+388h] [rbp-78h]
  __int64 v167; // [rsp+390h] [rbp-70h]
  unsigned __int64 v168; // [rsp+398h] [rbp-68h]
  __int64 *v169; // [rsp+3A0h] [rbp-60h]
  __int128 v170; // [rsp+3A8h] [rbp-58h] BYREF
  unsigned __int64 v171; // [rsp+3B8h] [rbp-48h]
  __m128i v172[4]; // [rsp+3C0h] [rbp-40h] BYREF

  v159 = a5;
  v168 = a4;
  v169 = a3;
  v160 = a1;
  v130 = std::time::Instant::now::hda76af2c3a449055(a1);
  v131 = v5;
  codexmate_lib::core::relay::codex_thread_visibility::repair_missing_rollouts_for_convergence::hb8f1c1a3365f7491(
    &v164,
    a2);
  v6 = v164;
  qmemcpy(v120, v165, 0x58u);
  if ( v164 != (const __m128i *)11 )
  {
    v12 = (__int64 *)v160;
    qmemcpy(&v160[1], v120, 0x58u);
    v12[1] = (__int64)v6;
    *v12 = 2;
    goto LABEL_49;
  }
  qmemcpy(v119, v120, sizeof(v119));
  v7 = std::time::Instant::elapsed::h457f209775ed485c(&v130);
  v135 = 0x3E8 * (unsigned __int128)(unsigned __int64)v7 + v8 / 0xF4240uLL;
  v128 = std::time::Instant::now::hda76af2c3a449055(&v130);
  v129 = v9;
  codexmate_lib::core::relay::codex_thread_visibility::converge_threads_to_provider::h24d29e127689a712(
    &v164,
    a2,
    v169[3],
    v169[4]);
  qmemcpy(v155, v165, sizeof(v155));
  if ( v164 != (const __m128i *)0x8000000000000000LL )
  {
    v120[14] = v167;
    v120[13] = v166;
    qmemcpy(&v120[1], v155, 0x60u);
    v120[0] = v164;
    v13 = std::time::Instant::elapsed::h457f209775ed485c(&v128);
    v134 = 0x3E8 * (unsigned __int128)(unsigned __int64)v13 + v14 / 0xF4240uLL;
    v15 = v120[7];
    v16 = v120[8];
    v17 = &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384;
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
    v19 = v18;
    if ( *(_BYTE *)(v18 + 16) == 1 )
    {
      v20 = *(_QWORD *)v18;
      v21 = *(_QWORD *)(v19 + 8);
    }
    else
    {
      v20 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
      *(_QWORD *)v19 = v20;
      *(_QWORD *)(v19 + 8) = v21;
      *(_BYTE *)(v19 + 16) = 1;
    }
    *(_QWORD *)v19 = v20 + 1;
    memset(v165, 0, 24);
    v164 = (const __m128i *)anon_3f0cee2931c58d8d540c26f0254bc451_21;
    v165[1].i64[1] = v20;
    v165[2].i64[0] = v21;
    if ( v16 )
    {
      hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h11076541e99032a5(&v164, v16, &v165[1].u64[1], 1);
      v117 = (_QWORD *)(v15 + 16);
      do
      {
        codexmate_lib::core::relay::codex_thread_visibility::rollout_path_identity::hdedbd6ba38eb2d9a(
          v155,
          *(v117 - 1),
          *v117);
        v17 = (void (**)(void))&v164;
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h4bca271eb439b48f(&v164, v155);
        v117 += 3;
        --v16;
      }
      while ( v16 );
    }
    v151 = v165[2].i64[0];
    v150 = v165[1];
    v149 = v165[0];
    v148 = v164;
    v126 = std::time::Instant::now::hda76af2c3a449055(v17);
    v127 = v22;
    if ( *((_BYTE *)v169 + 40) == 1 )
    {
      codexmate_lib::core::relay::codex_thread_visibility::patch_relay_thread_instructions_excluding::h4e3c2158ef5c3bef(
        &v164,
        a2,
        &v148);
      v141 = v165[0];
      v140 = v164;
      v152 = 1;
    }
    else
    {
      v152 = 0;
    }
    v23 = std::time::Instant::elapsed::h457f209775ed485c(&v126);
    v133 = 0x3E8 * (unsigned __int128)(unsigned __int64)v23 + v24 / 0xF4240uLL;
    v124 = std::time::Instant::now::hda76af2c3a449055(&v126);
    v125 = v25;
    v26 = *v169;
    if ( *v169 == 0x8000000000000000LL )
    {
      v27 = 0;
    }
    else
    {
      codexmate_lib::core::relay::codex_thread_visibility::fallback_relay_model_threads_excluding::h671b2b8f3cd5d5ad(
        &v164,
        a2,
        v169[1],
        v169[2],
        &v148);
      _RAX = (unsigned __int64)v164;
      v27 = v165[0].i64[0];
      v29 = _mm_loadu_si128(v165);
      qmemcpy(v155, &v165[1], 0x48u);
      if ( v164 != (const __m128i *)11 )
      {
        v47 = v160;
        qmemcpy(&v160[2], v155, 0x48u);
        v47->i64[1] = _RAX;
        v47[1] = v29;
        v47->i64[0] = 2;
        v48 = v149.i64[0];
        if ( v149.i64[0] )
        {
          v49 = v150.i64[0];
          if ( v150.i64[0] )
          {
            v50 = v148;
            _R13D = ~_mm_movemask_epi8(_mm_load_si128(v148));
            v52 = v148 + 1;
            do
            {
              if ( !(_WORD)_R13D )
              {
                do
                {
                  v53 = _mm_movemask_epi8(_mm_load_si128(v52));
                  v50 -= 24;
                  ++v52;
                }
                while ( v53 == 0xFFFF );
                _R13D = ~v53;
              }
              __asm { tzcnt   eax, r13d }
              v54 = -3LL * _RAX;
              v55 = *((_QWORD *)&v50[-1] + v54 - 1);
              if ( v55 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50[-1].i64[v54], v55, 1);
              --v49;
              _RAX = _R13D & (unsigned int)(_R13D - 1);
              _R13D &= _R13D - 1;
            }
            while ( v49 );
          }
          v56 = (24 * v48 + 39) & 0xFFFFFFFFFFFFFFF0LL;
          v57 = v56 + v48 + 17;
          if ( v57 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v148 - v56, v57, 16);
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceSummary$GT$::h70908c1d68c5c9be(v120);
        v11 = v119[3];
        if ( v119[3] == 0x8000000000000000LL )
          goto LABEL_42;
        goto LABEL_4;
      }
    }
    v142 = v27;
    v30 = std::time::Instant::elapsed::h457f209775ed485c(&v124);
    v132 = 0x3E8 * (unsigned __int128)(unsigned __int64)v30 + v31 / 0xF4240uLL;
    v122 = std::time::Instant::now::hda76af2c3a449055(&v124);
    v123 = v32;
    v33 = *((_BYTE *)v169 + 41) == 1;
    v153 = v26;
    if ( !v33 )
    {
      v46 = 0;
      goto LABEL_119;
    }
    codexmate_lib::core::relay::codex_thread_visibility::collect_active_rollout_paths::h9bb933b8b6b262a7(&v164, a2);
    v121[0] = v165[0].i64[0];
    v121[1] = v165[0].i64[0];
    v121[2] = v164;
    v121[3] = v165[0].i64[0] + 24 * v165[0].i64[1];
    v121[4] = &v148;
    alloc::vec::in_place_collect::from_iter_in_place::hf775c9d36815d9b8(&v143, v121);
    if ( *(_BYTE *)(v19 + 16) == 1 )
    {
      v34 = *(_QWORD *)v19;
      v35 = *(_QWORD *)(v19 + 8);
    }
    else
    {
      v34 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
      *(_QWORD *)v19 = v34;
      *(_QWORD *)(v19 + 8) = v35;
      *(_BYTE *)(v19 + 16) = 1;
    }
    *(_QWORD *)v19 = v34 + 1;
    memset(v165, 0, 24);
    v164 = (const __m128i *)anon_3f0cee2931c58d8d540c26f0254bc451_21;
    v165[1].i64[1] = v34;
    v165[2].i64[0] = v35;
    *(_QWORD *)&v170 = 0;
    *((_QWORD *)&v170 + 1) = 8;
    v171 = 0;
    v36 = v143;
    v37 = v144;
    *(_QWORD *)&v155[0] = v144;
    *((_QWORD *)&v155[0] + 1) = v144;
    *(_QWORD *)&v155[1] = v143;
    v172[0].i64[0] = v144 + 24 * v145;
    *((_QWORD *)&v155[1] + 1) = v172[0].i64[0];
    v38 = v144;
    if ( v145 )
    {
      v161 = v143;
      v154.i64[0] = v144;
      v38 = v144 + 24;
      while ( 1 )
      {
        v42 = *(_QWORD *)(v38 - 24);
        if ( v42 == 0x8000000000000000LL )
          break;
        v43 = *(_QWORD *)(v38 - 16);
        v44 = *(_QWORD *)(v38 - 8);
        codexmate_lib::core::relay::codex_thread_visibility::rollout_path_identity::hdedbd6ba38eb2d9a(&v156, v43, v44);
        if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h4bca271eb439b48f(&v164, &v156) )
        {
          if ( v42 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v42, 1);
        }
        else
        {
          v45 = v171;
          if ( v171 == (_QWORD)v170 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v170);
          v39 = *((_QWORD *)&v170 + 1);
          v40 = 3 * v45;
          *(_QWORD *)(*((_QWORD *)&v170 + 1) + 8 * v40) = v42;
          *(_QWORD *)(v39 + 8 * v40 + 8) = v43;
          *(_QWORD *)(v39 + 8 * v40 + 16) = v44;
          v171 = v45 + 1;
        }
        v41 = v38 - 24;
        v38 += 24;
        if ( v41 + 24 == v172[0].i64[0] )
        {
          v38 = v172[0].i64[0];
          break;
        }
      }
      *((_QWORD *)&v155[0] + 1) = v38;
      v37 = v154.i64[0];
      v36 = v161;
    }
    v64 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)(v172[0].i64[0] - v38);
    if ( v172[0].i64[0] != v38 )
    {
      v65 = (v172[0].i64[0] - v38) / 0x18uLL;
      v66 = (_QWORD *)(v38 + 8);
      do
      {
        v67 = *(v66 - 1);
        if ( v67 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v66, v67, 1);
        v66 += 3;
        --v65;
      }
      while ( v65 );
    }
    if ( v36 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 24 * v36, 8);
    v146 = v170;
    HIDWORD(_RAX) = HIDWORD(v171);
    v147 = v171;
    v69 = v165[0].i64[0];
    if ( v165[0].i64[0] )
    {
      v70 = v165[1].i64[0];
      if ( v165[1].i64[0] )
      {
        v71 = v164;
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v164));
        v73 = v164 + 1;
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v74 = _mm_movemask_epi8(_mm_load_si128(v73));
              v71 -= 24;
              ++v73;
            }
            while ( v74 == 0xFFFF );
            _R13D = ~v74;
          }
          __asm { tzcnt   eax, r13d }
          v75 = -3 * _RAX;
          v76 = *((_QWORD *)&v71[-1] + v75 - 1);
          if ( v76 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71[-1].i64[v75], v76, 1);
          --v70;
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v70 );
      }
      v77 = (24 * v69 + 39) & 0xFFFFFFFFFFFFFFF0LL;
      v78 = v77 + v69 + 17;
      if ( v78 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v164 - v77, v78, 16);
    }
    v79 = v147;
    v156 = v147;
    si128 = 0u;
    v158 = 0;
    if ( v168 )
    {
      if ( !v147 )
        goto LABEL_85;
      (*(void (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64))(v159 + 40))(v168, 0, v147);
    }
    v80 = *((const __m128i **)&v146 + 1);
    if ( v79 > 7 )
    {
      v143 = v168;
      v144 = v159;
      v164 = nullptr;
      v165[0].i64[1] = 4;
      v165[1].i64[0] = 0;
      v165[2].i64[0] = 1;
      v165[2].i64[1] = (__int64)&anon_c267236184b514dd3bb615f659186bd4_6;
      v165[3].i64[0] = 0;
      v165[4].i64[0] = 0;
      v165[5].i16[0] = 0;
      rayon_core::registry::Registry::new::h986a0e8e90377841(v155, &v164, *((_QWORD *)&v64 + 1));
      if ( *(_QWORD *)&v155[0] == 3 )
      {
        v163 = *((volatile signed __int64 **)&v155[0] + 1);
        *(_QWORD *)&v170 = 0;
        BYTE8(v170) = 0;
        v171 = 0;
        v136 = v79;
        v164 = v80;
        v165[0].i64[0] = v79;
        v165[0].i64[1] = (__int64)&v143;
        v165[1].i64[0] = (__int64)&v170;
        v165[1].i64[1] = (__int64)&v136;
        rayon_core::registry::Registry::in_worker::h686f933a4512fc34(v155, *((_QWORD *)&v155[0] + 1) + 128LL, &v164);
        v81 = *(_QWORD *)&v155[0];
        if ( *(_QWORD *)&v155[1] )
        {
          v82 = (*(_QWORD *)&v155[1] - 1LL) & 0x7FFFFFFFFFFFFFFLL;
          if ( v82 >= 3 )
          {
            v94 = (v82 + 1) & 0xFFFFFFFFFFFFFFFCLL;
            v83 = 0;
            v84 = 0;
            v85 = *((_QWORD *)&v155[0] + 1);
            do
            {
              v83 = _mm_add_epi64(
                      _mm_loadu_si128((const __m128i *)(v85 + 104)),
                      _mm_add_epi64(
                        _mm_add_epi64(
                          _mm_loadu_si128((const __m128i *)(v85 + 72)),
                          _mm_loadu_si128((const __m128i *)(v85 + 40))),
                        _mm_add_epi64(_mm_loadu_si128((const __m128i *)(v85 + 8)), v83)));
              v84 += *(_QWORD *)(v85 + 120) + *(_QWORD *)(v85 + 88) + *(_QWORD *)(v85 + 56) + *(_QWORD *)(v85 + 24);
              v85 += 128;
              v94 -= 4LL;
            }
            while ( v94 );
          }
          else
          {
            v83 = 0;
            v84 = 0;
            v85 = *((_QWORD *)&v155[0] + 1);
          }
          if ( (v155[1] & 3) != 0 )
          {
            v95 = 0;
            do
            {
              v83 = _mm_add_epi64(v83, _mm_loadu_si128((const __m128i *)(v85 + v95 + 8)));
              v84 += *(_QWORD *)(v85 + v95 + 24);
              v95 += 32;
            }
            while ( 32 * (v155[1] & 3) != v95 );
          }
        }
        else
        {
          v83 = 0;
          v84 = 0;
        }
        v172[0] = v83;
        if ( *(_QWORD *)&v155[0] )
        {
          v81 = 32LL * *(_QWORD *)&v155[0];
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v155[0] + 1), 32LL * *(_QWORD *)&v155[0], 8);
        }
        _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(
          &v170,
          v81);
        _$LT$std..sys..sync..once_box..OnceBox$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc46b56119d2effeb(&v170);
        _$LT$rayon_core..thread_pool..ThreadPool$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha4b9412e9655f829(&v163);
        if ( !_InterlockedDecrement64(v163) )
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hde6f8c6f6f4c92ed(&v163);
      }
      else
      {
        v170 = v155[0];
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
        {
          *(_QWORD *)&v155[0] = &v170;
          *((_QWORD *)&v155[0] + 1) = _$LT$rayon_core..ThreadPoolBuildError$u20$as$u20$core..fmt..Display$GT$::fmt::h6af0e53b3a5f6f50;
          v164 = (const __m128i *)&anon_3f0cee2931c58d8d540c26f0254bc451_522;
          v165[0].i64[0] = 51;
          v165[0].i64[1] = (__int64)&anon_3f0cee2931c58d8d540c26f0254bc451_522;
          v165[1].i64[0] = 51;
          v165[1].i64[1] = (__int64)&off_101A14B28;
          log::__private_api::log::hb6fd2cff84d9e9dd(&unk_101861406, v155, 2, &v164);
        }
        v162 = 24 * v79;
        if ( v168 )
        {
          v161 = v79;
          v172[0] = 0;
          v89 = 1;
          v90 = 0;
          v84 = 0;
          do
          {
            codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_items_in_existing_rollout::ha9e80209463bf41a(
              &v164,
              v80->i64[v90 / 8 + 1],
              v80[1].i64[v90 / 8]);
            v154 = _mm_loadu_si128(v165);
            v91 = v165[1].i64[0];
            (*(void (__fastcall **)(unsigned __int64, __int64, unsigned __int64))(v159 + 40))(v168, v89, v161);
            v84 += v91;
            v172[0] = _mm_add_epi64(_mm_load_si128(v172), v154);
            v90 += 24LL;
            ++v89;
          }
          while ( v162 != v90 );
        }
        else
        {
          v172[0] = 0;
          v93 = 0;
          v84 = 0;
          do
          {
            codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_items_in_existing_rollout::ha9e80209463bf41a(
              &v164,
              v80->i64[v93 / 8 + 1],
              v80[1].i64[v93 / 8]);
            v172[0] = _mm_add_epi64(_mm_load_si128(v172), _mm_loadu_si128(v165));
            v84 += v165[1].i64[0];
            v93 += 24LL;
          }
          while ( v162 != v93 );
        }
        core::ptr::drop_in_place$LT$rayon_core..ThreadPoolBuildError$GT$::h2454a216012a46c4(
          v170,
          *((_QWORD *)&v170 + 1));
      }
      goto LABEL_108;
    }
    if ( v79 )
    {
      v162 = 24 * v79;
      if ( v168 )
      {
        v161 = v79;
        v172[0] = 0;
        v86 = 1;
        v87 = 0;
        v84 = 0;
        do
        {
          codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_items_in_existing_rollout::ha9e80209463bf41a(
            &v164,
            v80->i64[v87 / 8 + 1],
            v80[1].i64[v87 / 8]);
          v154 = _mm_loadu_si128(v165);
          v88 = v165[1].i64[0];
          (*(void (__fastcall **)(unsigned __int64, __int64, unsigned __int64))(v159 + 40))(v168, v86, v161);
          v84 += v88;
          v172[0] = _mm_add_epi64(_mm_load_si128(v172), v154);
          v87 += 24LL;
          ++v86;
        }
        while ( v162 != v87 );
      }
      else
      {
        v172[0] = 0;
        v92 = 0;
        v84 = 0;
        do
        {
          codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_items_in_existing_rollout::ha9e80209463bf41a(
            &v164,
            v80->i64[v92 / 8 + 1],
            v80[1].i64[v92 / 8]);
          v172[0] = _mm_add_epi64(_mm_load_si128(v172), _mm_loadu_si128(v165));
          v84 += v165[1].i64[0];
          v92 += 24LL;
        }
        while ( v162 != v92 );
      }
      goto LABEL_108;
    }
LABEL_85:
    v172[0] = 0;
    v84 = 0;
LABEL_108:
    si128 = _mm_load_si128(v172);
    v158 = v84;
    if ( v84 | si128.i64[0] && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u )
    {
      *(_QWORD *)&v155[0] = &v156;
      *((_QWORD *)&v155[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      *(_QWORD *)&v155[1] = &si128;
      *((_QWORD *)&v155[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      *(_QWORD *)&v155[2] = &si128.i64[1];
      *((_QWORD *)&v155[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      *(_QWORD *)&v155[3] = &v158;
      *((_QWORD *)&v155[3] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      v165[2].i64[1] = 3;
      v165[3].i64[0] = (__int64)&anon_3f0cee2931c58d8d540c26f0254bc451_522;
      v165[3].i64[1] = 51;
      v165[4].i64[1] = (__int64)&unk_10186167F;
      v165[5].i64[0] = (__int64)v155;
      v164 = nullptr;
      v165[0].i64[0] = (__int64)&anon_3f0cee2931c58d8d540c26f0254bc451_522;
      v165[0].i64[1] = 51;
      v165[1].i64[0] = 0;
      v165[1].i64[1] = (__int64)"src/core/relay/codex_thread_visibility.rs";
      v165[2].i64[0] = 41;
      v165[4].i64[0] = 0x21F900000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v170, &v164);
    }
    v139 = v158;
    v138 = si128;
    v137 = v156;
    v96 = *((_QWORD *)&v146 + 1);
    v97 = v147;
    v26 = v153;
    if ( v147 )
    {
      v98 = (_QWORD *)(*((_QWORD *)&v146 + 1) + 8LL);
      do
      {
        v99 = *(v98 - 1);
        if ( v99 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v98, v99, 1);
        v98 += 3;
        --v97;
      }
      while ( v97 );
    }
    if ( (_QWORD)v146 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96, 24 * v146, 8);
    v46 = 1;
LABEL_119:
    v100 = std::time::Instant::elapsed::h457f209775ed485c(&v122);
    v155[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v100 + v101 / 0xF4240uLL;
    v164 = (const __m128i *)&v135;
    v165[0].i64[0] = (__int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    v165[0].i64[1] = (__int64)&v134;
    v165[1].i64[0] = (__int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    v165[1].i64[1] = (__int64)&v133;
    v165[2].i64[0] = (__int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    v165[2].i64[1] = (__int64)&v132;
    v165[3].i64[0] = (__int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    v165[3].i64[1] = (__int64)v155;
    v165[4].i64[0] = (__int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    v165[4].i64[1] = (__int64)&v120[9];
    v165[5].i64[0] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    v165[5].i64[1] = (__int64)&v120[14];
    v166 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v118, &unk_10186020B, &v164);
    codexmate_lib::platform::debug_log::app_event::hb05f8873cac9750a(
      "thread_reconcileimage generationconnection resetlastAsrErrorCodecannot_be_a_basecontent-encodingcontent-languagecontent-locationwww-authenticatex-xss-protectionIllegalEventNameTokioOneshotRecvTauri-Channel-IdTauri-Invoke-Keytauri_utils::Env",
      16,
      "phase_split",
      11,
      v118);
    v102 = v160;
    qmemcpy(&v160[4].u64[1], v119, 0x58u);
    qmemcpy(&v102[10], v120, 0x78u);
    v102[1].i64[1] = v141.i64[1];
    _RAX = (unsigned __int64)v140;
    v102[1].i64[0] = v141.i64[0];
    v102->i64[1] = _RAX;
    v103 = v138.i64[0];
    v102[2].i64[1] = v137;
    v102[3] = (__m128i)__PAIR128__(v138.u64[1], v103);
    v102[4].i64[0] = v139;
    v102->i64[0] = v152;
    v102[2].i64[0] = v46;
    HIDWORD(_RAX) = HIDWORD(v142);
    v102[17].i64[1] = v142;
    v105 = v149.i64[0];
    if ( v149.i64[0] )
    {
      v106 = v150.i64[0];
      if ( v150.i64[0] )
      {
        v107 = v148;
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v148));
        v109 = v148 + 1;
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v110 = _mm_movemask_epi8(_mm_load_si128(v109));
              v107 -= 24;
              ++v109;
            }
            while ( v110 == 0xFFFF );
            _R13D = ~v110;
          }
          __asm { tzcnt   eax, r13d }
          v111 = -3LL * _RAX;
          v112 = *((_QWORD *)&v107[-1] + v111 - 1);
          if ( v112 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107[-1].i64[v111], v112, 1);
          --v106;
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v106 );
      }
      v113 = (24 * v105 + 39) & 0xFFFFFFFFFFFFFFF0LL;
      v114 = v113 + v105;
      v33 = v114 == -17;
      v115 = v114 + 17;
      v26 = v153;
      if ( !v33 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v148 - v113, v115, 16);
    }
    v62 = v169;
    if ( v26 != 0x8000000000000000LL )
    {
      v63 = *v169;
      if ( *v169 )
        goto LABEL_51;
    }
    return v160;
  }
  v10 = (__int64 *)v160;
  qmemcpy(&v160->u64[1], v155, 0x60u);
  *v10 = 2;
  v11 = v119[3];
  if ( v119[3] != 0x8000000000000000LL )
  {
LABEL_4:
    if ( v11 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119[4], v11, 1);
  }
LABEL_42:
  v58 = v119[1];
  v59 = v119[2];
  if ( v119[2] )
  {
    v60 = (_QWORD *)(v119[1] + 8LL);
    do
    {
      v61 = *(v60 - 1);
      if ( v61 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v60, v61, 1);
      v60 += 3;
      --v59;
    }
    while ( v59 );
  }
  if ( v119[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, 24LL * v119[0], 8);
LABEL_49:
  v62 = v169;
  v63 = *v169;
  if ( *v169 != 0x8000000000000000LL && v63 )
LABEL_51:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62[1], v63, 1);
  return v160;
}

