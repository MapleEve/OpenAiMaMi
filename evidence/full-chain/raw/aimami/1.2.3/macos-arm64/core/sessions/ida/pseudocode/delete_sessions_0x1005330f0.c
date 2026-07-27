// __ZN13codexmate_lib4core8sessions15delete_sessions @ 0x1005330f0 | 基线 same-set
// [FULL IDA decompiler]

_QWORD *__fastcall codexmate_lib::core::sessions::delete_sessions::h6e446b174d7f6131(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // r12
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // r14
  size_t v16; // rbx
  const void *v17; // r13
  __int64 v18; // r12
  size_t v19; // rax
  const __m128i *v20; // r15
  const __m128i *v21; // r13
  __int64 v23; // r12
  size_t v24; // rcx
  unsigned __int64 v25; // r14
  __m128i v26; // xmm2
  unsigned __int64 v28; // rbx
  size_t v29; // r12
  int v30; // eax
  size_t v31; // rcx
  __m128i v32; // xmm1
  __int64 i; // rdx
  __int64 v34; // r14
  unsigned __int64 v35; // rbx
  size_t v36; // r14
  void *v37; // rbx
  __int64 v38; // r12
  int v39; // eax
  __int64 v41; // rax
  void *v42; // rsi
  size_t v43; // r14
  unsigned __int64 v44; // rax
  void *v45; // rdi
  __int64 v46; // rax
  signed __int64 v47; // r12
  const void *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // r14
  signed __int64 v51; // r12
  const void *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // rbx
  __int64 v56; // r14
  __int64 v57; // r12
  __int64 v58; // rsi
  __int64 v59; // rdx
  _QWORD *v60; // rdi
  const __m128i *v61; // r15
  const __m128i *v62; // rbx
  int v63; // r14d
  size_t v64; // rdx
  int v65; // r14d
  __int8 *v68; // rax
  __int64 *v69; // rdx
  signed __int64 v70; // r13
  const void *v71; // rsi
  __int64 v72; // r12
  __int64 v73; // rax
  size_t v74; // r12
  void *v75; // r15
  size_t v76; // r14
  __int64 v77; // rbx
  __int64 *v78; // r14
  __int64 v79; // rax
  void *v80; // rbx
  __int64 v81; // r14
  __int64 v82; // r12
  __int64 v83; // rsi
  __int64 v84; // rsi
  __int64 v85; // rdx
  void *v86; // rdi
  __int64 *v87; // rcx
  __int64 *v88; // rsi
  const __m128i *v89; // r12
  const __m128i *v90; // rbx
  int v92; // r15d
  void *v94; // r14
  const void *v95; // r13
  __int64 v96; // rax
  void *v97; // r14
  void *v98; // rsi
  __int64 v99; // r13
  __int64 v100; // rax
  void *v101; // r14
  void *v102; // r13
  __int64 v103; // rax
  void *v104; // r13
  const void *v105; // rsi
  void *v106; // r13
  const void *v107; // rsi
  void *v108; // r13
  __int64 v109; // rdi
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // r15
  __int64 v113; // rax
  __int64 v114; // r13
  __int64 v115; // r15
  __int64 v116; // rax
  char v117; // bl
  signed __int64 v118; // r12
  unsigned __int64 v119; // rax
  const __m128i *v121; // rdx
  __int64 v122; // rsi
  __m128i v123; // xmm1
  const __m128i *v124; // rdi
  __int64 j; // r8
  unsigned __int64 v126; // rax
  __m128i v127; // xmm2
  const void **v129; // rax
  const void *v130; // rsi
  void *v131; // rdi
  int v132; // eax
  __int64 v133; // rax
  __int64 v134; // rbx
  void *v135; // rbx
  __int64 v136; // rdi
  __int64 v137; // r9
  void *v138; // rdi
  __int64 v139; // rcx
  __int64 v140; // r12
  __int64 v141; // rbx
  size_t v142; // rcx
  __int64 v143; // rdi
  __int64 v144; // r13
  __int64 v145; // r14
  __int64 v146; // r12
  __int64 v147; // rsi
  _QWORD *v148; // r15
  char *v149; // rbx
  __int64 v150; // rsi
  __int64 v151; // rax
  __int64 v152; // rdx
  signed __int64 v153; // rax
  __int64 v154; // rcx
  _QWORD *v155; // rdx
  __int64 v156; // rdi
  __int64 v157; // r8
  __int64 v159; // r14
  __int64 v160; // rbx
  const __m128i *v161; // r15
  const __m128i *v163; // r12
  int v164; // r13d
  __int64 v165; // rax
  __int64 v166; // rsi
  unsigned __int64 v167; // rax
  __int64 v168; // r14
  __int64 v169; // r14
  _QWORD *v171; // r15
  __int64 v172; // rdi
  __int64 v173; // rdi
  _BYTE v174[24]; // [rsp+0h] [rbp-440h] BYREF
  _BYTE v175[24]; // [rsp+18h] [rbp-428h] BYREF
  _BYTE v176[24]; // [rsp+30h] [rbp-410h] BYREF
  _BYTE v177[24]; // [rsp+48h] [rbp-3F8h] BYREF
  _QWORD v178[4]; // [rsp+60h] [rbp-3E0h] BYREF
  char v179[16]; // [rsp+80h] [rbp-3C0h] BYREF
  __int64 v180[4]; // [rsp+90h] [rbp-3B0h] BYREF
  __int64 v181; // [rsp+B0h] [rbp-390h] BYREF
  __int64 v182; // [rsp+B8h] [rbp-388h]
  __int64 v183; // [rsp+C0h] [rbp-380h]
  __int64 v184[3]; // [rsp+C8h] [rbp-378h] BYREF
  __m128i v185; // [rsp+E0h] [rbp-360h] BYREF
  __m128i v186; // [rsp+F0h] [rbp-350h] BYREF
  __m128i v187; // [rsp+100h] [rbp-340h] BYREF
  _QWORD v188[6]; // [rsp+118h] [rbp-328h] BYREF
  const __m128i *v189; // [rsp+148h] [rbp-2F8h] BYREF
  __int64 v190; // [rsp+150h] [rbp-2F0h]
  __int64 v191; // [rsp+158h] [rbp-2E8h]
  __int64 v192; // [rsp+160h] [rbp-2E0h]
  __int64 v193; // [rsp+168h] [rbp-2D8h]
  __int64 v194; // [rsp+170h] [rbp-2D0h]
  __int64 *v195; // [rsp+178h] [rbp-2C8h] BYREF
  void *v196; // [rsp+180h] [rbp-2C0h]
  __int64 v197; // [rsp+188h] [rbp-2B8h]
  signed __int64 v198; // [rsp+190h] [rbp-2B0h]
  const __m128i *v199; // [rsp+198h] [rbp-2A8h]
  __int64 v200; // [rsp+1A0h] [rbp-2A0h]
  __int64 v201; // [rsp+1A8h] [rbp-298h]
  size_t v202; // [rsp+1B0h] [rbp-290h]
  _QWORD v203[2]; // [rsp+1B8h] [rbp-288h] BYREF
  size_t v204; // [rsp+1C8h] [rbp-278h] BYREF
  __int64 v205; // [rsp+1D0h] [rbp-270h]
  size_t v206; // [rsp+1D8h] [rbp-268h]
  _QWORD v207[14]; // [rsp+1E0h] [rbp-260h] BYREF
  _QWORD *v208; // [rsp+250h] [rbp-1F0h] BYREF
  _QWORD *v209; // [rsp+258h] [rbp-1E8h]
  signed __int64 v210; // [rsp+260h] [rbp-1E0h]
  __int64 v211; // [rsp+268h] [rbp-1D8h]
  __int64 v212; // [rsp+270h] [rbp-1D0h]
  __int64 v213; // [rsp+278h] [rbp-1C8h]
  __int64 v214; // [rsp+280h] [rbp-1C0h]
  __int64 v215; // [rsp+288h] [rbp-1B8h]
  __int64 v216; // [rsp+290h] [rbp-1B0h]
  __int64 v217; // [rsp+298h] [rbp-1A8h]
  __int64 v218; // [rsp+2A0h] [rbp-1A0h]
  __int64 v219; // [rsp+2A8h] [rbp-198h]
  _QWORD *v220; // [rsp+2B0h] [rbp-190h]
  signed __int64 v221; // [rsp+2B8h] [rbp-188h]
  __int64 *v222; // [rsp+2C0h] [rbp-180h] BYREF
  __int64 (__fastcall *v223)(); // [rsp+2C8h] [rbp-178h]
  __int64 v224; // [rsp+2D0h] [rbp-170h]
  const __m128i *v225; // [rsp+2D8h] [rbp-168h]
  _QWORD *v226; // [rsp+2E0h] [rbp-160h]
  _QWORD v227[19]; // [rsp+2E8h] [rbp-158h] BYREF
  __int64 v228; // [rsp+380h] [rbp-C0h] BYREF
  __int64 v229; // [rsp+388h] [rbp-B8h] BYREF
  _QWORD *v230; // [rsp+390h] [rbp-B0h] BYREF
  signed __int64 v231; // [rsp+398h] [rbp-A8h]
  __int64 v232; // [rsp+3A0h] [rbp-A0h]
  __int64 v233; // [rsp+3A8h] [rbp-98h]
  __int64 v234; // [rsp+3B0h] [rbp-90h]
  __int64 v235; // [rsp+3B8h] [rbp-88h]
  __int64 v236; // [rsp+3C0h] [rbp-80h]
  void *v237; // [rsp+3C8h] [rbp-78h] BYREF
  __int64 v238; // [rsp+3D0h] [rbp-70h]
  void *v239; // [rsp+3D8h] [rbp-68h]
  void *__s1; // [rsp+3E0h] [rbp-60h]
  size_t v241; // [rsp+3E8h] [rbp-58h]
  void *v242; // [rsp+3F0h] [rbp-50h]
  unsigned __int64 v243; // [rsp+3F8h] [rbp-48h]
  void *__src; // [rsp+400h] [rbp-40h]
  size_t __n; // [rsp+408h] [rbp-38h]
  __int64 *v246; // [rsp+410h] [rbp-30h]

  v216 = a3;
  v4 = a1;
  if ( !a4 )
  {
    a1[1] = 0;
    a1[2] = 8;
    a1[3] = 0;
    a1[4] = 0;
    a1[5] = 8;
    a1[6] = 0;
    *a1 = 11;
    return v4;
  }
  v5 = a4;
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v7 = v6;
  if ( *(_BYTE *)(v6 + 16) == 1 )
  {
    v8 = *(_QWORD *)v6;
    v9 = *(_QWORD *)(v7 + 8);
  }
  else
  {
    v8 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
    *(_QWORD *)v7 = v8;
    *(_QWORD *)(v7 + 8) = v9;
    *(_BYTE *)(v7 + 16) = 1;
  }
  v218 = v7;
  *(_QWORD *)v7 = v8 + 1;
  memset(&v227[1], 0, 24);
  v227[0] = &xmmword_1015FBEC0;
  v227[4] = v8;
  v227[5] = v9;
  hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::hc6e7b6d5d2733f2a(v227, v5, &v227[4], 1);
  v197 = v216 + 24 * v5;
  v10 = (_QWORD *)(v216 + 16);
  do
  {
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1b9e374c111f139c(v227, *(v10 - 1), *v10);
    v10 += 3;
    --v5;
  }
  while ( v5 );
  v203[1] = v227[5];
  v203[0] = v227[4];
  v202 = v227[3];
  v201 = v227[2];
  v200 = v227[1];
  v199 = (const __m128i *)v227[0];
  codexmate_lib::core::sessions::build_rollout_index::hd09fe8ff8627f787(v178, a2);
  v11 = v218;
  if ( *(_BYTE *)(v218 + 16) == 1 )
  {
    v12 = *(_QWORD *)v218;
    v13 = *(_QWORD *)(v218 + 8);
  }
  else
  {
    v12 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
    *(_QWORD *)v11 = v12;
    *(_QWORD *)(v11 + 8) = v13;
    *(_BYTE *)(v11 + 16) = 1;
  }
  v192 = 0;
  v191 = 0;
  v190 = 0;
  v189 = (const __m128i *)&xmmword_1015FBEC0;
  v193 = v12;
  v194 = v13;
  *(_QWORD *)v11 = v12 + 2;
  memset(&v188[1], 0, 24);
  v188[0] = &xmmword_1015FBEC0;
  v188[4] = v12 + 1;
  v188[5] = v13;
  v14 = a2[90] == 0x8000000000000000LL;
  v220 = a1;
  v226 = a2;
  if ( v14 )
  {
    codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::h14df2306ab2134d7(&v204, a2[1], a2[2]);
    v15 = v205;
    v16 = v206;
  }
  else
  {
    v17 = (const void *)a2[91];
    v16 = a2[92];
    if ( v16 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0, 0);
      v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1);
      if ( !v15 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v16);
    }
    else
    {
      v15 = 1;
    }
    v204 = v16;
    v205 = v15;
    memcpy((void *)v15, v17, v16);
    v206 = v16;
  }
  std::sys::fs::metadata::h32fa16d3052ea535(v227, v15, v16);
  v18 = v227[0];
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    v227[0],
    v227[1]);
  if ( !v18 )
  {
    codexmate_lib::core::sessions::open_codex_db::h5838dac6be6fd626(v207, v15, v16, 0);
    if ( LOBYTE(v207[13]) == 3 )
    {
      qmemcpy(v227, v207, 0x60u);
      v60 = &v227[12];
      v241 = v202;
      if ( v202 )
      {
        v61 = v199;
        v62 = v199 + 1;
        v63 = ~_mm_movemask_epi8(_mm_load_si128(v199));
        v64 = v241;
        while ( 1 )
        {
          if ( !(_WORD)v63 )
          {
            do
            {
              v65 = _mm_movemask_epi8(_mm_load_si128(v62));
              v61 -= 16;
              ++v62;
            }
            while ( v65 == 0xFFFF );
            v63 = ~v65;
          }
          _EAX = v63;
          __asm { tzcnt   ecx, eax }
          v63 &= v63 - 1;
          v68 = &v61->i8[-(16 * _ECX)];
          v69 = (__int64 *)(v64 - 1);
          v70 = *((_QWORD *)v68 - 1);
          if ( v70 < 0 )
            break;
          v246 = v69;
          v71 = *((const void **)v68 - 2);
          if ( v70 )
          {
            __n = *((_QWORD *)v68 - 2);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v60, v71);
            v72 = 1;
            v73 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v70, 1);
            if ( !v73 )
            {
              __n = v70;
LABEL_121:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v72, __n);
            }
            v71 = (const void *)__n;
          }
          else
          {
            v73 = 1;
          }
          v74 = v73;
          memcpy((void *)v73, v71, v70);
          v229 = v70;
          __n = v74;
          v230 = (_QWORD *)v74;
          v231 = v70;
          v208 = v227;
          v209 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v175, &unk_1017C1A0B, &v208);
          v60 = &v208;
          hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h905e43a85ed0d5ba(&v208, v188, &v229, v175);
          if ( v208 != (_QWORD *)0x8000000000000000LL && v208 )
          {
            v60 = v209;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v209, v208, 1);
          }
          v64 = (size_t)v246;
          if ( !v246 )
            goto LABEL_73;
        }
        v72 = 0;
        goto LABEL_121;
      }
LABEL_73:
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v227);
      v19 = v241;
      goto LABEL_18;
    }
    qmemcpy(v227, v207, 0x70u);
    v88 = (__int64 *)&v208;
    v87 = nullptr;
    v241 = v202;
    if ( !v202 )
    {
LABEL_117:
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v227, v88, v59, v87);
      v19 = v241;
      goto LABEL_18;
    }
    v89 = v199;
    v90 = v199 + 1;
    _R15D = ~_mm_movemask_epi8(_mm_load_si128(v199));
    __n = 0x8000000000000016LL;
    v87 = (__int64 *)v241;
    while ( 1 )
    {
      v246 = v87;
      if ( !(_WORD)_R15D )
      {
        do
        {
          v92 = _mm_movemask_epi8(_mm_load_si128(v90));
          v89 -= 16;
          ++v90;
        }
        while ( v92 == 0xFFFF );
        _R15D = ~v92;
      }
      __asm { tzcnt   eax, r15d }
      v228 = (__int64)v89[-1].i64 - (unsigned int)(16 * _EAX);
      v195 = &v228;
      v196 = &unk_101964580;
      rusqlite::Connection::execute::h1e8b76b744a4c88a(&v208, v227, &unk_1015FEE57, 82, &v195, 1);
      if ( v208 != (_QWORD *)__n )
        break;
      v195 = &v228;
      v196 = &unk_101964580;
      v88 = v227;
      rusqlite::Connection::execute::h1e8b76b744a4c88a(&v208, v227, &unk_1015FEEA9, 33, &v195, 1);
      if ( v208 != (_QWORD *)__n )
      {
        v236 = v215;
        v235 = v214;
        v234 = v213;
        v233 = v212;
        v232 = v211;
        v231 = v210;
        v230 = v209;
        v229 = (__int64)v208;
        v101 = *(void **)(v228 + 8);
        if ( (__int64)v101 < 0 )
        {
          v172 = 0;
LABEL_169:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v172, v242);
        }
        v102 = *(void **)v228;
        if ( v101 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v208, v227);
          v103 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v101, 1);
          if ( !v103 )
          {
            v242 = v101;
            v172 = 1;
            goto LABEL_169;
          }
        }
        else
        {
          v103 = 1;
        }
        v105 = v102;
        v106 = (void *)v103;
        memcpy((void *)v103, v105, (size_t)v101);
        v237 = v101;
        v242 = v106;
        v238 = (__int64)v106;
        v239 = v101;
        v222 = &v229;
        v223 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v176, &unk_1017C1952, &v222);
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h905e43a85ed0d5ba(&v222, v188, &v237, v176);
        v88 = v222;
        if ( v222 != (__int64 *)0x8000000000000000LL && v222 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v223, v222, 1);
LABEL_108:
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v229);
        goto LABEL_116;
      }
      if ( v209 )
      {
        v94 = *(void **)(v228 + 8);
        if ( (__int64)v94 < 0 )
        {
          v173 = 0;
LABEL_213:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v173, __s1);
        }
        v95 = *(const void **)v228;
        if ( v94 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v208, v227);
          v96 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v94, 1);
          if ( !v96 )
          {
            __s1 = v94;
            v173 = 1;
            goto LABEL_213;
          }
        }
        else
        {
          v96 = 1;
        }
        v107 = v95;
        v108 = (void *)v96;
        memcpy((void *)v96, v107, (size_t)v94);
        v229 = (__int64)v94;
        __s1 = v108;
        v230 = v108;
        v231 = (signed __int64)v94;
        v88 = &v229;
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v189, &v229);
      }
LABEL_116:
      _R15D &= _R15D - 1;
      v87 = (__int64 *)((char *)v246 - 1);
      if ( v246 == (__int64 *)1 )
        goto LABEL_117;
    }
    v236 = v215;
    v235 = v214;
    v234 = v213;
    v233 = v212;
    v232 = v211;
    v231 = v210;
    v230 = v209;
    v229 = (__int64)v208;
    v97 = *(void **)(v228 + 8);
    if ( (__int64)v97 < 0 )
    {
      v99 = 0;
      goto LABEL_163;
    }
    v98 = *(void **)v228;
    if ( v97 )
    {
      __src = *(void **)v228;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v208, v98);
      v99 = 1;
      v100 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v97, 1);
      if ( !v100 )
      {
        __src = v97;
LABEL_163:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v99, __src);
      }
      v98 = __src;
    }
    else
    {
      v100 = 1;
    }
    v104 = (void *)v100;
    memcpy((void *)v100, v98, (size_t)v97);
    v237 = v97;
    __src = v104;
    v238 = (__int64)v104;
    v239 = v97;
    v222 = &v229;
    v223 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v177, &unk_1017C1934, &v222);
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h905e43a85ed0d5ba(&v222, v188, &v237, v177);
    v88 = v222;
    if ( v222 != (__int64 *)0x8000000000000000LL && v222 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v223, v222, 1);
    goto LABEL_108;
  }
  v19 = v202;
LABEL_18:
  v241 = v19;
  if ( v19 )
  {
    v20 = v199;
    v21 = v199 + 1;
    _RAX = (__int64 *)(unsigned int)~_mm_movemask_epi8(_mm_load_si128(v199));
    v242 = (void *)v178[3];
    v23 = v178[0];
    __src = (void *)v178[1];
    v217 = v178[0] - 80LL;
    v24 = v241;
    v243 = v178[0];
    while ( 1 )
    {
      __n = v24;
      if ( (_WORD)_RAX )
      {
        v246 = _RAX;
        if ( !v242 )
          goto LABEL_30;
      }
      else
      {
        do
        {
          v39 = _mm_movemask_epi8(_mm_load_si128(v21));
          v20 -= 16;
          ++v21;
        }
        while ( v39 == 0xFFFF );
        _RAX = (__int64 *)(unsigned int)~v39;
        v246 = _RAX;
        if ( !v242 )
          goto LABEL_30;
      }
      __asm { tzcnt   eax, eax }
      v41 = (unsigned int)(16 * _EAX);
      v42 = *(void **)((char *)v20[-1].i64 - v41);
      v225 = (const __m128i *)((char *)v20 - v41);
      v43 = *(unsigned __int64 *)((char *)&v20->u64[-1] - v41);
      __s1 = v42;
      v44 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v179, v42, v43);
      v31 = v43;
      v34 = v44;
      v32 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v44 >> 57), (__m128i)0LL);
      for ( i = 0; ; i += 16 )
      {
        v25 = (unsigned __int64)__src & v34;
        v26 = _mm_loadu_si128((const __m128i *)(v23 + v25));
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v26, v32));
        if ( (_DWORD)_RAX )
          break;
LABEL_25:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v26, (__m128i)-1LL)) )
          goto LABEL_29;
        v34 = v25 + i + 16;
        v23 = v243;
      }
      v186 = v32;
      v219 = i;
      v187 = v26;
      while ( 1 )
      {
        v185.i64[0] = _RAX;
        __asm { tzcnt   eax, eax }
        v28 = -80LL * ((unsigned __int64)__src & (v25 + _RAX));
        if ( v31 == *(_QWORD *)(v217 - 80 * ((unsigned __int64)__src & (v25 + _RAX)) + 16) )
        {
          v29 = v31;
          v30 = memcmp(__s1, *(const void **)(v28 + v217 + 8), v31);
          v31 = v29;
          if ( !v30 )
            break;
        }
        _RAX = (unsigned int)(v185.i32[0] - 1);
        LOWORD(_RAX) = v185.i16[0] & (v185.i16[0] - 1);
        v32 = _mm_load_si128(&v186);
        i = v219;
        v26 = _mm_load_si128(&v187);
        if ( !(_WORD)_RAX )
          goto LABEL_25;
      }
      v23 = v243;
      if ( *(_QWORD *)(v243 + v28 - 40) == 0x8000000000000000LL )
        goto LABEL_30;
      v35 = v243 + v28;
      v36 = *(_QWORD *)(v35 - 24);
      v37 = *(void **)(v35 - 32);
      std::sys::fs::metadata::h32fa16d3052ea535(v227, v37, v36);
      v38 = v227[0];
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
        v227[0],
        v227[1]);
      if ( v38 )
        goto LABEL_29;
      v45 = v37;
      v46 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v37, v36);
      if ( !v46 )
        break;
      v229 = v46;
      v47 = v225[-1].i64[1];
      if ( v47 < 0 )
      {
        v109 = 0;
        goto LABEL_119;
      }
      v48 = (const void *)v225[-1].i64[0];
      if ( v47 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v36);
        v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v47, 1);
        if ( !v49 )
        {
          v221 = v47;
          v109 = 1;
LABEL_119:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v109, v221);
        }
        v50 = v49;
      }
      else
      {
        v50 = 1;
      }
      memcpy((void *)v50, v48, v47);
      v227[0] = v47;
      v221 = v50;
      v227[1] = v50;
      v227[2] = v47;
      v207[0] = &v229;
      v207[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v174, &unk_1017C19EA, v207);
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h905e43a85ed0d5ba(v207, v188, v227, v174);
      v23 = v243;
      if ( v207[0] != 0x8000000000000000LL && v207[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v207[1], v207[0], 1);
      if ( (v229 & 3) == 1 )
      {
        v55 = v229 - 1;
        v56 = *(_QWORD *)(v229 - 1);
        v57 = *(_QWORD *)(v229 + 7);
        if ( *(_QWORD *)v57 )
          (*(void (__fastcall **)(__int64))v57)(v56);
        v58 = *(_QWORD *)(v57 + 8);
        if ( v58 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v58, *(_QWORD *)(v57 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, 24, 8);
LABEL_29:
        v23 = v243;
      }
LABEL_30:
      _RAX = (__int64 *)((unsigned int)v246 & ((_DWORD)v246 - 1));
      v24 = __n - 1;
      if ( __n == 1 )
        goto LABEL_74;
    }
    v51 = v225[-1].i64[1];
    if ( v51 < 0 )
    {
      v136 = 0;
      goto LABEL_161;
    }
    v52 = (const void *)v225[-1].i64[0];
    if ( v51 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v36);
      v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v51, 1);
      if ( !v53 )
      {
        v198 = v51;
        v136 = 1;
LABEL_161:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v136, v198);
      }
      v54 = v53;
    }
    else
    {
      v54 = 1;
    }
    memcpy((void *)v54, v52, v51);
    v227[0] = v51;
    v198 = v54;
    v227[1] = v54;
    v227[2] = v51;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v189, v227);
    goto LABEL_29;
  }
LABEL_74:
  v75 = (void *)v226[10];
  v76 = v226[11];
  std::sys::fs::metadata::h32fa16d3052ea535(v227, v75, v76);
  v77 = v227[0];
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    v227[0],
    v227[1]);
  if ( v77 )
    goto LABEL_189;
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v222, v75, v76);
  __n = v76;
  v78 = v222;
  if ( v222 == (__int64 *)0x8000000000000000LL )
  {
    v79 = (__int64)v223;
    v229 = (__int64)v223;
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      v207[0] = &v229;
      v207[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
      v227[6] = 2;
      v227[7] = &unk_1015FEE39;
      v227[8] = 29;
      v227[10] = &unk_1017C19B1;
      v227[11] = v207;
      v227[0] = 0;
      v227[1] = &unk_1015FEE39;
      v227[2] = 29;
      v227[3] = 0;
      v227[4] = "src/core/sessions.rs";
      v227[5] = 20;
      v227[9] = 0x16D00000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v208, v227);
      v79 = v229;
    }
    if ( (v79 & 3) == 1 )
    {
      v80 = (void *)(v79 - 1);
      v81 = *(_QWORD *)(v79 - 1);
      v82 = *(_QWORD *)(v79 + 7);
      if ( *(_QWORD *)v82 )
        (*(void (__fastcall **)(__int64))v82)(v81);
      v83 = *(_QWORD *)(v82 + 8);
      if ( v83 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v83, *(_QWORD *)(v82 + 16));
      v84 = 24;
      v85 = 8;
      v86 = v80;
LABEL_188:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v84, v85);
    }
    goto LABEL_189;
  }
  v242 = v75;
  v237 = nullptr;
  v238 = 8;
  v239 = nullptr;
  v227[0] = 0;
  v227[1] = v224;
  __s1 = v223;
  v227[2] = v223;
  v227[3] = v224;
  v227[4] = 0;
  v227[5] = v224;
  v227[6] = 0xA0000000ALL;
  LOBYTE(v227[7]) = 1;
  LOWORD(v227[8]) = 0;
  v246 = v222;
  do
  {
    v112 = v227[2];
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
      v207,
      &v227[2]);
    if ( LODWORD(v207[0]) == 1 )
    {
      v113 = v227[0];
      v227[0] = v207[2];
      v114 = v207[2] - v113;
      v115 = v113 + v112;
      if ( v207[2] == v113 )
        goto LABEL_137;
      goto LABEL_131;
    }
    if ( BYTE1(v227[8]) )
      break;
    BYTE1(v227[8]) = 1;
    v114 = v227[1] - v227[0];
    if ( (LOBYTE(v227[8]) | (v227[1] != v227[0])) != 1 )
      break;
    v115 = v227[2] + v227[0];
    if ( !v114 )
      goto LABEL_137;
LABEL_131:
    if ( *(_BYTE *)(v115 + v114 - 1) == 10 )
    {
      if ( v114 == 1 )
      {
        v114 = 0;
      }
      else if ( *(_BYTE *)(v115 + v114 - 2) == 13 )
      {
        v114 -= 2;
      }
      else
      {
        --v114;
      }
    }
LABEL_137:
    v207[0] = v115;
    v207[1] = v114;
    v207[3] = 0;
    v207[2] = 0;
    v207[4] = v115;
    v207[5] = v114;
    serde_json::de::from_trait::h51e180b4bb6af5e0(&v229, v207);
    if ( (_BYTE)v229 == 6 )
    {
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v230);
LABEL_158:
      v135 = v239;
      if ( v239 == v237 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v237);
      v110 = v238;
      v111 = 16LL * (_QWORD)v135;
      *(_QWORD *)(v238 + v111) = v115;
      *(_QWORD *)(v110 + v111 + 8) = v114;
      v239 = (char *)v135 + 1;
      continue;
    }
    v207[3] = v232;
    v207[2] = v231;
    v207[1] = v230;
    v207[0] = v229;
    v116 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             &anon_92869709a5e99ce1936aa4e326b6c562_188,
             2,
             v207);
    v117 = 1;
    if ( v116 && *(_BYTE *)v116 == 3 && v241 )
    {
      v118 = *(_QWORD *)(v116 + 24);
      __src = *(void **)(v116 + 16);
      v119 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v203, __src, v118);
      _RCX = v119 >> 57;
      v121 = v199;
      v122 = v200;
      v123 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v119 >> 57), (__m128i)0LL);
      v124 = v199 - 1;
      for ( j = 0; ; j += 16 )
      {
        v126 = v122 & v119;
        v127 = _mm_loadu_si128((const __m128i *)((char *)v121 + v126));
        _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v127, v123));
        if ( _R14D )
          break;
LABEL_148:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v127, (__m128i)-1LL));
        if ( (_DWORD)_RCX )
        {
          v78 = v246;
          goto LABEL_157;
        }
        v119 = v126 + j + 16;
      }
      v243 = v126;
      v225 = v121;
      v217 = v122;
      v185 = v123;
      v186.i64[0] = (__int64)v124;
      v219 = j;
      v187 = v127;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r14d }
        _RCX = 16 * (v122 & (v126 + _RCX));
        v129 = (const void **)((char *)v124 - _RCX);
        if ( v118 == *(__int64 *)((char *)&v124->i64[1] - _RCX) )
        {
          v130 = *v129;
          v131 = __src;
          if ( !memcmp(__src, *v129, v118) )
            break;
        }
        v132 = _R14D - 1;
        LOWORD(v132) = _R14D & (_R14D - 1);
        v14 = (_WORD)v132 == 0;
        _R14D = v132;
        v126 = v243;
        v121 = v225;
        v122 = v217;
        v123 = _mm_load_si128(&v185);
        v124 = (const __m128i *)v186.i64[0];
        j = v219;
        v127 = _mm_load_si128(&v187);
        if ( v14 )
          goto LABEL_148;
      }
      if ( v118 < 0 )
      {
        v143 = 0;
        goto LABEL_171;
      }
      v78 = v246;
      if ( v118 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v131, v130);
        v133 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v118, 1);
        if ( !v133 )
        {
          v226 = (_QWORD *)v118;
          v143 = 1;
LABEL_171:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v143, v226);
        }
        v134 = v133;
      }
      else
      {
        v134 = 1;
      }
      memcpy((void *)v134, __src, v118);
      v208 = (_QWORD *)v118;
      v226 = (_QWORD *)v134;
      v209 = (_QWORD *)v134;
      v210 = v118;
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v189, &v208);
      v117 = 0;
    }
LABEL_157:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v207);
    if ( v117 )
      goto LABEL_158;
  }
  while ( !BYTE1(v227[8]) );
  if ( v239 )
  {
    alloc::str::join_generic_copy::ha9d2732844b8793d(v227, v238, v239, &anon_92869709a5e99ce1936aa4e326b6c562_1024, 1);
    v138 = v242;
    v139 = v227[2];
    v207[2] = v227[2];
    v140 = v227[0];
    v207[1] = v227[1];
    v207[0] = v227[0];
    if ( v227[0] == v227[2] )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        v207,
        v227[2],
        1,
        1,
        1,
        v137);
      v140 = v207[0];
      v139 = v207[2];
      v78 = v246;
      v138 = v242;
    }
    v141 = v207[1];
    *(_BYTE *)(v207[1] + v139) = 10;
    v142 = v139 + 1;
  }
  else
  {
    v141 = 1;
    v142 = 0;
    v140 = 0;
    v138 = v242;
  }
  v144 = std::fs::write::inner::had0c1bee0a2c1e21(v138, __n, (void *)v141, v142);
  if ( v140 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141, v140, 1);
  if ( v144 )
  {
    v229 = v144;
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      v207[0] = &v229;
      v207[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
      v227[6] = 2;
      v227[7] = &unk_1015FEE39;
      v227[8] = 29;
      v227[10] = &unk_1017C1973;
      v227[11] = v207;
      v227[0] = 0;
      v227[1] = &unk_1015FEE39;
      v227[2] = 29;
      v227[3] = 0;
      v227[4] = "src/core/sessions.rs";
      v227[5] = 20;
      v227[9] = 0x16900000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v208, v227);
      v144 = v229;
    }
    if ( (v144 & 3) == 1 )
    {
      v145 = *(_QWORD *)(v144 - 1);
      v146 = *(_QWORD *)(v144 + 7);
      if ( *(_QWORD *)v146 )
        (*(void (__fastcall **)(_QWORD))v146)(*(_QWORD *)(v144 - 1));
      v147 = *(_QWORD *)(v146 + 8);
      if ( v147 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, v147, *(_QWORD *)(v146 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v144 - 1, 24, 8);
      v78 = v246;
    }
  }
  if ( v237 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v238, 16LL * (_QWORD)v237, 8);
  if ( v78 )
  {
    v85 = 1;
    v86 = __s1;
    v84 = (__int64)v78;
    goto LABEL_188;
  }
LABEL_189:
  v184[0] = v216;
  v184[1] = v197;
  v184[2] = (__int64)v188;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd8dc0996d5302678(
    &v229,
    v184);
  v148 = v230;
  v149 = (char *)v231;
  v150 = v218;
  if ( *(_BYTE *)(v218 + 16) == 1 )
  {
    v151 = *(_QWORD *)v218;
    v152 = *(_QWORD *)(v218 + 8);
    v4 = v220;
  }
  else
  {
    v151 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
    v4 = v220;
    v150 = v218;
    *(_QWORD *)v218 = v151;
    *(_QWORD *)(v150 + 8) = v152;
    *(_BYTE *)(v150 + 16) = 1;
  }
  *(_QWORD *)v150 = v151 + 1;
  memset(&v227[1], 0, 24);
  v227[0] = &xmmword_1015FBEC0;
  v227[4] = v151;
  v227[5] = v152;
  if ( v149 )
  {
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::hc6e7b6d5d2733f2a(v227, v149, &v227[4], 1);
    v171 = v148 + 2;
    do
    {
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1b9e374c111f139c(v227, *(v171 - 1), *v171);
      v171 += 6;
      --v149;
    }
    while ( v149 );
  }
  v207[5] = v227[5];
  v207[4] = v227[4];
  v207[3] = v227[3];
  v207[2] = v227[2];
  v207[1] = v227[1];
  v207[0] = v227[0];
  v180[0] = v216;
  v180[1] = v197;
  v180[2] = (__int64)&v189;
  v180[3] = (__int64)v207;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h5d65ebc073c6de67(
    &v181,
    v180);
  v153 = v231;
  v227[5] = v231;
  v154 = v229;
  v155 = v230;
  v227[4] = v230;
  v227[3] = v229;
  v227[2] = v183;
  v156 = v181;
  v157 = v182;
  v227[1] = v182;
  v227[0] = v181;
  v4[3] = v183;
  v4[2] = v157;
  v4[1] = v156;
  v4[6] = v153;
  v4[5] = v155;
  v4[4] = v154;
  *v4 = 11;
  if ( v207[1] && 17LL * v207[1] != -33 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v207[0] - 16LL * v207[1] - 16, 17LL * v207[1] + 33, 16);
  if ( v204 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v205, v204, 1);
  HIDWORD(_RAX) = (unsigned __int64)_$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h51cd264a45cd2627(v188) >> 32;
  v159 = v190;
  if ( v190 )
  {
    v160 = v192;
    if ( v192 )
    {
      v161 = v189;
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v189));
      v163 = v189 + 1;
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            v164 = _mm_movemask_epi8(_mm_load_si128(v163));
            v161 -= 24;
            ++v163;
          }
          while ( v164 == 0xFFFF );
          _R13D = ~v164;
        }
        __asm { tzcnt   eax, r13d }
        v165 = -3 * _RAX;
        v166 = *((_QWORD *)&v161[-1] + v165 - 1);
        if ( v166 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v161[-1].i64[v165], v166, 1);
        --v160;
        _RAX = _R13D & (unsigned int)(_R13D - 1);
        _R13D &= _R13D - 1;
      }
      while ( v160 );
    }
    v167 = (24 * v159 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v168 = v167 + v159;
    v14 = v168 == -17;
    v169 = v168 + 17;
    v4 = v220;
    if ( !v14 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v189 - v167, v169, 16);
  }
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h91af55984fa5bad2(v178);
  if ( v200 && 17 * v200 != -33 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v199[-v200 - 1], 17 * v200 + 33, 16);
  return v4;
}
