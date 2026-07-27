// __ZN13codexmate_lib4core5relay23codex_thread_visibility40converge_router_thread_models_to_catalog @ 0x100af5a40 | 基线 same-set
// [FULL decompile]

_QWORD *__fastcall codexmate_lib::core::relay::codex_thread_visibility::converge_router_thread_models_to_catalog::h65d472a51982a375(
        void *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i v10; // xmm0
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r13
  unsigned __int64 v16; // r12
  __int64 v17; // r15
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __int64 v20; // rcx
  _QWORD *v21; // r14
  __int64 v22; // rax
  size_t v23; // rdx
  size_t v24; // r13
  const void *v25; // rbx
  unsigned __int64 v26; // r15
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __m128i v29; // xmm1
  __int64 v30; // rsi
  _BYTE *i; // rdi
  unsigned __int64 v32; // r15
  __m128i v33; // xmm2
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // r15
  __int64 *v38; // rsi
  __int64 v39; // rdx
  unsigned __int64 v40; // r13
  __int64 v41; // rax
  size_t v42; // rdx
  const void *v43; // rbx
  size_t v44; // r13
  unsigned __int64 v45; // rax
  __m128i v46; // xmm1
  char *j; // rdx
  unsigned __int64 v48; // rax
  __m128i v49; // xmm2
  __int64 v51; // rax
  __int64 v52; // r15
  int v53; // eax
  __int64 v54; // rsi
  unsigned int v55; // eax
  __int64 v56; // r13
  __int64 v57; // r15
  void *v58; // rcx
  void *v59; // rax
  unsigned __int64 v60; // r13
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  size_t v64; // r15
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int128 *v68; // rbx
  __int64 v69; // rsi
  __int64 v70; // rbx
  __int64 v71; // r15
  __int64 v72; // r13
  __int64 v73; // rsi
  _BYTE *v74; // rax
  const void *v75; // rdi
  const char *v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rax
  size_t v79; // r13
  __int64 v80; // rbx
  __int64 v81; // r13
  __int64 v82; // r15
  char *v83; // rcx
  __int64 v84; // rdi
  size_t v85; // rsi
  __int64 v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // r13
  __int64 v89; // rbx
  __int64 v90; // rbx
  __int64 v91; // r14
  __int64 v92; // rbx
  __int64 v93; // r15
  __int64 v94; // r12
  __int64 v95; // rsi
  char *v96; // rdx
  __m128i v97; // xmm2
  __int64 v98; // rbx
  unsigned __int64 v99; // r14
  __int64 v100; // rax
  _QWORD *v101; // rdi
  int autocommit; // eax
  __int64 v103; // r9
  __int64 v104; // rbx
  __int64 k; // r14
  _QWORD *v106; // rdi
  __int64 v107; // r13
  _QWORD *v108; // rbx
  __int64 v109; // rsi
  __int64 v110; // rsi
  __int64 v111; // rsi
  __int64 v112; // r13
  _QWORD *v113; // r14
  __int64 v114; // rsi
  __int64 v115; // rsi
  __int64 v116; // rsi
  _QWORD *v117; // r14
  __int64 v118; // r13
  __int64 v119; // rsi
  __int64 v120; // rsi
  __int64 v121; // rsi
  __int64 v122; // rax
  int v123; // eax
  unsigned __int64 v124; // rbx
  _QWORD *v125; // r13
  __int64 v126; // rsi
  _QWORD *v127; // rbx
  __int64 v128; // rsi
  __int64 v129; // rsi
  __int64 v130; // rsi
  __m128i v131; // xmm0
  __m128i v132; // xmm0
  __int64 v133; // r13
  const void *v134; // r15
  __int64 v135; // r14
  unsigned __int64 v136; // rbx
  _QWORD *v137; // rax
  __int64 v138; // rsi
  _QWORD *v139; // r14
  _QWORD *v140; // rbx
  __int64 *v141; // rdi
  _QWORD *v142; // rax
  unsigned __int64 v143; // rbx
  __int64 v144; // rsi
  _QWORD *v145; // r14
  __int64 v146; // rbx
  __int64 v147; // r14
  _QWORD *v148; // r15
  __int64 v149; // rsi
  _QWORD v150[3]; // [rsp+10h] [rbp-570h] BYREF
  __int64 v151; // [rsp+28h] [rbp-558h] BYREF
  _QWORD v152[12]; // [rsp+30h] [rbp-550h] BYREF
  _QWORD v153[2]; // [rsp+90h] [rbp-4F0h] BYREF
  _QWORD v154[3]; // [rsp+A0h] [rbp-4E0h] BYREF
  _QWORD v155[4]; // [rsp+B8h] [rbp-4C8h] BYREF
  __int128 v156; // [rsp+D8h] [rbp-4A8h]
  __int64 v157; // [rsp+E8h] [rbp-498h]
  _QWORD *v158; // [rsp+F0h] [rbp-490h]
  __int64 v159; // [rsp+F8h] [rbp-488h]
  __int64 v160; // [rsp+100h] [rbp-480h]
  _QWORD v161[9]; // [rsp+108h] [rbp-478h] BYREF
  _QWORD *v162; // [rsp+150h] [rbp-430h] BYREF
  _QWORD *v163; // [rsp+158h] [rbp-428h]
  __int64 v164; // [rsp+160h] [rbp-420h]
  __int64 v165; // [rsp+168h] [rbp-418h]
  __int64 v166; // [rsp+170h] [rbp-410h]
  size_t v167; // [rsp+178h] [rbp-408h]
  __m128i v168; // [rsp+180h] [rbp-400h] BYREF
  _OWORD v169[6]; // [rsp+190h] [rbp-3F0h] BYREF
  __int64 v170; // [rsp+1F0h] [rbp-390h]
  __int64 v171; // [rsp+1F8h] [rbp-388h]
  __int64 v172; // [rsp+200h] [rbp-380h] BYREF
  __int64 v173; // [rsp+208h] [rbp-378h]
  __int64 v174; // [rsp+210h] [rbp-370h]
  _BYTE v175[72]; // [rsp+218h] [rbp-368h] BYREF
  __int128 v176; // [rsp+260h] [rbp-320h]
  _QWORD *v177; // [rsp+270h] [rbp-310h]
  unsigned __int64 v178; // [rsp+278h] [rbp-308h]
  __int64 v179; // [rsp+280h] [rbp-300h]
  __int64 v180; // [rsp+288h] [rbp-2F8h]
  __int64 v181; // [rsp+290h] [rbp-2F0h]
  __int64 v182; // [rsp+298h] [rbp-2E8h]
  __m128i v183; // [rsp+2A0h] [rbp-2E0h] BYREF
  __m128i v184; // [rsp+2B0h] [rbp-2D0h] BYREF
  __int64 v185; // [rsp+2C8h] [rbp-2B8h] BYREF
  __int64 v186; // [rsp+2D0h] [rbp-2B0h]
  unsigned __int64 v187; // [rsp+2D8h] [rbp-2A8h]
  __m128i v188; // [rsp+2E0h] [rbp-2A0h] BYREF
  __int64 v189; // [rsp+2F0h] [rbp-290h] BYREF
  __m128i v190; // [rsp+2F8h] [rbp-288h] BYREF
  __int64 v191; // [rsp+308h] [rbp-278h] BYREF
  _QWORD *v192; // [rsp+310h] [rbp-270h]
  __int64 v193; // [rsp+318h] [rbp-268h]
  __int64 v194; // [rsp+320h] [rbp-260h]
  _QWORD *v195; // [rsp+328h] [rbp-258h]
  unsigned __int64 v196; // [rsp+330h] [rbp-250h]
  _BYTE *v197; // [rsp+338h] [rbp-248h]
  char *v198; // [rsp+340h] [rbp-240h]
  __int64 v199; // [rsp+348h] [rbp-238h]
  size_t v200; // [rsp+350h] [rbp-230h]
  __int64 v201; // [rsp+358h] [rbp-228h]
  __m128i v202; // [rsp+360h] [rbp-220h] BYREF
  __m128i v203; // [rsp+370h] [rbp-210h] BYREF
  __int128 v204; // [rsp+388h] [rbp-1F8h] BYREF
  size_t v205; // [rsp+398h] [rbp-1E8h]
  __int64 v206; // [rsp+3A0h] [rbp-1E0h] BYREF
  void *v207; // [rsp+3A8h] [rbp-1D8h]
  __int64 v208; // [rsp+3B0h] [rbp-1D0h]
  void *v209; // [rsp+3B8h] [rbp-1C8h]
  unsigned __int64 v210; // [rsp+3C0h] [rbp-1C0h]
  _OWORD v211[6]; // [rsp+3C8h] [rbp-1B8h] BYREF
  __int128 *v212; // [rsp+428h] [rbp-158h] BYREF
  __int64 v213; // [rsp+430h] [rbp-150h]
  _QWORD *v214; // [rsp+438h] [rbp-148h]
  __int128 v215; // [rsp+440h] [rbp-140h] BYREF
  __int128 v216; // [rsp+450h] [rbp-130h]
  __int64 v217; // [rsp+460h] [rbp-120h] BYREF
  __int64 v218; // [rsp+468h] [rbp-118h]
  __int64 v219; // [rsp+470h] [rbp-110h]
  _BYTE v220[104]; // [rsp+478h] [rbp-108h] BYREF
  __int64 v221; // [rsp+4E0h] [rbp-A0h]
  __int64 v222; // [rsp+4E8h] [rbp-98h]
  __int64 v223; // [rsp+510h] [rbp-70h]
  void *__s2; // [rsp+518h] [rbp-68h]
  __int64 v225; // [rsp+520h] [rbp-60h]
  __int64 v226; // [rsp+528h] [rbp-58h]
  void *v227; // [rsp+530h] [rbp-50h]
  char *v228; // [rsp+538h] [rbp-48h]
  size_t __n; // [rsp+540h] [rbp-40h]
  __int64 v230; // [rsp+548h] [rbp-38h]
  __int64 v231; // [rsp+550h] [rbp-30h]

  codexmate_lib::core::relay::codex_thread_visibility::load_router_catalog_model_index::hb44b863e0ca931dd(
    v220,
    a2[73],
    a2[74]);
  qmemcpy(v169, &v220[8], sizeof(v169));
  v196 = 0x8000000000000001LL;
  if ( *(_QWORD *)v220 == 0x8000000000000001LL )
  {
    qmemcpy(a1, v169, 0x60u);
    return a1;
  }
  v195 = a1;
  v153[1] = v222;
  v153[0] = v221;
  qmemcpy(v152, v169, sizeof(v152));
  v151 = *(_QWORD *)v220;
  *(_QWORD *)v175 = 0;
  *(_QWORD *)&v175[8] = 8;
  memset(&v175[16], 0, 56);
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v220, a2);
  v157 = *(_QWORD *)&v220[8];
  v158 = *(_QWORD **)&v220[8];
  v180 = *(_QWORD *)v220;
  v159 = *(_QWORD *)v220;
  v194 = *(_QWORD *)&v220[8] + 24LL * *(_QWORD *)&v220[16];
  v160 = v194;
  v3 = *(_QWORD **)&v220[8];
  v182 = *(_QWORD *)&v220[8];
  if ( !*(_QWORD *)&v220[16] )
    goto LABEL_203;
  v178 = 24LL * *(_QWORD *)&v220[16] - 24;
  v4 = *(_QWORD *)&v220[8] + 32LL;
  v5 = *(__int64 **)&v220[8];
  while ( 1 )
  {
    v177 = (_QWORD *)v4;
    v192 = v5 + 3;
    v158 = v5 + 3;
    v193 = *v5;
    if ( v193 == 0x8000000000000000LL )
    {
      v3 = v192;
LABEL_203:
      if ( (_QWORD *)v194 != v3 )
      {
        v136 = (v194 - (__int64)v3) / 0x18uLL;
        v137 = v3 + 1;
        do
        {
          v138 = *(v137 - 1);
          if ( v138 )
          {
            v139 = v137;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v137, v138, 1);
            v137 = v139;
          }
          v137 += 3;
          --v136;
        }
        while ( v136 );
      }
LABEL_208:
      if ( v180 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v182, 24 * v180, 8);
      v140 = v195;
      qmemcpy(v195 + 1, v175, 0x48u);
      *v140 = 11;
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..RouterCatalogModelIndex$GT$::h819ad9381fef45a6(&v151);
      return v140;
    }
    v6 = v5[2];
    v213 = v5[1];
    std::sys::fs::metadata::h32fa16d3052ea535(v220, v213, v6);
    if ( *(_DWORD *)v220 == 1 )
    {
      v10 = 0;
      v183 = 0;
      if ( (v220[8] & 3) == 1 )
      {
        v92 = *(_QWORD *)&v220[8] - 1LL;
        v93 = *(_QWORD *)(*(_QWORD *)&v220[8] - 1LL);
        v94 = *(_QWORD *)(*(_QWORD *)&v220[8] + 7LL);
        if ( *(_QWORD *)v94 )
          (*(void (__fastcall **)(__int64))v94)(v93);
        v95 = *(_QWORD *)(v94 + 8);
        if ( v95 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, v95, *(_QWORD *)(v94 + 16));
        v11 = 8;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, 24, 8);
        v12 = 0;
        v226 = 0;
        v13 = 0;
        v14 = 0;
        v10 = 0;
      }
      else
      {
        v11 = 8;
        v12 = 0;
        v226 = 0;
        v13 = 0;
        v14 = 0;
      }
      v202 = v10;
      goto LABEL_117;
    }
    codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_for_convergence::h5beb13caec9dc4af(
      v220,
      v213,
      v6,
      v7,
      v8);
    v165 = v6;
    v15 = *(_QWORD *)v220;
    v16 = *(_QWORD *)&v220[24];
    v17 = *(_QWORD *)&v220[16];
    v18 = _mm_loadu_si128((const __m128i *)&v220[32]);
    v12 = *(_QWORD *)&v220[48];
    v19 = _mm_loadu_si128((const __m128i *)&v220[56]);
    v20 = *(_QWORD *)&v220[72];
    v211[0] = *(_OWORD *)&v220[80];
    if ( (_BYTE)v221 == 3 )
    {
      v225 = *(_QWORD *)&v220[8];
      v176 = v211[0];
      goto LABEL_194;
    }
    v171 = v221;
    v169[0] = *(_OWORD *)v220;
    v169[1] = *(_OWORD *)&v220[16];
    v169[2] = v18;
    *(_QWORD *)&v169[3] = *(_QWORD *)&v220[48];
    *(__m128i *)((char *)&v169[3] + 8) = v19;
    *((_QWORD *)&v169[4] + 1) = *(_QWORD *)&v220[72];
    v169[5] = v211[0];
    v170 = *(_QWORD *)&v220[96];
    codexmate_lib::core::relay::codex_thread_visibility::collect_router_model_targets::hf5ddd6ccb607c54c(
      (__int64)v220,
      (__int64)v169);
    v15 = *(_QWORD *)v220;
    v16 = *(_QWORD *)&v220[24];
    v17 = *(_QWORD *)&v220[16];
    v225 = *(_QWORD *)&v220[8];
    if ( *(_QWORD *)v220 != 11 )
    {
      v183 = *(__m128i *)&v220[32];
      v90 = *(_QWORD *)&v220[48];
      v202 = _mm_loadu_si128((const __m128i *)&v220[56]);
      v91 = *(_QWORD *)&v220[72];
      v176 = *(_OWORD *)&v220[80];
      goto LABEL_193;
    }
    v155[3] = *(_QWORD *)&v220[8];
    v214 = *(_QWORD **)&v220[16];
    v156 = *(_OWORD *)&v220[16];
    v188 = (__m128i)*(unsigned __int64 *)&v220[24];
    v185 = 0;
    v191 = 0;
    v190 = 0u;
    v189 = 0;
    v186 = 8;
    v187 = 0;
    if ( !*(_QWORD *)&v220[24] )
    {
      v183 = 0;
      v17 = 8;
      v15 = 11;
      v98 = 0;
      v99 = 0;
      v226 = 0;
      v223 = 0;
      v202 = 0;
      v100 = v225;
      v101 = v214;
      if ( v225 )
        goto LABEL_191;
      goto LABEL_192;
    }
    rusqlite::Connection::execute_batch::h4a2529fc120bbad7(
      v211,
      v169,
      *(&off_1019753C8 + (unsigned int)(unsigned __int8)v171),
      qword_10167F028[(unsigned __int8)v171]);
    v210 = 0x8000000000000016LL;
    if ( *(_QWORD *)&v211[0] != 0x8000000000000016LL )
    {
      *(_QWORD *)&v220[56] = *((_QWORD *)&v211[3] + 1);
      *(_OWORD *)&v220[41] = *(_OWORD *)((char *)&v211[2] + 9);
      *(_OWORD *)&v220[25] = *(_OWORD *)((char *)&v211[1] + 9);
      *(_QWORD *)&v220[17] = *(_QWORD *)((char *)&v211[1] + 1);
      *(_OWORD *)v220 = v211[0];
      v220[16] = v211[1];
      *(_QWORD *)&v215 = v220;
      *((_QWORD *)&v215 + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v211, &unk_1017CB6A8, &v215);
      v17 = *((_QWORD *)&v211[0] + 1);
      v230 = *(_QWORD *)&v211[0];
      v99 = *(_QWORD *)&v211[1];
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v220);
      goto LABEL_175;
    }
    v217 = 0;
    v218 = 8;
    v219 = 0;
    v21 = v214;
    v163 = &v214[9 * v16];
    v166 = v152[11];
    v181 = v152[9];
    v164 = v151;
    v179 = v152[8];
LABEL_19:
    v230 = v6;
    v231 = v17;
    if ( v21[6] == 0x8000000000000000LL )
      goto LABEL_235;
    v22 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v21[7], v21[8]);
    v24 = v23;
    if ( v23 && v152[5] )
    {
      v25 = (const void *)v22;
      v26 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(&v152[6], v22, v23);
      v27 = v152[2];
      v28 = v152[3];
      v29 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v26 >> 57), (__m128i)0LL);
      v30 = v152[2] - 24LL;
      for ( i = nullptr; ; i += 16 )
      {
        v32 = v28 & v26;
        v33 = _mm_loadu_si128((const __m128i *)(v27 + v32));
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v33, v29));
        if ( (_DWORD)_RAX )
          break;
LABEL_28:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v33, (__m128i)-1LL)) )
          goto LABEL_30;
        v26 = (unsigned __int64)&i[v32 + 16];
      }
      v203.i64[0] = v27;
      v228 = (char *)v28;
      v184 = v29;
      v197 = i;
      v168 = v33;
      while ( 1 )
      {
        __s2 = (void *)_RAX;
        __asm { tzcnt   eax, eax }
        v35 = -3LL * (v28 & (v32 + _RAX));
        if ( v24 == *(_QWORD *)(v30 + 8 * v35 + 16) )
        {
          __n = (size_t)v21;
          v36 = memcmp(v25, *(const void **)(v30 + 8 * v35 + 8), v24);
          v21 = (_QWORD *)__n;
          if ( !v36 )
            break;
        }
        _RAX = (unsigned int)((_DWORD)__s2 - 1);
        LOWORD(_RAX) = (unsigned __int16)__s2 & ((_WORD)__s2 - 1);
        v27 = v203.i64[0];
        v28 = (unsigned __int64)v228;
        v29 = _mm_load_si128(&v184);
        i = v197;
        v33 = _mm_load_si128(&v168);
        if ( !(_WORD)_RAX )
          goto LABEL_28;
      }
      ++v188.i64[1];
      goto LABEL_17;
    }
LABEL_30:
    v37 = v179;
    if ( v21[6] != 0x8000000000000000LL
      && (v41 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v21[7], v21[8]),
          (v43 = (const void *)v41) != nullptr)
      && (v44 = v42) != 0
      && v166 )
    {
      v45 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v153, v41, v42);
      v46 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v45 >> 57), (__m128i)0LL);
      for ( j = nullptr; ; j += 16 )
      {
        v48 = v181 & v45;
        v49 = _mm_loadu_si128((const __m128i *)(v37 + v48));
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v49, v46));
        if ( (_DWORD)_RCX )
          break;
LABEL_45:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v49, (__m128i)-1LL)) )
          goto LABEL_31;
        v45 = (unsigned __int64)&j[v48 + 16];
      }
      __s2 = (void *)v48;
      v203 = v46;
      v228 = j;
      v184 = v49;
      while ( 1 )
      {
        __n = _RCX;
        __asm { tzcnt   ecx, ecx }
        v51 = -48LL * (v181 & (v48 + _RCX));
        if ( v44 == *(_QWORD *)(v37 + v51 - 32) )
        {
          v52 = v37 + v51;
          v53 = memcmp(v43, *(const void **)(v52 - 40), v44);
          v54 = v52;
          v37 = v179;
          if ( !v53 )
            break;
        }
        v55 = __n - 1;
        LOWORD(v55) = __n & (__n - 1);
        _RCX = v55;
        v48 = (unsigned __int64)__s2;
        v46 = _mm_load_si128(&v203);
        j = v228;
        v49 = _mm_load_si128(&v184);
        if ( ((unsigned __int16)__n & (unsigned __int16)(__n - 1)) == 0 )
          goto LABEL_45;
      }
      v38 = (__int64 *)(v54 - 24);
    }
    else
    {
LABEL_235:
    {
LABEL_31:
      v38 = &v151;
      if ( v164 == 0x8000000000000000LL )
        goto LABEL_16;
    }
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v220, v38);
    if ( *(_QWORD *)v220 == 0x8000000000000000LL )
    {
LABEL_16:
      ++v191;
LABEL_17:
      v17 = v231;
      v6 = v230;
      goto LABEL_18;
    }
    v205 = *(_QWORD *)&v220[16];
    v204 = *(_OWORD *)v220;
    core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)&v220[8], *(_QWORD *)&v220[16]);
    v6 = v230;
    if ( v39 )
      break;
    ++v191;
    v17 = v231;
LABEL_104:
    if ( (_QWORD)v204 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v204 + 1), v204, 1);
LABEL_18:
    v21 += 9;
    if ( v21 != v163 )
      goto LABEL_19;
    rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v211, v169, &unk_10167EFAD, 6);
    if ( *(_QWORD *)&v169[0] >= 0x7FFFFFFFFFFFFFFFuLL )
      core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_1019752D8);
    ++*(_QWORD *)&v169[0];
    autocommit = sqlite3_get_autocommit(*(sqlite3 **)&v169[1]);
    --*(_QWORD *)&v169[0];
    if ( !autocommit )
    {
      rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v220, v169, &unk_1015FBFE8, 8);
      if ( *(_QWORD *)v220 != v210 )
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v220);
    }
    if ( *(_QWORD *)&v211[0] != v210 )
    {
      *(_OWORD *)&v220[48] = v211[3];
      *(_OWORD *)&v220[32] = v211[2];
      *(_OWORD *)&v220[16] = v211[1];
      *(_OWORD *)v220 = v211[0];
      v104 = v218 - 72;
      for ( k = 72 * v219; k; k -= 72 )
      {
        v106 = (_QWORD *)(v104 + k);
        codexmate_lib::core::relay::codex_thread_visibility::revert_rollout_patch::h42679fb362ff687a(v106);
      }
      *(_QWORD *)&v215 = v220;
      *((_QWORD *)&v215 + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v154, &unk_1017CB620, &v215);
      v230 = v154[0];
      v17 = v154[1];
      v99 = v154[2];
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v220);
      LODWORD(v231) = 0;
      v107 = v219;
      if ( !v219 )
        goto LABEL_168;
      goto LABEL_132;
    }
    codexmate_lib::core::relay::codex_thread_visibility::checkpoint_after_committed_write::h67b31aee3cf0b26a(
      (__int64)v169,
      (__int64)"thread model convergencerelay_model_catalogconvergedSELECT id, rollout_path, model_provider, COALESCE(source, '') FROM threads WHERE COALESCE(archived, 0) = 0 ORDER BY idthread-rollout-repairs",
      24);
    if ( v189 | v191 )
    {
      *(_QWORD *)&v211[0] = v213;
      *((_QWORD *)&v211[0] + 1) = v165;
      *(_QWORD *)v220 = v211;
      *(_QWORD *)&v220[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
      *(_QWORD *)&v220[16] = &v188;
      *(_QWORD *)&v220[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      *(_QWORD *)&v220[32] = &v189;
      *(_QWORD *)&v220[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      *(_QWORD *)&v220[48] = &v190;
      *(_QWORD *)&v220[56] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      *(_QWORD *)&v220[64] = &v190.i64[1];
      *(_QWORD *)&v220[72] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      *(_QWORD *)&v220[80] = &v191;
      *(_QWORD *)&v220[88] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v150, &unk_1017CB653, v220);
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
        (unsigned __int64)"relay_model_catalogconvergedSELECT id, rollout_path, model_provider, COALESCE(source, '') FROM threads WHERE COALESCE(archived, 0) = 0 ORDER BY idthread-rollout-repairs",
        19,
        (unsigned __int64)"convergedSELECT id, rollout_path, model_provider, COALESCE(source, '') FROM threads WHERE COALESCE(archived, 0) = 0 ORDER BY idthread-rollout-repairs",
        9,
        v150,
        v103);
      v223 = v189;
      v226 = v191;
    }
    else
    {
      v226 = 0;
      v223 = 0;
    }
    v14 = v185;
    v230 = v186;
    v13 = v187;
    v183 = v188;
    v202 = _mm_loadu_si128(&v190);
    v112 = v219;
    if ( v219 )
    {
      v113 = (_QWORD *)(v218 + 56);
      do
      {
        v114 = *(v113 - 7);
        if ( v114 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v113 - 6), v114, 1);
        v115 = *(v113 - 4);
        if ( v115 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v113 - 3), v115, 1);
        v116 = *(v113 - 1);
        if ( v116 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v113, v116, 1);
        v113 += 9;
        --v112;
      }
      while ( v112 );
    }
    if ( v217 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v218, 72 * v217, 8);
    v117 = v214 + 7;
    v118 = v223;
    do
    {
      while ( 1 )
      {
        v120 = *(v117 - 7);
        if ( v120 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v117 - 6), v120, 1);
        v121 = *(v117 - 4);
        if ( !(2 * v121) )
          break;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v117 - 3), v121, 1);
        v119 = *(v117 - 1);
        if ( 2 * v119 )
          goto LABEL_159;
LABEL_154:
        v117 += 9;
        if ( !--v16 )
          goto LABEL_160;
      }
      v119 = *(v117 - 1);
      if ( !(2 * v119) )
        goto LABEL_154;
LABEL_159:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v117, v119, 1);
      v117 += 9;
      --v16;
    }
    while ( v16 );
LABEL_160:
    if ( v225 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214, 72 * v225, 8);
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v169);
    v12 = v118;
    v11 = v230;
LABEL_117:
    v16 = v13;
    v96 = (char *)v11;
    v18 = _mm_load_si128(&v183);
    v97 = _mm_load_si128(&v202);
    v20 = v226;
LABEL_196:
    v131 = _mm_loadu_si128((const __m128i *)&v175[24]);
    v183 = v18;
    *(__m128i *)&v175[24] = _mm_add_epi64(v131, v18);
    v223 = v12;
    *(_QWORD *)&v175[40] += v12;
    v132 = _mm_loadu_si128((const __m128i *)&v175[48]);
    v202 = v97;
    *(__m128i *)&v175[48] = _mm_add_epi64(v132, v97);
    v226 = v20;
    *(_QWORD *)&v175[64] += v20;
    *(_QWORD *)v220 = v96;
    v133 = v14;
    *(_QWORD *)&v220[16] = v14;
    v134 = v96;
    *(_QWORD *)&v220[8] = v96;
    *(_QWORD *)&v220[24] = &v96[24 * v16];
    v135 = *(_QWORD *)&v175[16];
    if ( v16 > *(_QWORD *)v175 - *(_QWORD *)&v175[16] )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        v175,
        *(_QWORD *)&v175[16],
        v16,
        8,
        24,
        v9);
      v135 = *(_QWORD *)&v175[16];
    }
    memcpy((void *)(*(_QWORD *)&v175[8] + 24 * v135), v134, 24 * v16);
    *(_QWORD *)&v175[16] = v135 + v16;
    if ( v133 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, 24 * v133, 8);
    if ( v193 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v213, v193, 1);
    v178 -= 24LL;
    v4 = (__int64)(v177 + 3);
    v5 = v192;
    if ( v192 == (_QWORD *)v194 )
      goto LABEL_208;
  }
  v40 = 0x8000000000000000LL;
  if ( v21[3] == 0x8000000000000000LL )
  {
    v161[0] = 0x8000000000000000LL;
    v17 = v231;
    goto LABEL_98;
  }
  v56 = v21[4];
  v57 = v21[5];
  __s2 = *((void **)&v204 + 1);
  __n = v205;
  std::sys::fs::metadata::h32fa16d3052ea535(v220, v56, v57);
  if ( *(_DWORD *)v220 != 1 )
  {
    codexmate_lib::core::relay::codex_thread_visibility::find_first_session_meta_line::hbef333d2a75f746a(v211, v56, v57);
    if ( LODWORD(v211[0]) != 11 )
    {
      qmemcpy(v220, v211, 0x60u);
      v206 = (__int64)v220;
      v207 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v215, &unk_1017CAF7E, &v206);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v220);
      v58 = *((void **)&v215 + 1);
      v17 = v215;
      v6 = v216;
LABEL_58:
      *(_QWORD *)&v211[0] = v17;
      v227 = v58;
      *((_QWORD *)&v211[0] + 1) = v58;
      *(_QWORD *)&v211[1] = v6;
      ++v191;
      *(_QWORD *)v220 = v21;
      *(_QWORD *)&v220[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      *(_QWORD *)&v220[16] = v211;
      *(_QWORD *)&v220[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v172, &unk_1017CB5DB, v220);
      v60 = v187;
      if ( v187 >= 3 )
      {
        if ( v172 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v173, v172, 1);
      }
      else
      {
        v230 = v6;
        if ( v187 == v185 )
        {
          v231 = v172;
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v185);
        }
        v61 = v186;
        v62 = 3 * v60;
        *(_QWORD *)(v186 + 8 * v62 + 16) = v174;
        v63 = v172;
        *(_QWORD *)(v61 + 8 * v62 + 8) = v173;
        *(_QWORD *)(v61 + 8 * v62) = v63;
        v187 = v60 + 1;
        v6 = v230;
      }
      if ( *(_QWORD *)&v211[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v211[0] + 1), *(_QWORD *)&v211[0], 1);
      goto LABEL_104;
    }
    v203.i64[0] = *((_QWORD *)&v211[0] + 1);
    if ( *((_QWORD *)&v211[0] + 1) == 0x8000000000000000LL )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v211, v56);
      v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1);
      if ( !v59 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20);
      v58 = v59;
      qmemcpy(v59, "session_meta missing", 20);
      v6 = 20;
      v17 = 20;
      goto LABEL_58;
    }
    v184.i64[0] = v57;
    v64 = *((_QWORD *)&v211[1] + 1);
    *(_OWORD *)v220 = v211[1];
    *(_OWORD *)&v220[16] = 0u;
    v228 = *(char **)&v211[1];
    *(_OWORD *)&v220[32] = v211[1];
    serde_json::de::from_trait::h51e180b4bb6af5e0(v211, v220);
    if ( LOBYTE(v211[0]) == 6 )
    {
      v212 = *((__int128 **)&v211[0] + 1);
      v206 = (__int64)&v212;
      v207 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v220, &unk_1017CAF62, &v206);
      v68 = v212;
      if ( *(_QWORD *)v212 == 1 )
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(
          (char *)v212 + 8,
          &unk_1017CAF62,
          v65,
          v66,
          v67);
      }
      else if ( !*(_QWORD *)v212 )
      {
        v69 = *((_QWORD *)v212 + 2);
        if ( v69 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v212 + 1), v69, 1);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, 40, 8);
      v227 = *(void **)&v220[8];
      v231 = *(_QWORD *)v220;
      v6 = *(_QWORD *)&v220[16];
      v40 = 0x8000000000000001LL;
      goto LABEL_93;
    }
    v215 = v211[0];
    v216 = v211[1];
    v74 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                     "payload",
                     7,
                     &v215);
    if ( v74
      && *v74 == 5
      && (v197 = v74 + 8,
          v75 = v74 + 8,
          v76 = "modelusagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
          (v77 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf(
                   v74 + 8,
                   "modelusagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
                   5)) != 0)
      && *(_BYTE *)v77 == 3 )
    {
      v168.i64[0] = v56;
      if ( *(_QWORD *)(v77 + 24) == __n )
      {
        v75 = *(const void **)(v77 + 16);
        v76 = (const char *)__s2;
        v40 = 0x8000000000000000LL;
        if ( !memcmp(v75, __s2, __n) )
          goto LABEL_90;
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v75, v76);
      v78 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
      if ( !v78 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
      *(_BYTE *)(v78 + 4) = 108;
      *(_DWORD *)v78 = 1701080941;
      v206 = 5;
      v207 = (void *)v78;
      v208 = 5;
      v79 = __n;
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v220, __n, 0, 1, 1);
      v230 = *(_QWORD *)&v220[8];
      if ( v220[0] )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v230, *(_QWORD *)&v220[16]);
      v80 = *(_QWORD *)&v220[16];
      memcpy(*(void **)&v220[16], __s2, v79);
      *(_QWORD *)&v220[8] = v230;
      *(_QWORD *)&v220[16] = v80;
      *(_QWORD *)&v220[24] = v79;
      v220[0] = 3;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v211, v197, &v206, v220);
      v81 = v168.i64[0];
      if ( LOBYTE(v211[0]) != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v211);
      serde_json::ser::to_vec::haa2ccd5674877793(v220, &v215);
      if ( *(_QWORD *)v220 == 0x8000000000000000LL )
      {
        codexmate_lib::core::relay::codex_thread_visibility::patch_router_model_rollout_if_present::_$u7b$$u7b$closure$u7d$$u7d$::h319857eaf02b7a35(
          (__int64)v220,
          *(_QWORD **)&v220[8]);
        v227 = *(void **)&v220[8];
        v231 = *(_QWORD *)v220;
        v6 = *(_QWORD *)&v220[16];
      }
      else
      {
        v230 = *(_QWORD *)v220;
        v86 = *(_QWORD *)&v220[16];
        __n = *(_QWORD *)&v220[8];
        codexmate_lib::core::relay::codex_thread_visibility::replace_first_session_meta_line::h49193b4a14eef084(
          (__int64 *)v211,
          v81,
          v184.i64[0],
          *(void **)&v220[8],
          *(size_t *)&v220[16],
          v228,
          v64);
        if ( LODWORD(v211[0]) == 11 )
        {
          std::path::Path::to_path_buf::h73855ce4b54f7174(v220, v81, v184.i64[0]);
          v231 = *(_QWORD *)&v220[8];
          v40 = *(_QWORD *)v220;
          v227 = *(void **)&v220[16];
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v215);
          v167 = v64;
          v17 = v231;
          v83 = v228;
          v87 = v203.i64[0];
          v85 = __n;
          v84 = v230;
          goto LABEL_96;
        }
        qmemcpy(v220, v211, 0x60u);
        codexmate_lib::core::relay::codex_thread_visibility::patch_model_fallback_rollout::_$u7b$$u7b$closure$u7d$$u7d$::h0bd60d9801b71671(
          (__int64)&v206,
          (__int64)v220);
        v231 = v206;
        v227 = v207;
        v6 = v208;
        if ( v230 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__n, v230, 1);
          v40 = v196;
          goto LABEL_90;
        }
      }
      v40 = v196;
    }
    else
    {
      v40 = 0x8000000000000000LL;
    }
LABEL_90:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v215);
LABEL_93:
    v82 = v6;
    if ( v203.i64[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v203.i64[0], 1);
    v83 = v198;
    v84 = v199;
    v85 = v200;
    v86 = v201;
    v87 = v82;
    v17 = v231;
LABEL_96:
    v198 = v83;
    v199 = v84;
    v200 = v85;
    v201 = v86;
    v6 = v87;
    v58 = v227;
    if ( v40 == 0x8000000000000001LL )
      goto LABEL_58;
    goto LABEL_97;
  }
  if ( (v220[8] & 3) == 1 )
  {
    v70 = *(_QWORD *)&v220[8] - 1LL;
    v71 = *(_QWORD *)(*(_QWORD *)&v220[8] - 1LL);
    v72 = *(_QWORD *)(*(_QWORD *)&v220[8] + 7LL);
    if ( *(_QWORD *)v72 )
      (*(void (__fastcall **)(__int64))v72)(v71);
    v73 = *(_QWORD *)(v72 + 8);
    if ( v73 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, v73, *(_QWORD *)(v72 + 16));
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, 24, 8);
    v40 = 0x8000000000000000LL;
    v58 = v227;
    v17 = v231;
    v6 = v230;
  }
  else
  {
    v40 = 0x8000000000000000LL;
    v58 = v227;
    v17 = v231;
  }
LABEL_97:
  v161[4] = v198;
  v161[5] = v167;
  v161[6] = v199;
  v161[7] = v200;
  v161[8] = v201;
  v161[0] = v40;
  v161[1] = v17;
  v227 = v58;
  v161[2] = v58;
  v161[3] = v6;
LABEL_98:
  v162 = v21;
  v212 = &v204;
  v206 = (__int64)&v162;
  v207 = &unk_101974908;
  v208 = (__int64)&v212;
  v209 = &unk_101974908;
  rusqlite::Connection::execute::h1e8b76b744a4c88a(
    v211,
    v169,
    "UPDATE threads SET model = ?2 WHERE id = ?1model restore/payload/model_provider",
    43,
    &v206,
    2);
  if ( *(_QWORD *)&v211[0] == v210 )
  {
    if ( v40 != 0x8000000000000000LL )
    {
      v88 = v6;
      v89 = v219;
      if ( v219 == v217 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v217);
      qmemcpy((void *)(v218 + 72 * v89), v161, 0x48u);
      v219 = v89 + 1;
      ++v190.i64[0];
      v6 = v88;
    }
    ++v189;
    goto LABEL_104;
  }
  *(_OWORD *)&v220[48] = v211[3];
  *(_OWORD *)&v220[32] = v211[2];
  *(_OWORD *)&v220[16] = v211[1];
  *(_OWORD *)v220 = v211[0];
  if ( v40 != 0x8000000000000000LL )
  {
    codexmate_lib::core::relay::codex_thread_visibility::revert_rollout_patch::h42679fb362ff687a(v161);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceVocabularyAppPayload$GT$::h7c19e114632ac5af(v161);
  }
  LOBYTE(v17) = v40 == 0x8000000000000000LL;
  LODWORD(v231) = v17;
  *(_QWORD *)&v215 = v21;
  *((_QWORD *)&v215 + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  *(_QWORD *)&v216 = v220;
  *((_QWORD *)&v216 + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v155, &unk_1017CB5F7, &v215);
  v230 = v155[0];
  v17 = v155[1];
  v99 = v155[2];
  v122 = core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v220);
  if ( (_QWORD)v204 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v204 + 1), v204, 1);
  LOBYTE(v122) = 1;
  LODWORD(v231) = v122;
  v107 = v219;
  if ( v219 )
  {
LABEL_132:
    v108 = (_QWORD *)(v218 + 56);
    do
    {
      v109 = *(v108 - 7);
      if ( v109 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v108 - 6), v109, 1);
      v110 = *(v108 - 4);
      if ( v110 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v108 - 3), v110, 1);
      v111 = *(v108 - 1);
      if ( v111 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v108, v111, 1);
      v108 += 9;
      --v107;
    }
    while ( v107 );
  }
LABEL_168:
  if ( v217 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v218, 72 * v217, 8);
  if ( (_BYTE)v231 )
  {
    if ( *(_QWORD *)&v169[0] >= 0x7FFFFFFFFFFFFFFFuLL )
      core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_1019752D8);
    ++*(_QWORD *)&v169[0];
    v123 = sqlite3_get_autocommit(*(sqlite3 **)&v169[1]);
    --*(_QWORD *)&v169[0];
    if ( !v123 )
    {
      rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v220, v169, &unk_1015FBFE8, 8);
      if ( *(_QWORD *)v220 != v210 )
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v220);
    }
  }
LABEL_175:
  v124 = v187;
  if ( v187 )
  {
    v125 = (_QWORD *)(v186 + 8);
    do
    {
      v126 = *(v125 - 1);
      if ( v126 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v125, v126, 1);
      v125 += 3;
      --v124;
    }
    while ( v124 );
  }
  if ( v185 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v186, 24 * v185, 8);
  v127 = v214 + 7;
  while ( 2 )
  {
    while ( 2 )
    {
      v129 = *(v127 - 7);
      if ( v129 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v127 - 6), v129, 1);
      v130 = *(v127 - 4);
      if ( 2 * v130 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v127 - 3), v130, 1);
        v128 = *(v127 - 1);
        if ( 2 * v128 )
          break;
        goto LABEL_184;
      }
      v128 = *(v127 - 1);
      if ( !(2 * v128) )
      {
LABEL_184:
        v127 += 9;
        if ( !--v16 )
          goto LABEL_190;
        continue;
      }
      break;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v127, v128, 1);
    v127 += 9;
    if ( --v16 )
      continue;
    break;
  }
LABEL_190:
  v15 = 10;
  v98 = v230;
  v100 = v225;
  v101 = v214;
  if ( v225 )
LABEL_191:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101, 72 * v100, 8);
LABEL_192:
  v16 = v99;
  v225 = v98;
  v90 = v223;
  v91 = v226;
LABEL_193:
  core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v169);
  v12 = v90;
  v20 = v91;
  v18 = _mm_load_si128(&v183);
  v19 = _mm_load_si128(&v202);
LABEL_194:
  if ( v15 == 11 )
  {
    v97 = v19;
    v96 = (char *)v17;
    v14 = v225;
    goto LABEL_196;
  }
  v141 = v195;
  *((_OWORD *)v195 + 5) = v176;
  *v141 = v15;
  v141[1] = v225;
  v141[2] = v17;
  v141[3] = v16;
  *((__m128i *)v141 + 2) = v18;
  v141[6] = v12;
  *(__m128i *)(v141 + 7) = v19;
  v141[9] = v20;
  if ( v193 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v213, v193, 1);
  if ( (_QWORD *)v194 != v192 )
  {
    v142 = v177;
    v143 = v178 / 0x18;
    do
    {
      v144 = *(v142 - 1);
      if ( v144 )
      {
        v145 = v142;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v142, v144, 1);
        v142 = v145;
      }
      v142 += 3;
      --v143;
    }
    while ( v143 );
  }
  if ( v180 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v182, 24 * v180, 8);
  v146 = *(_QWORD *)&v175[8];
  v147 = *(_QWORD *)&v175[16];
  if ( *(_QWORD *)&v175[16] )
  {
    v148 = (_QWORD *)(*(_QWORD *)&v175[8] + 8LL);
    do
    {
      v149 = *(v148 - 1);
      if ( v149 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v148, v149, 1);
      v148 += 3;
      --v147;
    }
    while ( v147 );
  }
  if ( *(_QWORD *)v175 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146, 24LL * *(_QWORD *)v175, 8);
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..RouterCatalogModelIndex$GT$::h819ad9381fef45a6(&v151);
  return v195;
}
