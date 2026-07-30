// __ZN13codexmate_lib4core5relay13codex_catalog36normalize_no_account_slot_preference @ 0x100226630 | 1.2.4 NEW-delta
_QWORD *__fastcall codexmate_lib::core::relay::codex_catalog::normalize_no_account_slot_preference::h2650e5fed1d457cb(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v16; // r8
  __int64 j; // rcx
  __int64 v18; // r14
  unsigned __int64 i; // rdx
  void *v20; // rdi
  unsigned __int64 v21; // rax
  size_t v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  __m128i v27; // xmm2
  const void **v29; // rax
  int v30; // eax
  bool v31; // zf
  __m128i v32; // xmm1
  unsigned __int64 v33; // r13
  const void *v34; // r12
  __int64 v35; // r12
  __int64 v36; // r13
  const void *v37; // r14
  size_t v38; // r15
  __int64 v39; // rbx
  char *v40; // rcx
  int v41; // eax
  _QWORD *v42; // r14
  _QWORD *v43; // r15
  __int64 v44; // rsi
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 *v47; // r14
  __int64 v48; // rsi
  __int64 v49; // rsi
  _QWORD *v50; // rbx
  unsigned __int64 v51; // r14
  _QWORD *v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rsi
  void *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  size_t v58; // r15
  const void *v59; // r12
  __int64 v60; // rax
  size_t v61; // r14
  __int64 v62; // r9
  unsigned __int64 v63; // rbx
  _QWORD *v64; // r13
  _QWORD *v65; // rax
  unsigned __int64 v66; // rax
  const __m128i *v67; // r14
  __int64 v68; // r15
  __m128i v69; // xmm0
  __int8 *v70; // r12
  unsigned __int64 v71; // rax
  __m128i v72; // xmm1
  __int64 v74; // rsi
  _QWORD *v75; // rsi
  const void *v76; // r15
  size_t v77; // rbx
  void *v78; // rax
  void *v79; // r12
  __int64 v80; // rdx
  __int64 v81; // rcx
  void *v82; // rax
  void *v83; // r12
  unsigned __int64 v84; // rax
  __m128i v85; // xmm0
  unsigned __int64 v86; // rax
  __m128i v87; // xmm1
  __int64 v89; // rsi
  _QWORD *v90; // rsi
  unsigned __int64 v91; // rax
  __m128i v92; // xmm0
  unsigned __int64 v93; // rax
  __m128i v94; // xmm1
  __int64 v96; // rsi
  __int64 v97; // rsi
  unsigned __int64 v98; // rax
  __m128i v99; // xmm0
  unsigned __int64 v100; // rax
  __m128i v101; // xmm1
  __int64 v103; // rsi
  _DWORD *v104; // rsi
  unsigned __int64 v105; // rax
  __m128i v106; // xmm0
  unsigned __int64 v107; // rax
  __m128i v108; // xmm1
  __int64 v110; // rsi
  _DWORD *v111; // rsi
  unsigned __int64 v112; // rbx
  _QWORD *v113; // r14
  __int64 v114; // rsi
  __int64 v115; // rsi
  __int64 v116; // rsi
  _QWORD *v117; // rdx
  __int64 v119; // rbx
  __int64 v120; // r14
  const __m128i *v121; // r15
  const __m128i *v123; // r12
  int v124; // r13d
  __int64 v125; // rax
  __int64 v126; // rsi
  unsigned __int64 v127; // rax
  __int64 v128; // rbx
  __int64 v130; // r14
  const __m128i *v131; // r15
  const __m128i *v133; // r12
  int v134; // r13d
  const __m128i *v135; // rbx
  __int64 v136; // rsi
  __int64 v137; // rsi
  __int64 v138; // rsi
  _QWORD *v139; // rdx
  __int64 v141; // rbx
  const __m128i *v142; // r14
  const __m128i *v144; // r12
  int v145; // r13d
  __int64 v146; // rax
  __int64 v147; // rsi
  unsigned __int64 v148; // rax
  __int64 v149; // r15
  __int64 v151; // r14
  const __m128i *v152; // r15
  const __m128i *v154; // r12
  int v155; // r13d
  const __m128i *v156; // rbx
  __int64 v157; // rsi
  __int64 v158; // rsi
  __int64 v159; // rax
  __int64 v160; // rsi
  char *v162; // rcx
  __int64 v163; // rsi
  __m128i v164; // [rsp+0h] [rbp-200h] BYREF
  __m128i v165; // [rsp+10h] [rbp-1F0h] BYREF
  _QWORD *v166; // [rsp+28h] [rbp-1D8h]
  __int64 v167; // [rsp+30h] [rbp-1D0h]
  _QWORD *v168; // [rsp+38h] [rbp-1C8h]
  _QWORD *v169; // [rsp+40h] [rbp-1C0h]
  size_t v170; // [rsp+48h] [rbp-1B8h]
  _QWORD *v171; // [rsp+50h] [rbp-1B0h]
  __int64 v172; // [rsp+58h] [rbp-1A8h]
  __int64 v173; // [rsp+60h] [rbp-1A0h]
  __int64 v174; // [rsp+68h] [rbp-198h]
  _QWORD v175[2]; // [rsp+70h] [rbp-190h] BYREF
  __int64 v176; // [rsp+80h] [rbp-180h] BYREF
  __int64 v177; // [rsp+88h] [rbp-178h]
  __int64 v178; // [rsp+90h] [rbp-170h]
  const __m128i *v179; // [rsp+98h] [rbp-168h] BYREF
  void *v180; // [rsp+A0h] [rbp-160h]
  __int64 v181; // [rsp+A8h] [rbp-158h]
  __int64 v182; // [rsp+B0h] [rbp-150h]
  __int64 v183; // [rsp+B8h] [rbp-148h]
  __int64 v184; // [rsp+C0h] [rbp-140h]
  __int64 v185; // [rsp+C8h] [rbp-138h]
  __int64 v186; // [rsp+D0h] [rbp-130h]
  __int64 v187; // [rsp+D8h] [rbp-128h] BYREF
  __int64 v188; // [rsp+E0h] [rbp-120h]
  __int64 v189; // [rsp+E8h] [rbp-118h]
  __int64 v190; // [rsp+F0h] [rbp-110h]
  __int64 v191; // [rsp+F8h] [rbp-108h]
  __int64 v192; // [rsp+100h] [rbp-100h]
  __int64 v193; // [rsp+108h] [rbp-F8h]
  const __m128i *v194; // [rsp+110h] [rbp-F0h] BYREF
  __int64 v195; // [rsp+118h] [rbp-E8h]
  __int64 v196; // [rsp+120h] [rbp-E0h]
  __int64 v197; // [rsp+128h] [rbp-D8h]
  _QWORD v198[2]; // [rsp+130h] [rbp-D0h] BYREF
  __int64 v199; // [rsp+140h] [rbp-C0h]
  _QWORD *v200; // [rsp+148h] [rbp-B8h]
  _QWORD v201[9]; // [rsp+150h] [rbp-B0h] BYREF
  __int64 v202; // [rsp+198h] [rbp-68h] BYREF
  __int64 v203; // [rsp+1A0h] [rbp-60h] BYREF
  __int64 v204; // [rsp+1A8h] [rbp-58h]
  unsigned __int64 v205; // [rsp+1B0h] [rbp-50h]
  _QWORD *v206; // [rsp+1B8h] [rbp-48h]
  __int64 v207; // [rsp+1C0h] [rbp-40h]
  size_t __n; // [rsp+1C8h] [rbp-38h]
  void *__s2; // [rsp+1D0h] [rbp-30h]

  v202 = a6; /*0x100226644*/
  v207 = a5; /*0x100226648*/
  v185 = a4; /*0x10022664c*/
  v193 = a3; /*0x100226653*/
  v192 = a2; /*0x10022665a*/
  v200 = a1; /*0x100226661*/
  v8 = (__int64)&std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384; /*0x100226668*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x10022666f*/
  v10 = v9; /*0x100226671*/
  if ( *(_BYTE *)(v9 + 16) == 1 ) /*0x100226678*/
  {
    v11 = *(_QWORD *)v9; /*0x10022667e*/
    v12 = *(_QWORD *)(v10 + 8); /*0x100226681*/
  }
  else
  {
    v11 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100227858*/
    *(_QWORD *)v10 = v11; /*0x10022785d*/
    *(_QWORD *)(v10 + 8) = v12; /*0x100227860*/
    *(_BYTE *)(v10 + 16) = 1; /*0x100227864*/
  }
  *(_QWORD *)v10 = v11 + 1; /*0x100226689*/
  memset(&v201[1], 0, 24); /*0x1002266af*/
  v201[0] = anon_7245a3145add9b93f83b0a9aa358a664_13; /*0x1002266bd*/
  v201[4] = v11; /*0x1002266c4*/
  v201[5] = v12; /*0x1002266cb*/
  if ( v207 ) /*0x1002266d7*/
  {
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::hc6e7b6d5d2733f2a(v201, v207, &v201[4], 1); /*0x100227884*/
    v190 = 24 * v207; /*0x100227899*/
    v162 = nullptr; /*0x1002278a0*/
    do /*0x1002278d9*/
    {
      v163 = *(_QWORD *)&v162[v185 + 8]; /*0x1002278b0*/
      __s2 = v162; /*0x1002278b5*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h85b41af0a3639d0c(v201, v163, *(_QWORD *)&v162[v185 + 16]); /*0x1002278be*/
      v162 = (char *)__s2 + 24; /*0x1002278c7*/
      v8 = (__int64)v201; /*0x1002278d2*/
    }
    while ( (void *)v190 != (char *)__s2 + 24 ); /*0x1002278d9*/
  }
  v175[1] = v201[5]; /*0x1002266e4*/
  v175[0] = v201[4]; /*0x1002266f2*/
  v174 = v201[3]; /*0x100226700*/
  v173 = v201[2]; /*0x10022670e*/
  v172 = v201[1]; /*0x100226723*/
  v171 = (_QWORD *)v201[0]; /*0x10022672a*/
  if ( *(_BYTE *)(v10 + 16) == 1 ) /*0x100226735*/
  {
    v13 = *(_QWORD *)v10; /*0x10022673b*/
    v14 = *(_QWORD *)(v10 + 8); /*0x10022673e*/
  }
  else
  {
    v13 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1002278e0*/
    *(_QWORD *)v10 = v13; /*0x1002278e5*/
    *(_QWORD *)(v10 + 8) = v14; /*0x1002278e8*/
    *(_BYTE *)(v10 + 16) = 1; /*0x1002278ec*/
  }
  _RSI = v13 + 1; /*0x100226746*/
  v182 = 0; /*0x10022674a*/
  v181 = 0; /*0x100226751*/
  v180 = nullptr; /*0x100226758*/
  v179 = (const __m128i *)anon_7245a3145add9b93f83b0a9aa358a664_13; /*0x10022675f*/
  v183 = v13; /*0x100226766*/
  v184 = v14; /*0x10022676d*/
  *(_QWORD *)v10 = v13 + 2; /*0x100226778*/
  v197 = 0; /*0x10022677b*/
  v196 = 0; /*0x100226782*/
  v195 = 0; /*0x100226789*/
  v194 = (const __m128i *)anon_7245a3145add9b93f83b0a9aa358a664_13; /*0x100226790*/
  v198[0] = v13 + 1; /*0x100226797*/
  v198[1] = v14; /*0x10022679e*/
  v203 = 0; /*0x1002267a5*/
  v204 = 8; /*0x1002267ad*/
  v205 = 0; /*0x1002267b5*/
  v16 = v207; /*0x1002267c0*/
  if ( !a7 || !v193 ) /*0x1002267d2*/
    goto LABEL_120; /*0x1002267d2*/
  j = v202; /*0x1002267dc*/
  v167 = v202 + 72 * a7; /*0x1002267e4*/
  v18 = v192 + 232 * v193; /*0x1002267f6*/
  v190 = v174; /*0x100226804*/
  i = (unsigned __int64)v171; /*0x10022680b*/
  v191 = v172; /*0x100226819*/
  v166 = v171; /*0x100226820*/
  v168 = v171 - 2; /*0x10022682b*/
  v199 = v18; /*0x100226832*/
LABEL_11:
  while ( 2 ) /*0x10022687c*/
  {
    v21 = v205; /*0x10022687c*/
    if ( v205 > 4 ) /*0x100226884*/
      goto LABEL_70; /*0x100226884*/
    v202 = j + 72; /*0x10022688e*/
    __s2 = *(void **)(j + 8); /*0x100226896*/
    v206 = (_QWORD *)j; /*0x10022689a*/
    v22 = *(_QWORD *)(j + 16); /*0x10022689e*/
    v23 = v192; /*0x1002268a2*/
    while ( 1 ) /*0x100226980*/
    {
      if ( *(_QWORD *)(v23 + 16) == v22 ) /*0x100226984*/
      {
        v34 = *(const void **)(v23 + 8); /*0x100226986*/
        v8 = (__int64)v34; /*0x10022698a*/
        _RSI = (__int64)__s2; /*0x10022698d*/
        if ( !memcmp(v34, __s2, v22) ) /*0x100226994*/
        {
          if ( v190 ) /*0x1002269a5*/
            break; /*0x1002269a5*/
        }
      }
LABEL_24:
      v23 += 232; /*0x1002269e0*/
      if ( v23 == v18 ) /*0x1002269ea*/
      {
        v16 = v207; /*0x1002269ec*/
        j = v202; /*0x1002269f0*/
        if ( v202 == v167 ) /*0x1002269fb*/
          goto LABEL_69; /*0x1002269fb*/
        goto LABEL_11; /*0x1002269fb*/
      }
    }
    v8 = (__int64)v175; /*0x1002269a7*/
    _RSI = (__int64)v34; /*0x1002269ae*/
    v33 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(v175); /*0x1002269b9*/
    v32 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v33 >> 57), (__m128i)0LL); /*0x1002269c8*/
    for ( i = 0; ; i += 16LL ) /*0x1002269cd*/
    {
      v24 = v191; /*0x1002268b0*/
      v25 = v191 & v33; /*0x1002268b7*/
      HIDWORD(_RCX) = HIDWORD(v166); /*0x1002268ba*/
      v27 = _mm_loadu_si128((const __m128i *)((char *)v166 + v25)); /*0x1002268c1*/
      _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v27, v32)); /*0x1002268cf*/
      if ( _R14D ) /*0x1002268d7*/
        break; /*0x1002268d7*/
LABEL_18:
      v18 = v199; /*0x100226950*/
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v27, (__m128i)-1LL)) ) /*0x100226958*/
        goto LABEL_24; /*0x100226965*/
      v33 = v25 + i + 16; /*0x100226967*/
    }
    v164 = v32; /*0x1002268d9*/
    v169 = (_QWORD *)i; /*0x1002268e1*/
    v165 = v27; /*0x1002268e8*/
    while ( 1 ) /*0x1002268f0*/
    {
      __asm { tzcnt ecx, r14d } /*0x1002268f0*/
      _RCX = 16 * (v24 & (v25 + _RCX)); /*0x1002268fb*/
      v29 = (const void **)&v168[_RCX / 0xFFFFFFFFFFFFFFF8LL]; /*0x100226906*/
      if ( v22 == v168[_RCX / 0xFFFFFFFFFFFFFFF8LL + 1] ) /*0x10022690d*/
      {
        _RSI = (__int64)*v29; /*0x10022690f*/
        v8 = (__int64)v34; /*0x100226912*/
        if ( !memcmp(v34, *v29, v22) ) /*0x100226918*/
          break; /*0x100226918*/
      }
      v30 = _R14D - 1; /*0x100226925*/
      LOWORD(v30) = _R14D & (_R14D - 1); /*0x100226929*/
      v31 = (_WORD)v30 == 0; /*0x100226929*/
      _R14D = v30; /*0x10022692d*/
      v24 = v191; /*0x100226930*/
      v32 = _mm_load_si128(&v164); /*0x100226937*/
      i = (unsigned __int64)v169; /*0x10022693f*/
      v27 = _mm_load_si128(&v165); /*0x100226946*/
      if ( v31 ) /*0x10022694e*/
        goto LABEL_18; /*0x10022694e*/
    }
    v8 = (__int64)v201; /*0x100226a10*/
    _RSI = v23; /*0x100226a17*/
    codexmate_lib::core::relay::models::RelayProvider::exposed_models::h2ff218b9bb419776(v201, v23); /*0x100226a1a*/
    __s2 = (void *)v201[1]; /*0x100226a26*/
    v35 = v201[2]; /*0x100226a2a*/
    if ( !v201[2] ) /*0x100226a34*/
      goto LABEL_50; /*0x100226a34*/
    v36 = 96LL * v201[2]; /*0x100226a41*/
    v37 = (const void *)v206[4]; /*0x100226a49*/
    v38 = v206[5]; /*0x100226a4d*/
    v39 = 0; /*0x100226a51*/
    v40 = (char *)__s2; /*0x100226a53*/
    do /*0x100226a67*/
    {
      if ( *(_QWORD *)&v40[v39 + 32] == v38 ) /*0x100226a72*/
      {
        v8 = *(_QWORD *)&v40[v39 + 24]; /*0x100226a74*/
        v41 = memcmp((const void *)v8, v37, v38); /*0x100226a7f*/
        v40 = (char *)__s2; /*0x100226a84*/
        if ( !v41 ) /*0x100226a8a*/
        {
          v42 = (char *)__s2 + 72; /*0x100226a8c*/
          v43 = v206; /*0x100226a9a*/
          do /*0x100226aa7*/
          {
            v44 = *(v42 - 7); /*0x100226aad*/
            if ( v44 ) /*0x100226ab4*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v42 - 6), v44, 1); /*0x100226abf*/
            v45 = *(v42 - 1); /*0x100226ac4*/
            if ( v45 != 0x8000000000000000LL && v45 ) /*0x100226ad0*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v42, v45, 1); /*0x100226ada*/
            v46 = *(v42 - 4); /*0x100226adf*/
            if ( v46 ) /*0x100226ae6*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v42 - 3), v46, 1); /*0x100226af1*/
            v42 += 12; /*0x100226aa0*/
            --v35; /*0x100226aa4*/
          }
          while ( v35 ); /*0x100226aa7*/
          if ( v201[0] ) /*0x100226ba5*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, 96LL * v201[0], 8); /*0x100226bb8*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v187, v43); /*0x100226bc7*/
          v50 = v206 + 3; /*0x100226bd0*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v176, v206 + 3); /*0x100226bde*/
          v201[2] = v189; /*0x100226bea*/
          v201[1] = v188; /*0x100226bff*/
          v201[0] = v187; /*0x100226c06*/
          v201[5] = v178; /*0x100226c1b*/
          v201[4] = v177; /*0x100226c2d*/
          v201[3] = v176; /*0x100226c31*/
          v8 = (__int64)&v179; /*0x100226c34*/
          _RSI = (__int64)v201; /*0x100226c3b*/
          if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb1c36ab2eafb4a3a(&v179, v201) ) /*0x100226c42*/
            goto LABEL_10; /*0x100226c49*/
          v51 = 0x8000000000000000LL; /*0x100226c4f*/
          v52 = v206; /*0x100226c59*/
          if ( v206[6] == 0x8000000000000000LL ) /*0x100226c61*/
          {
LABEL_67:
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v187, v52); /*0x100226d58*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v176, v50); /*0x100226d6e*/
            v201[6] = v51; /*0x100226d73*/
            v201[7] = v186; /*0x100226d7e*/
            v201[8] = v170; /*0x100226d89*/
            v201[0] = v187; /*0x100226d9b*/
            v201[1] = v188; /*0x100226da2*/
            v201[2] = v189; /*0x100226db0*/
            i = (unsigned __int64)&v201[3]; /*0x100226dbe*/
            v201[5] = v178; /*0x100226dc5*/
            v201[4] = v177; /*0x100226dd7*/
            v201[3] = v176; /*0x100226ddb*/
            v63 = v205; /*0x100226dde*/
            if ( v205 == v203 ) /*0x100226de6*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfe98f8595b104309(&v203); /*0x100226df0*/
            v20 = (void *)(v204 + 72 * v63); /*0x100226843*/
            qmemcpy(v20, v201, 0x48u); /*0x100226853*/
            _RSI = (__int64)&v202; /*0x100226853*/
            v8 = (__int64)v20 + 72; /*0x100226853*/
            v205 = v63 + 1; /*0x100226859*/
            goto LABEL_10; /*0x100226859*/
          }
          v53 = v206[7]; /*0x100226c67*/
          v54 = v206[8]; /*0x100226c6b*/
          v55 = codexmate_lib::core::relay::codex_catalog::canonical_no_account_slot_slug::hc71227110b17b428(v53, v54); /*0x100226c6f*/
          if ( !v55 ) /*0x100226c77*/
          {
LABEL_66:
            v52 = v206; /*0x100226d54*/
            goto LABEL_67; /*0x100226d54*/
          }
          v58 = v56; /*0x100226c7d*/
          if ( v56 < 0 ) /*0x100226c83*/
          {
            v51 = 0; /*0x100227847*/
            goto LABEL_190; /*0x100227847*/
          }
          v59 = v55; /*0x100226c89*/
          if ( v56 ) /*0x100226c8c*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53, v54, v56, v57); /*0x100226c8e*/
            v51 = 1; /*0x100226c93*/
            v60 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v58, 1); /*0x100226ca1*/
            if ( !v60 ) /*0x100226ca9*/
            {
              __n = v58; /*0x100227905*/
              goto LABEL_190; /*0x100227909*/
            }
            v61 = v60; /*0x100226caf*/
          }
          else
          {
            v61 = 1; /*0x100226cb4*/
          }
          memcpy((void *)v61, v59, v58); /*0x100226cc3*/
          v201[0] = v58; /*0x100226cc8*/
          __n = v61; /*0x100226ccf*/
          v201[1] = v61; /*0x100226cd3*/
          v201[2] = v58; /*0x100226cda*/
          if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7686243132a986d1(&v194, v201) ) /*0x100226cef*/
          {
            v51 = 0x8000000000000000LL; /*0x100226cf8*/
            goto LABEL_66; /*0x100226d02*/
          }
          alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h4a305b5c5d6c5cb5( /*0x100226d1b*/
            v201,
            v58,
            0,
            1,
            1,
            v62,
            v164.i64[0],
            v164.i64[1],
            v165.i64[0],
            v165.i64[1]);
          v51 = v201[1]; /*0x100226d20*/
          if ( !LOBYTE(v201[0]) ) /*0x100226d2e*/
          {
            v186 = v201[2]; /*0x100226d3b*/
            memcpy((void *)v201[2], v59, v58); /*0x100226d48*/
            v170 = v58; /*0x100226d4d*/
            goto LABEL_66; /*0x100226d4d*/
          }
          __n = v201[2]; /*0x1002278fc*/
LABEL_190:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v51, __n); /*0x10022784a*/
        }
      }
      v39 += 96; /*0x100226a60*/
    }
    while ( v36 != v39 ); /*0x100226a67*/
    v47 = (__int64 *)(v40 + 72); /*0x100226b00*/
    do /*0x100226b17*/
    {
      v48 = *(v47 - 7); /*0x100226b19*/
      if ( v48 ) /*0x100226b20*/
      {
        v8 = *(v47 - 6); /*0x100226b22*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v48, 1); /*0x100226b2b*/
      }
      v49 = *(v47 - 1); /*0x100226b30*/
      if ( v49 != 0x8000000000000000LL && v49 ) /*0x100226b3c*/
      {
        v8 = *v47; /*0x100226b3e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v47, v49, 1); /*0x100226b46*/
      }
      _RSI = *(v47 - 4); /*0x100226b4b*/
      if ( _RSI ) /*0x100226b52*/
      {
        v8 = *(v47 - 3); /*0x100226b54*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, _RSI, 1); /*0x100226b5d*/
      }
      v47 += 12; /*0x100226b10*/
      --v35; /*0x100226b14*/
    }
    while ( v35 ); /*0x100226b17*/
LABEL_50:
    if ( v201[0] ) /*0x100226b7a*/
    {
      _RSI = 96LL * v201[0]; /*0x100226b84*/
      v8 = (__int64)__s2; /*0x100226b8d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, 96LL * v201[0], 8); /*0x100226b91*/
    }
LABEL_10:
    v16 = v207; /*0x100226860*/
    j = v202; /*0x100226864*/
    v18 = v199; /*0x100226868*/
    if ( v202 != v167 ) /*0x100226876*/
      continue; /*0x100226876*/
    break;
  }
LABEL_69:
  v21 = v205; /*0x100226dfa*/
  if ( !v205 ) /*0x100226e01*/
  {
LABEL_120:
    if ( a8 ) /*0x10022732b*/
    {
      codexmate_lib::core::relay::codex_catalog::default_no_account_slots::hf70572559361205d( /*0x10022734d*/
        v200,
        v192,
        v193,
        v185,
        v16);
      v112 = v205; /*0x100227352*/
      if ( v205 ) /*0x100227363*/
      {
        v113 = (_QWORD *)(v204 + 56); /*0x10022736d*/
        do /*0x100227387*/
        {
          v114 = *(v113 - 7); /*0x100227389*/
          if ( v114 ) /*0x100227390*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v113 - 6), v114, 1); /*0x10022739b*/
          v115 = *(v113 - 4); /*0x1002273a0*/
          if ( v115 ) /*0x1002273a7*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v113 - 3), v115, 1); /*0x1002273b2*/
          v116 = *(v113 - 1); /*0x1002273b7*/
          if ( v116 != 0x8000000000000000LL && v116 ) /*0x1002273c3*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v113, v116, 1); /*0x1002273cd*/
          v113 += 9; /*0x100227380*/
          --v112; /*0x100227384*/
        }
        while ( v112 ); /*0x100227387*/
      }
      HIDWORD(_RAX) = HIDWORD(v203); /*0x1002273f4*/
      if ( v203 ) /*0x1002273fb*/
        HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v204, 72 * v203, 8) >> 32; /*0x10022740e*/
    }
    else
    {
      v117 = v200; /*0x1002273d8*/
      v200[2] = v205; /*0x1002273df*/
      _RAX = v203; /*0x1002273e3*/
      v117[1] = v204; /*0x1002273eb*/
      *v117 = _RAX; /*0x1002273ef*/
    }
    v119 = v195; /*0x100227413*/
    if ( v195 ) /*0x10022741d*/
    {
      v120 = v197; /*0x100227423*/
      if ( v197 ) /*0x10022742d*/
      {
        v121 = v194; /*0x100227433*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v194)); /*0x100227444*/
        v123 = v194 + 1; /*0x100227447*/
        do /*0x100227460*/
        {
          if ( !(_WORD)_R13D ) /*0x100227466*/
          {
            do /*0x10022748d*/
            {
              v124 = _mm_movemask_epi8(_mm_load_si128(v123)); /*0x100227476*/
              v121 -= 24; /*0x10022747b*/
              ++v123; /*0x100227482*/
            }
            while ( v124 == 0xFFFF ); /*0x10022748d*/
            _R13D = ~v124; /*0x10022748f*/
          }
          __asm { tzcnt eax, r13d } /*0x100227492*/
          v125 = -3 * _RAX; /*0x10022749a*/
          v126 = *((_QWORD *)&v121[-1] + v125 - 1); /*0x10022749e*/
          if ( v126 ) /*0x1002274a6*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v121[-1].i64[v125], v126, 1); /*0x1002274b5*/
          --v120; /*0x100227450*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100227457*/
          _R13D &= _R13D - 1; /*0x10022745a*/
        }
        while ( v120 ); /*0x100227460*/
      }
      v127 = (24 * v119 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1002274c8*/
      v128 = v127 + v119 + 17; /*0x1002274cf*/
      if ( v128 ) /*0x1002274d3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v194 - v127, v128, 16); /*0x1002274e7*/
    }
    HIDWORD(_RAX) = HIDWORD(v180); /*0x1002274ec*/
    if ( v180 ) /*0x1002274f6*/
    {
      __s2 = v180; /*0x1002274fc*/
      v130 = v182; /*0x100227500*/
      if ( v182 ) /*0x10022750a*/
      {
        v131 = v179; /*0x100227510*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v179)); /*0x100227521*/
        v133 = v179 + 1; /*0x100227524*/
        do /*0x10022753d*/
        {
          if ( !(_WORD)_R13D ) /*0x100227543*/
          {
            do /*0x10022756d*/
            {
              v134 = _mm_movemask_epi8(_mm_load_si128(v133)); /*0x100227556*/
              v131 -= 48; /*0x10022755b*/
              ++v133; /*0x100227562*/
            }
            while ( v134 == 0xFFFF ); /*0x10022756d*/
            _R13D = ~v134; /*0x10022756f*/
          }
          __asm { tzcnt eax, r13d } /*0x100227572*/
          v135 = &v131[-3 * _RAX]; /*0x100227582*/
          v136 = v135[-3].i64[0]; /*0x100227586*/
          if ( v136 ) /*0x10022758e*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135[-3].i64[1], v136, 1); /*0x100227599*/
          v137 = v135[-2].i64[1]; /*0x10022759e*/
          if ( v137 ) /*0x1002275a5*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135[-1].i64[0], v137, 1); /*0x1002275b0*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100227534*/
          _R13D &= _R13D - 1; /*0x100227537*/
          --v130; /*0x10022753a*/
        }
        while ( v130 ); /*0x10022753d*/
      }
      if ( 49LL * (_QWORD)__s2 != -65 ) /*0x1002275d0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v179[-3 * (_QWORD)__s2 - 3], 49LL * (_QWORD)__s2 + 65, 16); /*0x1002275e5*/
    }
    v138 = v172; /*0x1002275ea*/
    if ( v172 ) /*0x1002275f4*/
      goto LABEL_186; /*0x1002275f4*/
    return v200; /*0x1002275f4*/
  }
LABEL_70:
  v64 = (_QWORD *)v204; /*0x100226e07*/
  v65 = (_QWORD *)(v204 + 72 * v21); /*0x100226e0f*/
  __s2 = v65; /*0x100226e1e*/
  while ( v64[6] != 0x8000000000000000LL ) /*0x100226e51*/
  {
LABEL_72:
    v64 += 9; /*0x100226e40*/
    if ( v64 == v65 ) /*0x100226e47*/
    {
      v68 = v195; /*0x1002275ff*/
      goto LABEL_161; /*0x1002275ff*/
    }
  }
  __n = 11; /*0x100226e58*/
  if ( !v197 ) /*0x100226e64*/
  {
LABEL_82:
    v76 = &anon_7245a3145add9b93f83b0a9aa358a664_208; /*0x100226f40*/
LABEL_83:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, _RSI, i, j); /*0x100226f47*/
    v51 = 1; /*0x100226f4c*/
    v77 = __n; /*0x100226f57*/
    v78 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100226f5e*/
    if ( !v78 ) /*0x100226f66*/
      goto LABEL_190; /*0x100226f66*/
    v79 = v78; /*0x100226f6c*/
    memcpy(v78, v76, v77); /*0x100226f78*/
    v201[0] = v77; /*0x100226f7d*/
    v201[1] = v79; /*0x100226f84*/
    v201[2] = v77; /*0x100226f8b*/
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7686243132a986d1(&v194, v201); /*0x100226fa0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v194, v201, v80, v81); /*0x100226fa5*/
    v82 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v77, 1); /*0x100226fb2*/
    if ( !v82 ) /*0x100226fba*/
      goto LABEL_190; /*0x100226fba*/
    v83 = v82; /*0x100226fc0*/
    v8 = (__int64)v82; /*0x100226fc3*/
    memcpy(v82, v76, v77); /*0x100226fcc*/
    _RSI = v64[6]; /*0x100226fd1*/
    if ( _RSI != 0x8000000000000000LL && _RSI ) /*0x100226feb*/
    {
      v8 = v64[7]; /*0x100226ff1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, _RSI, 1); /*0x100226ffa*/
    }
    v64[6] = v77; /*0x100226e30*/
    v64[7] = v83; /*0x100226e34*/
    v64[8] = v77; /*0x100226e38*/
    v65 = __s2; /*0x100226e3c*/
    goto LABEL_72; /*0x100226e3c*/
  }
  v8 = (__int64)v198; /*0x100226e6f*/
  _RSI = (__int64)&anon_7245a3145add9b93f83b0a9aa358a664_208; /*0x100226e76*/
  v66 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(v198); /*0x100226e7d*/
  v67 = v194; /*0x100226e89*/
  v68 = v195; /*0x100226e90*/
  v69 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v66 >> 57), (__m128i)0LL); /*0x100226e9f*/
  v70 = &v194[-2].i8[8]; /*0x100226ea4*/
  for ( j = 0; ; j += 16 ) /*0x100226ea8*/
  {
    v71 = v195 & v66; /*0x100226eaa*/
    v72 = _mm_loadu_si128((const __m128i *)((char *)v194 + v71)); /*0x100226ead*/
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v72, v69)); /*0x100226ebb*/
    if ( _EDX ) /*0x100226ec1*/
      break; /*0x100226ec1*/
LABEL_80:
    i = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v72, (__m128i)-1LL)); /*0x100226f20*/
    if ( (_DWORD)i ) /*0x100226f2e*/
      goto LABEL_82; /*0x100226f2e*/
    v66 = v71 + j + 16; /*0x100226f30*/
  }
  while ( 1 ) /*0x100226ec3*/
  {
    __asm { tzcnt esi, edx } /*0x100226ec3*/
    v74 = -3LL * (v195 & (v71 + _RSI)); /*0x100226ed0*/
    if ( *(_QWORD *)&v70[8 * v74 + 16] == 11 ) /*0x100226eda*/
    {
      v75 = *(_QWORD **)&v70[8 * v74 + 8]; /*0x100226ee0*/
      v8 = *v75 ^ 0x2D362E352D747067LL; /*0x100226ef1*/
      if ( !(v8 | *(_QWORD *)((char *)v75 + 3) ^ 0x6C6F732D362E352DLL) ) /*0x100226f05*/
        break; /*0x100226f05*/
    }
    _RSI = (unsigned int)(_EDX - 1); /*0x100226f0e*/
    LOWORD(_RSI) = _EDX & (_EDX - 1); /*0x100226f11*/
    _EDX = _RSI; /*0x100226f14*/
    if ( !(_WORD)_RSI ) /*0x100226f16*/
      goto LABEL_80; /*0x100226f16*/
  }
  v8 = (__int64)v198; /*0x100227009*/
  _RSI = (__int64)&anon_7245a3145add9b93f83b0a9aa358a664_209; /*0x100227010*/
  v84 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(v198); /*0x100227017*/
  v85 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v84 >> 57), (__m128i)0LL); /*0x10022702b*/
  for ( j = 0; ; j += 16 ) /*0x100227030*/
  {
    v86 = v68 & v84; /*0x100227032*/
    v87 = _mm_loadu_si128((const __m128i *)((char *)v67 + v86)); /*0x100227035*/
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v87, v85)); /*0x100227043*/
    if ( _EDX ) /*0x100227049*/
      break; /*0x100227049*/
LABEL_93:
    i = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v87, (__m128i)-1LL)); /*0x1002270a0*/
    _RSI = 13; /*0x1002270ac*/
    __n = 13; /*0x1002270b1*/
    if ( (_DWORD)i ) /*0x1002270b7*/
    {
      v76 = &anon_7245a3145add9b93f83b0a9aa358a664_209; /*0x10022723f*/
      goto LABEL_83; /*0x100227246*/
    }
    v84 = v86 + j + 16; /*0x1002270bd*/
  }
  while ( 1 ) /*0x10022704b*/
  {
    __asm { tzcnt esi, edx } /*0x10022704b*/
    v89 = -3LL * (v68 & (v86 + _RSI)); /*0x100227058*/
    if ( *(_QWORD *)&v70[8 * v89 + 16] == 13 ) /*0x100227062*/
    {
      v90 = *(_QWORD **)&v70[8 * v89 + 8]; /*0x100227068*/
      v8 = *v90 ^ 0x2D362E352D747067LL; /*0x100227079*/
      if ( !(v8 | *(_QWORD *)((char *)v90 + 5) ^ 0x61727265742D362ELL) ) /*0x10022708d*/
        break; /*0x10022708d*/
    }
    _RSI = (unsigned int)(_EDX - 1); /*0x100227092*/
    LOWORD(_RSI) = _EDX & (_EDX - 1); /*0x100227095*/
    _EDX = _RSI; /*0x100227098*/
    if ( !(_WORD)_RSI ) /*0x10022709a*/
      goto LABEL_93; /*0x10022709a*/
  }
  v8 = (__int64)v198; /*0x1002270d0*/
  _RSI = (__int64)&anon_7245a3145add9b93f83b0a9aa358a664_210; /*0x1002270d7*/
  v91 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(v198); /*0x1002270de*/
  v92 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v91 >> 57), (__m128i)0LL); /*0x1002270f2*/
  for ( j = 0; ; j += 16 ) /*0x1002270f7*/
  {
    v93 = v68 & v91; /*0x1002270f9*/
    v94 = _mm_loadu_si128((const __m128i *)((char *)v67 + v93)); /*0x1002270fc*/
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v94, v92)); /*0x10022710a*/
    if ( _EDX ) /*0x100227110*/
      break; /*0x100227110*/
LABEL_100:
    i = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v94, (__m128i)-1LL)); /*0x10022715c*/
    _RSI = 12; /*0x100227168*/
    __n = 12; /*0x10022716d*/
    if ( (_DWORD)i ) /*0x100227173*/
    {
      v76 = &anon_7245a3145add9b93f83b0a9aa358a664_210; /*0x100227303*/
      goto LABEL_83; /*0x10022730a*/
    }
    v91 = v93 + j + 16; /*0x100227179*/
  }
  while ( 1 ) /*0x100227112*/
  {
    __asm { tzcnt esi, edx } /*0x100227112*/
    v96 = -3LL * (v68 & (v93 + _RSI)); /*0x10022711f*/
    if ( *(_QWORD *)&v70[8 * v96 + 16] == 12 ) /*0x100227129*/
    {
      v97 = *(_QWORD *)&v70[8 * v96 + 8]; /*0x10022712f*/
      v8 = *(_QWORD *)v97 ^ 0x2D362E352D747067LL; /*0x100227140*/
      if ( !(v8 | *(unsigned int *)(v97 + 8) ^ 0x616E756CLL) ) /*0x10022714d*/
        break; /*0x10022714d*/
    }
    _RSI = (unsigned int)(_EDX - 1); /*0x100227152*/
    LOWORD(_RSI) = _EDX & (_EDX - 1); /*0x100227155*/
    _EDX = _RSI; /*0x100227158*/
    if ( !(_WORD)_RSI ) /*0x10022715a*/
      goto LABEL_100; /*0x10022715a*/
  }
  v8 = (__int64)v198; /*0x10022718c*/
  _RSI = (__int64)&anon_7245a3145add9b93f83b0a9aa358a664_211; /*0x100227193*/
  v98 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(v198); /*0x10022719a*/
  v99 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v98 >> 57), (__m128i)0LL); /*0x1002271ae*/
  for ( j = 0; ; j += 16 ) /*0x1002271b3*/
  {
    v100 = v68 & v98; /*0x1002271b5*/
    v101 = _mm_loadu_si128((const __m128i *)((char *)v67 + v100)); /*0x1002271b8*/
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v101, v99)); /*0x1002271c6*/
    if ( _EDX ) /*0x1002271cc*/
      break; /*0x1002271cc*/
LABEL_107:
    i = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v101, (__m128i)-1LL)); /*0x100227214*/
    _RSI = 7; /*0x100227220*/
    __n = 7; /*0x100227225*/
    if ( (_DWORD)i ) /*0x10022722b*/
    {
      v76 = &anon_7245a3145add9b93f83b0a9aa358a664_211; /*0x10022730f*/
      goto LABEL_83; /*0x100227316*/
    }
    v98 = v100 + j + 16; /*0x100227231*/
  }
  while ( 1 ) /*0x1002271ce*/
  {
    __asm { tzcnt esi, edx } /*0x1002271ce*/
    v103 = -3LL * (v68 & (v100 + _RSI)); /*0x1002271db*/
    if ( *(_QWORD *)&v70[8 * v103 + 16] == 7 ) /*0x1002271e5*/
    {
      v104 = *(_DWORD **)&v70[8 * v103 + 8]; /*0x1002271eb*/
      v8 = *v104 ^ 0x2D747067u; /*0x1002271f7*/
      if ( !((unsigned int)v8 | *(_DWORD *)((char *)v104 + 3) ^ 0x352E352D) ) /*0x100227206*/
        break; /*0x100227206*/
    }
    _RSI = (unsigned int)(_EDX - 1); /*0x10022720a*/
    LOWORD(_RSI) = _EDX & (_EDX - 1); /*0x10022720d*/
    _EDX = _RSI; /*0x100227210*/
    if ( !(_WORD)_RSI ) /*0x100227212*/
      goto LABEL_107; /*0x100227212*/
  }
  v8 = (__int64)v198; /*0x100227250*/
  _RSI = (__int64)&anon_7245a3145add9b93f83b0a9aa358a664_212; /*0x100227257*/
  v105 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(v198); /*0x10022725e*/
  v106 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v105 >> 57), (__m128i)0LL); /*0x100227272*/
  for ( j = 0; ; j += 16 ) /*0x100227277*/
  {
    v107 = v68 & v105; /*0x100227279*/
    v108 = _mm_loadu_si128((const __m128i *)((char *)v67 + v107)); /*0x10022727c*/
    _EDX = _mm_movemask_epi8(_mm_cmpeq_epi8(v108, v106)); /*0x10022728a*/
    if ( _EDX ) /*0x100227290*/
      break; /*0x100227290*/
LABEL_115:
    i = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v108, (__m128i)-1LL)); /*0x1002272dc*/
    _RSI = 7; /*0x1002272e8*/
    __n = 7; /*0x1002272ed*/
    if ( (_DWORD)i ) /*0x1002272f3*/
    {
      v76 = &anon_7245a3145add9b93f83b0a9aa358a664_212; /*0x10022731b*/
      goto LABEL_83; /*0x100227322*/
    }
    v105 = v107 + j + 16; /*0x1002272f5*/
  }
  while ( 1 ) /*0x100227292*/
  {
    __asm { tzcnt esi, edx } /*0x100227292*/
    v110 = -3LL * (v68 & (v107 + _RSI)); /*0x10022729f*/
    if ( *(_QWORD *)&v70[8 * v110 + 16] == 7 ) /*0x1002272a9*/
    {
      v111 = *(_DWORD **)&v70[8 * v110 + 8]; /*0x1002272af*/
      v8 = *v111 ^ 0x2D747067u; /*0x1002272bb*/
      if ( !((unsigned int)v8 | *(_DWORD *)((char *)v111 + 3) ^ 0x342E352D) ) /*0x1002272ca*/
        break; /*0x1002272ca*/
    }
    _RSI = (unsigned int)(_EDX - 1); /*0x1002272d2*/
    LOWORD(_RSI) = _EDX & (_EDX - 1); /*0x1002272d5*/
    _EDX = _RSI; /*0x1002272d8*/
    if ( !(_WORD)_RSI ) /*0x1002272da*/
      goto LABEL_115; /*0x1002272da*/
  }
LABEL_161:
  v139 = v200; /*0x100227606*/
  v200[2] = v205; /*0x100227611*/
  _RAX = v203; /*0x100227615*/
  v139[1] = v204; /*0x10022761d*/
  *v139 = _RAX; /*0x100227621*/
  if ( v68 ) /*0x100227627*/
  {
    v141 = v197; /*0x10022762d*/
    if ( v197 ) /*0x100227637*/
    {
      v142 = v194; /*0x10022763d*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v194)); /*0x10022764e*/
      v144 = v194 + 1; /*0x100227651*/
      do /*0x100227670*/
      {
        if ( !(_WORD)_R13D ) /*0x100227676*/
        {
          do /*0x10022769d*/
          {
            v145 = _mm_movemask_epi8(_mm_load_si128(v144)); /*0x100227686*/
            v142 -= 24; /*0x10022768b*/
            ++v144; /*0x100227692*/
          }
          while ( v145 == 0xFFFF ); /*0x10022769d*/
          _R13D = ~v145; /*0x10022769f*/
        }
        __asm { tzcnt eax, r13d } /*0x1002276a2*/
        v146 = -3 * _RAX; /*0x1002276aa*/
        v147 = *((_QWORD *)&v142[-1] + v146 - 1); /*0x1002276ae*/
        if ( v147 ) /*0x1002276b6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v142[-1].i64[v146], v147, 1); /*0x1002276c5*/
        --v141; /*0x100227660*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100227667*/
        _R13D &= _R13D - 1; /*0x10022766a*/
      }
      while ( v141 ); /*0x100227670*/
    }
    v148 = (24 * v68 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1002276d8*/
    v149 = v148 + v68 + 17; /*0x1002276df*/
    if ( v149 ) /*0x1002276e3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v194 - v148, v149, 16); /*0x1002276f7*/
  }
  HIDWORD(_RAX) = HIDWORD(v180); /*0x1002276fc*/
  if ( v180 ) /*0x100227706*/
  {
    __s2 = v180; /*0x10022770c*/
    v151 = v182; /*0x100227710*/
    if ( v182 ) /*0x10022771a*/
    {
      v152 = v179; /*0x100227720*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v179)); /*0x100227731*/
      v154 = v179 + 1; /*0x100227734*/
      do /*0x10022774d*/
      {
        if ( !(_WORD)_R13D ) /*0x100227753*/
        {
          do /*0x10022777d*/
          {
            v155 = _mm_movemask_epi8(_mm_load_si128(v154)); /*0x100227766*/
            v152 -= 48; /*0x10022776b*/
            ++v154; /*0x100227772*/
          }
          while ( v155 == 0xFFFF ); /*0x10022777d*/
          _R13D = ~v155; /*0x10022777f*/
        }
        __asm { tzcnt eax, r13d } /*0x100227782*/
        v156 = &v152[-3 * _RAX]; /*0x100227792*/
        v157 = v156[-3].i64[0]; /*0x100227796*/
        if ( v157 ) /*0x10022779e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v156[-3].i64[1], v157, 1); /*0x1002277a9*/
        v158 = v156[-2].i64[1]; /*0x1002277ae*/
        if ( v158 ) /*0x1002277b5*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v156[-1].i64[0], v158, 1); /*0x1002277c0*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100227744*/
        _R13D &= _R13D - 1; /*0x100227747*/
        --v151; /*0x10022774a*/
      }
      while ( v151 ); /*0x10022774d*/
    }
    if ( 49LL * (_QWORD)__s2 != -65 ) /*0x1002277e0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v179[-3 * (_QWORD)__s2 - 3], 49LL * (_QWORD)__s2 + 65, 16); /*0x1002277f5*/
  }
  v138 = v191; /*0x1002277fa*/
  if ( v191 ) /*0x100227804*/
  {
LABEL_186:
    v159 = 16 * v138; /*0x100227806*/
    v160 = 17 * v138 + 33; /*0x100227810*/
    if ( v160 ) /*0x100227814*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v171[v159 / 0xFFFFFFFFFFFFFFF8LL - 2], v160, 16); /*0x100227829*/
  }
  return v200; /*0x100227835*/
}