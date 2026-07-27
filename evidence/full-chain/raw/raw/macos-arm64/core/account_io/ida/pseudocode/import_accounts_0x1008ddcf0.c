// __ZN13codexmate_lib4core10account_io15import_accounts @ 0x1008ddcf0 | 基线 same-set
// [FULL IDA decompiler]

__m128i *__fastcall codexmate_lib::core::account_io::import_accounts::hcd371295de7a0192(
        __m128i *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        size_t a6,
        char a7,
        __int64 *a8)
{
  __m128i *v11; // r14
  __m128i *v12; // r13
  __int64 *v13; // r15
  __int64 v14; // r14
  _QWORD *v15; // rdi
  _BYTE *v16; // rsi
  void *v17; // rax
  __int64 v18; // rbx
  char v19; // bl
  _QWORD *v20; // rbx
  __int64 v21; // r15
  _QWORD *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rdx
  void *v26; // rdi
  _QWORD *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  void (**v31)(void); // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  bool v43; // zf
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r12
  __int64 v48; // rbx
  unsigned __int64 v49; // rax
  __int64 v51; // rsi
  __m128i si128; // xmm1
  __int64 v53; // r13
  const void *v54; // r15
  size_t v55; // r14
  __int64 i; // rdi
  unsigned __int64 v57; // rax
  __m128i v58; // xmm2
  int v60; // eax
  __int64 v61; // r14
  bool v62; // bl
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rbx
  __int64 v66; // r9
  size_t v67; // r13
  __int64 v68; // r12
  __int64 v69; // r15
  unsigned int v70; // r14d
  __int64 v71; // rcx
  __int64 *v72; // rdi
  _DWORD *v73; // rsi
  __int64 v74; // r12
  __int64 v75; // r15
  unsigned int v76; // r14d
  __int64 v77; // rcx
  __int64 *v78; // rdi
  _DWORD *v79; // rsi
  __int64 v80; // r14
  __int64 v81; // r15
  __int64 v82; // r12
  __int64 v83; // rdx
  _QWORD *v84; // r14
  __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rdx
  void *v89; // rax
  __int64 v90; // rbx
  void *v91; // rax
  __int64 v92; // rdx
  void *v93; // rax
  __int64 v94; // rcx
  _DWORD *v95; // rdi
  __int64 *v96; // rsi
  __int64 v97; // rbx
  __int64 v98; // rcx
  _DWORD *v99; // rdi
  __int64 *v100; // rsi
  __int64 v101; // rbx
  __int64 v102; // rbx
  char v103; // r15
  char v104; // r15
  bool v105; // al
  __int64 v106; // rsi
  void *v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rsi
  void *v110; // rax
  __int64 v111; // r15
  __int64 v112; // rbx
  __int64 v113; // r14
  __int64 v114; // r15
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rax
  unsigned __int64 v118; // r14
  __int64 v119; // rbx
  __int64 v120; // r13
  __m128i v121; // xmm0
  __int64 v122; // rdi
  __m128i v123; // xmm0
  __m128i *v124; // rsi
  __int64 v125; // rcx
  unsigned __int64 v126; // rcx
  __int64 v127; // r15
  __int64 v128; // r12
  __int32 v129; // eax
  __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rsi
  __int64 v133; // rdi
  __int64 v134; // r8
  _BYTE v135[96]; // [rsp+8h] [rbp-9C8h] BYREF
  __int64 v136; // [rsp+68h] [rbp-968h] BYREF
  _QWORD v137[15]; // [rsp+70h] [rbp-960h] BYREF
  __int64 v138; // [rsp+E8h] [rbp-8E8h]
  __int64 v139; // [rsp+130h] [rbp-8A0h]
  __int64 v140; // [rsp+138h] [rbp-898h]
  __int64 v141; // [rsp+148h] [rbp-888h]
  __int64 v142; // [rsp+150h] [rbp-880h]
  int v143[2]; // [rsp+160h] [rbp-870h]
  int v144[2]; // [rsp+168h] [rbp-868h]
  _QWORD v145[12]; // [rsp+350h] [rbp-680h] BYREF
  _QWORD v146[14]; // [rsp+3B0h] [rbp-620h] BYREF
  __int64 v147[12]; // [rsp+420h] [rbp-5B0h] BYREF
  __m128i v148; // [rsp+480h] [rbp-550h] BYREF
  _QWORD v149[14]; // [rsp+490h] [rbp-540h] BYREF
  __int64 v150; // [rsp+500h] [rbp-4D0h]
  void *__s1; // [rsp+508h] [rbp-4C8h]
  __int64 v152; // [rsp+510h] [rbp-4C0h]
  _QWORD v153[3]; // [rsp+518h] [rbp-4B8h] BYREF
  _QWORD v154[3]; // [rsp+530h] [rbp-4A0h] BYREF
  _QWORD v155[3]; // [rsp+548h] [rbp-488h] BYREF
  _QWORD v156[3]; // [rsp+560h] [rbp-470h] BYREF
  _QWORD v157[3]; // [rsp+578h] [rbp-458h] BYREF
  _QWORD v158[3]; // [rsp+590h] [rbp-440h] BYREF
  _QWORD v159[3]; // [rsp+5A8h] [rbp-428h] BYREF
  _QWORD v160[3]; // [rsp+5C0h] [rbp-410h] BYREF
  _QWORD v161[3]; // [rsp+5D8h] [rbp-3F8h] BYREF
  _QWORD v162[4]; // [rsp+5F0h] [rbp-3E0h] BYREF
  _QWORD v163[6]; // [rsp+610h] [rbp-3C0h] BYREF
  _QWORD *v164; // [rsp+640h] [rbp-390h]
  __int64 v165; // [rsp+648h] [rbp-388h] BYREF
  void *v166; // [rsp+650h] [rbp-380h]
  size_t __n; // [rsp+658h] [rbp-378h]
  __int64 v168; // [rsp+660h] [rbp-370h] BYREF
  __int64 v169; // [rsp+668h] [rbp-368h]
  __int64 v170; // [rsp+670h] [rbp-360h]
  __int64 v171; // [rsp+678h] [rbp-358h]
  _QWORD v172[2]; // [rsp+680h] [rbp-350h] BYREF
  __int64 v173; // [rsp+690h] [rbp-340h] BYREF
  __int64 v174; // [rsp+698h] [rbp-338h]
  int v175[2]; // [rsp+6A0h] [rbp-330h]
  __int64 v176; // [rsp+6A8h] [rbp-328h]
  __int64 v177; // [rsp+6B0h] [rbp-320h] BYREF
  __int64 v178; // [rsp+6B8h] [rbp-318h]
  __int64 v179; // [rsp+6C0h] [rbp-310h]
  _QWORD v180[12]; // [rsp+6C8h] [rbp-308h] BYREF
  __int64 v181; // [rsp+728h] [rbp-2A8h] BYREF
  __int64 v182; // [rsp+730h] [rbp-2A0h]
  __int64 v183; // [rsp+738h] [rbp-298h]
  __int64 v184; // [rsp+740h] [rbp-290h]
  __int64 v185; // [rsp+748h] [rbp-288h]
  __m128i *v186; // [rsp+750h] [rbp-280h]
  __int64 __src[19]; // [rsp+758h] [rbp-278h] BYREF
  int v188[4]; // [rsp+7F0h] [rbp-1E0h] BYREF
  __int64 v189; // [rsp+808h] [rbp-1C8h] BYREF
  __int64 v190; // [rsp+810h] [rbp-1C0h]
  __int64 v191; // [rsp+818h] [rbp-1B8h]
  __int64 v192; // [rsp+820h] [rbp-1B0h]
  __int64 v193; // [rsp+828h] [rbp-1A8h]
  __int64 v194; // [rsp+830h] [rbp-1A0h]
  __int64 *v195; // [rsp+838h] [rbp-198h] BYREF
  __int64 (__fastcall *v196)(); // [rsp+840h] [rbp-190h]
  __int64 v197; // [rsp+848h] [rbp-188h] BYREF
  __int64 v198; // [rsp+850h] [rbp-180h]
  __int64 v199; // [rsp+858h] [rbp-178h]
  _BYTE *v200; // [rsp+860h] [rbp-170h]
  __int64 *v201; // [rsp+868h] [rbp-168h]
  __int64 v202; // [rsp+870h] [rbp-160h]
  __int64 v203; // [rsp+878h] [rbp-158h]
  __int64 v204; // [rsp+880h] [rbp-150h]
  __int64 v205; // [rsp+888h] [rbp-148h]
  _BYTE __dst[152]; // [rsp+890h] [rbp-140h] BYREF
  _QWORD *v207; // [rsp+928h] [rbp-A8h] BYREF
  __int64 (__fastcall *v208)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+930h] [rbp-A0h]
  __int64 v209; // [rsp+938h] [rbp-98h]
  __m128i v210; // [rsp+940h] [rbp-90h] BYREF
  __int64 v211; // [rsp+958h] [rbp-78h]
  unsigned int v212; // [rsp+964h] [rbp-6Ch] BYREF
  unsigned int v213; // [rsp+968h] [rbp-68h] BYREF
  unsigned int v214; // [rsp+96Ch] [rbp-64h] BYREF
  _BYTE *v215; // [rsp+970h] [rbp-60h] BYREF
  __int64 *v216; // [rsp+978h] [rbp-58h]
  __int64 v217; // [rsp+980h] [rbp-50h]
  __int64 v218; // [rsp+988h] [rbp-48h] BYREF
  __int64 v219; // [rsp+990h] [rbp-40h]
  __int64 v220; // [rsp+998h] [rbp-38h]
  __int64 v221; // [rsp+9A0h] [rbp-30h]

  v11 = a1;
  codexmate_lib::core::account_io::parse_import_file::hafe1dc7bc293604c(&v136);
  qmemcpy(__dst, v137, 0x60u);
  if ( __OFSUB__(-v136, 1) )
  {
    v12 = a1;
    qmemcpy(a1, __dst, 0x60u);
    v13 = a8;
    v14 = *a8;
    if ( *a8 != 0x8000000000000000LL )
      goto LABEL_11;
    return v12;
  }
  v152 = v138;
  __s1 = (void *)v137[14];
  v150 = v137[13];
  v149[13] = v137[12];
  qmemcpy(&v149[1], __dst, 0x60u);
  v16 = &__dst[96];
  v15 = &v149[13];
  v149[0] = v136;
  if ( v138 != a6 || (v15 = __s1, v16 = a5, memcmp(__s1, a5, a6)) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v16);
    v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(68, 1);
    if ( !v17 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 68);
    v18 = (__int64)v17;
    memcpy(v17, &unk_101676696, 0x44u);
    v11->i64[0] = 9;
    v11->i64[1] = 68;
    v11[1].i64[0] = v18;
    v11[1].i64[1] = 68;
    v19 = 1;
    v13 = a8;
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_io..ExportFile$GT$::h73a7f10c67007276(v149);
    goto LABEL_8;
  }
  qmemcpy(v146, v149, sizeof(v146));
  v164 = a2;
  v28 = a2;
  _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178(&v136, a2);
  v13 = a8;
  v29 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(&v136);
  if ( v29 )
  {
    v11->i64[0] = 2;
    v11->i64[1] = v29;
    v19 = 1;
    goto LABEL_175;
  }
  v30 = *a8;
  if ( *a8 == 0x8000000000000000LL )
  {
    v168 = 0;
    v31 = &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384;
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
    v35 = v34;
  }
  else
  {
    v36 = a8[1];
    v37 = v36 + 24 * a8[2];
    v162[0] = v36;
    v162[2] = v30;
    v162[1] = v36;
    v162[3] = v37;
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
    v35 = v38;
    if ( *(_BYTE *)(v38 + 16) == 1 )
    {
      v41 = *(_QWORD *)v38;
      v42 = *(_QWORD *)(v35 + 8);
    }
    else
    {
      v41 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
              &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
              v28,
              v39,
              v40);
      *(_QWORD *)v35 = v41;
      *(_QWORD *)(v35 + 8) = v42;
      *(_BYTE *)(v35 + 16) = 1;
    }
    *(_QWORD *)v35 = v41 + 1;
    memset(&__dst[8], 0, 24);
    *(_QWORD *)__dst = anon_155c4da9b5393270cfa7378e2b52c417_32;
    *(_QWORD *)&__dst[32] = v41;
    *(_QWORD *)&__dst[40] = v42;
    v31 = (void (**)(void))__dst;
    v28 = v162;
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$$LP$K$C$V$RP$$GT$$GT$::extend::h5bbec6b93c2a7e43(
      __dst,
      v162);
    v172[1] = *(_QWORD *)&__dst[40];
    v172[0] = *(_QWORD *)&__dst[32];
    v171 = *(_QWORD *)&__dst[24];
    v170 = *(_QWORD *)&__dst[16];
    v33 = *(_QWORD *)&__dst[8];
    v169 = *(_QWORD *)&__dst[8];
    v168 = *(_QWORD *)__dst;
  }
  v177 = 0;
  v178 = 8;
  v179 = 0;
  v43 = *(_BYTE *)(v35 + 16) == 1;
  v186 = v11;
  if ( v43 )
  {
    v44 = *(_QWORD *)v35;
    v45 = *(_QWORD *)(v35 + 8);
  }
  else
  {
    v44 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(v31, v28, v32, v33);
    *(_QWORD *)v35 = v44;
    *(_QWORD *)(v35 + 8) = v45;
    *(_BYTE *)(v35 + 16) = 1;
  }
  v176 = v35;
  *(_QWORD *)v35 = v44 + 1;
  memset(&v163[1], 0, 24);
  v163[0] = anon_155c4da9b5393270cfa7378e2b52c417_32;
  v163[4] = v44;
  v163[5] = v45;
  v218 = 0;
  v219 = 8;
  v220 = 0;
  v181 = 0;
  v182 = 8;
  v183 = 0;
  if ( v146[8] )
  {
    v46 = v146[7];
    v184 = v146[7] + 416LL * v146[8];
    do
    {
      v210.i64[0] = v46;
      v47 = v168;
      if ( v168 )
      {
        if ( !v171 )
          goto LABEL_32;
        v48 = v210.i64[0];
        v49 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v172, v210.i64[0] + 32);
        _RCX = v49 >> 57;
        v51 = v169;
        si128 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v49 >> 57), (__m128i)0LL);
        v53 = v47 - 24;
        v54 = *(const void **)(v48 + 40);
        v55 = *(_QWORD *)(v48 + 48);
        for ( i = 0; ; i += 16 )
        {
          v57 = v51 & v49;
          v58 = _mm_loadu_si128((const __m128i *)(v47 + v57));
          _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v58, si128));
          if ( _EBX )
            break;
LABEL_41:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v58, (__m128i)-1LL));
          if ( (_DWORD)_RCX )
            goto LABEL_32;
          v49 = v57 + i + 16;
        }
        v221 = v57;
        *(__m128i *)v188 = si128;
        v211 = v51;
        v185 = i;
        v148 = v58;
        while ( 1 )
        {
          __asm { tzcnt   ecx, ebx }
          _RCX = -(__int64)(v51 & (v57 + _RCX));
          if ( v55 == *(_QWORD *)(v53 + 24 * _RCX + 16) && !memcmp(v54, *(const void **)(v53 + 24 * _RCX + 8), v55) )
            break;
          v60 = _EBX - 1;
          LOWORD(v60) = _EBX & (_EBX - 1);
          v43 = (_WORD)v60 == 0;
          _EBX = v60;
          v57 = v221;
          si128 = _mm_load_si128((const __m128i *)v188);
          v51 = v211;
          i = v185;
          v58 = _mm_load_si128(&v148);
          if ( v43 )
            goto LABEL_41;
        }
      }
      v61 = v210.i64[0];
      if ( (*(_QWORD *)(v210.i64[0] + 296) == 0x8000000000000000LL
         || (core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
               *(_QWORD *)(v210.i64[0] + 304),
               *(_QWORD *)(v210.i64[0] + 312)),
             v62 = 1,
             !v63))
        && (*(_QWORD *)(v61 + 320) == 0x8000000000000000LL
         || (core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
               *(_QWORD *)(v61 + 328),
               *(_QWORD *)(v61 + 336)),
             v62 = 1,
             !v64)) )
      {
        if ( *(_QWORD *)(v61 + 272) == 0x8000000000000000LL )
        {
          v62 = 0;
          if ( *(_QWORD *)(v61 + 248) == 0x8000000000000000LL )
            goto LABEL_48;
        }
        else
        {
          core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
            *(_QWORD *)(v61 + 280),
            *(_QWORD *)(v61 + 288));
          v62 = v92 != 0;
          if ( *(_QWORD *)(v61 + 248) == 0x8000000000000000LL )
          {
LABEL_48:
            if ( !v62 )
              goto LABEL_78;
            goto LABEL_49;
          }
        }
      }
      else if ( *(_QWORD *)(v61 + 248) == 0x8000000000000000LL )
      {
        goto LABEL_48;
      }
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)(v61 + 256), *(_QWORD *)(v61 + 264));
      if ( v88 == 0 && !v62 )
      {
LABEL_78:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v180, v61 + 32);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, v61 + 56);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v61 + 56);
        v89 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1);
        if ( !v89 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21);
        qmemcpy(v89, "ACCOUNT_MISSING_TOKEN", 21);
        *(_QWORD *)&__dst[16] = v180[2];
        *(_QWORD *)&__dst[8] = v180[1];
        *(_QWORD *)__dst = v180[0];
        *(_QWORD *)&__dst[40] = __src[2];
        *(_QWORD *)&__dst[32] = __src[1];
        *(_QWORD *)&__dst[24] = __src[0];
        *(_QWORD *)&__dst[48] = 21;
        *(_QWORD *)&__dst[56] = v89;
        *(_QWORD *)&__dst[64] = 21;
        v90 = v220;
        if ( v220 != v218 )
          goto LABEL_31;
        goto LABEL_88;
      }
LABEL_49:
      v65 = v61 + 224;
      if ( (unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(v61 + 224) )
      {
        if ( (unsigned __int8)codexmate_lib::core::account_io::is_valid_account_key::h2840000d394c63d9(
                                *(_QWORD *)(v61 + 40),
                                *(_QWORD *)(v61 + 48)) )
        {
          codexmate_lib::core::auth::account_snapshot_path::hba769e00197999ad(
            &v173,
            *(__int64 *)v143,
            *(__int64 *)v144,
            *(unsigned __int8 **)(v61 + 40),
            *(_QWORD *)(v61 + 48),
            v66);
          v67 = *(_QWORD *)v175;
          *(_QWORD *)v188 = v174;
          codexmate_lib::core::account_coordination::snapshot_lock_path::h6366cdd791a9fbed(
            (__int64)v180,
            v174,
            *(__int64 *)v175);
          v221 = v61 + 32;
          v68 = v180[1];
          codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
            (__int64)__dst,
            v180[1],
            v180[2],
            (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_56,
            18);
          v69 = *(_QWORD *)__dst;
          v70 = *(_DWORD *)&__dst[8];
          if ( *(_QWORD *)__dst != 11 )
          {
            v71 = 21;
            v72 = __src;
            v73 = &__dst[12];
            while ( v71 )
            {
              *(_DWORD *)v72 = *v73++;
              v72 = (__int64 *)((char *)v72 + 4);
              --v71;
            }
          }
          if ( v180[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v180[0], 1);
          if ( (_DWORD)v69 == 11 )
          {
            v214 = v70;
            std::path::Path::_join::hb1a495d4f06b13b8(v180, v139, v140, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_49, 15);
            v74 = v180[1];
            codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
              (__int64)__dst,
              v180[1],
              v180[2],
              (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_50,
              9);
            v75 = *(_QWORD *)__dst;
            v76 = *(_DWORD *)&__dst[8];
            if ( *(_QWORD *)__dst != 11 )
            {
              v77 = 21;
              v78 = __src;
              v79 = &__dst[12];
              while ( v77 )
              {
                *(_DWORD *)v78 = *v79++;
                v78 = (__int64 *)((char *)v78 + 4);
                --v77;
              }
            }
            if ( v180[0] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v180[0], 1);
            if ( (_DWORD)v75 != 11 )
            {
              *(_QWORD *)__dst = v75;
              *(_DWORD *)&__dst[8] = v76;
              v98 = 21;
              v99 = &__dst[12];
              v100 = __src;
              while ( v98 )
              {
                *v99 = *(_DWORD *)v100;
                v100 = (__int64 *)((char *)v100 + 4);
                ++v99;
                --v98;
              }
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v189, v221);
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                &v197,
                v210.i64[0] + 56);
              v215 = __dst;
              v216 = (__int64 *)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v160, &unk_1017C6B7D, &v215);
              v180[0] = v189;
              v180[1] = v190;
              v180[2] = v191;
              v180[5] = v199;
              v180[4] = v198;
              v180[3] = v197;
              v180[8] = v160[2];
              v180[7] = v160[1];
              v180[6] = v160[0];
              v101 = v220;
              if ( v220 == v218 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v218);
              qmemcpy((void *)(v219 + 72 * v101), v180, 0x48u);
              v220 = v101 + 1;
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst);
              goto LABEL_133;
            }
            v213 = v76;
            codexmate_lib::core::account_coordination::AccountDomainLock::acquire::h3ce1b7e61ad69c28(
              (__int64)__src,
              v139,
              v140);
            v80 = v210.i64[0];
            if ( LODWORD(__src[0]) != 11 )
            {
              qmemcpy(__dst, __src, 0x60u);
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v189, v221);
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v197, v80 + 56);
              v215 = __dst;
              v216 = (__int64 *)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v159, &unk_1017C6B66, &v215);
              v180[0] = v189;
              v180[1] = v190;
              v180[2] = v191;
              v180[5] = v199;
              v180[4] = v198;
              v180[3] = v197;
              v180[8] = v159[2];
              v180[7] = v159[1];
              v180[6] = v159[0];
              v102 = v220;
              if ( v220 == v218 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v218);
              qmemcpy((void *)(v219 + 72 * v102), v180, 0x48u);
              v220 = v102 + 1;
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst);
              goto LABEL_132;
            }
            v212 = __src[1];
            std::sys::fs::metadata::h32fa16d3052ea535(__dst, *(_QWORD *)v188, v67);
            v81 = v221;
            v82 = *(_QWORD *)__dst;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
              *(_QWORD *)__dst,
              *(_QWORD *)&__dst[8]);
            if ( !v82 )
            {
              codexmate_lib::core::account_io::ensure_existing_snapshot_owned_by::h0affb85540e63851(
                __src,
                *(__int64 *)v188,
                v67,
                *(__int64 *)v143,
                *(__int64 *)v144,
                *(void **)(v80 + 40),
                *(_QWORD *)(v80 + 48));
              if ( LODWORD(__src[0]) != 11 )
              {
                qmemcpy(__dst, __src, 0x60u);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v189, v81);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v197, v80 + 56);
                v215 = __dst;
                v216 = (__int64 *)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v158, &unk_1017C6ACB, &v215);
                v180[0] = v189;
                v180[1] = v190;
                v180[2] = v191;
                v180[5] = v199;
                v180[4] = v198;
                v180[3] = v197;
                v180[8] = v158[2];
                v180[7] = v158[1];
                v180[6] = v158[0];
                alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h5254f934aec713b0(&v218, v180);
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst);
                goto LABEL_131;
              }
            }
            codexmate_lib::core::account_io::read_registry_for_mutation::h61c2c695512ac956(v145, v141, v142);
            if ( LODWORD(v145[0]) != 11 )
            {
              *(_DWORD *)__dst = v212;
              core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(__dst);
              *(_DWORD *)__dst = v213;
              core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(__dst);
              *(_DWORD *)__dst = v214;
              core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(__dst);
              qmemcpy(__dst, v145, 0x60u);
              v13 = a8;
              codexmate_lib::core::account_io::failure_after_snapshot_writes::he75f109669290c4e(
                __src,
                (size_t)&v136,
                v182,
                v183,
                (__int64)&unk_101676660,
                31,
                __dst);
              v11 = v186;
              qmemcpy(v186, __src, 0x60u);
              if ( v173 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v188, v173, 1);
LABEL_166:
              _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2903610dec992b18(&v181);
              if ( v181 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v182, 96 * v181, 8);
              _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcddca5922a9e4867(&v218);
              if ( v218 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v219, 72 * v218, 8);
              _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h51cd264a45cd2627(v163);
              _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(&v177);
              if ( v177 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v178, 24 * v177, 8);
              if ( v168 )
                _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v168);
              v19 = 0;
LABEL_175:
              core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&v136);
              core::ptr::drop_in_place$LT$codexmate_lib..core..account_io..ExportFile$GT$::h73a7f10c67007276(v146);
LABEL_8:
              v12 = v11;
              if ( v150 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v150, 1);
              v14 = *v13;
              if ( ((*v13 != 0x8000000000000000LL) & (unsigned __int8)v19) != 0 )
              {
LABEL_11:
                v20 = (_QWORD *)v13[1];
                v21 = v13[2];
                if ( v21 )
                {
                  v22 = v20 + 1;
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
                if ( v14 )
                {
                  v24 = 24 * v14;
                  v25 = 8;
                  v26 = v20;
                  goto LABEL_18;
                }
              }
              return v12;
            }
            v84 = v180;
            qmemcpy(v180, &v145[1], 0x58u);
            if ( v180[0] == 0x8000000000000000LL )
              v84 = nullptr;
            v85 = v176;
            if ( *(_BYTE *)(v176 + 16) == 1 )
            {
              v86 = *(_QWORD *)v176;
              v87 = *(_QWORD *)(v176 + 8);
            }
            else
            {
              v86 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(&v180[11], v176, v83, 0);
              v85 = v176;
              *(_QWORD *)v176 = v86;
              *(_QWORD *)(v85 + 8) = v87;
              *(_BYTE *)(v85 + 16) = 1;
            }
            *(_QWORD *)v85 = v86 + 1;
            memset(&__src[1], 0, 24);
            __src[0] = (__int64)anon_155c4da9b5393270cfa7378e2b52c417_32;
            __src[4] = v86;
            __src[5] = v87;
            *(_QWORD *)__dst = 1;
            *(_QWORD *)&__dst[8] = v84;
            *(_QWORD *)&__dst[16] = 0;
            *(_QWORD *)&__dst[32] = 0;
            _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$$LP$K$C$V$RP$$GT$$GT$::extend::h62094a7eef02e581(
              __src,
              __dst);
            v189 = __src[0];
            v190 = __src[1];
            v191 = __src[2];
            v192 = __src[3];
            v193 = __src[4];
            v194 = __src[5];
            if ( v180[0] == 0x8000000000000000LL )
            {
              __src[0] = 0x8000000000000000LL;
            }
            else
            {
              qmemcpy(&__dst[8], &v180[1], 0x50u);
              *(_QWORD *)__dst = v180[0];
              codexmate_lib::core::account_io::import_accounts::_$u7b$$u7b$closure$u7d$$u7d$::hedc9f3e017ac7377(
                __src,
                (__int64 *)__dst);
            }
            codexmate_lib::core::account_io::read_effective_active_account_key::h56ef408fb1c13e98(
              &v165,
              v137[3],
              v137[4],
              __src);
            v103 = 1;
            if ( !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h084dd07ddc777fc3(
                                     &v189,
                                     v221) )
            {
              std::sys::fs::metadata::h32fa16d3052ea535(__dst, *(_QWORD *)v188, v67);
              v104 = __dst[0];
              core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
                *(_QWORD *)__dst,
                *(_QWORD *)&__dst[8]);
              v103 = v104 ^ 1;
            }
            v211 = v165;
            if ( v165 == 0x8000000000000000LL )
            {
              if ( a7 || v103 != 1 )
                goto LABEL_120;
LABEL_122:
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v197, v221);
              v109 = v210.i64[0] + 56;
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                __src,
                v210.i64[0] + 56);
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v109);
              v110 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
              if ( !v110 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16);
              qmemcpy(v110, "CONFLICT_SKIPPED", 16);
              *(_QWORD *)&__dst[16] = v199;
              *(_QWORD *)&__dst[8] = v198;
              *(_QWORD *)__dst = v197;
              *(_QWORD *)&__dst[40] = __src[2];
              *(_QWORD *)&__dst[32] = __src[1];
              *(_QWORD *)&__dst[24] = __src[0];
              *(_QWORD *)&__dst[48] = 16;
              *(_QWORD *)&__dst[56] = v110;
              *(_QWORD *)&__dst[64] = 16;
              alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h5254f934aec713b0(&v218, __dst);
LABEL_127:
              v108 = v211;
              if ( v211 != 0x8000000000000000LL )
              {
LABEL_128:
                if ( v108 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v108, 1);
              }
              _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v189);
LABEL_131:
              _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v212);
              close_NOCANCEL(v212);
LABEL_132:
              _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v213);
              close_NOCANCEL(v213);
LABEL_133:
              _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v214);
              close_NOCANCEL(v214);
            }
            else
            {
              v105 = __n == *(_QWORD *)(v210.i64[0] + 48) && memcmp(v166, *(const void **)(v210.i64[0] + 40), __n) == 0;
              if ( v103 )
              {
                if ( !a7 )
                  goto LABEL_122;
                if ( !v105 )
                  goto LABEL_120;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v197, v221);
                v106 = v210.i64[0] + 56;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  __src,
                  v210.i64[0] + 56);
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v106);
                v107 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1);
                if ( !v107 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24);
                qmemcpy(v107, "ACTIVE_ACCOUNT_PROTECTED", 24);
                *(_QWORD *)&__dst[16] = v199;
                *(_QWORD *)&__dst[8] = v198;
                *(_QWORD *)__dst = v197;
                *(_QWORD *)&__dst[40] = __src[2];
                *(_QWORD *)&__dst[32] = __src[1];
                *(_QWORD *)&__dst[24] = __src[0];
                *(_QWORD *)&__dst[48] = 24;
                *(_QWORD *)&__dst[56] = v107;
                *(_QWORD *)&__dst[64] = 24;
                alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h5254f934aec713b0(&v218, __dst);
                v108 = v211;
                goto LABEL_128;
              }
LABEL_120:
              codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(__src, v65, *(_QWORD *)v188, v67);
              if ( LODWORD(__src[0]) == 2 )
              {
                qmemcpy(__dst, &__src[1], 0x60u);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v207, v221);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  &v215,
                  v210.i64[0] + 56);
                v195 = (__int64 *)__dst;
                v196 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v156, &unk_1017C6B4D, &v195);
                v197 = (__int64)v207;
                v198 = (__int64)v208;
                v199 = v209;
                v202 = v217;
                v201 = v216;
                v200 = v215;
                v205 = v156[2];
                v204 = v156[1];
                v203 = v156[0];
                alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h5254f934aec713b0(&v218, &v197);
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst);
                goto LABEL_127;
              }
              memcpy(__dst, __src, sizeof(__dst));
              v111 = v210.i64[0];
              if ( *(_QWORD *)&__dst[32] != *(_QWORD *)(v210.i64[0] + 48)
                || memcmp(*(const void **)&__dst[24], *(const void **)(v210.i64[0] + 40), *(size_t *)&__dst[32]) )
              {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v207, v221);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v215, v111 + 56);
                v195 = (__int64 *)&__dst[16];
                v196 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v157, &unk_1017C6B28, &v195);
                v197 = (__int64)v207;
                v198 = (__int64)v208;
                v199 = v209;
                v202 = v217;
                v201 = v216;
                v200 = v215;
                v205 = v157[2];
                v204 = v157[1];
                v203 = v157[0];
                alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h5254f934aec713b0(&v218, &v197);
                core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(__dst);
                goto LABEL_127;
              }
              core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(__src);
              serde_json::ser::to_vec_pretty::h7e50eac573342525(&v215, v65);
              v112 = (__int64)v215;
              if ( v215 == (_BYTE *)0x8000000000000000LL )
              {
                v195 = v216;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v197, v221);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  __src,
                  v210.i64[0] + 56);
                v207 = &v195;
                v208 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v155, &unk_1017C6B13, &v207);
                *(_QWORD *)__dst = v197;
                *(_QWORD *)&__dst[8] = v198;
                *(_QWORD *)&__dst[16] = v199;
                *(_QWORD *)&__dst[40] = __src[2];
                *(_QWORD *)&__dst[32] = __src[1];
                *(_QWORD *)&__dst[24] = __src[0];
                *(_QWORD *)&__dst[64] = v155[2];
                *(_QWORD *)&__dst[56] = v155[1];
                *(_QWORD *)&__dst[48] = v155[0];
                alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h5254f934aec713b0(&v218, __dst);
                core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v195);
                goto LABEL_127;
              }
              v185 = (__int64)v216;
              v113 = v217;
              v114 = v221;
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v215, v221);
              _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4ccd5ea377d1fd44(
                __src,
                &v173);
              v199 = __src[2];
              v198 = __src[1];
              v197 = __src[0];
              __src[0] = v112;
              __src[1] = v185;
              __src[2] = v113;
              codexmate_lib::core::account_io::SnapshotWriteRecord::capture::h8769c045d4b5419f(
                __dst,
                &v215,
                &v197,
                __src);
              if ( *(_DWORD *)__dst == 1 )
              {
                qmemcpy(__src, &__dst[8], 0x60u);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v207, v114);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  &v215,
                  v210.i64[0] + 56);
                v195 = __src;
                v196 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v154, &unk_1017C6AFA, &v195);
                v197 = (__int64)v207;
                v198 = (__int64)v208;
                v199 = v209;
                v202 = v217;
                v201 = v216;
                v200 = v215;
                v205 = v154[2];
                v204 = v154[1];
                v203 = v154[0];
                alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h5254f934aec713b0(&v218, &v197);
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
                goto LABEL_127;
              }
              qmemcpy(v147, &__dst[8], sizeof(v147));
              v115 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(
                       *(void **)v188,
                       v67,
                       v147[7],
                       v147[8],
                       1);
              if ( v115 )
              {
                v207 = (_QWORD *)v115;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v197, v221);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  __src,
                  v210.i64[0] + 56);
                v215 = &v207;
                v216 = (__int64 *)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v153, &unk_1017C6AE9, &v215);
                *(_QWORD *)__dst = v197;
                *(_QWORD *)&__dst[8] = v198;
                *(_QWORD *)&__dst[16] = v199;
                *(_QWORD *)&__dst[40] = __src[2];
                *(_QWORD *)&__dst[32] = __src[1];
                *(_QWORD *)&__dst[24] = __src[0];
                *(_QWORD *)&__dst[64] = v153[2];
                *(_QWORD *)&__dst[56] = v153[1];
                *(_QWORD *)&__dst[48] = v153[0];
                alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h5254f934aec713b0(&v218, __dst);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v207);
                core::ptr::drop_in_place$LT$codexmate_lib..core..account_io..SnapshotWriteRecord$GT$::h40100033941db5b7(v147);
                goto LABEL_127;
              }
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v221);
              alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v177, __dst);
              core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
                *(_QWORD *)(v210.i64[0] + 88),
                *(_QWORD *)(v210.i64[0] + 96));
              if ( v116 )
              {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, v221);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                  __dst,
                  v210.i64[0] + 80);
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h905e43a85ed0d5ba(&v197, v163, __src, __dst);
                if ( v197 != 0x8000000000000000LL )
                {
                  if ( v197 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v198, v197, 1);
                }
              }
              alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h6bc4890deb257bdf(&v181, v147);
              if ( v211 != 0x8000000000000000LL && v211 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v211, 1);
              _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v189);
              core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v212);
              core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v213);
              core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v214);
            }
          }
          else
          {
            *(_QWORD *)__dst = v69;
            *(_DWORD *)&__dst[8] = v70;
            v94 = 21;
            v95 = &__dst[12];
            v96 = __src;
            while ( v94 )
            {
              *v95 = *(_DWORD *)v96;
              v96 = (__int64 *)((char *)v96 + 4);
              ++v95;
              --v94;
            }
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v189, v221);
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
              &v197,
              v210.i64[0] + 56);
            v215 = __dst;
            v216 = (__int64 *)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v161, &unk_1017C6B90, &v215);
            v180[0] = v189;
            v180[1] = v190;
            v180[2] = v191;
            v180[5] = v199;
            v180[4] = v198;
            v180[3] = v197;
            v180[8] = v161[2];
            v180[7] = v161[1];
            v180[6] = v161[0];
            v97 = v220;
            if ( v220 == v218 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v218);
            qmemcpy((void *)(v219 + 72 * v97), v180, 0x48u);
            v220 = v97 + 1;
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst);
          }
          if ( v173 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v188, v173, 1);
          goto LABEL_32;
        }
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v180, v61 + 32);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, v61 + 56);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v61 + 56);
        v93 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
        if ( !v93 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19);
        qmemcpy(v93, "INVALID_ACCOUNT_KEY", 19);
        *(_QWORD *)&__dst[16] = v180[2];
        *(_QWORD *)&__dst[8] = v180[1];
        *(_QWORD *)__dst = v180[0];
        *(_QWORD *)&__dst[40] = __src[2];
        *(_QWORD *)&__dst[32] = __src[1];
        *(_QWORD *)&__dst[24] = __src[0];
        *(_QWORD *)&__dst[48] = 19;
        *(_QWORD *)&__dst[56] = v93;
        *(_QWORD *)&__dst[64] = 19;
        v90 = v220;
        if ( v220 != v218 )
          goto LABEL_31;
      }
      else
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v180, v61 + 32);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, v61 + 56);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v61 + 56);
        v91 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1);
        if ( !v91 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21);
        qmemcpy(v91, "UNSUPPORTED_AUTH_MODE", 21);
        *(_QWORD *)&__dst[16] = v180[2];
        *(_QWORD *)&__dst[8] = v180[1];
        *(_QWORD *)__dst = v180[0];
        *(_QWORD *)&__dst[40] = __src[2];
        *(_QWORD *)&__dst[32] = __src[1];
        *(_QWORD *)&__dst[24] = __src[0];
        *(_QWORD *)&__dst[48] = 21;
        *(_QWORD *)&__dst[56] = v91;
        *(_QWORD *)&__dst[64] = 21;
        v90 = v220;
        if ( v220 != v218 )
          goto LABEL_31;
      }
LABEL_88:
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcb18a3054963bf13(&v218);
LABEL_31:
      qmemcpy((void *)(v219 + 72 * v90), __dst, 0x48u);
      v220 = v90 + 1;
LABEL_32:
      v46 = v210.i64[0] + 416;
    }
    while ( v210.i64[0] + 416 != v184 );
  }
  if ( v179 )
  {
    codexmate_lib::core::repository::Repository::rebuild_registry_with_policy::hbfa144768b254519(
      __dst,
      v164,
      1,
      (__int64)v163);
    v11 = v186;
    if ( *(_QWORD *)__dst == 0x8000000000000000LL )
    {
      qmemcpy(v135, &__dst[8], sizeof(v135));
      codexmate_lib::core::account_io::failure_after_snapshot_writes::he75f109669290c4e(
        v180,
        (size_t)&v136,
        v182,
        v183,
        (__int64)&unk_10167667F,
        23,
        v135);
      qmemcpy(v11, v180, 0x60u);
LABEL_165:
      v13 = a8;
      goto LABEL_166;
    }
    qmemcpy(__src, __dst, 0x70u);
    LODWORD(v120) = __src[12];
    v210 = *(__m128i *)&__src[9];
    v119 = __src[11];
    if ( __src[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[1], __src[0], 1);
    if ( __src[3] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[4], __src[3], 1);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hff17bd6e934773f2(&__src[6]);
    if ( __src[6] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[7], 48 * __src[6], 8);
    v123 = _mm_load_si128(&v210);
  }
  else
  {
    codexmate_lib::core::account_io::read_registry_for_mutation::h61c2c695512ac956(__dst, v141, v142);
    v117 = *(_QWORD *)__dst;
    v118 = *(_QWORD *)&__dst[8];
    v119 = *(_QWORD *)&__dst[16];
    v120 = *(_QWORD *)&__dst[24];
    v121 = _mm_loadu_si128((const __m128i *)&__dst[32]);
    v122 = *(_QWORD *)&__dst[48];
    __src[0] = *(_QWORD *)&__dst[56];
    __src[1] = *(_QWORD *)&__dst[64];
    __src[2] = *(_QWORD *)&__dst[72];
    __src[3] = *(_QWORD *)&__dst[80];
    __src[4] = *(_QWORD *)&__dst[88];
    if ( *(_QWORD *)__dst != 11 )
    {
      v124 = v186;
      v186[5].i64[1] = __src[4];
      v124[5].i64[0] = __src[3];
      v124[4].i64[1] = __src[2];
      v125 = __src[0];
      v124[4].i64[0] = __src[1];
      v124[3].i64[1] = v125;
      v126 = HIDWORD(v118);
      v124->i64[0] = v117;
      v124->i32[2] = v118;
      v11 = v124;
      v124->i32[3] = v126;
      v124[1].i64[0] = v119;
      v124[1].i64[1] = v120;
      v124[2] = v121;
      v124[3].i64[0] = v122;
      goto LABEL_165;
    }
    if ( *(_QWORD *)&__dst[8] == 0x8000000000000000LL )
    {
      v123 = (__m128i)0x8000000000000000LL;
      LODWORD(v120) = 0;
    }
    else
    {
      v184 = *(_QWORD *)&__dst[48];
      v210 = v121;
      if ( *(_QWORD *)&__dst[24] )
      {
        v127 = *(_QWORD *)&__dst[16];
        v128 = *(_QWORD *)&__dst[24];
        do
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v127);
          v127 += 424;
          --v128;
        }
        while ( v128 );
      }
      if ( v118 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, 424 * v118, 8);
      v123 = _mm_load_si128(&v210);
      v119 = v184;
    }
    v11 = v186;
  }
  v129 = v179;
  v130 = v177;
  v131 = v178;
  *(_QWORD *)__dst = v177;
  *(_QWORD *)&__dst[8] = v178;
  v132 = v179;
  *(_QWORD *)&__dst[16] = v179;
  v133 = v218;
  v134 = v219;
  *(_QWORD *)&__dst[24] = v218;
  *(_QWORD *)&__dst[32] = v219;
  *(_QWORD *)&__dst[40] = v220;
  v11[3].i64[0] = v220;
  v11[2].i64[1] = v134;
  v11[2].i64[0] = v133;
  v11[1].i64[1] = v132;
  v11[1].i64[0] = v131;
  v11->i64[1] = v130;
  *(__m128i *)((char *)v11 + 56) = v123;
  v11[4].i64[1] = v119;
  v11[5].i32[0] = v129;
  v11[5].i32[1] = v120;
  v11->i64[0] = 11;
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2903610dec992b18(&v181);
  if ( v181 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v182, 96 * v181, 8);
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h51cd264a45cd2627(v163);
  if ( v168 )
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v168);
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&v136);
  core::ptr::drop_in_place$LT$codexmate_lib..core..account_io..ExportFile$GT$::h73a7f10c67007276(v146);
  v12 = v11;
  v24 = v150;
  if ( v150 )
  {
    v26 = __s1;
    v25 = 1;
LABEL_18:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v24, v25);
  }
  return v12;
}
