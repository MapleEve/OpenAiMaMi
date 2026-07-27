// __ZN13codexmate_lib4core10account_io15export_accounts @ 0x1008dac90 | 基线 same-set
// [FULL IDA decompiler]

__int64 *__fastcall codexmate_lib::core::account_io::export_accounts::h907743e6877b5d6f(
        __int64 *a1,
        __int64 a2,
        void *a3,
        char *a4,
        __int64 *a5,
        __m128i a6,
        __m128i a7,
        __m128i a8)
{
  __int64 v11; // r12
  __int128 v12; // rdi
  __int64 v13; // r12
  char *v14; // rax
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 *v18; // rax
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // rbx
  _QWORD *v22; // r12
  __int64 v23; // rsi
  char *v25; // rdi
  __int64 v26; // r14
  const __m128i *v27; // rsi
  __int64 v28; // rax
  bool v29; // zf
  char *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int128 v37; // rax
  size_t v38; // rsi
  __int64 i; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // r15
  const __m128i *v42; // r12
  __int64 v43; // r13
  const __m128i *v44; // rbx
  unsigned __int64 v45; // rax
  __int64 v47; // r12
  const void *v48; // r15
  size_t v49; // r14
  const __m128i *v50; // rax
  int v52; // eax
  __int64 v53; // rbx
  const void *v54; // r12
  unsigned __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // r14
  __int64 v58; // r13
  const __m128i *v59; // r12
  __int64 v60; // r12
  __int64 v61; // r15
  unsigned int v62; // r14d
  __int64 v63; // rcx
  _DWORD *v64; // rdi
  _DWORD *v65; // rsi
  bool v66; // r13
  const void *v67; // r12
  __int64 v68; // rcx
  __int64 v69; // r14
  __int64 v70; // rcx
  _DWORD *v71; // rdi
  _DWORD *v72; // rsi
  __int64 v73; // r12
  __int64 v74; // r13
  __int64 v75; // r15
  unsigned int v76; // r14d
  __int64 v77; // rcx
  _DWORD *v78; // rdi
  _DWORD *v79; // rsi
  __int64 v80; // r13
  __int64 v81; // r15
  __int64 v82; // r12
  __int128 v83; // rdi
  void *v84; // rax
  unsigned __int64 v85; // r14
  unsigned __int64 v86; // r12
  __int64 v87; // r14
  __int64 v88; // rcx
  _DWORD *v89; // rdi
  _DWORD *v90; // rsi
  __int64 v91; // rsi
  __int64 v92; // rdi
  __int64 v93; // r14
  size_t v94; // r14
  __int64 v95; // r13
  _OWORD *v96; // rdi
  __int64 v97; // r13
  bool v98; // r14
  unsigned __int64 v99; // r12
  __int64 v100; // r14
  __int64 v101; // r14
  __int64 v102; // r15
  __int64 v103; // r13
  unsigned __int64 v104; // r15
  __int64 v105; // r14
  __int8 v106; // r13
  __int8 v107; // r14
  const __m128i *v108; // r14
  __int64 v109; // rdi
  __int64 v110; // r12
  const __m128i *v111; // r13
  _OWORD *v112; // rdi
  const __m128i *v113; // r15
  __int64 v114; // rbx
  __int64 v115; // r12
  __int64 v116; // r15
  __int64 v117; // rsi
  __int64 v118; // rdx
  void *v119; // rax
  __int64 *v120; // rcx
  _OWORD *v121; // rbx
  __int64 v122; // r12
  int v123; // edx
  __int64 v124; // r15
  void *v125; // rax
  void *v126; // r12
  __int64 v127; // rdi
  __int64 v128; // rsi
  __int64 v129; // rax
  __int64 v130; // r13
  unsigned __int64 v131; // rax
  _BYTE *v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // r13
  __int128 v138; // krA0_16
  __int64 v139; // r12
  __int64 *v140; // rax
  const __m128i *v141; // r14
  __int64 v142; // rbx
  __int64 v143; // r15
  _QWORD *v144; // r14
  __int64 v145; // rsi
  __int64 v146; // rsi
  __int64 v147; // rsi
  __int64 v148; // r14
  __int64 v150; // r14
  const __m128i *v151; // rbx
  const __m128i *v153; // r13
  int v154; // r12d
  __int64 v155; // rax
  __int64 v156; // rsi
  unsigned __int64 v157; // rax
  __int64 v158; // rbx
  __int64 v159; // rax
  __int64 v160; // rdx
  size_t v161; // r12
  const char *v162; // r14
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rdx
  size_t v166; // r12
  __int64 v167; // rax
  __int64 *v168; // rcx
  __int128 v169; // krD0_16
  __int64 v170; // rdx
  __int128 v171; // krE0_16
  __int64 *v172; // r9
  const __m128i *v173; // r14
  _BYTE v174[32]; // [rsp+8h] [rbp-A68h] BYREF
  __int64 v175; // [rsp+28h] [rbp-A48h]
  __int64 v176; // [rsp+30h] [rbp-A40h]
  __int64 v177; // [rsp+D0h] [rbp-9A0h]
  __int64 v178; // [rsp+D8h] [rbp-998h]
  __int64 v179; // [rsp+E8h] [rbp-988h]
  __int64 v180; // [rsp+F0h] [rbp-980h]
  __int64 v181; // [rsp+100h] [rbp-970h]
  __int64 v182; // [rsp+108h] [rbp-968h]
  _OWORD v183[11]; // [rsp+2F0h] [rbp-780h] BYREF
  __int128 v184; // [rsp+3A0h] [rbp-6D0h] BYREF
  __int64 v185; // [rsp+3B0h] [rbp-6C0h]
  __int128 v186; // [rsp+3B8h] [rbp-6B8h] BYREF
  __int64 v187; // [rsp+3C8h] [rbp-6A8h]
  _QWORD v188[4]; // [rsp+3D0h] [rbp-6A0h] BYREF
  _QWORD v189[3]; // [rsp+3F0h] [rbp-680h] BYREF
  _OWORD v190[4]; // [rsp+408h] [rbp-668h] BYREF
  size_t v191; // [rsp+448h] [rbp-628h] BYREF
  __int32 v192; // [rsp+450h] [rbp-620h]
  unsigned int v193; // [rsp+454h] [rbp-61Ch]
  __int64 v194; // [rsp+458h] [rbp-618h]
  __int64 v195; // [rsp+460h] [rbp-610h]
  __int64 v196; // [rsp+468h] [rbp-608h]
  __int64 v197; // [rsp+470h] [rbp-600h]
  __int64 v198; // [rsp+478h] [rbp-5F8h]
  _OWORD __dst[9]; // [rsp+480h] [rbp-5F0h] BYREF
  _OWORD v200[26]; // [rsp+510h] [rbp-560h] BYREF
  _OWORD *v201; // [rsp+6B0h] [rbp-3C0h] BYREF
  __int64 (__fastcall *v202)(_QWORD, _QWORD); // [rsp+6B8h] [rbp-3B8h]
  __int128 v203; // [rsp+6C0h] [rbp-3B0h] BYREF
  __int128 v204; // [rsp+6D0h] [rbp-3A0h]
  __int128 v205; // [rsp+6E0h] [rbp-390h] BYREF
  __int64 v206; // [rsp+6F0h] [rbp-380h]
  unsigned __int64 v207; // [rsp+6F8h] [rbp-378h]
  _OWORD v208[11]; // [rsp+700h] [rbp-370h] BYREF
  const __m128i *v209; // [rsp+7B0h] [rbp-2C0h]
  __int64 v210; // [rsp+7B8h] [rbp-2B8h]
  __int64 v211; // [rsp+7C0h] [rbp-2B0h]
  __int64 v212; // [rsp+7C8h] [rbp-2A8h]
  __int64 v213; // [rsp+7D0h] [rbp-2A0h]
  unsigned __int64 v214; // [rsp+7D8h] [rbp-298h]
  _OWORD v215[11]; // [rsp+7E0h] [rbp-290h] BYREF
  _OWORD v216[11]; // [rsp+890h] [rbp-1E0h] BYREF
  __m128i v217; // [rsp+940h] [rbp-130h] BYREF
  void *__s1; // [rsp+958h] [rbp-118h]
  __int128 v219; // [rsp+960h] [rbp-110h]
  unsigned __int64 v220; // [rsp+970h] [rbp-100h]
  size_t v221; // [rsp+978h] [rbp-F8h]
  __int128 v222; // [rsp+980h] [rbp-F0h] BYREF
  const __m128i *v223; // [rsp+990h] [rbp-E0h]
  __int64 *v224; // [rsp+998h] [rbp-D8h]
  char *v225; // [rsp+9A0h] [rbp-D0h]
  void *v226; // [rsp+9A8h] [rbp-C8h]
  __int128 v227; // [rsp+9B0h] [rbp-C0h] BYREF
  __int64 v228; // [rsp+9C0h] [rbp-B0h]
  unsigned __int64 v229; // [rsp+9C8h] [rbp-A8h]
  __int64 v230; // [rsp+9D0h] [rbp-A0h]
  size_t __n; // [rsp+9D8h] [rbp-98h]
  __int128 v232; // [rsp+9E0h] [rbp-90h] BYREF
  __int64 v233; // [rsp+9F0h] [rbp-80h]
  unsigned int v234; // [rsp+9FCh] [rbp-74h] BYREF
  __int64 v235; // [rsp+A00h] [rbp-70h]
  const __m128i *v236; // [rsp+A08h] [rbp-68h]
  __m128i v237; // [rsp+A10h] [rbp-60h] BYREF
  size_t v238; // [rsp+A20h] [rbp-50h]
  unsigned int v239; // [rsp+A2Ch] [rbp-44h] BYREF
  unsigned __int64 v240; // [rsp+A30h] [rbp-40h]
  bool v241; // [rsp+A3Fh] [rbp-31h]
  const __m128i *v242; // [rsp+A40h] [rbp-30h]

  v224 = a1;
  _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178(v174, a2);
  std::sys::fs::metadata::h32fa16d3052ea535(v200, v179, v180);
  v11 = *(_QWORD *)&v200[0];
  v12 = v200[0];
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    *(_QWORD *)&v200[0],
    *((_QWORD *)&v200[0] + 1));
  if ( v11 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, *((_QWORD *)&v12 + 1));
    v13 = 36;
    v14 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1);
    if ( !v14 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36);
    a4 = v14;
    qmemcpy(v14, "No AiMaMi account registry found yet", 36);
    v15 = 8;
    v16 = 36;
    goto LABEL_10;
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v200, v179, v180);
  v16 = *((_QWORD *)&v200[0] + 1);
  if ( *(_QWORD *)&v200[0] == 0x8000000000000000LL )
  {
    v15 = 2;
    v13 = 21;
LABEL_10:
    v18 = v224;
    *v224 = v15;
    v18[1] = v16;
    v18[2] = (__int64)a4;
    v18[3] = v13;
    core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v174);
    v19 = *a5;
    if ( *a5 != 0x8000000000000000LL )
    {
      v20 = a5[1];
      v21 = a5[2];
      if ( v21 )
      {
        v22 = (_QWORD *)(v20 + 8);
        do
        {
          v23 = *(v22 - 1);
          if ( v23 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v22, v23, 1);
          v22 += 3;
          --v21;
        }
        while ( v21 );
      }
      if ( v19 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 24 * v19, 8);
    }
    return v224;
  }
  v242 = *(const __m128i **)&v200[0];
  v226 = a3;
  *(_QWORD *)&v208[0] = *((_QWORD *)&v200[0] + 1);
  *(_OWORD *)((char *)v208 + 8) = *(unsigned __int64 *)&v200[1];
  *((_QWORD *)&v208[1] + 1) = 0;
  v240 = *((_QWORD *)&v200[0] + 1);
  v208[2] = *(_OWORD *)((char *)v200 + 8);
  serde_json::de::from_trait::hc9ad9bbbdeab4357(v200, v208);
  v16 = *((_QWORD *)&v200[0] + 1);
  v17 = *(_QWORD *)&v200[0];
  if ( *(_QWORD *)&v200[0] == 0x8000000000000000LL )
  {
    v15 = 3;
LABEL_8:
    v13 = 21;
    if ( v242 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v240, v242, 1);
    goto LABEL_10;
  }
  v225 = a4;
  qmemcpy(&v216[1], &v200[1], 0x48u);
  v25 = (char *)&v216[5] + 8;
  v216[0] = v200[0];
  v26 = *(_QWORD *)&v216[1];
  v230 = *((_QWORD *)&v200[0] + 1);
  if ( !*(_QWORD *)&v216[1] )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2((char *)&v216[5] + 8, (char *)&v200[5] + 8);
    v30 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1);
    if ( !v30 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21);
    a4 = v30;
    qmemcpy(v30, "No accounts to export", 21);
    if ( *((_QWORD *)&v216[1] + 1) != 0x8000000000000000LL && *((_QWORD *)&v216[1] + 1) )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v216[2], *((_QWORD *)&v216[1] + 1), 1);
    v15 = 10;
    v16 = 21;
    if ( v17 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v230, 424 * v17, 8);
    goto LABEL_8;
  }
  v215[3] = *(_OWORD *)((char *)&v216[4] + 8);
  v215[2] = *(_OWORD *)((char *)&v216[3] + 8);
  v215[1] = *(_OWORD *)((char *)&v216[2] + 8);
  v215[0] = *(_OWORD *)((char *)&v216[1] + 8);
  v27 = v242;
  if ( v242 )
  {
    v25 = (char *)v240;
    *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v240, v242, 1);
  }
  v190[3] = v215[3];
  v190[2] = v215[2];
  v190[1] = v215[1];
  v190[0] = v215[0];
  v189[0] = v17;
  v189[1] = v16;
  v189[2] = v26;
  v28 = *a5;
  v29 = *a5 == 0x8000000000000000LL;
  v210 = v26;
  if ( v29 )
  {
    *(_QWORD *)&v203 = 0;
  }
  else
  {
    v31 = a5[1];
    v32 = v31 + 24 * a5[2];
    v188[0] = v31;
    v188[2] = v28;
    v188[1] = v31;
    v188[3] = v32;
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
    v36 = v33;
    if ( *(_BYTE *)(v33 + 16) == 1 )
    {
      *(_QWORD *)&v37 = *(_QWORD *)v33;
      *((_QWORD *)&v37 + 1) = *(_QWORD *)(v36 + 8);
    }
    else
    {
      *(_QWORD *)&v37 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
                          &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                          v27,
                          v34,
                          v35);
      *(_OWORD *)v36 = v37;
      *(_BYTE *)(v36 + 16) = 1;
      v26 = v210;
    }
    *(_QWORD *)v36 = v37 + 1;
    v200[1] = 0u;
    v200[0] = (unsigned __int64)anon_155c4da9b5393270cfa7378e2b52c417_32;
    v200[2] = v37;
    v25 = (char *)v200;
    v27 = (const __m128i *)v188;
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$$LP$K$C$V$RP$$GT$$GT$::extend::h5bbec6b93c2a7e43(
      v200,
      v188);
    v205 = v200[2];
    v204 = v200[1];
    v203 = v200[0];
  }
  v195 = v17;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v27);
  v38 = 8;
  i = 416 * v26;
  v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(416 * v26, 8);
  if ( !v40 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 416 * v26);
  *(_QWORD *)&v222 = v26;
  *((_QWORD *)&v222 + 1) = v40;
  v223 = nullptr;
  *(_QWORD *)&v227 = 0;
  *((_QWORD *)&v227 + 1) = 8;
  v228 = 0;
  v41 = 0x8000000000000000LL;
  if ( *(_QWORD *)&v190[0] != 0x8000000000000000LL )
  {
    v38 = (size_t)v190;
    i = (__int64)v200;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v200, v190);
    __s1 = *((void **)&v200[0] + 1);
    v41 = *(_QWORD *)&v200[0];
    __n = *(_QWORD *)&v200[1];
  }
  v209 = (const __m128i *)(v16 + 424 * v26);
  v42 = (const __m128i *)v16;
  v240 = v41;
  do
  {
    v242 = v42;
    v43 = v203;
    if ( (_QWORD)v203 )
    {
      if ( !*((_QWORD *)&v204 + 1) )
      {
LABEL_51:
        v55 = v240;
        v58 = v230;
        v59 = v242;
        goto LABEL_74;
      }
      v44 = v242;
      v45 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v205, &v242[12]);
      _RCX = v45 >> 57;
      v38 = *((_QWORD *)&v203 + 1);
      a7 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v45 >> 57), (__m128i)0LL);
      v47 = v43 - 24;
      v48 = (const void *)v44[12].i64[1];
      v49 = v44[13].u64[0];
      for ( i = 0; ; i += 16 )
      {
        v50 = (const __m128i *)(v38 & v45);
        a8 = _mm_loadu_si128((const __m128i *)((char *)v50 + v43));
        a6 = _mm_cmpeq_epi8(a8, a7);
        _EBX = _mm_movemask_epi8(a6);
        if ( _EBX )
          break;
LABEL_45:
        a6.i64[0] = -1;
        a8 = _mm_cmpeq_epi8(a8, (__m128i)-1LL);
        _RCX = (unsigned int)_mm_movemask_epi8(a8);
        if ( (_DWORD)_RCX )
          goto LABEL_51;
        v45 = (unsigned __int64)v50[1].u64 + i;
      }
      v236 = v50;
      v237 = a7;
      v238 = v38;
      v229 = i;
      v217 = a8;
      while ( 1 )
      {
        __asm { tzcnt   ecx, ebx }
        _RCX = -(__int64)(v38 & ((unsigned __int64)v50->u64 + _RCX));
        if ( v49 == *(_QWORD *)(v47 + 24 * _RCX + 16) )
        {
          v38 = *(_QWORD *)(v47 + 24 * _RCX + 8);
          i = (__int64)v48;
          if ( !memcmp(v48, (const void *)v38, v49) )
            break;
        }
        v52 = _EBX - 1;
        LOWORD(v52) = _EBX & (_EBX - 1);
        v29 = (_WORD)v52 == 0;
        _EBX = v52;
        v50 = v236;
        a7 = _mm_load_si128(&v237);
        v38 = v238;
        i = v229;
        a8 = _mm_load_si128(&v217);
        if ( v29 )
          goto LABEL_45;
      }
    }
    v53 = v242[14].i64[1];
    if ( v53 < 0 )
    {
      v109 = 0;
      goto LABEL_165;
    }
    v54 = (const void *)v242[14].i64[0];
    v55 = v240;
    if ( v53 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(i, v38);
      v56 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v53, 1);
      if ( !v56 )
      {
        v235 = v53;
        v109 = 1;
        goto LABEL_165;
      }
      v57 = v56;
    }
    else
    {
      v57 = 1;
    }
    memcpy((void *)v57, v54, v53);
    v235 = v57;
    codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048(
      v216,
      (void *)v57,
      v53,
      v181,
      v182);
    v58 = v230;
    v59 = v242;
    if ( LODWORD(v216[0]) != 11 )
    {
      qmemcpy(v200, v216, 0x60u);
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v183, &v242[12]);
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v208, &v59[15]);
      *(_QWORD *)&__dst[0] = v200;
      *((_QWORD *)&__dst[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v186, &unk_1017C6A9D, __dst);
      v215[0] = v183[0];
      *(_QWORD *)&v215[1] = *(_QWORD *)&v183[1];
      v215[2] = *(_OWORD *)((char *)v208 + 8);
      *((_QWORD *)&v215[1] + 1) = *(_QWORD *)&v208[0];
      *(_QWORD *)&v215[4] = v187;
      v215[3] = v186;
      v69 = v228;
      if ( v228 == (_QWORD)v227 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v227);
LABEL_72:
      qmemcpy((void *)(*((_QWORD *)&v227 + 1) + 72 * v69), v215, 0x48u);
      v38 = (size_t)&v215[4] + 8;
      v228 = v69 + 1;
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v200);
      i = v235;
      if ( !v53 )
        goto LABEL_74;
LABEL_73:
      v38 = v53;
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(i, v53, 1);
      goto LABEL_74;
    }
    codexmate_lib::core::account_coordination::snapshot_lock_path::h6366cdd791a9fbed((__int64)v215, v235, v53);
    v60 = *((_QWORD *)&v215[0] + 1);
    codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
      (__int64)v200,
      *((__int64 *)&v215[0] + 1),
      *(__int64 *)&v215[1],
      (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_56,
      18);
    v61 = *(_QWORD *)&v200[0];
    v62 = DWORD2(v200[0]);
    if ( *(_QWORD *)&v200[0] != 11 )
    {
      v63 = 21;
      v64 = v216;
      v65 = (_DWORD *)v200 + 3;
      while ( v63 )
      {
        *v64++ = *v65++;
        --v63;
      }
    }
    if ( *(_QWORD *)&v215[0] )
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, *(_QWORD *)&v215[0], 1);
    if ( (_DWORD)v61 != 11 )
    {
      *(_QWORD *)&v200[0] = v61;
      DWORD2(v200[0]) = v62;
      v70 = 21;
      v71 = (_DWORD *)v200 + 3;
      v72 = v216;
      while ( v70 )
      {
        *v71++ = *v72++;
        --v70;
      }
      v59 = v242;
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v183, &v242[12]);
      v58 = v230;
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v208, &v59[15]);
      *(_QWORD *)&__dst[0] = v200;
      *((_QWORD *)&__dst[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      v55 = v240;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v184, &unk_1017C6AB6, __dst);
      v215[0] = v183[0];
      *(_QWORD *)&v215[1] = *(_QWORD *)&v183[1];
      v215[2] = *(_OWORD *)((char *)v208 + 8);
      *((_QWORD *)&v215[1] + 1) = *(_QWORD *)&v208[0];
      *(_QWORD *)&v215[4] = v185;
      v215[3] = v184;
      v69 = v228;
      if ( v228 == (_QWORD)v227 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v227);
      goto LABEL_72;
    }
    v66 = 0;
    v234 = v62;
    v67 = (const void *)v242[12].i64[1];
    v68 = v242[13].i64[0];
    v55 = v240;
    v238 = v68;
    if ( v240 != 0x8000000000000000LL && __n == v68 )
      v66 = memcmp(__s1, v67, __n) == 0;
    v237.i64[0] = (__int64)v67;
    std::sys::fs::metadata::h32fa16d3052ea535(v200, v235, v53);
    v73 = *(_QWORD *)&v200[0];
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
      *(_QWORD *)&v200[0],
      *((_QWORD *)&v200[0] + 1));
    if ( v73 )
    {
      *(_QWORD *)&v216[0] = v235;
      *((_QWORD *)&v216[0] + 1) = v53;
      *(_QWORD *)&v200[0] = v216;
      *((_QWORD *)&v200[0] + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
      alloc::fmt::format::format_inner::h3c16c74008a310d4((char *)v208 + 8, &unk_1017C6BA1, v200);
    }
    else
    {
      codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048(
        v200,
        (void *)v235,
        v53,
        v181,
        v182);
      if ( LODWORD(v200[0]) == 11 )
      {
        std::sys::fs::symlink_metadata::hd69903fe66faddbd(v200, v235, v53);
        if ( LODWORD(v200[0]) == 1 )
        {
          *(_QWORD *)&v216[0] = 2;
          *((_QWORD *)&v216[0] + 1) = *((_QWORD *)&v200[0] + 1);
        }
        else
        {
          if ( (*((_QWORD *)&v200[0] + 1) & 0xF00000000000LL) == 0x800000000000LL )
          {
LABEL_84:
            codexmate_lib::core::account_io::load_matching_export_auth::hc991a0a8a924739c(
              (unsigned __int64 *)v208,
              v235,
              v53,
              (void *)v237.i64[0],
              v238);
            goto LABEL_88;
          }
          *(_QWORD *)&v232 = v235;
          *((_QWORD *)&v232 + 1) = v53;
          *(_QWORD *)&v200[0] = &v232;
          *((_QWORD *)&v200[0] + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(
            (char *)v216 + 8,
            &anon_155c4da9b5393270cfa7378e2b52c417_254,
            v200);
          *(_QWORD *)&v216[0] = 9;
        }
      }
      else
      {
        qmemcpy(v216, v200, 0x60u);
        if ( *(_QWORD *)&v216[0] == 11 )
          goto LABEL_84;
      }
      qmemcpy(v200, v216, 0x60u);
      v201 = v200;
      v202 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v232, &unk_1017C6C1F, &v201);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v200);
      *((_QWORD *)&v208[1] + 1) = v233;
      *(_OWORD *)((char *)v208 + 8) = v232;
    }
    *(_QWORD *)&v208[0] = 0x8000000000000001LL;
LABEL_88:
    v236 = v242 + 12;
    if ( !v66 )
    {
      v238 = *((_QWORD *)&v208[0] + 1);
      v229 = *(_QWORD *)&v208[0];
      v237.i32[0] = v208[1];
      v86 = DWORD1(v208[1]);
      v87 = *((_QWORD *)&v208[1] + 1);
      memcpy(__dst, &v208[2], sizeof(__dst));
      goto LABEL_148;
    }
    std::path::Path::_join::hb1a495d4f06b13b8(&v232, v177, v178, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_49, 15);
    v74 = *((_QWORD *)&v232 + 1);
    codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
      (__int64)v200,
      *((__int64 *)&v232 + 1),
      v233,
      (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_50,
      9);
    v75 = *(_QWORD *)&v200[0];
    v76 = DWORD2(v200[0]);
    if ( *(_QWORD *)&v200[0] != 11 )
    {
      v77 = 21;
      v78 = v216;
      v79 = (_DWORD *)v200 + 3;
      while ( v77 )
      {
        *v78++ = *v79++;
        --v77;
      }
    }
    if ( (_QWORD)v232 )
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v232, 1);
    if ( (_DWORD)v75 != 11 )
    {
      *(_QWORD *)&v200[0] = v75;
      DWORD2(v200[0]) = v76;
      v88 = 21;
      v89 = (_DWORD *)v200 + 3;
      v90 = v216;
      while ( v88 )
      {
        *v89++ = *v90++;
        --v88;
      }
      v201 = v200;
      v202 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v232, &unk_1017C6BFF, &v201);
      v55 = v240;
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v200);
      v238 = v232;
      v237.i32[0] = DWORD2(v232);
      v86 = HIDWORD(v232);
      v87 = v233;
      v229 = 0x8000000000000001LL;
      if ( *(_QWORD *)&v208[0] == 0x8000000000000001LL )
      {
        v91 = *((_QWORD *)&v208[0] + 1);
        if ( !*((_QWORD *)&v208[0] + 1) )
          goto LABEL_148;
        v92 = *(_QWORD *)&v208[1];
      }
      else
      {
        if ( *(_QWORD *)&v208[0] != 0x8000000000000000LL && *(_QWORD *)&v208[0] )
          *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                *((_QWORD *)&v208[0] + 1),
                                *(_QWORD *)&v208[0],
                                1);
        if ( *((_QWORD *)&v208[1] + 1) != 0x8000000000000000LL && *((_QWORD *)&v208[1] + 1) )
          *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                *(_QWORD *)&v208[2],
                                *((_QWORD *)&v208[1] + 1),
                                1);
        if ( *(_QWORD *)&v208[3] != 0x8000000000000000LL && *(_QWORD *)&v208[3] )
          *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                *((_QWORD *)&v208[3] + 1),
                                *(_QWORD *)&v208[3],
                                1);
        if ( *((_QWORD *)&v208[4] + 1) != 0x8000000000000000LL && *((_QWORD *)&v208[4] + 1) )
          *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                *(_QWORD *)&v208[5],
                                *((_QWORD *)&v208[4] + 1),
                                1);
        if ( *(_QWORD *)&v208[6] != 0x8000000000000000LL && *(_QWORD *)&v208[6] )
          *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                *((_QWORD *)&v208[6] + 1),
                                *(_QWORD *)&v208[6],
                                1);
        if ( *((_QWORD *)&v208[7] + 1) != 0x8000000000000000LL && *((_QWORD *)&v208[7] + 1) )
          *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                *(_QWORD *)&v208[8],
                                *((_QWORD *)&v208[7] + 1),
                                1);
        v91 = *(_QWORD *)&v208[9];
        if ( *(_QWORD *)&v208[9] == 0x8000000000000000LL || !*(_QWORD *)&v208[9] )
          goto LABEL_148;
        v92 = *((_QWORD *)&v208[9] + 1);
      }
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v91, 1);
      goto LABEL_148;
    }
    v239 = v76;
    v80 = v175;
    v81 = v176;
    std::sys::fs::metadata::h32fa16d3052ea535(v200, v175, v176);
    v82 = *(_QWORD *)&v200[0];
    v83 = v200[0];
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
      *(_QWORD *)&v200[0],
      *((_QWORD *)&v200[0] + 1));
    if ( v82 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v83, *((_QWORD *)&v83 + 1));
      v84 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1);
      v55 = v240;
      if ( !v84 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 35);
      qmemcpy(v84, "Live authentication file is missing", 35);
      *((_QWORD *)&v215[0] + 1) = 35;
      v220 = (unsigned __int64)v84;
      *(_QWORD *)&v215[1] = v84;
      *((_QWORD *)&v215[1] + 1) = 35;
      v85 = 0x8000000000000001LL;
      *(_QWORD *)&v215[0] = 0x8000000000000001LL;
      v221 = 35;
    }
    else
    {
      codexmate_lib::core::account_io::load_matching_export_auth::hc991a0a8a924739c(
        (unsigned __int64 *)v215,
        v80,
        v81,
        (void *)v237.i64[0],
        v238);
      v221 = *((_QWORD *)&v215[0] + 1);
      v85 = *(_QWORD *)&v215[0];
      v220 = *(_QWORD *)&v215[1];
      v55 = v240;
    }
    v214 = *(_QWORD *)&v208[1];
    v219 = v208[0];
    if ( *(_QWORD *)&v208[0] == 0x8000000000000001LL )
    {
      if ( v85 == 0x8000000000000001LL )
      {
        v237.i8[0] = *(_QWORD *)&v208[0] != 0x8000000000000001LL;
        v233 = *((_QWORD *)&v208[1] + 1);
        v232 = *(_OWORD *)((char *)v208 + 8);
        *(_OWORD *)((char *)v216 + 8) = v215[1];
        *(_QWORD *)&v216[0] = *((_QWORD *)&v215[0] + 1);
        *(_QWORD *)&v200[0] = &v232;
        *((_QWORD *)&v200[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&v200[1] = v216;
        *((_QWORD *)&v200[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v191, &unk_1017C6BBB, v200);
        v94 = v191;
        v237.i32[0] = v192;
        v86 = v193;
        v95 = v194;
        if ( *(_QWORD *)&v216[0] )
          *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                *((_QWORD *)&v216[0] + 1),
                                *(_QWORD *)&v216[0],
                                1);
        if ( (_QWORD)v232 )
          *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v232 + 1), v232, 1);
        _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v239);
        close_NOCANCEL(v239);
        goto LABEL_150;
      }
      v241 = 0;
      v217.i64[0] = 0x8000000000000001LL;
      v86 = HIDWORD(v220);
      v198 = *((_QWORD *)&v215[1] + 1);
      memcpy(__dst, &v215[2], sizeof(__dst));
      v237.i32[0] = v220;
      v238 = v221;
      v207 = v85;
      v229 = v85;
      v93 = *((_QWORD *)&v215[1] + 1);
    }
    else
    {
      v241 = v85 == 0x8000000000000001LL;
      v217.i64[0] = 0x8000000000000001LL;
      v207 = v85;
      if ( v85 == 0x8000000000000001LL )
      {
        v86 = HIDWORD(v214);
        v93 = *((_QWORD *)&v208[1] + 1);
        memcpy(__dst, &v208[2], sizeof(__dst));
        v237.i32[0] = v214;
        v238 = *((_QWORD *)&v219 + 1);
        v229 = v219;
      }
      else
      {
        v237.i8[0] = *(_QWORD *)&v208[0] != 0x8000000000000001LL;
        memcpy(v216, v208, sizeof(v216));
        memcpy(v200, v215, 0xB0u);
        if ( codexmate_lib::core::oauth_refresh::auth_is_newer::h8388ebc832e4acfe(v216, v200) )
        {
          v238 = *((_QWORD *)&v216[0] + 1);
          v229 = *(_QWORD *)&v216[0];
          v237.i32[0] = v216[1];
          v86 = DWORD1(v216[1]);
          v93 = *((_QWORD *)&v216[1] + 1);
          memcpy(__dst, &v208[2], sizeof(__dst));
          v96 = v215;
        }
        else
        {
          v238 = *((_QWORD *)&v200[0] + 1);
          v229 = *(_QWORD *)&v200[0];
          v237.i32[0] = v200[1];
          v86 = DWORD1(v200[1]);
          v93 = *((_QWORD *)&v200[1] + 1);
          memcpy(__dst, &v215[2], sizeof(__dst));
          v96 = v208;
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v96);
      }
    }
    v97 = v93;
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v239);
    v98 = (_QWORD)v219 != v217.i64[0];
    close_NOCANCEL(v239);
    if ( !v98 && *((_QWORD *)&v219 + 1) != 0 )
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214, *((_QWORD *)&v219 + 1), 1);
    if ( v221 != 0 && v207 == v217.i64[0] )
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v220, v221, 1);
    v87 = v97;
LABEL_148:
    if ( v229 == 0x8000000000000001LL )
    {
      v95 = v87;
      v94 = v238;
LABEL_150:
      v99 = v237.u32[0] | (v86 << 32);
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v215, v236);
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v216, &v242[15]);
      *(_QWORD *)&v200[3] = v94;
      *((_QWORD *)&v200[3] + 1) = v99;
      *(_QWORD *)&v200[4] = v95;
      v200[0] = v215[0];
      *(_QWORD *)&v200[1] = *(_QWORD *)&v215[1];
      v200[2] = *(_OWORD *)((char *)v216 + 8);
      *((_QWORD *)&v200[1] + 1) = *(_QWORD *)&v216[0];
      v100 = v228;
      if ( v228 == (_QWORD)v227 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v227);
      qmemcpy((void *)(*((_QWORD *)&v227 + 1) + 72 * v100), v200, 0x48u);
      v38 = (size_t)&v200[4] + 8;
      v228 = v100 + 1;
      _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v234);
      v58 = v230;
      v59 = v242;
      goto LABEL_162;
    }
    *((_QWORD *)&v183[1] + 1) = v87;
    memcpy(&v183[2], __dst, 0x90u);
    *(_QWORD *)&v183[0] = v229;
    *((_QWORD *)&v183[0] + 1) = v238;
    *(_QWORD *)&v183[1] = __PAIR64__(v86, v237.u32[0]);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v232, v236);
    v59 = v242;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, &v242[15]);
    v101 = v211;
    v102 = v212;
    v103 = v213;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v208, &v59[16].u64[1]);
    v236 = (const __m128i *)0x8000000000000000LL;
    if ( v59[21].i64[0] != 0x8000000000000000LL )
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v216, &v59[21]);
      v236 = *(const __m128i **)&v216[0];
      v196 = *(_QWORD *)&v216[1];
      v101 = *((_QWORD *)&v216[0] + 1);
    }
    v237.i64[0] = 0x8000000000000000LL;
    v29 = v59[22].i64[1] == 0x8000000000000000LL;
    v211 = v101;
    if ( !v29 )
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v216, &v59[22].u64[1]);
      v237.i64[0] = *(_QWORD *)&v216[0];
      v197 = *(_QWORD *)&v216[1];
      v102 = *((_QWORD *)&v216[0] + 1);
    }
    v212 = v102;
    v104 = 0x8000000000000000LL;
    v105 = v206;
    if ( v59[24].i64[0] != 0x8000000000000000LL )
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v216, &v59[24]);
      v104 = *(_QWORD *)&v216[0];
      v105 = *(_QWORD *)&v216[1];
      v103 = *((_QWORD *)&v216[0] + 1);
      v59 = v242;
    }
    v213 = v103;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v215, &v59[18]);
    v206 = v105;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v216, &v59[19].u64[1]);
    v106 = v59[26].i8[0];
    v107 = v59[26].i8[1];
    v238 = v59[25].u64[1];
    memcpy(&v200[14], v183, 0xB0u);
    *(_QWORD *)&v200[3] = v233;
    v200[2] = v232;
    v200[4] = *(_OWORD *)((char *)__dst + 8);
    *((_QWORD *)&v200[3] + 1) = *(_QWORD *)&__dst[0];
    v200[5] = v208[0];
    *(_QWORD *)&v200[6] = *(_QWORD *)&v208[1];
    *((_QWORD *)&v200[9] + 1) = v236;
    *(_QWORD *)&v200[10] = v211;
    *((_QWORD *)&v200[10] + 1) = v196;
    *(_QWORD *)&v200[11] = v237.i64[0];
    *((_QWORD *)&v200[11] + 1) = v212;
    *(_QWORD *)&v200[12] = v197;
    *((_QWORD *)&v200[12] + 1) = v104;
    *(_QWORD *)&v200[13] = v213;
    *((_QWORD *)&v200[13] + 1) = v206;
    *((_QWORD *)&v200[7] + 1) = *(_QWORD *)&v215[1];
    *(_OWORD *)((char *)&v200[6] + 8) = v215[0];
    *(_QWORD *)&v200[8] = *(_QWORD *)&v216[0];
    *(_OWORD *)((char *)&v200[8] + 8) = *(_OWORD *)((char *)v216 + 8);
    BYTE8(v200[25]) = v106;
    v200[0] = v59[1];
    BYTE9(v200[25]) = v107;
    *(_QWORD *)&v200[25] = v238;
    a6 = _mm_loadu_si128(v59 + 5);
    v200[1] = a6;
    v108 = v223;
    if ( v223 == (const __m128i *)v222 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h8f94ee9b68ad5d6f(&v222);
    v38 = (size_t)v200;
    memcpy((void *)(*((_QWORD *)&v222 + 1) + 416LL * (_QWORD)v108), v200, 0x1A0u);
    v223 = (const __m128i *)&v108->i8[1];
    v55 = v240;
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v234);
    v58 = v230;
LABEL_162:
    close_NOCANCEL(v234);
    i = v235;
    if ( v53 )
      goto LABEL_73;
LABEL_74:
    v42 = (const __m128i *)((char *)v59 + 424);
  }
  while ( v42 != v209 );
  v110 = v58;
  v111 = v223;
  if ( !v223 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(i, v38);
    v235 = 64;
    v119 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 1);
    v109 = 1;
    if ( v119 )
    {
      qmemcpy(v119, "No exportable accounts: all snapshots are missing or unreadable.", 64);
      v120 = v224;
      *v224 = 10;
      v120[1] = 64;
      v120[2] = (__int64)v119;
      v120[3] = 64;
      goto LABEL_203;
    }
LABEL_165:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v109, v235);
  }
  v112 = v200;
  hostname::get::hc653fae84de866de(v200, *(double *)a6.i64, *(double *)a7.i64, *(double *)a8.i64);
  v113 = *(const __m128i **)&v200[0];
  if ( *(_QWORD *)&v200[0] == 0x8000000000000000LL )
  {
    if ( (BYTE8(v200[0]) & 3) == 1 )
    {
      v114 = *((_QWORD *)&v200[0] + 1) - 1LL;
      v115 = *(_QWORD *)(*((_QWORD *)&v200[0] + 1) - 1LL);
      v116 = *(_QWORD *)(*((_QWORD *)&v200[0] + 1) + 7LL);
      if ( *(_QWORD *)v116 )
        (*(void (__fastcall **)(_QWORD))v116)(*(_QWORD *)(*((_QWORD *)&v200[0] + 1) - 1LL));
      v117 = *(_QWORD *)(v116 + 8);
      if ( v117 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, v117, *(_QWORD *)(v116 + 16));
      v38 = 24;
      v118 = 8;
      v112 = (_OWORD *)v114;
LABEL_181:
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, v38, v118);
    }
    goto LABEL_182;
  }
  v121 = *((_OWORD **)&v200[0] + 1);
  v122 = *(_QWORD *)&v200[1];
  v112 = v200;
  v38 = *((_QWORD *)&v200[0] + 1);
  core::str::converts::from_utf8::hb32deb9559450f6e(v200, *((_QWORD *)&v200[0] + 1), *(_QWORD *)&v200[1]);
  if ( LODWORD(v200[0]) == 1 || !v122 )
  {
    if ( v113 )
    {
      v118 = 1;
      v112 = v121;
      v38 = (size_t)v113;
      goto LABEL_181;
    }
LABEL_182:
    v113 = (const __m128i *)0x8000000000000000LL;
    *(_QWORD *)&v183[0] = 0x8000000000000000LL;
  }
  else
  {
    *(_QWORD *)&v183[0] = v113;
    *((_QWORD *)&v183[0] + 1) = v121;
    *(_QWORD *)&v183[1] = v122;
  }
  v242 = v113;
  *(_QWORD *)&v216[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v112, v38);
  DWORD2(v216[0]) = v123;
  std::time::SystemTime::duration_since::had059553cab94f96(v200, v216, 0, 0);
  if ( LOBYTE(v200[0]) )
    v124 = 0;
  else
    v124 = *((_QWORD *)&v200[0] + 1);
  v209 = v111;
  LODWORD(v235) = (_DWORD)v223;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v200, v216);
  v125 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1);
  if ( !v125 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22);
  v126 = v125;
  qmemcpy(v125, "aimami-accounts-export", 22);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(22, 1);
  v127 = 5;
  v128 = 1;
  v129 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v129 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
  v130 = v129;
  *(_BYTE *)(v129 + 4) = 51;
  *(_DWORD *)v129 = 775040561;
  v131 = 0x8000000000000000LL;
  if ( v242 != (const __m128i *)0x8000000000000000LL )
  {
    v127 = (__int64)v216;
    v128 = (__int64)v183;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v216, v183);
    v131 = *(_QWORD *)&v216[0];
    v215[0] = *(_OWORD *)((char *)v216 + 8);
  }
  *(_QWORD *)&v200[4] = v223;
  v200[3] = v222;
  DWORD2(v200[6]) = 1;
  *(_QWORD *)&v200[0] = 22;
  *((_QWORD *)&v200[0] + 1) = v126;
  *(_QWORD *)&v200[1] = 22;
  *((_QWORD *)&v200[1] + 1) = 5;
  *(_QWORD *)&v200[2] = v130;
  *((_QWORD *)&v200[2] + 1) = 5;
  *(_QWORD *)&v200[6] = v124;
  *((_QWORD *)&v200[4] + 1) = v131;
  v200[5] = v215[0];
  HIDWORD(v200[6]) = v235;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v127, v128);
  v132 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1);
  if ( !v132 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128);
  *(_QWORD *)&v215[0] = 128;
  *((_QWORD *)&v215[0] + 1) = v132;
  *(_QWORD *)&v216[0] = v215;
  *((_QWORD *)&v216[0] + 1) = &unk_101676621;
  *(_QWORD *)&v216[1] = 2;
  *((_QWORD *)&v216[1] + 1) = 1;
  LOBYTE(v216[2]) = 0;
  *v132 = 123;
  *(_QWORD *)&v215[1] = 1;
  LOWORD(__dst[0]) = 256;
  *((_QWORD *)&__dst[0] + 1) = v216;
  v137 = serde_core::ser::SerializeMap::serialize_entry::hfd98e100bba7a4bb(
           __dst,
           &unk_1016766DA,
           13,
           (char *)&v200[6] + 8);
  if ( v137 )
    goto LABEL_195;
  if ( LOBYTE(__dst[0]) )
    goto LABEL_193;
  v137 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea(
           __dst,
           "kindsavetrueuuidemitshowhide",
           4,
           v200);
  if ( v137 )
  {
LABEL_195:
    if ( *(_QWORD *)&v215[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v215[0] + 1), *(_QWORD *)&v215[0], 1);
    goto LABEL_197;
  }
  if ( LOBYTE(__dst[0]) )
    goto LABEL_193;
  v137 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea(
           __dst,
           &unk_1016766E7,
           10,
           (char *)&v200[1] + 8);
  if ( v137 )
    goto LABEL_195;
  if ( LOBYTE(__dst[0]) )
    goto LABEL_193;
  v137 = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5(__dst, &unk_1016766F1, 10, &v200[6]);
  if ( v137 )
    goto LABEL_195;
  if ( LOBYTE(__dst[0]) )
    goto LABEL_193;
  v137 = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa(
           __dst,
           &xmmword_101676360,
           16,
           (char *)&v200[4] + 8);
  if ( v137 )
    goto LABEL_195;
  if ( LOBYTE(__dst[0]) )
  {
LABEL_193:
    v137 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(*(double *)a6.i64);
    goto LABEL_195;
  }
  v137 = serde_core::ser::SerializeMap::serialize_entry::hfd98e100bba7a4bb(
           __dst,
           &unk_1016766FB,
           12,
           (char *)&v200[6] + 12);
  if ( v137 )
    goto LABEL_195;
  v137 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::haa647eea94d1df07(
           __dst,
           &v200[3]);
  if ( v137 )
    goto LABEL_195;
  v208[0] = __dst[0];
  _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(v208);
  v137 = *((_QWORD *)&v215[0] + 1);
  v134 = *(_QWORD *)&v215[0];
  __n = *(_QWORD *)&v215[0];
  if ( *(_QWORD *)&v215[0] == 0x8000000000000000LL )
  {
LABEL_197:
    *(_QWORD *)&v208[0] = v137;
    *(_QWORD *)&v215[0] = 0;
    *((_QWORD *)&v215[0] + 1) = 1;
    *(_QWORD *)&v215[1] = 0;
    *(_QWORD *)&v216[1] = 1610612768;
    *(_QWORD *)&v216[0] = v215;
    *((_QWORD *)&v216[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d(
                            v208,
                            v216,
                            v133,
                            v134,
                            v135,
                            v136) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        &v232,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v138 = v215[0];
    v139 = *(_QWORD *)&v215[1];
    core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v137);
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137, 40, 8);
    v140 = v224;
    *v224 = 9;
    *(_OWORD *)(v140 + 1) = v138;
    v140[3] = v139;
    goto LABEL_199;
  }
  v238 = *(_QWORD *)&v215[1];
  std::path::Path::to_path_buf::h73855ce4b54f7174(v215, v226, v225);
  v159 = std::path::Path::file_name::hf6c2daad91e50ebf(*((_QWORD *)&v215[0] + 1), *(_QWORD *)&v215[1]);
  if ( v159 )
  {
    core::str::converts::from_utf8::hb32deb9559450f6e(v216, v159, v160);
    v161 = 15;
    if ( !LOBYTE(v216[0]) )
      v161 = *(_QWORD *)&v216[1];
    v162 = "aimami-accounts";
    if ( !LOBYTE(v216[0]) )
      v162 = *((const char **)&v216[0] + 1);
  }
  else
  {
    v162 = "aimami-accounts";
    v161 = 15;
  }
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v216, v161, 0, 1, 1);
  v236 = *((const __m128i **)&v216[0] + 1);
  if ( LODWORD(v216[0]) == 1 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v236, *(_QWORD *)&v216[1]);
  v225 = *(char **)&v216[1];
  memcpy(*(void **)&v216[1], v162, v161);
  if ( v161 < 0x15
    || (a6 = _mm_or_si128(
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v225[v161 - 21]), (__m128i)xmmword_101676390),
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v225[v161 - 16]), (__m128i)xmmword_101676380)),
        !_mm_testz_si128(a6, a6)) )
  {
    v163 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h46c0c6bee54dbcbb(v225, v161, ".json", 5);
    *(_QWORD *)&__dst[0] = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h46c0c6bee54dbcbb(
                             v163,
                             v164,
                             &xmmword_101676390,
                             16);
    *((_QWORD *)&__dst[0] + 1) = v165;
    *(_QWORD *)&v208[0] = __dst;
    *((_QWORD *)&v208[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v216, &unk_1017C6E04, v208);
    std::path::PathBuf::set_file_name::ha6bfe008214891f9(v215, v216);
  }
  v226 = *((void **)&v215[0] + 1);
  v237.i64[0] = *(_QWORD *)&v215[0];
  v166 = *(_QWORD *)&v215[1];
  if ( v236 )
    *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v225, v236, 1);
  v167 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v226, v166, v137, v238, 1);
  if ( v167 )
  {
    v168 = v224;
    *v224 = 2;
    v168[1] = v167;
    if ( v237.i64[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v237.i64[0], 1);
    if ( __n )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137, __n, 1);
LABEL_199:
    v55 = v240;
    v141 = v242;
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_io..ExportFile$GT$::h73a7f10c67007276(v200);
    v111 = v209;
    if ( v141 != (const __m128i *)0x8000000000000000LL && v141 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v183[0] + 1), v141, 1);
    v110 = v230;
LABEL_203:
    if ( 2 * v55 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v55, 1);
    v142 = v228;
    v143 = v195;
    if ( v228 )
    {
      v144 = (_QWORD *)(*((_QWORD *)&v227 + 1) + 56LL);
      do
      {
        v145 = *(v144 - 7);
        if ( v145 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v144 - 6), v145, 1);
        v146 = *(v144 - 4);
        if ( v146 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v144 - 3), v146, 1);
        v147 = *(v144 - 1);
        if ( v147 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v144, v147, 1);
        v144 += 9;
        --v142;
      }
      while ( v142 );
    }
    if ( (_QWORD)v227 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v227 + 1), 72 * v227, 8);
    v148 = v210;
    if ( !v111 )
    {
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h17a389cce54f8b4d(&v222);
      if ( (_QWORD)v222 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v222 + 1), 416 * v222, 8);
    }
    HIDWORD(_RAX) = DWORD1(v203);
    if ( (_QWORD)v203 && *((_QWORD *)&v203 + 1) )
    {
      v240 = *((_QWORD *)&v203 + 1);
      v242 = (const __m128i *)v203;
      v150 = *((_QWORD *)&v204 + 1);
      if ( *((_QWORD *)&v204 + 1) )
      {
        v151 = v242;
        _R12D = ~_mm_movemask_epi8(_mm_load_si128(v242));
        v153 = v242 + 1;
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              v154 = _mm_movemask_epi8(_mm_load_si128(v153));
              v151 -= 24;
              ++v153;
            }
            while ( v154 == 0xFFFF );
            _R12D = ~v154;
          }
          __asm { tzcnt   eax, r12d }
          v155 = -3 * _RAX;
          v156 = *((_QWORD *)&v151[-1] + v155 - 1);
          if ( v156 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v151[-1].i64[v155], v156, 1);
          --v150;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v150 );
      }
      v157 = (24 * v240 + 39) & 0xFFFFFFFFFFFFFFF0LL;
      v110 = v230;
      v148 = v210;
      if ( v157 + v240 != -17 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v242 - v157, v157 + v240 + 17, 16);
    }
    if ( *(_QWORD *)&v190[0] != 0x8000000000000000LL && *(_QWORD *)&v190[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v190[0] + 1), *(_QWORD *)&v190[0], 1);
    v158 = v110;
    do
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v158);
      v158 += 424;
      --v148;
    }
    while ( v148 );
    if ( v143 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, 424 * v143, 8);
  }
  else
  {
    *(_QWORD *)&__dst[0] = v226;
    *((_QWORD *)&__dst[0] + 1) = v166;
    *(_QWORD *)&v208[0] = 0;
    *(_OWORD *)((char *)v208 + 8) = 1u;
    *(_QWORD *)&v215[1] = 1610612768;
    *(_QWORD *)&v215[0] = v208;
    *((_QWORD *)&v215[0] + 1) = &anon_155c4da9b5393270cfa7378e2b52c417_744;
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(__dst, v215) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        &v232,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v169 = v208[0];
    *(_QWORD *)&v216[0] = *(_QWORD *)&v208[0];
    *(_OWORD *)((char *)v216 + 8) = *(_OWORD *)((char *)v208 + 8);
    v170 = *(_QWORD *)&v208[1];
    v171 = v227;
    *(_OWORD *)((char *)&v216[1] + 8) = v227;
    *((_QWORD *)&v216[2] + 1) = v228;
    v172 = v224;
    v224[6] = v228;
    *((_OWORD *)v172 + 2) = v171;
    v172[3] = v170;
    *(_OWORD *)(v172 + 1) = v169;
    v172[7] = v124;
    *((_DWORD *)v172 + 16) = v235;
    *v172 = 11;
    if ( v237.i64[0] )
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v237.i64[0], 1);
    if ( __n )
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137, __n, 1);
    v173 = v242;
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_io..ExportFile$GT$::h73a7f10c67007276(v200);
    if ( v173 != (const __m128i *)0x8000000000000000LL && v242 )
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v183[0] + 1), v242, 1);
    if ( 2 * v240 )
      *(double *)a6.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v240, 1);
    if ( (_QWORD)v203 )
      _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v203);
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(
      v189,
      *(double *)a6.i64);
  }
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v174);
  return v224;
}
