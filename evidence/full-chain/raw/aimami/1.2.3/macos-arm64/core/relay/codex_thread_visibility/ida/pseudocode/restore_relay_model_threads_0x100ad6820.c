// __ZN13codexmate_lib4core5relay23codex_thread_visibility27restore_relay_model_threads @ 0x100ad6820
// [FULL — hexrays 全解 54370B, 超大体分页取回]
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_thread_visibility::restore_relay_model_threads | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
_OWORD *__fastcall codexmate_lib::core::relay::codex_thread_visibility::restore_relay_model_threads::h77dd3ecc898a3538(
        _QWORD *a1,
        __int64 a2)
{
  _OWORD *v2; // r15
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  _QWORD *v10; // r15
  __int64 *v11; // r13
  unsigned __int64 v12; // r14
  char *v13; // rsi
  const __m128i *v14; // rdi
  __m128i v15; // xmm1
  __int64 v16; // rbx
  const void *v17; // r12
  size_t v18; // rdx
  size_t i; // r8
  unsigned __int64 v20; // r14
  __m128i v21; // xmm2
  __int64 v23; // rax
  const void *v24; // rsi
  size_t v25; // r13
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 *v32; // rdi
  __int64 *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // r14
  __int64 v37; // r12
  __int64 v38; // rsi
  __int64 v39; // r14
  _QWORD *v40; // r12
  unsigned __int64 v41; // r13
  __m128i v42; // xmm2
  __int64 v44; // rax
  __m128i v46; // xmm1
  __int64 j; // rcx
  unsigned __int64 v48; // r13
  const __m128i *v49; // r14
  size_t v50; // rbx
  const __m128i *v51; // r12
  __int64 v52; // r15
  __int8 *v53; // rbx
  void *v54; // r13
  sqlite3_uint64 v55; // r15
  _QWORD *v56; // rbx
  sqlite3_stmt *v57; // r12
  int v58; // r13d
  __int64 v59; // rdx
  unsigned int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rcx
  unsigned __int64 v63; // rbx
  __int64 v64; // r15
  __int64 v65; // rcx
  __int128 v66; // kr10_16
  __m128i inserted; // xmm0
  const __m128i *v68; // r12
  __int64 v69; // r14
  __int64 v70; // r13
  __int64 v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 *v74; // rax
  const __m128i *v75; // r14
  __int64 v76; // r14
  char v77; // r12
  unsigned __int64 v78; // rbx
  _QWORD *v79; // r14
  __int64 v80; // rsi
  __int64 v81; // rbx
  unsigned __int64 v82; // r15
  __m128i si128; // xmm2
  __int64 v85; // rax
  __m128i v86; // xmm1
  __int64 v87; // rdi
  const __m128i *v88; // rsi
  char *k; // r8
  unsigned __int64 v90; // r15
  __int8 *v91; // r12
  const void *v92; // r14
  size_t v93; // r13
  __int64 v94; // r14
  __int64 v95; // r12
  _OWORD *v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rbx
  _QWORD *v101; // rbx
  __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // r15
  char v105; // r13
  __int64 v106; // r12
  __int64 v107; // r14
  __int64 v108; // rsi
  __int64 v109; // r12
  __int64 v110; // r15
  __int64 v111; // r12
  __int64 v112; // r14
  __int64 v113; // rsi
  __int64 v114; // rbx
  _QWORD *v115; // r14
  __int64 v116; // rsi
  __int64 v117; // rsi
  __int64 v118; // rsi
  __int64 v120; // rbx
  _QWORD *v121; // r14
  __int64 v122; // rsi
  __int64 v123; // rsi
  __int64 v124; // rsi
  __int64 v125; // rbx
  __int64 v126; // r15
  const __m128i *v127; // r12
  const __m128i *v129; // r13
  int v130; // r14d
  __int64 v131; // rax
  __int64 v132; // rsi
  unsigned __int64 v133; // rax
  unsigned __int64 v134; // rbx
  bool v135; // zf
  unsigned __int64 v136; // rbx
  _QWORD *v137; // rbx
  __int64 v138; // rsi
  __int64 v139; // rsi
  __int64 v140; // rsi
  _QWORD v142[15]; // [rsp+8h] [rbp-588h] BYREF
  _BYTE v143[24]; // [rsp+80h] [rbp-510h] BYREF
  _QWORD v144[4]; // [rsp+98h] [rbp-4F8h] BYREF
  _QWORD v145[4]; // [rsp+B8h] [rbp-4D8h] BYREF
  _QWORD *v146; // [rsp+D8h] [rbp-4B8h] BYREF
  __int128 v147; // [rsp+E0h] [rbp-4B0h]
  __int64 v148; // [rsp+F0h] [rbp-4A0h]
  __int64 v149; // [rsp+F8h] [rbp-498h]
  __int64 v150; // [rsp+100h] [rbp-490h]
  __int64 v151; // [rsp+108h] [rbp-488h]
  __int64 v152; // [rsp+110h] [rbp-480h]
  __int64 v153; // [rsp+118h] [rbp-478h]
  __int64 *v154; // [rsp+120h] [rbp-470h]
  __int64 v155; // [rsp+128h] [rbp-468h]
  __int64 v156; // [rsp+130h] [rbp-460h]
  __int64 v157; // [rsp+138h] [rbp-458h]
  __int64 v158; // [rsp+140h] [rbp-450h]
  unsigned __int64 v159; // [rsp+148h] [rbp-448h]
  __int64 v160; // [rsp+150h] [rbp-440h]
  __int64 v161; // [rsp+158h] [rbp-438h] BYREF
  __int64 v162; // [rsp+160h] [rbp-430h]
  __int64 v163; // [rsp+168h] [rbp-428h]
  _OWORD *v164; // [rsp+178h] [rbp-418h]
  __int64 *v165; // [rsp+180h] [rbp-410h]
  _QWORD *v166; // [rsp+188h] [rbp-408h] BYREF
  __int128 v167; // [rsp+190h] [rbp-400h]
  __int64 v168; // [rsp+1A0h] [rbp-3F0h]
  __int64 v169; // [rsp+1A8h] [rbp-3E8h]
  __int64 v170; // [rsp+1B0h] [rbp-3E0h]
  __int64 v171; // [rsp+1B8h] [rbp-3D8h]
  __int64 v172; // [rsp+1C0h] [rbp-3D0h]
  _QWORD v173[5]; // [rsp+1C8h] [rbp-3C8h] BYREF
  const __m128i *v174; // [rsp+1F0h] [rbp-3A0h] BYREF
  __int64 v175; // [rsp+1F8h] [rbp-398h]
  __int64 v176; // [rsp+200h] [rbp-390h]
  __int64 v177; // [rsp+208h] [rbp-388h]
  _QWORD v178[2]; // [rsp+210h] [rbp-380h] BYREF
  __m128i v179; // [rsp+220h] [rbp-370h] BYREF
  __m128i v180; // [rsp+230h] [rbp-360h] BYREF
  _OWORD v181[6]; // [rsp+240h] [rbp-350h] BYREF
  _OWORD v182[7]; // [rsp+2A0h] [rbp-2F0h] BYREF
  __m128i v183; // [rsp+310h] [rbp-280h] BYREF
  __int64 v184; // [rsp+328h] [rbp-268h] BYREF
  __int64 v185; // [rsp+330h] [rbp-260h]
  __int64 v186; // [rsp+338h] [rbp-258h]
  __int128 v187; // [rsp+340h] [rbp-250h] BYREF
  __int128 v188; // [rsp+350h] [rbp-240h] BYREF
  __m128i v189; // [rsp+360h] [rbp-230h] BYREF
  __int64 v190[9]; // [rsp+378h] [rbp-218h] BYREF
  __m128i v191; // [rsp+3C0h] [rbp-1D0h] BYREF
  unsigned int v192; // [rsp+3DCh] [rbp-1B4h] BYREF
  _QWORD *v193; // [rsp+3E0h] [rbp-1B0h]
  __int64 *v194; // [rsp+3E8h] [rbp-1A8h]
  unsigned __int64 v195; // [rsp+3F0h] [rbp-1A0h] BYREF
  __m512i v196; // [rsp+3F8h] [rbp-198h] BYREF
  __int64 v197; // [rsp+438h] [rbp-158h]
  _BYTE v198[96]; // [rsp+440h] [rbp-150h] BYREF
  __int64 v199; // [rsp+4A0h] [rbp-F0h]
  _OWORD v200[9]; // [rsp+4A8h] [rbp-E8h] BYREF
  size_t __n[2]; // [rsp+540h] [rbp-50h] BYREF
  const __m128i *v202; // [rsp+558h] [rbp-38h]
  void *__s1; // [rsp+560h] [rbp-30h]

  v2 = a1;
  v3 = *(_QWORD *)(a2 + 584);
  v197 = a2;
  v4 = *(_QWORD *)(a2 + 592);
  codexmate_lib::core::relay::codex_thread_visibility::load_model_restore_journal::h0d144f302266e7ee(
    (__int64)&v161,
    v3,
    v4);
  v5 = v163;
  if ( !v163 )
  {
    a1[3] = 0;
    a1[2] = 0;
    a1[1] = 0;
    *a1 = 0;
    goto LABEL_253;
  }
  v157 = v3;
  v158 = v4;
  codexmate_lib::core::relay::codex_thread_visibility::load_router_catalog_model_index::hb44b863e0ca931dd(v200, v3, v4);
  v159 = 0x8000000000000001LL;
  if ( *(_QWORD *)&v200[0] == 0x8000000000000001LL )
  {
    qmemcpy(v198, (char *)v200 + 8, sizeof(v198));
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
    {
      *(_QWORD *)&v181[0] = v198;
      *((_QWORD *)&v181[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      *(_QWORD *)&v182[3] = 2;
      *((_QWORD *)&v182[3] + 1) = &unk_10167D5D6;
      *(_QWORD *)&v182[4] = 51;
      *(_QWORD *)&v182[5] = &unk_1017CAC22;
      *((_QWORD *)&v182[5] + 1) = v181;
      *(_QWORD *)&v182[0] = 0;
      *((_QWORD *)&v182[0] + 1) = &unk_10167D5D6;
      v182[1] = 0x33u;
      *(_QWORD *)&v182[2] = "src/core/relay/codex_thread_visibility.rs";
      *((_QWORD *)&v182[2] + 1) = 41;
      *((_QWORD *)&v182[4] + 1) = 0x95400000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, v182);
    }
    a1[3] = 0;
    a1[2] = 0;
    a1[1] = 0;
    *a1 = 0;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v198);
    v6 = (_QWORD *)(v162 + 56);
    do
    {
      v7 = *(v6 - 7);
      if ( v7 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v6 - 6), v7, 1);
      v8 = *(v6 - 4);
      if ( v8 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v6 - 3), v8, 1);
      v9 = *(v6 - 1);
      if ( v9 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v6, v9, 1);
      v6 += 10;
      --v5;
    }
    while ( v5 );
    goto LABEL_253;
  }
  v164 = a1;
  qmemcpy(v142, v200, sizeof(v142));
  v188 = 0;
  v187 = 0;
  v184 = 0;
  v185 = 8;
  v186 = 0;
  v10 = (_QWORD *)v162;
  v193 = (_QWORD *)(v162 + 80 * v5);
  do
  {
    v11 = v10 + 3;
    if ( v142[6] )
    {
      v12 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v142[7], v10 + 3);
      v194 = v10 + 3;
      v13 = (char *)v142[3];
      v14 = (const __m128i *)v142[4];
      v15 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v12 >> 57), (__m128i)0LL);
      v16 = v142[3] - 24LL;
      v17 = (const void *)v10[4];
      v18 = v10[5];
      for ( i = 0; ; i += 16LL )
      {
        v20 = (unsigned __int64)v14 & v12;
        v21 = _mm_loadu_si128((const __m128i *)&v13[v20]);
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v21, v15));
        if ( (_DWORD)_RAX )
          break;
LABEL_24:
        v11 = v194;
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v21, (__m128i)-1LL)) )
          goto LABEL_26;
        v12 = v20 + i + 16;
      }
      v179 = v15;
      v202 = v14;
      __s1 = v13;
      __n[0] = i;
      v191 = v21;
      while ( 1 )
      {
        v189.i64[0] = _RAX;
        __asm { tzcnt   eax, eax }
        v23 = -3LL * ((unsigned __int64)v14 & (v20 + _RAX));
        if ( v18 == *(_QWORD *)(v16 + 8 * v23 + 16) )
        {
          v24 = *(const void **)(v16 + 8 * v23 + 8);
          v25 = v18;
          v26 = memcmp(v17, v24, v18);
          v18 = v25;
          if ( !v26 )
            break;
        }
        _RAX = (unsigned int)(v189.i32[0] - 1);
        LOWORD(_RAX) = v189.i16[0] & (v189.i16[0] - 1);
        v15 = _mm_load_si128(&v179);
        v14 = v202;
        v13 = (char *)__s1;
        i = __n[0];
        v21 = _mm_load_si128(&v191);
        if ( !(_WORD)_RAX )
          goto LABEL_24;
      }
      v27 = v186;
      if ( v186 == v184 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h9a78bff108d63cfd(&v184, v24, v25);
      *(_QWORD *)(v185 + 8 * v27) = v10;
      v186 = v27 + 1;
    }
    else
    {
LABEL_26:
      ++*((_QWORD *)&v187 + 1);
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u )
      {
        *(_QWORD *)&v182[0] = v10;
        *((_QWORD *)&v182[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&v182[1] = v11;
        *((_QWORD *)&v182[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&v200[3] = 3;
        *((_QWORD *)&v200[3] + 1) = &unk_10167D5D6;
        *(_QWORD *)&v200[4] = 51;
        *(_QWORD *)&v200[5] = &unk_1017CAAED;
        *((_QWORD *)&v200[5] + 1) = v182;
        *(_QWORD *)&v200[0] = 0;
        *((_QWORD *)&v200[0] + 1) = &unk_10167D5D6;
        v200[1] = 0x33u;
        *(_QWORD *)&v200[2] = "src/core/relay/codex_thread_visibility.rs";
        *((_QWORD *)&v200[2] + 1) = 41;
        *((_QWORD *)&v200[4] + 1) = 0x96200000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, v200);
      }
    }
    v10 += 10;
  }
  while ( v10 != v193 );
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v29 = v28;
  if ( *(_BYTE *)(v28 + 16) == 1 )
  {
    v30 = *(_QWORD *)v28;
    v31 = *(_QWORD *)(v29 + 8);
  }
  else
  {
    v30 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
    *(_QWORD *)v29 = v30;
    *(_QWORD *)(v29 + 8) = v31;
    *(_BYTE *)(v29 + 16) = 1;
  }
  *(_QWORD *)v29 = v30 + 1;
  v177 = 0;
  v176 = 0;
  v175 = 0;
  v174 = (const __m128i *)&xmmword_1015FBEC0;
  v178[0] = v30;
  v178[1] = v31;
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v200);
  v32 = *((__int64 **)&v200[0] + 1);
  v153 = *((_QWORD *)&v200[0] + 1);
  v154 = *((__int64 **)&v200[0] + 1);
  v160 = *(_QWORD *)&v200[0];
  v155 = *(_QWORD *)&v200[0];
  v197 = *((_QWORD *)&v200[0] + 1) + 24LL * *(_QWORD *)&v200[1];
  v156 = v197;
  v165 = *((__int64 **)&v200[0] + 1);
  if ( *(_QWORD *)&v200[1] )
  {
    v33 = v165;
    while ( 1 )
    {
      v194 = v33 + 3;
      v154 = v33 + 3;
      v179.i64[0] = *v33;
      if ( v179.i64[0] == 0x8000000000000000LL )
        break;
      v34 = v33[2];
      v189.i64[0] = v33[1];
      std::sys::fs::metadata::h32fa16d3052ea535(v200, v189.i64[0], v34);
      if ( LOBYTE(v200[0]) )
      {
        if ( (BYTE8(v200[0]) & 3) == 1 )
        {
          v35 = *((_QWORD *)&v200[0] + 1) - 1LL;
          v36 = *(_QWORD *)(*((_QWORD *)&v200[0] + 1) - 1LL);
          v37 = *(_QWORD *)(*((_QWORD *)&v200[0] + 1) + 7LL);
          if ( *(_QWORD *)v37 )
            (*(void (__fastcall **)(_QWORD))v37)(*(_QWORD *)(*((_QWORD *)&v200[0] + 1) - 1LL));
          v38 = *(_QWORD *)(v37 + 8);
          if ( v38 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v38, *(_QWORD *)(v37 + 16));
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 24, 8);
        }
      }
      else
      {
        v39 = v186;
        if ( v186 )
        {
          v40 = (_QWORD *)v185;
          codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_for_convergence::h5beb13caec9dc4af(
            v200,
            v189.i64[0],
            v34);
          if ( BYTE8(v200[6]) != 3 )
          {
            qmemcpy(v182, v200, sizeof(v182));
            codexmate_lib::core::relay::codex_thread_visibility::read_thread_columns::h4c3d9b33239405b8(v181, v182);
            if ( LODWORD(v181[0]) != 11 )
            {
              qmemcpy(v198, v181, sizeof(v198));
              if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
              {
                codexmate_lib::core::relay::codex_thread_visibility::codex_db_log_path::h2ac8f7973a414859(
                  (__int64 *)&v195,
                  v189.i64[0],
                  v34);
                v190[0] = (__int64)&v195;
                v190[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                v190[2] = (__int64)v198;
                v190[3] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
                *(_QWORD *)&v200[3] = 2;
                *((_QWORD *)&v200[3] + 1) = &unk_10167D5D6;
                *(_QWORD *)&v200[4] = 51;
                *(_QWORD *)&v200[5] = &unk_1017CA7A8;
                *((_QWORD *)&v200[5] + 1) = v190;
                *(_QWORD *)&v200[0] = 0;
                *((_QWORD *)&v200[0] + 1) = &unk_10167D5D6;
                v200[1] = 0x33u;
                *(_QWORD *)&v200[2] = "src/core/relay/codex_thread_visibility.rs";
                *((_QWORD *)&v200[2] + 1) = 41;
                *((_QWORD *)&v200[4] + 1) = 0x9C400000001LL;
                _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, v200);
                if ( v195 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v196.i64[0], v195, 1);
              }
              ++*((_QWORD *)&v188 + 1);
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v198);
LABEL_143:
              core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v182);
              goto LABEL_144;
            }
            if ( BYTE8(v181[0]) != 1 )
              goto LABEL_143;
            v191.i64[0] = (__int64)&v40[v39];
            while ( 2 )
            {
              v193 = v40;
              v49 = (const __m128i *)*v40;
              v202 = (const __m128i *)*v40;
              if ( v177 )
              {
                v48 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v178, v49);
                v51 = v174;
                v52 = v175;
                v46 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v48 >> 57), (__m128i)0LL);
                v53 = &v174[-2].i8[8];
                __s1 = (void *)v49->i64[1];
                _RAX = v49[1].u64[0];
                __n[0] = _RAX;
                for ( j = 0; ; j += 16 )
                {
                  v41 = v52 & v48;
                  v42 = _mm_loadu_si128((const __m128i *)((char *)v51 + v41));
                  _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v42, v46));
                  if ( _R14D )
                    break;
LABEL_57:
                  _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v42, (__m128i)-1LL));
                  if ( (_DWORD)_RAX )
                  {
                    v49 = v202;
                    v50 = __n[0];
                    goto LABEL_63;
                  }
                  v48 = v41 + j + 16;
                }
                v183 = v46;
                v199 = j;
                v180 = v42;
                while ( 1 )
                {
                  __asm { tzcnt   eax, r14d }
                  v44 = -3LL * (v52 & (v41 + _RAX));
                  if ( __n[0] == *(_QWORD *)&v53[8 * v44 + 16]
                    && !memcmp(__s1, *(const void **)&v53[8 * v44 + 8], __n[0]) )
                  {
                    break;
                  }
                  _RAX = (unsigned int)(_R14D - 1);
                  LOWORD(_RAX) = _R14D & (_R14D - 1);
                  _R14D = _RAX;
                  v46 = _mm_load_si128(&v183);
                  j = v199;
                  v42 = _mm_load_si128(&v180);
                  if ( !(_WORD)_RAX )
                    goto LABEL_57;
                }
LABEL_96:
                v40 = v193 + 1;
                if ( v193 + 1 == (_QWORD *)v191.i64[0] )
                {
                  codexmate_lib::core::relay::codex_thread_visibility::checkpoint_after_committed_write::h67b31aee3cf0b26a(
                    v182,
                    "model restore/payload/model_provider",
                    13);
                  goto LABEL_143;
                }
                continue;
              }
              break;
            }
            __s1 = (void *)v49->i64[1];
            v50 = v49[1].u64[0];
LABEL_63:
            rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(
              v200,
              v182,
              "SELECT COALESCE(model, ''), model_provider, COALESCE(rollout_path, '') FROM threads WHERE id = ?1 AND COALESCE(archived, 0) = 0UPDATE threads SET model = ?2 WHERE id = ?1model restore/payload/model_provider",
              127);
            *(_OWORD *)v198 = *(_OWORD *)((char *)v200 + 8);
            *(_OWORD *)&v198[16] = *(_OWORD *)((char *)&v200[1] + 8);
            *(_QWORD *)&v198[32] = *((_QWORD *)&v200[2] + 1);
            *(_OWORD *)&v198[40] = v200[3];
            *(_QWORD *)&v198[56] = *(_QWORD *)&v200[4];
            if ( LODWORD(v200[0]) == 1 )
            {
              v196 = *(__m512i *)v198;
              v195 = 0x8000000000000000LL;
              v54 = *(void **)v198;
              goto LABEL_82;
            }
            v55 = v50;
            v181[3] = *(_OWORD *)&v198[48];
            v181[2] = *(_OWORD *)&v198[32];
            v181[1] = *(_OWORD *)&v198[16];
            v181[0] = *(_OWORD *)v198;
            v56 = *(_QWORD **)v198;
            v57 = *(sqlite3_stmt **)&v198[56];
            v58 = sqlite3_bind_parameter_count(*(sqlite3_stmt **)&v198[56]);
            __n[0] = 0x8000000000000013LL;
            if ( v58 )
            {
              v59 = (__int64)__s1;
              if ( !v55 )
                v59 = 1;
              v60 = sqlite3_bind_text64(
                      v57,
                      1,
                      (const char *)v59,
                      v55,
                      (void (__cdecl *)(void *))-(__int64)(v55 != 0),
                      1u);
              if ( *v56 >= 0x7FFFFFFFFFFFFFFFuLL )
                core::cell::panic_already_mutably_borrowed::h333111125182db63(&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1546);
              ++*v56;
              rusqlite::error::decode_result_raw::h0a038d2a8c5fdb22(v200, v56[2], v60);
              --*v56;
              v49 = v202;
              if ( *(_QWORD *)&v200[0] == 0x8000000000000016LL )
              {
                if ( v58 == 1 )
                {
                  v190[0] = (__int64)v181;
                  v190[1] = 0;
                  _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa(
                    v200,
                    v190);
                  v54 = *(void **)&v200[0];
                  if ( *(_QWORD *)&v200[0] == 0x8000000000000016LL )
                  {
                    if ( v190[1] )
                    {
                      rusqlite::row::Row::get::h97011a0484b66d6b(v200, &v190[1], 0, v61);
                      v63 = *((_QWORD *)&v200[0] + 1);
                      v54 = *(void **)&v200[0];
                      v64 = *((_QWORD *)&v200[1] + 1);
                      if ( *(_QWORD *)&v200[0] == 0x8000000000000016LL )
                      {
                        __s1 = *(void **)&v200[1];
                        rusqlite::row::Row::get::h97011a0484b66d6b(v200, &v190[1], 1, v62);
                        v66 = *(_OWORD *)((char *)v200 + 8);
                        if ( *(_QWORD *)&v200[0] == 0x8000000000000016LL )
                        {
                          __n[0] = *((_QWORD *)&v200[1] + 1);
                          rusqlite::row::Row::get::h97011a0484b66d6b(v200, &v190[1], 2, v65);
                          *(_OWORD *)v198 = *(_OWORD *)((char *)v200 + 8);
                          *(_QWORD *)&v198[16] = *((_QWORD *)&v200[1] + 1);
                          if ( *(_QWORD *)&v200[0] == 0x8000000000000016LL )
                          {
                            v196.i64[7] = *(_QWORD *)&v198[16];
                            *(__int128 *)((char *)&v196.i128[2] + 8) = *(_OWORD *)v198;
                            v195 = v63;
                            v196.i64[0] = (__int64)__s1;
                            v196.i64[1] = v64;
                            v196.i128[1] = v66;
                            v196.i64[4] = __n[0];
                            v54 = __s1;
                            goto LABEL_133;
                          }
                          v196.i128[3] = v200[3];
                          v196.i128[2] = v200[2];
                          v196.i64[3] = *(_QWORD *)&v198[16];
                          *(__int128 *)((char *)v196.i128 + 8) = *(_OWORD *)v198;
                          v196.i64[0] = *(_QWORD *)&v200[0];
                          v195 = 0x8000000000000000LL;
                          v54 = *(void **)&v200[0];
                          if ( (_QWORD)v66 )
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v66 + 1), v66, 1);
                          if ( v63 )
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v63, 1);
                          __s1 = v54;
                          v63 = 0x8000000000000000LL;
                          v49 = v202;
                        }
                        else
                        {
                          v196.i128[3] = v200[3];
                          v196.i64[5] = *((_QWORD *)&v200[2] + 1);
                          *(__int128 *)((char *)v196.i128 + 8) = *(_OWORD *)((char *)v200 + 8);
                          *(__int128 *)((char *)&v196.i128[1] + 8) = *(_OWORD *)((char *)&v200[1] + 8);
                          v196.i64[0] = *(_QWORD *)&v200[0];
                          v195 = 0x8000000000000000LL;
                          v54 = *(void **)&v200[0];
                          if ( v63 )
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v63, 1);
                          __s1 = v54;
                          v63 = 0x8000000000000000LL;
LABEL_133:
                          v49 = v202;
                        }
                      }
                      else
                      {
                        v196.i128[3] = v200[3];
                        v196.i64[5] = *((_QWORD *)&v200[2] + 1);
                        *(__int128 *)((char *)v196.i128 + 8) = *(_OWORD *)((char *)v200 + 8);
                        *(__int128 *)((char *)&v196.i128[1] + 8) = *(_OWORD *)((char *)&v200[1] + 8);
                        v196.i64[0] = *(_QWORD *)&v200[0];
                        v63 = 0x8000000000000000LL;
                        v195 = 0x8000000000000000LL;
                        __s1 = *(void **)&v200[0];
                      }
LABEL_128:
                      core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553(v190);
LABEL_81:
                      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v181);
                      if ( v63 == 0x8000000000000000LL )
                      {
LABEL_82:
                        if ( v54 == (void *)0x8000000000000009LL )
                        {
                          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v196);
                        }
                        else
                        {
                          *(__m512i *)v198 = v196;
                          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
                          {
                            *(_QWORD *)&v181[0] = v49;
                            *((_QWORD *)&v181[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                            *(_QWORD *)&v181[1] = v198;
                            *((_QWORD *)&v181[1] + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
                            *(_QWORD *)&v200[3] = 2;
                            *((_QWORD *)&v200[3] + 1) = &unk_10167D5D6;
                            *(_QWORD *)&v200[4] = 51;
                            *(_QWORD *)&v200[5] = &unk_1017CA776;
                            *((_QWORD *)&v200[5] + 1) = v181;
                            *(_QWORD *)&v200[0] = 0;
                            *((_QWORD *)&v200[0] + 1) = &unk_10167D5D6;
                            v200[1] = 0x33u;
                            *(_QWORD *)&v200[2] = "src/core/relay/codex_thread_visibility.rs";
                            *((_QWORD *)&v200[2] + 1) = 41;
                            *((_QWORD *)&v200[4] + 1) = 0x9E600000001LL;
                            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(
                              v173,
                              v200);
                          }
                          ++*((_QWORD *)&v188 + 1);
                          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v198);
                        }
                        goto LABEL_96;
                      }
                      v180.i64[0] = v196.i64[3];
                      __n[0] = v196.u64[2];
                      v199 = v196.i64[6];
                      v183.i64[0] = v196.i64[5];
                      v68 = v49;
                      if ( v196.i64[1] != v49[4].i64[0]
                        || (v69 = v196.i64[4], v70 = v196.i64[7], memcmp(__s1, (const void *)v68[3].i64[1], v196.u64[1])) )
                      {
                        *(_QWORD *)&v188 = v188 + 1;
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                          v200,
                          v68);
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v174, v200);
LABEL_90:
                        if ( v183.i64[0] )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v199, v183.i64[0], 1);
                        if ( __n[0] )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v180.i64[0], __n[0], 1);
                        if ( v63 )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v63, 1);
                        goto LABEL_96;
                      }
                      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v199, v70);
                      if ( v71 )
                      {
                        codexmate_lib::core::relay::codex_thread_visibility::patch_model_fallback_rollout::he67490595d91b8fb(
                          v198,
                          v199,
                          v70,
                          v180.i64[0],
                          v69,
                          v202[2].i64[0],
                          v202[2].i64[1]);
                        if ( *(_QWORD *)v198 == v159 )
                        {
                          v167 = *(_OWORD *)&v198[16];
                          v166 = *(_QWORD **)&v198[8];
                          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
                          {
                            *(_QWORD *)&v181[0] = v202;
                            *((_QWORD *)&v181[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                            *(_QWORD *)&v181[1] = &v166;
                            *((_QWORD *)&v181[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                            *(_QWORD *)&v200[3] = 2;
                            *((_QWORD *)&v200[3] + 1) = &unk_10167D5D6;
                            *(_QWORD *)&v200[4] = 51;
                            *(_QWORD *)&v200[5] = &unk_1017CA72D;
                            *((_QWORD *)&v200[5] + 1) = v181;
                            *(_QWORD *)&v200[0] = 0;
                            *((_QWORD *)&v200[0] + 1) = &unk_10167D5D6;
                            v200[1] = 0x33u;
                            *(_QWORD *)&v200[2] = "src/core/relay/codex_thread_visibility.rs";
                            *((_QWORD *)&v200[2] + 1) = 41;
                            *((_QWORD *)&v200[4] + 1) = 0x9FF00000001LL;
                            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(
                              v173,
                              v200);
                          }
                          ++*((_QWORD *)&v188 + 1);
                          v72 = (__int64)v166;
                          if ( !v166 )
                            goto LABEL_90;
                          v73 = v167;
                          goto LABEL_125;
                        }
                        qmemcpy(v190, v198, sizeof(v190));
                      }
                      else
                      {
                        v190[0] = 0x8000000000000000LL;
                      }
                      v75 = v202;
                      v145[0] = v202;
                      v145[1] = &off_1019747D0;
                      v145[2] = (char *)v202 + 24;
                      v145[3] = &off_1019747D0;
                      rusqlite::Connection::execute::h1e8b76b744a4c88a(
                        &v146,
                        v182,
                        "UPDATE threads SET model = ?2 WHERE id = ?1model restore/payload/model_provider",
                        43,
                        v145,
                        2);
                      if ( v146 == (_QWORD *)0x8000000000000016LL )
                      {
                        *(_QWORD *)&v187 = v187 + 1;
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                          v200,
                          v75);
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v174, v200);
                        v76 = v190[0];
                        if ( v190[0] == 0x8000000000000000LL )
                          goto LABEL_90;
                      }
                      else
                      {
                        v172 = v152;
                        v171 = v151;
                        v170 = v150;
                        v169 = v149;
                        v168 = v148;
                        v167 = v147;
                        v166 = v146;
                        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
                        {
                          *(_QWORD *)v198 = v75;
                          *(_QWORD *)&v198[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                          *(_QWORD *)&v198[16] = &v166;
                          *(_QWORD *)&v198[24] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
                          *(_QWORD *)&v200[3] = 2;
                          *((_QWORD *)&v200[3] + 1) = &unk_10167D5D6;
                          *(_QWORD *)&v200[4] = 51;
                          *(_QWORD *)&v200[5] = &unk_1017CA6B1;
                          *((_QWORD *)&v200[5] + 1) = v198;
                          *(_QWORD *)&v200[0] = 0;
                          *((_QWORD *)&v200[0] + 1) = &unk_10167D5D6;
                          v200[1] = 0x33u;
                          *(_QWORD *)&v200[2] = "src/core/relay/codex_thread_visibility.rs";
                          *((_QWORD *)&v200[2] + 1) = 41;
                          *((_QWORD *)&v200[4] + 1) = 0xA1100000001LL;
                          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(
                            v173,
                            v200);
                        }
                        ++*((_QWORD *)&v188 + 1);
                        v76 = v190[0];
                        v77 = 1;
                        if ( v190[0] != 0x8000000000000000LL )
                        {
                          qmemcpy(v181, v190, 0x48u);
                          codexmate_lib::core::relay::codex_thread_visibility::restore_model_fallback_rollout_patches::h2c50efc7f6189325(
                            v198,
                            v181,
                            1);
                          if ( *(_DWORD *)v198 != 11 )
                          {
                            qmemcpy(v200, v198, 0x60u);
                            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
                            {
                              v144[0] = v202;
                              v144[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                              v144[2] = v200;
                              v144[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
                              v173[0] = &unk_10167D5D6;
                              v173[1] = 51;
                              v173[2] = &unk_10167D5D6;
                              v173[3] = 51;
                              v173[4] = &off_101974870;
                              log::__private_api::log::h719f4907c7336ae9(&unk_1017CA6E6, v144, 2, v173);
                            }
                            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v200);
                          }
                          core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceVocabularyAppPayload$GT$::h7c19e114632ac5af(v181);
                          v77 = 0;
                        }
                        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v166);
                        if ( ((unsigned __int8)v77 & (v76 != 0x8000000000000000LL)) == 0 )
                          goto LABEL_90;
                      }
                      if ( v76 )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190[1], v76, 1);
                      if ( v190[3] )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190[4], v190[3], 1);
                      v72 = v190[6];
                      if ( !v190[6] )
                        goto LABEL_90;
                      v73 = v190[7];
LABEL_125:
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v72, 1);
                      goto LABEL_90;
                    }
                    v54 = (void *)0x8000000000000009LL;
                    v74 = &v190[1];
                  }
                  else
                  {
                    v74 = *((__int64 **)&v200[0] + 1);
                    *(_OWORD *)v198 = v200[1];
                    *(_OWORD *)&v198[16] = v200[2];
                    *(_OWORD *)&v198[32] = v200[3];
                  }
                  v196.i64[0] = (__int64)v54;
                  v196.i64[1] = (__int64)v74;
                  v196.i128[3] = *(_OWORD *)&v198[32];
                  v196.i128[2] = *(_OWORD *)&v198[16];
                  v196.i128[1] = *(_OWORD *)v198;
                  v63 = 0x8000000000000000LL;
                  v195 = 0x8000000000000000LL;
                  __s1 = v54;
                  goto LABEL_128;
                }
                inserted = _mm_insert_epi64(_mm_cvtsi32_si128(1u), v58, 1);
                v54 = (void *)__n[0];
              }
              else
              {
                inserted = _mm_loadu_si128((const __m128i *)((char *)v200 + 8));
                *(_OWORD *)v198 = *(_OWORD *)((char *)&v200[1] + 8);
                *(_OWORD *)&v198[16] = *(_OWORD *)((char *)&v200[2] + 8);
                *(_QWORD *)&v198[32] = *((_QWORD *)&v200[3] + 1);
                v54 = *(void **)&v200[0];
              }
            }
            else
            {
              inserted = _mm_cvtsi32_si128(1u);
              v49 = v202;
              v54 = (void *)__n[0];
            }
            v196.i128[3] = *(_OWORD *)&v198[24];
            v196.i64[5] = *(_QWORD *)&v198[16];
            *(__int128 *)((char *)&v196.i128[1] + 8) = *(_OWORD *)v198;
            v196.i64[0] = (__int64)v54;
            *(__m128i *)&v196.u32[2] = inserted;
            v63 = 0x8000000000000000LL;
            v195 = 0x8000000000000000LL;
            __s1 = v54;
            goto LABEL_81;
          }
          qmemcpy(v198, v200, sizeof(v198));
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
          {
            codexmate_lib::core::relay::codex_thread_visibility::codex_db_log_path::h2ac8f7973a414859(
              v190,
              v189.i64[0],
              v34);
            *(_QWORD *)&v181[0] = v190;
            *((_QWORD *)&v181[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            *(_QWORD *)&v181[1] = v198;
            *((_QWORD *)&v181[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
            *(_QWORD *)&v182[3] = 2;
            *((_QWORD *)&v182[3] + 1) = &unk_10167D5D6;
            *(_QWORD *)&v182[4] = 51;
            *(_QWORD *)&v182[5] = &unk_1017CA7DF;
            *((_QWORD *)&v182[5] + 1) = v181;
            *(_QWORD *)&v182[0] = 0;
            *((_QWORD *)&v182[0] + 1) = &unk_10167D5D6;
            v182[1] = 0x33u;
            *(_QWORD *)&v182[2] = "src/core/relay/codex_thread_visibility.rs";
            *((_QWORD *)&v182[2] + 1) = 41;
            *((_QWORD *)&v182[4] + 1) = 0x9B900000001LL;
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, v182);
            if ( v190[0] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190[1], v190[0], 1);
          }
          ++*((_QWORD *)&v188 + 1);
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v198);
        }
      }
LABEL_144:
      if ( v179.i64[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v189.i64[0], v179.i64[0], 1);
      v33 = v194;
      if ( v194 == (__int64 *)v197 )
        goto LABEL_152;
    }
    v32 = v194;
  }
  if ( (__int64 *)v197 != v32 )
  {
    v78 = (v197 - (__int64)v32) / 0x18uLL;
    v79 = v32 + 1;
    do
    {
      v80 = *(v79 - 1);
      if ( v80 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v79, v80, 1);
      v79 += 3;
      --v78;
    }
    while ( v78 );
  }
LABEL_152:
  if ( v160 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v165, 24 * v160, 8);
  v195 = 0;
  v196.i128[0] = 8u;
  v197 = v162;
  v191.i64[0] = v163;
  if ( v163 )
  {
    v81 = v197;
    v193 = (_QWORD *)(v197 + 80 * v191.i64[0]);
    while ( !v177 )
    {
LABEL_165:
      v192 = *(_DWORD *)(v81 + 72) + 1;
      if ( v192 <= 9 )
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v190, v81);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v181, v81 + 24);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v198, v81 + 48);
        *(_OWORD *)((char *)v182 + 8) = *(_OWORD *)&v190[1];
        *(_QWORD *)&v182[0] = v190[0];
        *((_QWORD *)&v182[2] + 1) = *(_QWORD *)&v181[1];
        *(_OWORD *)((char *)&v182[1] + 8) = v181[0];
        *(_QWORD *)&v182[4] = *(_QWORD *)&v198[16];
        v182[3] = *(_OWORD *)v198;
        *(_OWORD *)((char *)v200 + 8) = *(_OWORD *)&v190[1];
        *(_QWORD *)&v200[0] = v190[0];
        *((_QWORD *)&v200[2] + 1) = *(_QWORD *)&v181[1];
        *(_OWORD *)((char *)&v200[1] + 8) = v181[0];
        *(_QWORD *)&v200[4] = *(_QWORD *)&v198[16];
        v200[3] = *(_OWORD *)v198;
        DWORD2(v200[4]) = v192;
        v94 = v196.i64[1];
        if ( v196.i64[1] == v195 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb77fe25a7c168e6f(&v195);
        qmemcpy((void *)(v196.i64[0] + 80 * v94), v200, 0x50u);
        v196.i64[1] = v94 + 1;
        v81 += 80;
        if ( (_QWORD *)v81 == v193 )
          goto LABEL_173;
      }
      else
      {
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u )
        {
          *(_QWORD *)&v182[0] = v81;
          *((_QWORD *)&v182[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          *(_QWORD *)&v182[1] = &v192;
          *((_QWORD *)&v182[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
          *(_QWORD *)&v200[3] = 3;
          *((_QWORD *)&v200[3] + 1) = &unk_10167D5D6;
          *(_QWORD *)&v200[4] = 51;
          *(_QWORD *)&v200[5] = &unk_1017CAB3D;
          *((_QWORD *)&v200[5] + 1) = v182;
          *(_QWORD *)&v200[0] = 0;
          *((_QWORD *)&v200[0] + 1) = &unk_10167D5D6;
          v200[1] = 0x33u;
          *(_QWORD *)&v200[2] = "src/core/relay/codex_thread_visibility.rs";
          *((_QWORD *)&v200[2] + 1) = 41;
          *((_QWORD *)&v200[4] + 1) = 0x97C00000001LL;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, v200);
        }
LABEL_168:
        v81 += 80;
        if ( (_QWORD *)v81 == v193 )
          goto LABEL_173;
      }
    }
    v90 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v178, v81);
    v88 = v174;
    v87 = v175;
    v86 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v90 >> 57), (__m128i)0LL);
    v91 = &v174[-2].i8[8];
    v92 = *(const void **)(v81 + 8);
    v93 = *(_QWORD *)(v81 + 16);
    for ( k = nullptr; ; k += 16 )
    {
      v82 = v87 & v90;
      si128 = _mm_loadu_si128((const __m128i *)((char *)v88 + v82));
      _RAX = (__int64 *)(unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(si128, v86));
      if ( (_DWORD)_RAX )
        break;
LABEL_161:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(si128, (__m128i)-1LL)) )
        goto LABEL_165;
      v90 = (unsigned __int64)&k[v82 + 16];
    }
    v189 = v86;
    v179.i64[0] = v87;
    v202 = v88;
    __s1 = k;
    *(__m128i *)__n = si128;
    while ( 1 )
    {
      v194 = _RAX;
      __asm { tzcnt   eax, eax }
      v85 = -3LL * (v87 & ((unsigned __int64)_RAX + v82));
      if ( v93 == *(_QWORD *)&v91[8 * v85 + 16] && !memcmp(v92, *(const void **)&v91[8 * v85 + 8], v93) )
        goto LABEL_168;
      _RAX = (__int64 *)(unsigned int)((_DWORD)v194 - 1);
      LOWORD(_RAX) = (unsigned __int16)v194 & ((_WORD)v194 - 1);
      v86 = _mm_load_si128(&v189);
      v87 = v179.i64[0];
      v88 = v202;
      k = (char *)__s1;
      si128 = _mm_load_si128((const __m128i *)__n);
      if ( !(_WORD)_RAX )
        goto LABEL_161;
    }
  }
LABEL_173:
  std::path::Path::_join::hb1a495d4f06b13b8(v181, v157, v158, "router_model_restore.json", 25);
  v95 = v191.i64[0];
  if ( v196.i64[1] )
  {
    *(_OWORD *)((char *)v182 + 8) = v196.i128[0];
    *(_QWORD *)&v182[0] = v195;
    DWORD2(v182[1]) = 1;
    v96 = v182;
    serde_json::ser::to_vec_pretty::hf3526a5f296f81f5(v198, v182);
    v100 = *(_QWORD *)v198;
    if ( *(_QWORD *)v198 == 0x8000000000000000LL )
    {
      v101 = *(_QWORD **)&v198[8];
      v166 = *(_QWORD **)&v198[8];
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
      {
        v190[0] = (__int64)&v166;
        v190[1] = (__int64)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
        *(_QWORD *)&v200[3] = 2;
        *((_QWORD *)&v200[3] + 1) = &unk_10167D5D6;
        *(_QWORD *)&v200[4] = 51;
        *(_QWORD *)&v200[5] = &unk_1017CABE7;
        *((_QWORD *)&v200[5] + 1) = v190;
        *(_QWORD *)&v200[0] = 0;
        *((_QWORD *)&v200[0] + 1) = &unk_10167D5D6;
        v200[1] = 0x33u;
        *(_QWORD *)&v200[2] = "src/core/relay/codex_thread_visibility.rs";
        *((_QWORD *)&v200[2] + 1) = 41;
        *((_QWORD *)&v200[4] + 1) = 0x99B00000001LL;
        v96 = v200;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, v200);
        v101 = v166;
      }
      if ( *v101 == 1 )
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v101 + 1, v96, v97, v98, v99);
      }
      else if ( !*v101 )
      {
        v102 = v101[2];
        if ( v102 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101[1], v102, 1);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101, 40, 8);
    }
    else
    {
      v109 = *(_QWORD *)&v198[8];
      v110 = std::fs::write::inner::had0c1bee0a2c1e21(
               *((void **)&v181[0] + 1),
               *(size_t *)&v181[1],
               *(void **)&v198[8],
               *(size_t *)&v198[16]);
      if ( v100 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v100, 1);
      v95 = v191.i64[0];
      if ( v110 )
      {
        v166 = (_QWORD *)v110;
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
        {
          v190[0] = (__int64)&v166;
          v190[1] = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
          *(_QWORD *)&v200[3] = 2;
          *((_QWORD *)&v200[3] + 1) = &unk_10167D5D6;
          *(_QWORD *)&v200[4] = 51;
          *(_QWORD *)&v200[5] = &unk_1017CABB4;
          *((_QWORD *)&v200[5] + 1) = v190;
          *(_QWORD *)&v200[0] = 0;
          *((_QWORD *)&v200[0] + 1) = &unk_10167D5D6;
          v200[1] = 0x33u;
          *(_QWORD *)&v200[2] = "src/core/relay/codex_thread_visibility.rs";
          *((_QWORD *)&v200[2] + 1) = 41;
          *((_QWORD *)&v200[4] + 1) = 0x99700000001LL;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, v200);
          v110 = (__int64)v166;
        }
        if ( (v110 & 3) == 1 )
        {
          v111 = *(_QWORD *)(v110 - 1);
          v112 = *(_QWORD *)(v110 + 7);
          if ( *(_QWORD *)v112 )
            (*(void (__fastcall **)(_QWORD))v112)(*(_QWORD *)(v110 - 1));
          v113 = *(_QWORD *)(v112 + 8);
          if ( v113 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, v113, *(_QWORD *)(v112 + 16));
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110 - 1, 24, 8);
          v95 = v191.i64[0];
        }
      }
    }
    v114 = *(_QWORD *)&v182[1];
    if ( *(_QWORD *)&v182[1] )
    {
      v115 = (_QWORD *)(*((_QWORD *)&v182[0] + 1) + 56LL);
      do
      {
        v116 = *(v115 - 7);
        if ( v116 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v115 - 6), v116, 1);
        v117 = *(v115 - 4);
        if ( v117 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v115 - 3), v117, 1);
        v118 = *(v115 - 1);
        if ( v118 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v115, v118, 1);
        v115 += 10;
        --v114;
      }
      while ( v114 );
    }
    if ( *(_QWORD *)&v182[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v182[0] + 1), 80LL * *(_QWORD *)&v182[0], 8);
    v105 = 0;
  }
  else
  {
    v103 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(*((void **)&v181[0] + 1), *(size_t *)&v181[1]);
    v104 = v103;
    v105 = 1;
    if ( v103 )
    {
      *(_QWORD *)v198 = v103;
      if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v103)
        && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
      {
        *(_QWORD *)&v182[0] = v198;
        *((_QWORD *)&v182[0] + 1) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
        *(_QWORD *)&v200[3] = 2;
        *((_QWORD *)&v200[3] + 1) = &unk_10167D5D6;
        *(_QWORD *)&v200[4] = 51;
        *(_QWORD *)&v200[5] = &unk_1017CAB81;
        *((_QWORD *)&v200[5] + 1) = v182;
        *(_QWORD *)&v200[0] = 0;
        *((_QWORD *)&v200[0] + 1) = &unk_10167D5D6;
        v200[1] = 0x33u;
        *(_QWORD *)&v200[2] = "src/core/relay/codex_thread_visibility.rs";
        *((_QWORD *)&v200[2] + 1) = 41;
        *((_QWORD *)&v200[4] + 1) = 0x98C00000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v173, v200);
        v104 = *(_QWORD *)v198;
      }
      if ( (v104 & 3) == 1 )
      {
        v106 = *(_QWORD *)(v104 - 1);
        v107 = *(_QWORD *)(v104 + 7);
        if ( *(_QWORD *)v107 )
          (*(void (__fastcall **)(_QWORD))v107)(*(_QWORD *)(v104 - 1));
        v108 = *(_QWORD *)(v107 + 8);
        if ( v108 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v108, *(_QWORD *)(v107 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104 - 1, 24, 8);
        v95 = v191.i64[0];
      }
    }
  }
  *(_QWORD *)&v200[0] = &v187;
  *((_QWORD *)&v200[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  *(_QWORD *)&v200[1] = (char *)&v187 + 8;
  *((_QWORD *)&v200[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  *(_QWORD *)&v200[2] = &v188;
  *((_QWORD *)&v200[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  *(_QWORD *)&v200[3] = (char *)&v188 + 8;
  *((_QWORD *)&v200[3] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v143, &unk_1017BBE19, v200);
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
    &unk_10167D869,
    19,
    "donehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
    4,
    v143);
  v2 = v164;
  v164[1] = v188;
  HIDWORD(_RAX) = DWORD1(v187);
  *v2 = v187;
  if ( *(_QWORD *)&v181[0] )
    HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                        *((_QWORD *)&v181[0] + 1),
                                        *(_QWORD *)&v181[0],
                                        1) >> 32;
  if ( v105 )
  {
    v120 = v196.i64[1];
    if ( v196.i64[1] )
    {
      v121 = (_QWORD *)(v196.i64[0] + 56);
      do
      {
        v122 = *(v121 - 7);
        if ( v122 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v121 - 6), v122, 1);
        v123 = *(v121 - 4);
        if ( v123 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v121 - 3), v123, 1);
        v124 = *(v121 - 1);
        if ( v124 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v121, v124, 1);
        v121 += 10;
        --v120;
      }
      while ( v120 );
    }
    HIDWORD(_RAX) = HIDWORD(v195);
    if ( v195 )
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v196.i64[0], 80 * v195, 8) >> 32;
  }
  v125 = v175;
  if ( v175 )
  {
    v126 = v177;
    if ( v177 )
    {
      v127 = v174;
      _R14D = ~_mm_movemask_epi8(_mm_load_si128(v174));
      v129 = v174 + 1;
      do
      {
        if ( !(_WORD)_R14D )
        {
          do
          {
            v130 = _mm_movemask_epi8(_mm_load_si128(v129));
            v127 -= 24;
            ++v129;
          }
          while ( v130 == 0xFFFF );
          _R14D = ~v130;
        }
        __asm { tzcnt   eax, r14d }
        v131 = -3 * _RAX;
        v132 = *((_QWORD *)&v127[-1] + v131 - 1);
        if ( v132 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127[-1].i64[v131], v132, 1);
        --v126;
        _RAX = _R14D & (unsigned int)(_R14D - 1);
        _R14D &= _R14D - 1;
      }
      while ( v126 );
    }
    v133 = (24 * v125 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v134 = v133 + v125;
    v135 = v134 == -17;
    v136 = v134 + 17;
    v2 = v164;
    v95 = v191.i64[0];
    if ( !v135 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v174 - v133, v136, 16);
  }
  if ( v184 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v185, 8 * v184, 8);
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..RouterCatalogModelIndex$GT$::h819ad9381fef45a6(v142);
  if ( v95 )
  {
    v137 = (_QWORD *)(v197 + 56);
    do
    {
      v138 = *(v137 - 7);
      if ( v138 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v137 - 6), v138, 1);
      v139 = *(v137 - 4);
      if ( v139 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v137 - 3), v139, 1);
      v140 = *(v137 - 1);
      if ( v140 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v137, v140, 1);
      v137 += 10;
      --v95;
    }
    while ( v95 );
  }
LABEL_253:
  if ( v161 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, 80 * v161, 8);
  return v2;
}
