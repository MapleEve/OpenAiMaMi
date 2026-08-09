// codexmate_lib::core::relay::codex_thread_visibility::reconcile_threads_with_progress::hedb8602cf4909d61
// addr=0x1007507c0 size=0x145b module=AiMaMi (mac, symbolized)
// FULL BODY, NO TRUNCATION MARKER. Called from reconcile_router_on (0x100825996 call site).
// 编排：repair_missing_rollouts_for_convergence -> converge_threads_to_provider -> (可选)patch_relay_thread_instructions_excluding
//      -> (可选)fallback_relay_model_threads_excluding -> collect_active_rollout_paths(若 a3+41==1)
//      -> 用 rayon_core::registry 并行/单线程执行 cleanup_private_reasoning_items_in_existing_rollout 逐 rollout 清理
//      -> app_event("thread_reconcile", "phase_split") 上报。
// 进度回调经 a5(vtable)+40 按 (当前索引, 总数) 上报每个 rollout 清理进度。
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
  _BYTE v118[24]; // BYREF
  _QWORD v119[11]; // BYREF
  _QWORD v120[15]; // BYREF
  _QWORD v121[5]; // BYREF
  __int64 v122; // BYREF
  int v123;
  __int64 v124; // BYREF
  int v125;
  __int64 v126; // BYREF
  int v127;
  __int64 v128; // BYREF
  int v129;
  __int64 v130; // BYREF
  int v131;
  unsigned __int128 v132; // BYREF
  unsigned __int128 v133; // BYREF
  unsigned __int128 v134; // BYREF
  unsigned __int128 v135; // BYREF
  unsigned __int64 v136; // BYREF
  unsigned __int64 v137;
  __m128i v138;
  __int64 v139;
  const __m128i *v140;
  __m128i v141;
  __int64 v142;
  unsigned __int64 v143; // BYREF
  __int64 v144;
  __int64 v145;
  __int128 v146;
  unsigned __int64 v147;
  const __m128i *v148; // BYREF
  __m128i v149;
  __m128i v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __m128i v154;
  _OWORD v155[6]; // BYREF
  unsigned __int64 v156; // BYREF
  __m128i si128; // BYREF
  __int64 v158; // BYREF
  __int64 v159;
  __m128i *v160;
  unsigned __int64 v161;
  __int64 v162;
  volatile signed __int64 *v163; // BYREF
  const __m128i *v164; // BYREF
  __m128i v165[6]; // BYREF
  __int64 (__fastcall *v166)();
  __int64 v167;
  unsigned __int64 v168;
  __int64 *v169;
  __int128 v170; // BYREF
  unsigned __int64 v171;
  __m128i v172[4]; // BYREF

  v159 = a5; /*0x1007507d4*/
  v168 = a4; /*0x1007507db*/
  v169 = a3; /*0x1007507df*/
  v160 = a1; /*0x1007507e6*/
  v130 = std::time::Instant::now::hda76af2c3a449055(a1); /*0x1007507f2*/
  v131 = v5; /*0x1007507f9*/
  codexmate_lib::core::relay::codex_thread_visibility::repair_missing_rollouts_for_convergence::hb8f1c1a3365f7491( /*0x100750809*/
    &v164,
    a2);
  v6 = v164; /*0x10075080e*/
  qmemcpy(v120, v165, 0x58u); /*0x100750828*/
  if ( v164 != (const __m128i *)11 ) /*0x10075082f*/
  {
    v12 = (__int64 *)v160; /*0x10075093a*/
    qmemcpy(&v160[1], v120, 0x58u); /*0x100750951*/
    v12[1] = (__int64)v6; /*0x100750954*/
    *v12 = 2; /*0x100750958*/
    goto LABEL_49; /*0x10075095f*/
  }
  qmemcpy(v119, v120, sizeof(v119)); /*0x100750848*/
  v7 = std::time::Instant::elapsed::h457f209775ed485c(&v130); /*0x100750852*/
  v135 = 0x3E8 * (unsigned __int128)(unsigned __int64)v7 + v8 / 0xF4240uLL; /*0x100750875*/
  v128 = std::time::Instant::now::hda76af2c3a449055(&v130); /*0x100750888*/
  v129 = v9; /*0x10075088f*/
  codexmate_lib::core::relay::codex_thread_visibility::converge_threads_to_provider::h24d29e127689a712( /*0x1007508ab*/
    &v164,
    a2,
    v169[3],
    v169[4]);
  qmemcpy(v155, v165, sizeof(v155)); /*0x1007508ca*/
  if ( v164 != (const __m128i *)0x8000000000000000LL ) /*0x1007508da*/
  {
    v120[14] = v167; /*0x10075096c*/
    v120[13] = v166; /*0x100750973*/
    qmemcpy(&v120[1], v155, 0x60u); /*0x10075098d*/
    v120[0] = v164; /*0x100750990*/
    v13 = std::time::Instant::elapsed::h457f209775ed485c(&v128); /*0x10075099e*/
    v134 = 0x3E8 * (unsigned __int128)(unsigned __int64)v13 + v14 / 0xF4240uLL; /*0x1007509c1*/
    v15 = v120[7]; /*0x1007509cf*/
    v16 = v120[8]; /*0x1007509d6*/
    v17 = &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384; /*0x1007509dd*/
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1007509e4*/
    v19 = v18; /*0x1007509e6*/
    if ( *(_BYTE *)(v18 + 16) == 1 ) /*0x1007509ed*/
    {
      v20 = *(_QWORD *)v18; /*0x1007509f3*/
      v21 = *(_QWORD *)(v19 + 8); /*0x1007509f7*/
    }
    else
    {
      v20 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100751b8b*/
      *(_QWORD *)v19 = v20; /*0x100751b90*/
      *(_QWORD *)(v19 + 8) = v21; /*0x100751b94*/
      *(_BYTE *)(v19 + 16) = 1; /*0x100751b99*/
    }
    *(_QWORD *)v19 = v20 + 1; /*0x100750a00*/
    memset(v165, 0, 24); /*0x100750a27*/
    v164 = (const __m128i *)anon_3f0cee2931c58d8d540c26f0254bc451_21; /*0x100750a35*/
    v165[1].i64[1] = v20; /*0x100750a3c*/
    v165[2].i64[0] = v21; /*0x100750a43*/
    if ( v16 ) /*0x100750a4d*/
    {
      hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h11076541e99032a5(&v164, v16, &v165[1].u64[1], 1); /*0x100751bba*/
      v117 = (_QWORD *)(v15 + 16); /*0x100751bbf*/
      do /*0x100751bfb*/
      {
        codexmate_lib::core::relay::codex_thread_visibility::rollout_path_identity::hdedbd6ba38eb2d9a( /*0x100751bd5*/
          v155,
          *(v117 - 1),
          *v117);
        v17 = (void (**)(void))&v164; /*0x100751bda*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h4bca271eb439b48f(&v164, v155); /*0x100751be8*/
        v117 += 3; /*0x100751bed*/
        --v16; /*0x100751bf1*/
      }
      while ( v16 ); /*0x100751bfb*/
    }
    v151 = v165[2].i64[0]; /*0x100750a5a*/
    v150 = v165[1]; /*0x100750a76*/
    v149 = v165[0]; /*0x100750a99*/
    v148 = v164; /*0x100750aa0*/
    v126 = std::time::Instant::now::hda76af2c3a449055(v17); /*0x100750aac*/
    v127 = v22; /*0x100750ab3*/
    // *((_BYTE*)a3 + 40) == 1  =>  是否需要 patch_relay_thread_instructions_excluding（即 "排除某集合外全量 patch 线程指令" 开关）
    if ( *((_BYTE *)v169 + 40) == 1 ) /*0x100750ac1*/
    {
      codexmate_lib::core::relay::codex_thread_visibility::patch_relay_thread_instructions_excluding::h4e3c2158ef5c3bef( /*0x100750ad4*/
        &v164,
        a2,
        &v148);
      v141 = v165[0]; /*0x100750af5*/
      v140 = v164; /*0x100750afc*/
      v152 = 1; /*0x100750b08*/
    }
    else
    {
      v152 = 0; /*0x100750b11*/
    }
    v23 = std::time::Instant::elapsed::h457f209775ed485c(&v126); /*0x100750b23*/
    v133 = 0x3E8 * (unsigned __int128)(unsigned __int64)v23 + v24 / 0xF4240uLL; /*0x100750b46*/
    v124 = std::time::Instant::now::hda76af2c3a449055(&v126); /*0x100750b59*/
    v125 = v25; /*0x100750b60*/
    v26 = *v169; /*0x100750b6a*/
    if ( *v169 == 0x8000000000000000LL ) /*0x100750b7a*/
    {
      v27 = 0; /*0x100750b7c*/
    }
    else
    {
      // *v169 非空 => 存在需要 fallback 的模型列表，调用 fallback_relay_model_threads_excluding(排除 &v148 集合)
      codexmate_lib::core::relay::codex_thread_visibility::fallback_relay_model_threads_excluding::h671b2b8f3cd5d5ad( /*0x100750b99*/
        &v164,
        a2,
        v169[1],
        v169[2],
        &v148);
      _RAX = (unsigned __int64)v164; /*0x100750b9e*/
      v27 = v165[0].i64[0]; /*0x100750ba5*/
      v29 = _mm_loadu_si128(v165); /*0x100750bac*/
      qmemcpy(v155, &v165[1], 0x48u); /*0x100750bc7*/
      if ( v164 != (const __m128i *)11 ) /*0x100750bce*/
      {
        // fallback 失败：清理已构建的 hashmap(v148/v149/v150) 后经 ThreadProviderConvergenceSummary drop_in_place 提前返回
        v47 = v160; /*0x100750e43*/
        qmemcpy(&v160[2], v155, 0x48u); /*0x100750e5a*/
        v47->i64[1] = _RAX; /*0x100750e5d*/
        v47[1] = v29; /*0x100750e61*/
        v47->i64[0] = 2; /*0x100750e66*/
        v48 = v149.i64[0]; /*0x100750e6d*/
        if ( v149.i64[0] ) /*0x100750e77*/
        {
          v49 = v150.i64[0]; /*0x100750e7d*/
          if ( v150.i64[0] ) /*0x100750e87*/
          {
            v50 = v148; /*0x100750e8d*/
            _R13D = ~_mm_movemask_epi8(_mm_load_si128(v148)); /*0x100750e9e*/
            v52 = v148 + 1; /*0x100750ea1*/
            do /*0x100750ec0*/
            {
              if ( !(_WORD)_R13D ) /*0x100750ec6*/
              {
                do /*0x100750eed*/
                {
                  v53 = _mm_movemask_epi8(_mm_load_si128(v52)); /*0x100750ed6*/
                  v50 -= 24; /*0x100750edb*/
                  ++v52; /*0x100750ee2*/
                }
                while ( v53 == 0xFFFF ); /*0x100750eed*/
                _R13D = ~v53; /*0x100750eef*/
              }
              __asm { tzcnt eax, r13d } /*0x100750ef2*/
              v54 = -3LL * _RAX; /*0x100750efa*/
              v55 = *((_QWORD *)&v50[-1] + v54 - 1); /*0x100750efe*/
              if ( v55 ) /*0x100750f06*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50[-1].i64[v54], v55, 1); /*0x100750f15*/
              --v49; /*0x100750eb0*/
              _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100750eb7*/
              _R13D &= _R13D - 1; /*0x100750eba*/
            }
            while ( v49 ); /*0x100750ec0*/
          }
          v56 = (24 * v48 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100750f28*/
          v57 = v56 + v48 + 17; /*0x100750f2f*/
          if ( v57 ) /*0x100750f33*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v148 - v56, v57, 16); /*0x100750f47*/
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceSummary$GT$::h70908c1d68c5c9be(v120); /*0x100750f53*/
        v11 = v119[3]; /*0x100750f58*/
        if ( v119[3] == 0x8000000000000000LL ) /*0x100750f6c*/
          goto LABEL_42; /*0x100750f6c*/
        goto LABEL_4; /*0x100750f6c*/
      }
    }
    v142 = v27; /*0x100750bd4*/
    v30 = std::time::Instant::elapsed::h457f209775ed485c(&v124); /*0x100750be2*/
    v132 = 0x3E8 * (unsigned __int128)(unsigned __int64)v30 + v31 / 0xF4240uLL; /*0x100750c05*/
    v122 = std::time::Instant::now::hda76af2c3a449055(&v124); /*0x100750c18*/
    v123 = v32; /*0x100750c1f*/
    v33 = *((_BYTE *)v169 + 41) == 1; /*0x100750c29*/
    v153 = v26; /*0x100750c2d*/
    if ( !v33 ) /*0x100750c34*/
    {
      // *((_BYTE*)a3+41) != 1 => 不需要"仅保留 active rollout"清理，跳过 collect_active_rollout_paths 直接进 rayon 并行清理阶段
      v46 = 0; /*0x100750e3c*/
      goto LABEL_119; /*0x100750e3e*/
    }
    codexmate_lib::core::relay::codex_thread_visibility::collect_active_rollout_paths::h9bb933b8b6b262a7(&v164, a2); /*0x100750c44*/
    v121[0] = v165[0].i64[0]; /*0x100750c66*/
    v121[1] = v165[0].i64[0]; /*0x100750c6d*/
    v121[2] = v164; /*0x100750c74*/
    v121[3] = v165[0].i64[0] + 24 * v165[0].i64[1]; /*0x100750c7b*/
    v121[4] = &v148; /*0x100750c89*/
    alloc::vec::in_place_collect::from_iter_in_place::hf775c9d36815d9b8(&v143, v121); /*0x100750c9e*/
    if ( *(_BYTE *)(v19 + 16) == 1 ) /*0x100750ca9*/
    {
      v34 = *(_QWORD *)v19; /*0x100750caf*/
      v35 = *(_QWORD *)(v19 + 8); /*0x100750cb3*/
    }
    else
    {
      v34 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100751c02*/
      *(_QWORD *)v19 = v34; /*0x100751c07*/
      *(_QWORD *)(v19 + 8) = v35; /*0x100751c0b*/
      *(_BYTE *)(v19 + 16) = 1; /*0x100751c10*/
    }
    *(_QWORD *)v19 = v34 + 1; /*0x100750cbc*/
    memset(v165, 0, 24); /*0x100750ce3*/
    v164 = (const __m128i *)anon_3f0cee2931c58d8d540c26f0254bc451_21; /*0x100750cea*/
    v165[1].i64[1] = v34; /*0x100750cf1*/
    v165[2].i64[0] = v35; /*0x100750cf8*/
    *(_QWORD *)&v170 = 0; /*0x100750cff*/
    *((_QWORD *)&v170 + 1) = 8; /*0x100750d07*/
    v171 = 0; /*0x100750d0f*/
    v36 = v143; /*0x100750d17*/
    v37 = v144; /*0x100750d1e*/
    // 去重：把 active rollout paths 用 rollout_path_identity 逐条 hash-insert，重复项立即 dealloc（去重后剩余部分 = 需清理 private reasoning items 的目标集合）
    *(_QWORD *)&v155[0] = v144; /*0x100750d34*/
    *((_QWORD *)&v155[0] + 1) = v144; /*0x100750d3b*/
    *(_QWORD *)&v155[1] = v143; /*0x100750d42*/
    v172[0].i64[0] = v144 + 24 * v145; /*0x100750d49*/
    *((_QWORD *)&v155[1] + 1) = v172[0].i64[0]; /*0x100750d4d*/
    v38 = v144; /*0x100750d54*/
    if ( v145 ) /*0x100750d5a*/
    {
      v161 = v143; /*0x100750d60*/
      v154.i64[0] = v144; /*0x100750d67*/
      v38 = v144 + 24; /*0x100750d6e*/
      while ( 1 ) /*0x100750dba*/
      {
        v42 = *(_QWORD *)(v38 - 24); /*0x100750dba*/
        if ( v42 == 0x8000000000000000LL ) /*0x100750dcb*/
          break; /*0x100750dcb*/
        v43 = *(_QWORD *)(v38 - 16); /*0x100750dd1*/
        v44 = *(_QWORD *)(v38 - 8); /*0x100750dd5*/
        codexmate_lib::core::relay::codex_thread_visibility::rollout_path_identity::hdedbd6ba38eb2d9a(&v156, v43, v44); /*0x100750de2*/
        if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h4bca271eb439b48f(&v164, &v156) ) /*0x100750df1*/
        {
          if ( v42 ) /*0x100750dfd*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v42, 1); /*0x100750e0a*/
        }
        else
        {
          v45 = v171; /*0x100750e20*/
          if ( v171 == (_QWORD)v170 ) /*0x100750e28*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v170); /*0x100750e32*/
          v39 = *((_QWORD *)&v170 + 1); /*0x100750d80*/
          v40 = 3 * v45; /*0x100750d84*/
          *(_QWORD *)(*((_QWORD *)&v170 + 1) + 8 * v40) = v42; /*0x100750d88*/
          *(_QWORD *)(v39 + 8 * v40 + 8) = v43; /*0x100750d8c*/
          *(_QWORD *)(v39 + 8 * v40 + 16) = v44; /*0x100750d91*/
          v171 = v45 + 1; /*0x100750d99*/
        }
        v41 = v38 - 24; /*0x100750d9d*/
        v38 += 24; /*0x100750da1*/
        if ( v41 + 24 == v172[0].i64[0] ) /*0x100750db4*/
        {
          v38 = v172[0].i64[0]; /*0x100751008*/
          break; /*0x100751008*/
        }
      }
      *((_QWORD *)&v155[0] + 1) = v38; /*0x10075100c*/
      v37 = v154.i64[0]; /*0x100751013*/
      v36 = v161; /*0x10075101a*/
    }
    v64 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)(v172[0].i64[0] - v38); /*0x100751035*/
    if ( v172[0].i64[0] != v38 ) /*0x10075103b*/
    {
      v65 = (v172[0].i64[0] - v38) / 0x18uLL; /*0x100751040*/
      v66 = (_QWORD *)(v38 + 8); /*0x100751044*/
      do /*0x100751057*/
      {
        v67 = *(v66 - 1); /*0x100751059*/
        if ( v67 ) /*0x100751060*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v66, v67, 1); /*0x10075106b*/
        v66 += 3; /*0x100751050*/
        --v65; /*0x100751054*/
      }
      while ( v65 ); /*0x100751057*/
    }
    if ( v36 ) /*0x100751075*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 24 * v36, 8); /*0x100751087*/
    v146 = v170; /*0x100751094*/
    HIDWORD(_RAX) = HIDWORD(v171); /*0x1007510a2*/
    v147 = v171; /*0x1007510a6*/
    v69 = v165[0].i64[0]; /*0x1007510ad*/
    if ( v165[0].i64[0] ) /*0x1007510b7*/
    {
      v70 = v165[1].i64[0]; /*0x1007510bd*/
      if ( v165[1].i64[0] ) /*0x1007510c7*/
      {
        v71 = v164; /*0x1007510cd*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v164)); /*0x1007510de*/
        v73 = v164 + 1; /*0x1007510e1*/
        do /*0x100751100*/
        {
          if ( !(_WORD)_R13D ) /*0x100751106*/
          {
            do /*0x10075112c*/
            {
              v74 = _mm_movemask_epi8(_mm_load_si128(v73)); /*0x100751115*/
              v71 -= 24; /*0x10075111a*/
              ++v73; /*0x100751121*/
            }
            while ( v74 == 0xFFFF ); /*0x10075112c*/
            _R13D = ~v74; /*0x10075112e*/
          }
          __asm { tzcnt eax, r13d } /*0x100751131*/
          v75 = -3 * _RAX; /*0x100751139*/
          v76 = *((_QWORD *)&v71[-1] + v75 - 1); /*0x10075113d*/
          if ( v76 ) /*0x100751145*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71[-1].i64[v75], v76, 1); /*0x100751154*/
          --v70; /*0x1007510f0*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1007510f7*/
          _R13D &= _R13D - 1; /*0x1007510fa*/
        }
        while ( v70 ); /*0x100751100*/
      }
      v77 = (24 * v69 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100751167*/
      v78 = v77 + v69 + 17; /*0x10075116e*/
      if ( v78 ) /*0x100751172*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v164 - v77, v78, 16); /*0x100751186*/
    }
    v79 = v147; /*0x10075118b*/
    v156 = v147; /*0x100751192*/
    si128 = 0u; /*0x100751199*/
    v158 = 0; /*0x1007511af*/
    if ( v168 ) /*0x1007511bf*/
    {
      if ( !v147 ) /*0x1007511c4*/
        goto LABEL_85; /*0x1007511c4*/
      (*(void (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64))(v159 + 40))(v168, 0, v147); /*0x1007511da*/
    }
    v80 = *((const __m128i **)&v146 + 1); /*0x1007511dd*/
    if ( v79 > 7 ) /*0x1007511e8*/
    {
      // 待清理 rollout 数 > 7：走 rayon_core::registry 线程池并行 cleanup_private_reasoning_items_in_existing_rollout
      v143 = v168; /*0x1007511f2*/
      v144 = v159; /*0x100751200*/
      v164 = nullptr; /*0x100751207*/
      v165[0].i64[1] = 4; /*0x100751212*/
      v165[1].i64[0] = 0; /*0x10075121d*/
      v165[2].i64[0] = 1; /*0x100751228*/
      v165[2].i64[1] = (__int64)&anon_c267236184b514dd3bb615f659186bd4_6; /*0x10075123a*/
      v165[3].i64[0] = 0; /*0x100751241*/
      v165[4].i64[0] = 0; /*0x10075124c*/
      v165[5].i16[0] = 0; /*0x100751257*/
      rayon_core::registry::Registry::new::h986a0e8e90377841(v155, &v164, *((_QWORD *)&v64 + 1)); /*0x10075126e*/
      // ... [其余并行/串行分支与结尾详见完整反编译文本，逻辑同上层描述：并行池创建成功走 in_worker 并行汇总耗时/失败计数，
      //      失败则走串行 do-while 逐条清理并记录耗时；两分支均在末尾对 si128/v158 累加统计，随后写回 a1 结果结构体]
      goto LABEL_108;
    }
    // 待清理 rollout 数 <= 7：串行 do-while 调用 cleanup_private_reasoning_items_in_existing_rollout，同时经 a5(vtable)+40 逐条上报进度
    if ( v79 ) /*0x10075134c*/
    {
      v162 = 24 * v79; /*0x10075135e*/
      goto LABEL_108;
    }
LABEL_85:
    v172[0] = 0; /*0x1007513ff*/
    v84 = 0; /*0x100751408*/
LABEL_108:
    si128 = _mm_load_si128(v172); /*0x1007516e7*/
    v158 = v84; /*0x1007516f4*/
    // 若清理过程中出现失败计数(v84非零或si128非零)且日志级别>=3(debug)，走 log::__private_api::log 记录
    // "src/core/relay/codex_thread_visibility.rs" ("::phase_split") 处的 debug 日志。
    v46 = 1; /*0x1007518c2*/
LABEL_119:
    v100 = std::time::Instant::elapsed::h457f209775ed485c(&v122); /*0x1007518c7*/
    // format_inner 汇总五段耗时(u128) + rollout 计数(usize)，写入 app_event("thread_reconcile", "phase_split") 上报。
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v118, &unk_10186020B, &v164); /*0x1007519af*/
    codexmate_lib::platform::debug_log::app_event::hb05f8873cac9750a( /*0x1007519d3*/
      "thread_reconcileimage generationconnection resetlastAsrErrorCodecannot_be_a_basecontent-encodingcontent-languagecontent-locationwww-authenticatex-xss-protectionIllegalEventNameTokioOneshotRecvTauri-Channel-IdTauri-Invoke-Keytauri_utils::Env",
      16,
      "phase_split",
      11,
      v118);
    // 组装最终 ThreadReconcileSummary（a1 输出结构体）：patch_applied(v152)/fallback_applied(v46)/converge summary/reasoning-cleanup counts 全部打包，
    // 清理 v148/v149/v150 hashmap，返回 a1。
    v62 = v169; /*0x100751b60*/
    if ( v26 != 0x8000000000000000LL ) /*0x100751b64*/
    {
      v63 = *v169; /*0x100751b66*/
      if ( *v169 ) /*0x100751b66*/
        goto LABEL_51; /*0x100751b6c*/
    }
    return v160; /*0x100751b6c*/
  }
  v10 = (__int64 *)v160; /*0x1007508e0*/
  qmemcpy(&v160->u64[1], v155, 0x60u); /*0x1007508f7*/
  *v10 = 2; /*0x1007508fa*/
  v11 = v119[3]; /*0x100750901*/
  if ( v119[3] != 0x8000000000000000LL ) /*0x100750915*/
  {
LABEL_4:
    if ( v11 ) /*0x10075091e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119[4], v11, 1); /*0x100750930*/
  }
LABEL_42:
  v58 = v119[1]; /*0x100750f72*/
  v59 = v119[2]; /*0x100750f79*/
  if ( v119[2] ) /*0x100750f83*/
  {
    v60 = (_QWORD *)(v119[1] + 8LL); /*0x100750f85*/
    do /*0x100750f97*/
    {
      v61 = *(v60 - 1); /*0x100750f99*/
      if ( v61 ) /*0x100750fa0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v60, v61, 1); /*0x100750faa*/
      v60 += 3; /*0x100750f90*/
      --v59; /*0x100750f94*/
    }
    while ( v59 ); /*0x100750f97*/
  }
  if ( v119[0] ) /*0x100750fbb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, 24LL * v119[0], 8); /*0x100750fcd*/
LABEL_49:
  v62 = v169; /*0x100750fd2*/
  v63 = *v169; /*0x100750fd6*/
  if ( *v169 != 0x8000000000000000LL && v63 ) /*0x100750fef*/
LABEL_51:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62[1], v63, 1); /*0x100750ff5*/
  return v160; /*0x100751b79*/
}
