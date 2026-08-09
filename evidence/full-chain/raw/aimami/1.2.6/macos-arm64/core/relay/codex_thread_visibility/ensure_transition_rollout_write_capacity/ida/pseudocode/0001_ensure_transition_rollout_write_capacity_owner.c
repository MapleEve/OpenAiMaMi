// codexmate_lib::core::relay::codex_thread_visibility::ensure_transition_rollout_write_capacity
// owner_ea: 0x10076d070, size: 0x17a4
// source: ida decompile (mac 1.2.6 IDB, hexrays_ready=true)
// binary_sha256: 1.2.6-mac-arm64
// session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
// notes: Preflight disk capacity: statvfs + rollout paths + codex DBs + sum sizes + compare

// 1.2.4→1.2.6 delta 新增函数: 确保线程切换 rollout 写入容量。调用 fs2::unix::statvfs 检查磁盘空间,遍历 all_codex_state_dbs 收集容量,排序累加比对阈值。调用 collect_active_rollout_paths/open_codex_db_readonly/collect_provider_convergence_targets/find_trusted_rollout_backup。A-level owner for codex_thread_visibility::ensure_transition_rollout_write_capacity
_QWORD *__fastcall codexmate_lib::core::relay::codex_thread_visibility::ensure_transition_rollout_write_capacity::h39350a27a66ec1f9(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  void *v3; // r14
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rsi
  void *v8; // rdi
  _QWORD *v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rbx
  const __m128i *v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // r14
  unsigned __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // r14
  __int64 v26; // rsi
  unsigned __int64 v27; // r14
  _QWORD *v28; // r13
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // rdi
  __int64 *v35; // r15
  __int64 *v36; // rax
  __int64 v37; // r12
  __int64 (__fastcall *v38)(_QWORD, _QWORD); // rdx
  __int64 v39; // rbx
  __int64 v40; // rsi
  __int64 v41; // r12
  __int64 v42; // rax
  __int8 *v43; // rdx
  __int64 v44; // rax
  int v45; // eax
  bool v46; // bl
  __int64 v47; // r13
  __int64 v48; // r14
  __int64 v49; // r15
  __int64 v50; // rbx
  int v51; // eax
  __int64 v52; // r15
  __int64 v53; // rax
  unsigned __int64 *v54; // rsi
  __int64 v55; // r14
  __int64 v56; // rbx
  __int64 v57; // rsi
  __int64 v58; // rbx
  __int64 v59; // rax
  unsigned __int64 v60; // r14
  __int8 *v61; // rsi
  _QWORD *v62; // rax
  char *v63; // r14
  __int64 v64; // rbx
  __int64 v65; // r15
  __int64 v66; // rsi
  __int64 v67; // rax
  unsigned __int64 v68; // rbx
  __int64 **v69; // r15
  __int64 v71; // rbx
  __int64 v72; // r14
  const __m128i *v73; // r15
  const __m128i *v75; // r12
  int v76; // r13d
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  __int64 v79; // rbx
  unsigned __int64 v80; // rbx
  size_t v81; // r12
  __int64 v82; // r15
  void *v83; // r13
  unsigned __int64 v84; // r14
  __int64 v85; // rax
  __int64 v86; // rdi
  unsigned __int64 v87; // r15
  bool v88; // cf
  unsigned __int64 v89; // r14
  unsigned __int64 *v90; // rdi
  unsigned __int64 v91; // rbx
  const __m128i *v92; // rbx
  unsigned __int64 v93; // r15
  unsigned __int64 v94; // r15
  unsigned __int64 v95; // rdx
  _QWORD *v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rsi
  unsigned __int64 *v100; // rsi
  unsigned __int64 v101; // rax
  unsigned __int64 *v102; // rax
  unsigned __int64 *v103; // rcx
  unsigned __int64 *v104; // rdx
  unsigned __int64 *v105; // r10
  unsigned __int64 *v106; // r8
  unsigned __int64 v107; // rdi
  unsigned __int64 v108; // rsi
  unsigned __int64 v109; // rdi
  unsigned __int64 v110; // rsi
  unsigned __int64 *v111; // r9
  unsigned __int64 *v112; // r8
  unsigned __int64 *v113; // r9
  __int64 v114; // r14
  __int64 v115; // r14
  __int64 v116; // r14
  _BYTE v117[24]; // [rsp+8h] [rbp-3C8h] BYREF
  _QWORD v118[3]; // [rsp+20h] [rbp-3B0h] BYREF
  _QWORD v119[3]; // [rsp+38h] [rbp-398h] BYREF
  _QWORD *v120; // [rsp+50h] [rbp-380h]
  __int64 v121; // [rsp+58h] [rbp-378h]
  __int64 v122; // [rsp+60h] [rbp-370h]
  _QWORD v123[14]; // [rsp+68h] [rbp-368h] BYREF
  __int64 v124; // [rsp+D8h] [rbp-2F8h]
  __int64 v125; // [rsp+E0h] [rbp-2F0h]
  __int64 v126; // [rsp+E8h] [rbp-2E8h]
  __int64 v127; // [rsp+F0h] [rbp-2E0h]
  _QWORD v128[12]; // [rsp+F8h] [rbp-2D8h] BYREF
  const __m128i *v129; // [rsp+158h] [rbp-278h] BYREF
  __int64 v130; // [rsp+160h] [rbp-270h]
  __int64 v131; // [rsp+168h] [rbp-268h]
  __int64 v132; // [rsp+170h] [rbp-260h]
  __int64 v133; // [rsp+178h] [rbp-258h]
  __int64 v134; // [rsp+180h] [rbp-250h]
  __int64 *v135; // [rsp+188h] [rbp-248h]
  __int64 v136; // [rsp+190h] [rbp-240h]
  __int64 v137; // [rsp+198h] [rbp-238h]
  __int64 *v138; // [rsp+1A0h] [rbp-230h]
  unsigned __int64 v139; // [rsp+1A8h] [rbp-228h]
  __int64 v140; // [rsp+1B0h] [rbp-220h]
  void *__src; // [rsp+1B8h] [rbp-218h]
  unsigned __int64 v142; // [rsp+1C0h] [rbp-210h]
  unsigned __int64 v143; // [rsp+1C8h] [rbp-208h]
  __int64 v144; // [rsp+1D0h] [rbp-200h] BYREF
  __int64 v145; // [rsp+1D8h] [rbp-1F8h] BYREF
  _QWORD v146[12]; // [rsp+1E0h] [rbp-1F0h] BYREF
  _QWORD *v147; // [rsp+240h] [rbp-190h] BYREF
  __int64 (__fastcall *v148)(_QWORD, _QWORD); // [rsp+248h] [rbp-188h]
  __int64 v149; // [rsp+250h] [rbp-180h]
  __int64 v150; // [rsp+258h] [rbp-178h]
  __int64 v151; // [rsp+260h] [rbp-170h] BYREF
  _QWORD *v152; // [rsp+268h] [rbp-168h] BYREF
  __int64 (__fastcall *v153)(_QWORD, _QWORD); // [rsp+270h] [rbp-160h]
  __int64 *v154; // [rsp+278h] [rbp-158h]
  __int64 (__fastcall *v155)(); // [rsp+280h] [rbp-150h]
  __int64 v156; // [rsp+288h] [rbp-148h] BYREF
  __int64 v157; // [rsp+290h] [rbp-140h]
  unsigned __int64 v158; // [rsp+298h] [rbp-138h]
  unsigned __int64 v159; // [rsp+2A0h] [rbp-130h]
  __int64 v160; // [rsp+2A8h] [rbp-128h]
  __int64 v161; // [rsp+2B0h] [rbp-120h]
  __int64 v162; // [rsp+2B8h] [rbp-118h]
  _QWORD *v163; // [rsp+2C0h] [rbp-110h]
  __int64 (__fastcall *v164)(_QWORD, _QWORD); // [rsp+2C8h] [rbp-108h]
  _QWORD v165[19]; // [rsp+2D0h] [rbp-100h] BYREF
  __int64 v166; // [rsp+368h] [rbp-68h]
  __int8 *v167; // [rsp+370h] [rbp-60h]
  __int64 v168; // [rsp+378h] [rbp-58h]
  int v169; // [rsp+384h] [rbp-4Ch]
  _QWORD *v170; // [rsp+388h] [rbp-48h]
  unsigned __int64 *v171; // [rsp+390h] [rbp-40h]
  __int64 v172; // [rsp+398h] [rbp-38h]
  _BYTE v173[41]; // [rsp+3A7h] [rbp-29h] BYREF

  v163 = a1;
  fs2::unix::statvfs::h65ac62c3d7046d75(v165, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( LOBYTE(v165[0]) )
  {
    v2 = v165[1];
    v146[0] = v165[1];
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      v123[0] = v146;
      v123[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
      v165[6] = 2;
      v165[7] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
      v165[8] = 51;
      v165[10] = &unk_1018615C4;
      v165[11] = v123;
      v165[0] = 0;
      v165[1] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
      v165[2] = 51;
      v165[3] = 0;
      v165[4] = "src/core/relay/codex_thread_visibility.rs";
      v165[5] = 41;
      v165[9] = 0x24600000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, v165);
      v2 = v146[0];
    }
    *v163 = 11;
    if ( (v2 & 3) == 1 )
    {
      v3 = (void *)(v2 - 1);
      v4 = *(_QWORD *)(v2 - 1);
      v5 = *(_QWORD *)(v2 + 7);
      if ( *(_QWORD *)v5 )
        (*(void (__fastcall **)(__int64))v5)(v4);
      v6 = *(_QWORD *)(v5 + 8);
      if ( v6 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16));
      v7 = 24;
      v8 = v3;
      goto LABEL_187;
    }
    return v163;
  }
  v139 = v165[2];
  v156 = 0;
  v157 = 8;
  v158 = 0;
  v159 = 0;
  v160 = 0;
  v161 = 0;
  codexmate_lib::core::relay::codex_thread_visibility::collect_active_rollout_paths::h9bb933b8b6b262a7(v165, a2);
  v166 = a2;
  v9 = (_QWORD *)v165[0];
  v10 = v165[1];
  v146[0] = v165[1];
  v146[1] = v165[1];
  v146[2] = v165[0];
  v171 = (unsigned __int64 *)(v165[1] + 24LL * v165[2]);
  v146[3] = v171;
  v11 = v165[1];
  if ( !v165[2] )
    goto LABEL_40;
  v170 = (_QWORD *)v165[0];
  v172 = v165[1];
  v11 = v165[1] + 24LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v11 - 24);
    if ( v13 == 0x8000000000000000LL )
      break;
    v14 = *(_QWORD *)(v11 - 16);
    v15 = *(_QWORD *)(v11 - 8);
    std::sys::fs::metadata::h32fa16d3052ea535(v165, v14, v15);
    v16 = (const __m128i *)v165[1];
    if ( LOBYTE(v165[0]) )
    {
      if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v165[1], v14) )
      {
        v129 = v16;
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
        {
          v128[0] = v14;
          v128[1] = v15;
          v123[0] = v128;
          v123[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
          v123[2] = &v129;
          v123[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
          v165[6] = 2;
          v165[7] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
          v165[8] = 51;
          v165[10] = &unk_1018610C1;
          v165[11] = v123;
          v165[0] = 0;
          v165[1] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
          v165[2] = 51;
          v165[3] = 0;
          v165[4] = "src/core/relay/codex_thread_visibility.rs";
          v165[5] = 41;
          v165[9] = 0x28100000001LL;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, v165);
          v16 = v129;
        }
        if ( ((unsigned __int8)v16 & 3) == 1 )
        {
          v167 = &v16[-1].i8[15];
          v17 = *(__int64 *)((char *)&v16[-1].i64[1] + 7);
          v18 = *(__int64 *)((char *)v16->i64 + 7);
          if ( *(_QWORD *)v18 )
            (*(void (__fastcall **)(__int64))v18)(v17);
          v19 = *(_QWORD *)(v18 + 8);
          if ( v19 )
          {
            v20 = *(_QWORD *)(v18 + 16);
            v21 = v17;
            goto LABEL_35;
          }
          goto LABEL_36;
        }
      }
      else if ( ((unsigned __int8)v16 & 3) == 1 )
      {
        v167 = &v16[-1].i8[15];
        v24 = *(__int64 *)((char *)v16->i64 + 7);
        v25 = *(__int64 *)((char *)&v16[-1].i64[1] + 7);
        if ( *(_QWORD *)v24 )
          (*(void (__fastcall **)(__int64))v24)(v25);
        v19 = *(_QWORD *)(v24 + 8);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v24 + 16);
          v21 = v25;
LABEL_35:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v19, v20);
        }
LABEL_36:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v167, 24, 8);
        if ( !v13 )
          goto LABEL_12;
LABEL_30:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1);
        goto LABEL_12;
      }
    }
    else if ( (v165[1] & 0xF00000000000LL) == 0x800000000000LL )
    {
      v22 = v165[13];
      v23 = v158;
      if ( v158 == v156 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h3bf305f7801a4895(&v156);
      *(_QWORD *)(v157 + 8 * v23) = v22;
      v158 = v23 + 1;
      if ( !v13 )
        goto LABEL_12;
      goto LABEL_30;
    }
    if ( v13 )
      goto LABEL_30;
LABEL_12:
    v12 = v11 - 24;
    v11 += 24;
    if ( (unsigned __int64 *)(v12 + 24) == v171 )
    {
      v11 = (__int64)v171;
      break;
    }
  }
  v146[1] = v11;
  v10 = v172;
  v9 = v170;
LABEL_40:
  v26 = (__int64)v171;
  if ( v171 != (unsigned __int64 *)v11 )
  {
    v27 = ((unsigned __int64)v171 - v11) / 0x18;
    v28 = (_QWORD *)(v11 + 8);
    do
    {
      v26 = *(v28 - 1);
      if ( v26 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v28, v26, 1);
      v28 += 3;
      --v27;
    }
    while ( v27 );
  }
  if ( v9 )
  {
    v26 = 24LL * (_QWORD)v9;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 24LL * (_QWORD)v9, 8);
  }
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v30 = v29;
  v31 = v166;
  if ( *(_BYTE *)(v29 + 16) == 1 )
  {
    v32 = *(_QWORD *)v29;
    v33 = *(_QWORD *)(v30 + 8);
  }
  else
  {
    v32 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v26);
    *(_QWORD *)v30 = v32;
    *(_QWORD *)(v30 + 8) = v33;
    *(_BYTE *)(v30 + 16) = 1;
  }
  *(_QWORD *)v30 = v32 + 1;
  v132 = 0;
  v131 = 0;
  v130 = 0;
  v129 = (const __m128i *)anon_3f0cee2931c58d8d540c26f0254bc451_21;
  v133 = v32;
  v134 = v33;
  v34 = v165;
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h5e7bd6dd24ba9af8(v165, v31);
  v35 = (__int64 *)v165[1];
  v119[2] = v165[1];
  v120 = (_QWORD *)v165[1];
  v127 = v165[0];
  v121 = v165[0];
  v136 = v165[1] + 24LL * v165[2];
  v122 = v136;
  v138 = (__int64 *)v165[1];
  if ( v165[2] )
  {
    v125 = *(_QWORD *)(v31 + 344);
    v126 = *(_QWORD *)(v31 + 352);
    v36 = v138;
    while ( 1 )
    {
      v135 = v36 + 3;
      v120 = v36 + 3;
      v37 = *v36;
      if ( *v36 == 0x8000000000000000LL )
        break;
      v38 = (__int64 (__fastcall *)(_QWORD, _QWORD))v36[2];
      v170 = (_QWORD *)v36[1];
      v164 = v38;
      std::sys::fs::metadata::h32fa16d3052ea535(v165, v170, v38);
      v39 = v165[0];
      v40 = v165[1];
      v34 = (__int64 *)v165[0];
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9cabf27c050b892b(
        v165[0],
        v165[1]);
      if ( !v39 )
      {
        codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_readonly::ha50352b21fb20f0c(v165, v170, v164);
        if ( LOBYTE(v165[13]) == 3 )
        {
          qmemcpy(v146, v165, sizeof(v146));
          v40 = (__int64)&v165[12];
          v34 = v146;
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
          {
            v152 = v170;
            v153 = v164;
            v128[0] = &v152;
            v128[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
            v128[2] = v146;
            v128[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
            v123[6] = 2;
            v123[7] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
            v123[8] = 51;
            v123[10] = &unk_10186107C;
            v123[11] = v128;
            v123[0] = 0;
            v123[1] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
            v123[2] = 51;
            v123[3] = 0;
            v123[4] = "src/core/relay/codex_thread_visibility.rs";
            v123[5] = 41;
            v123[9] = 0x29100000001LL;
            v40 = (__int64)v123;
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, v123);
            v34 = v146;
          }
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v146);
        }
        else
        {
          qmemcpy(v123, v165, sizeof(v123));
          v40 = (__int64)v123;
          codexmate_lib::core::relay::codex_thread_visibility::collect_provider_convergence_targets::h32f4c6598fe1d7ae(
            v128,
            v123);
          if ( LODWORD(v128[0]) == 11 )
          {
            v168 = v37;
            v41 = v128[2];
            v147 = (_QWORD *)v128[2];
            v148 = (__int64 (__fastcall *)(_QWORD, _QWORD))v128[2];
            v149 = v128[1];
            v162 = v128[2] + 72LL * v128[3];
            v150 = v162;
            if ( v128[3] )
            {
              v169 = 0;
              while ( 2 )
              {
                v41 += 72;
LABEL_63:
                v43 = *(__int8 **)(v41 - 72);
                v44 = *(_QWORD *)(v41 - 64);
                v128[7] = *(_QWORD *)(v41 - 8);
                v128[6] = *(_QWORD *)(v41 - 16);
                v128[5] = *(_QWORD *)(v41 - 24);
                v128[4] = *(_QWORD *)(v41 - 32);
                v128[3] = *(_QWORD *)(v41 - 40);
                v128[2] = *(_QWORD *)(v41 - 48);
                v128[1] = *(_QWORD *)(v41 - 56);
                v128[0] = v44;
                if ( v43 == (__int8 *)0x8000000000000000LL )
                {
LABEL_113:
                  v148 = (__int64 (__fastcall *)(_QWORD, _QWORD))v41;
                  goto LABEL_114;
                }
                v167 = v43;
                v146[0] = v43;
                v146[8] = v128[7];
                v146[7] = v128[6];
                v146[6] = v128[5];
                v146[5] = v128[4];
                v146[4] = v128[3];
                v146[3] = v128[2];
                v146[2] = v128[1];
                v146[1] = v128[0];
                v45 = v128[5];
                v172 = v128[5];
                v46 = v128[5] == 0x8000000000000000LL;
                if ( v128[5] == 0x8000000000000000LL )
                {
                  LOBYTE(v45) = 1;
                  v169 = v45;
                  v61 = v167;
                  if ( v167 )
                    goto LABEL_96;
                  goto LABEL_97;
                }
                v47 = v146[7];
                v48 = v146[8];
                std::sys::fs::metadata::h32fa16d3052ea535(v165, v146[7], v146[8]);
                v49 = v165[0];
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9cabf27c050b892b(
                  v165[0],
                  v165[1]);
                if ( !v49 )
                  goto LABEL_95;
                v50 = v146[1];
                codexmate_lib::core::relay::codex_thread_visibility::find_trusted_rollout_backup::h1c91745bac118943(
                  v165,
                  v125,
                  v126,
                  v146[1],
                  v146[2],
                  v47,
                  v48);
                v51 = 0;
                if ( v165[0] == 0x8000000000000000LL )
                {
                  v46 = 0;
                  LOBYTE(v51) = 1;
                  v169 = v51;
LABEL_95:
                  v61 = v167;
                  if ( v167 )
LABEL_96:
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146[1], v61, 1);
LABEL_97:
                  if ( !v46 && v172 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146[7], v172, 1);
                  v40 = v146[3];
                  if ( v146[3] )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146[4], v146[3], 1);
                  if ( v41 == v162 )
                  {
LABEL_112:
                    v41 = v162;
                    goto LABEL_113;
                  }
                  continue;
                }
                break;
              }
              v124 = v50;
              v171 = (unsigned __int64 *)v165[0];
              v166 = v165[1];
              v52 = v165[2];
              codexmate_lib::core::relay::codex_thread_visibility::rollout_path_identity::hdedbd6ba38eb2d9a(
                v165,
                v47,
                v48);
              if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h4bca271eb439b48f(&v129, v165) )
              {
                if ( v171 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v171, 1);
                v46 = 0;
                v61 = v167;
                if ( v167 )
                  goto LABEL_96;
                goto LABEL_97;
              }
              std::sys::fs::metadata::h32fa16d3052ea535(v165, v166, v52);
              v53 = v165[1];
              if ( LOBYTE(v165[0]) )
              {
                v151 = v165[1];
                if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
                {
                  v119[0] = v166;
                  v119[1] = v52;
                  v152 = v119;
                  v153 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
                  v154 = &v151;
                  v155 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
                  v165[6] = 2;
                  v165[7] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
                  v165[8] = 51;
                  v165[10] = &unk_101860FF2;
                  v165[11] = &v152;
                  v165[0] = 0;
                  v165[1] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
                  v165[2] = 51;
                  v165[3] = 0;
                  v165[4] = "src/core/relay/codex_thread_visibility.rs";
                  v165[5] = 41;
                  v165[9] = 0x2BC00000001LL;
                  _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, v165);
                  v53 = v151;
                }
                v54 = v171;
                if ( (v53 & 3) == 1 )
                {
                  v137 = v53 - 1;
                  v55 = *(_QWORD *)(v53 - 1);
                  v56 = *(_QWORD *)(v53 + 7);
                  if ( *(_QWORD *)v56 )
                    (*(void (__fastcall **)(__int64, unsigned __int64 *))v56)(v55, v171);
                  v57 = *(_QWORD *)(v56 + 8);
                  if ( v57 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v57, *(_QWORD *)(v56 + 16));
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137, 24, 8);
                  goto LABEL_83;
                }
              }
              else
              {
                v54 = v171;
                if ( (v165[1] & 0xF00000000000LL) == 0x800000000000LL )
                {
                  v58 = v165[13];
                  v59 = v165[13] + v159;
                  if ( __CFADD__(v165[13], v159) )
                    v59 = -1;
                  v159 = v59;
                  v60 = v158;
                  if ( v158 == v156 )
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h3bf305f7801a4895(&v156);
                  *(_QWORD *)(v157 + 8 * v60) = v58;
                  v158 = v60 + 1;
                  ++v160;
LABEL_83:
                  v54 = v171;
                }
              }
              if ( v54 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v54, 1);
              if ( v167 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v124, v167, 1);
              if ( v172 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v172, 1);
              v40 = v146[3];
              if ( v146[3] )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146[4], v146[3], 1);
              v42 = v41 - 72;
              v41 += 72;
              if ( v42 + 72 == v162 )
                goto LABEL_112;
              goto LABEL_63;
            }
            v169 = 0;
LABEL_114:
            v37 = v168;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1bf28a1d4da96a61(&v147);
            if ( (v169 & 1) != 0 )
            {
              v40 = (__int64)v170;
              std::sys::fs::metadata::h32fa16d3052ea535(v165, v170, v164);
              v62 = (_QWORD *)v165[1];
              if ( LOBYTE(v165[0]) )
              {
                v152 = (_QWORD *)v165[1];
                if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
                {
                  v128[0] = v170;
                  v128[1] = v164;
                  v146[0] = v128;
                  v146[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
                  v146[2] = &v152;
                  v146[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
                  v165[6] = 2;
                  v165[7] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
                  v165[8] = 51;
                  v165[10] = &unk_101860FB2;
                  v165[11] = v146;
                  v165[0] = 0;
                  v165[1] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
                  v165[2] = 51;
                  v165[3] = 0;
                  v165[4] = "src/core/relay/codex_thread_visibility.rs";
                  v165[5] = 41;
                  v165[9] = 0x2CC00000001LL;
                  v40 = (__int64)v165;
                  _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, v165);
                  v62 = v152;
                }
                if ( ((unsigned __int8)v62 & 3) == 1 )
                {
                  v63 = (char *)v62 - 1;
                  v64 = *(_QWORD *)((char *)v62 - 1);
                  v65 = *(_QWORD *)((char *)v62 + 7);
                  if ( *(_QWORD *)v65 )
                    (*(void (__fastcall **)(__int64))v65)(v64);
                  v66 = *(_QWORD *)(v65 + 8);
                  if ( v66 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v66, *(_QWORD *)(v65 + 16));
                  v40 = 24;
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, 24, 8);
                }
              }
              else if ( (v165[1] & 0xF00000000000LL) == 0x800000000000LL )
              {
                v67 = v159 + v165[13];
                if ( __CFADD__(v159, v165[13]) )
                  v67 = -1;
                v159 = v67;
                ++v161;
              }
            }
          }
          else
          {
            qmemcpy(v146, v128, sizeof(v146));
            v40 = (__int64)&v129;
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
            {
              v147 = v170;
              v148 = v164;
              v152 = &v147;
              v153 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
              v154 = v146;
              v155 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
              v165[6] = 2;
              v165[7] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
              v165[8] = 51;
              v165[10] = &unk_10186103A;
              v165[11] = &v152;
              v165[0] = 0;
              v165[1] = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
              v165[2] = 51;
              v165[3] = 0;
              v165[4] = "src/core/relay/codex_thread_visibility.rs";
              v165[5] = 41;
              v165[9] = 0x29B00000001LL;
              v40 = (__int64)v165;
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, v165);
            }
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v146);
          }
          v34 = v123;
          core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h8df56ae24f7c4734(v123);
        }
      }
      if ( v37 )
      {
        v34 = v170;
        v40 = v37;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v170, v37, 1);
      }
      v36 = v135;
      if ( v135 == (__int64 *)v136 )
        goto LABEL_137;
    }
    v35 = v135;
  }
  v40 = v136;
  if ( (__int64 *)v136 != v35 )
  {
    v68 = (v136 - (__int64)v35) / 0x18uLL;
    v69 = (__int64 **)(v35 + 1);
    do
    {
      v40 = (__int64)*(v69 - 1);
      if ( v40 )
      {
        v34 = *v69;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v69, v40, 1);
      }
      v69 += 3;
      --v68;
    }
    while ( v68 );
  }
LABEL_137:
  if ( v127 )
  {
    v40 = 24 * v127;
    v34 = v138;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v138, 24 * v127, 8);
  }
  v140 = v156;
  __src = (void *)v157;
  v142 = v158;
  v143 = v159;
  v144 = v160;
  HIDWORD(_RAX) = HIDWORD(v161);
  v145 = v161;
  v71 = v130;
  if ( v130 )
  {
    v72 = v132;
    if ( v132 )
    {
      v73 = v129;
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v129));
      v75 = v129 + 1;
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v76 = _mm_movemask_epi8(_mm_load_si128(v75));
            v73 -= 24;
            ++v75;
          }
          while ( v76 == 0xFFFF );
          _R13D = ~v76;
        }
        __asm { tzcnt   eax, r13d }
        v77 = -3 * _RAX;
        v40 = *((_QWORD *)&v73[-1] + v77 - 1);
        if ( v40 )
        {
          v34 = (__int64 *)v73[-1].i64[v77];
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v40, 1);
        }
        --v72;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v72 );
    }
    v78 = (24 * v71 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v79 = v78 + v71 + 17;
    if ( v79 )
    {
      v34 = (__int64 *)((char *)v129->i64 - v78);
      v40 = v79;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v129 - v78, v79, 16);
    }
  }
  v80 = v142;
  v81 = 8 * v142;
  if ( v142 >> 61 != 0 || 8 * v142 > 0x7FFFFFFFFFFFFFF8LL )
  {
    v82 = 0;
    goto LABEL_152;
  }
  v83 = __src;
  v84 = v143;
  if ( v81 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v34, v40);
    v82 = 8;
    v85 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v81, 8);
    if ( !v85 )
LABEL_152:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v82, v81);
    v86 = v85;
    v87 = v80;
  }
  else
  {
    v86 = 8;
    v87 = 0;
  }
  v171 = (unsigned __int64 *)v86;
  memcpy((void *)v86, v83, v81);
  v165[0] = v173;
  if ( v80 < 2 )
  {
LABEL_158:
    v88 = __CFADD__(v84, 0x10000000);
    v89 = v84 + 0x10000000;
    if ( v88 )
      v89 = -1;
    if ( v80 )
    {
      v90 = v171;
      v88 = __CFADD__(*v171, v89);
      v89 += *v171;
      if ( v88 )
        v89 = -1;
      if ( v80 != 1 )
      {
        v88 = __CFADD__(v171[1], v89);
        v89 += v171[1];
        if ( v88 )
          v89 = -1;
        if ( v80 != 2 )
        {
          v88 = __CFADD__(v171[2], v89);
          v89 += v171[2];
          if ( v88 )
            v89 = -1;
          if ( v80 != 3 )
            goto LABEL_170;
        }
      }
    }
    else
    {
      v90 = v171;
    }
    goto LABEL_174;
  }
  if ( v80 < 0x15 )
  {
    v100 = v171;
    if ( (v80 & 1) != 0 )
    {
      v102 = v171 + 1;
    }
    else
    {
      v101 = v171[1];
      if ( *v171 < v101 )
      {
        v171[1] = *v171;
        *v100 = v101;
        v100 = v171;
      }
      v102 = v100 + 2;
    }
    if ( v81 == 16 )
      goto LABEL_158;
    v103 = &v171[v80];
    v104 = v102 + 1;
    v105 = v171;
    while ( 2 )
    {
      v107 = *(v102 - 1);
      v108 = *v102;
      if ( v107 < *v102 )
      {
        v111 = v102;
        while ( 1 )
        {
          v112 = v111 - 1;
          *v111 = v107;
          if ( v111 - 1 == v105 )
            break;
          v107 = *(v111 - 2);
          --v111;
          if ( v107 >= v108 )
            goto LABEL_209;
        }
        v112 = v105;
LABEL_209:
        *v112 = v108;
        v109 = *v102;
        v110 = v102[1];
        if ( *v102 < v110 )
        {
LABEL_210:
          v113 = v104;
          while ( 1 )
          {
            v106 = v113 - 1;
            *v113 = v109;
            if ( v113 - 1 == v105 )
              break;
            v109 = *(v113 - 2);
            --v113;
            if ( v109 >= v110 )
              goto LABEL_199;
          }
          v106 = v105;
LABEL_199:
          *v106 = v110;
        }
      }
      else
      {
        v109 = *v102;
        v110 = v102[1];
        if ( *v102 < v110 )
          goto LABEL_210;
      }
      v102 += 2;
      v104 += 2;
      if ( v102 == v103 )
        goto LABEL_158;
      continue;
    }
  }
  core::slice::sort::unstable::ipnsort::h96193d687e41ab3c(v171, v80, v165);
  v88 = __CFADD__(v84, 0x10000000);
  v114 = v84 + 0x10000000;
  if ( v88 )
    v114 = -1;
  v90 = v171;
  v88 = __CFADD__(*v171, v114);
  v115 = *v171 + v114;
  if ( v88 )
    v115 = -1;
  v88 = __CFADD__(v171[1], v115);
  v116 = v171[1] + v115;
  if ( v88 )
    v116 = -1;
  v88 = __CFADD__(v171[2], v116);
  v89 = v171[2] + v116;
  if ( v88 )
    v89 = -1;
LABEL_170:
  v88 = __CFADD__(v90[3], v89);
  v89 += v90[3];
  if ( v88 )
    v89 = -1;
LABEL_174:
  if ( v87 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, 8 * v87, 8);
  v91 = v139 + 0xFFFFF;
  if ( v139 >= 0xFFFFFFFFFFF00001LL )
    v91 = -1;
  v92 = (const __m128i *)(v91 >> 20);
  v129 = v92;
  v93 = v89 + 0xFFFFF;
  if ( v89 >= 0xFFFFFFFFFFF00001LL )
    v93 = -1;
  v94 = v93 >> 20;
  v128[0] = v94;
  v95 = v143 + 0xFFFFF;
  v146[0] = v142;
  if ( v143 >= 0xFFFFFFFFFFF00001LL )
    v95 = -1;
  v123[0] = v95 >> 20;
  v165[0] = &v129;
  v165[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  v165[2] = v128;
  v165[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  v165[4] = v146;
  v165[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  v165[6] = v123;
  v165[7] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  v165[8] = &v144;
  v165[9] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  v165[10] = &v145;
  v165[11] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  v165[12] = &unk_1016EF0A8;
  v165[13] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v117, &unk_101861457, v165);
  codexmate_lib::platform::debug_log::app_event::hb05f8873cac9750a(
    "router_transitioncapacity_preflight",
    17,
    "capacity_preflight",
    18,
    v117);
  if ( v139 >= v89 )
  {
    *v163 = 11;
    v98 = v140;
    if ( v140 )
      goto LABEL_186;
  }
  else
  {
    v146[0] = v94;
    v123[0] = v92;
    v165[0] = v146;
    v165[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    v165[2] = v123;
    v165[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v118, &unk_1018614E1, v165);
    v96 = v163;
    v163[3] = v118[2];
    v97 = v118[0];
    v96[2] = v118[1];
    v96[1] = v97;
    *v96 = 10;
    v98 = v140;
    if ( !v140 )
      return v163;
LABEL_186:
    v8 = __src;
    v7 = 8 * v98;
LABEL_187:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 8);
  }
  return v163;
}

