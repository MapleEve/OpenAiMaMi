// __ZN13codexmate_lib4core5relay16codex_diagnostic27fix_config_third_party_text @ 0x100501130 | 基线 same-set
// [FULL hexrays]

__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_config_third_party_text::h7c56543f2e575f68(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rsi
  __int64 result; // rax
  void *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  char v18; // r14
  void *v19; // rsi
  __int64 v20; // r15
  __int64 v21; // r14
  __int64 v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  void *v25; // rsi
  __int64 v26; // rdi
  bool v27; // zf
  __int64 (__fastcall *v28)(); // rcx
  unsigned __int64 v29; // rdx
  __int64 *v30; // r9
  __int64 v31; // rbx
  __int64 v32; // r14
  _QWORD *v33; // r15
  __int64 v34; // rsi
  void *v35; // rbx
  __int64 (__fastcall *v36)(); // r14
  const __m128i *v37; // r15
  const __m128i *v39; // r12
  int v40; // r13d
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // r15
  char v46; // r14
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 *v49; // rdi
  __int64 **v50; // rsi
  __int64 v51; // rax
  char *v52; // rbx
  __int64 *v53; // r12
  __int64 v54; // rax
  __int64 **v55; // rdx
  __int64 v56; // r9
  __int64 v57; // rdi
  __int64 v58; // r9
  char *v59; // rbx
  char *v60; // rax
  __m128i v61; // xmm0
  char *v62; // rax
  size_t v63; // rdx
  unsigned __int64 v64; // r14
  __int64 v65; // rbx
  __int64 v66; // rax
  char v67; // r13
  __int64 v68; // r15
  __int64 *v69; // rax
  size_t v70; // r14
  char *v71; // r15
  __int64 v72; // rbx
  __int64 v73; // r9
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // r12
  int v76; // eax
  __m128i v77; // xmm2
  __int64 v78; // rbx
  __int64 v79; // rdi
  __int64 v80; // r9
  __int64 v81; // r14
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rdi
  __int64 v85; // r9
  __int64 v86; // r14
  __int64 v87; // rax
  __int64 v88; // r13
  __int64 v89; // rbx
  __int64 v90; // r9
  __int64 v91; // r14
  __int64 v92; // rax
  __int64 v93; // r14
  __int64 v94; // rbx
  __int64 v95; // rbx
  __int64 v96; // rdi
  __int64 *v97; // rdi
  signed __int64 v98; // rsi
  char *v99; // rdi
  __int64 (__fastcall *v100)(); // r13
  __int64 v101; // rax
  __int64 v102; // rdx
  char *v103; // rax
  size_t v104; // rdx
  char v105; // al
  __int64 v106; // r9
  __int64 *v107; // rdi
  signed __int64 v108; // rsi
  char *v109; // rdi
  __int64 (__fastcall *v110)(); // r13
  __int64 v111; // rax
  __int64 v112; // rdx
  char *v113; // rax
  size_t v114; // rdx
  char v115; // al
  __m128i v116; // xmm1
  __int64 *v117; // r13
  __int64 v118; // rsi
  signed __int64 v119; // rsi
  char *v120; // r13
  __int64 v121; // r13
  __int64 (__fastcall *v122)(); // r13
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rdx
  __int64 *v126; // rbx
  __int64 v127; // rsi
  __int64 v128; // r12
  signed __int64 v129; // rax
  char *v130; // rbx
  __int64 v131; // rsi
  void *v132; // rdi
  __int64 (__fastcall *v133)(); // rbx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rdx
  void *v137; // r12
  __int64 v138; // rbx
  __int64 v139; // r9
  __int64 v140; // r14
  __int64 v141; // rax
  __int64 v142; // rbx
  __int64 v143; // rax
  _QWORD *v144; // rcx
  __int64 v145; // r14
  __int64 v146; // rdx
  __int64 v147; // rcx
  _QWORD *v148; // rdx
  __int64 v149; // rax
  __int64 v150; // rbx
  _QWORD *v151; // r15
  __int64 v152; // rsi
  __int64 (__fastcall *v153)(); // r14
  const __m128i *v154; // r15
  const __m128i *v156; // r12
  int v157; // r13d
  __int64 v158; // rax
  __int64 v159; // rsi
  __int64 v160; // rbx
  _QWORD v161[3]; // [rsp+0h] [rbp-1D0h] BYREF
  __int64 v162; // [rsp+18h] [rbp-1B8h]
  __int64 v163; // [rsp+20h] [rbp-1B0h]
  __int64 v164; // [rsp+28h] [rbp-1A8h]
  __int64 v165; // [rsp+30h] [rbp-1A0h] BYREF
  __int64 v166; // [rsp+38h] [rbp-198h]
  _QWORD v167[5]; // [rsp+40h] [rbp-190h] BYREF
  char v168; // [rsp+68h] [rbp-168h]
  __int16 v169; // [rsp+70h] [rbp-160h]
  unsigned __int64 v170; // [rsp+78h] [rbp-158h]
  __int64 v171; // [rsp+80h] [rbp-150h] BYREF
  __int64 v172; // [rsp+88h] [rbp-148h]
  __int64 v173; // [rsp+90h] [rbp-140h]
  const __m128i *v174; // [rsp+98h] [rbp-138h] BYREF
  void *v175; // [rsp+A0h] [rbp-130h]
  __int64 v176; // [rsp+A8h] [rbp-128h]
  __int64 (__fastcall *v177)(); // [rsp+B0h] [rbp-120h]
  unsigned __int64 v178; // [rsp+B8h] [rbp-118h]
  __int64 v179; // [rsp+C0h] [rbp-110h]
  _QWORD *v180; // [rsp+C8h] [rbp-108h]
  __int64 v181; // [rsp+D0h] [rbp-100h]
  __int64 v182; // [rsp+D8h] [rbp-F8h]
  __int64 v183; // [rsp+E0h] [rbp-F0h]
  size_t v184; // [rsp+E8h] [rbp-E8h]
  _QWORD *v185; // [rsp+F0h] [rbp-E0h]
  void *v186; // [rsp+F8h] [rbp-D8h]
  __int64 v187; // [rsp+100h] [rbp-D0h] BYREF
  __int64 v188; // [rsp+108h] [rbp-C8h]
  char *v189; // [rsp+110h] [rbp-C0h]
  void *v190; // [rsp+118h] [rbp-B8h]
  __int64 v191; // [rsp+120h] [rbp-B0h] BYREF
  void *__s1; // [rsp+128h] [rbp-A8h]
  __int64 *v193; // [rsp+130h] [rbp-A0h] BYREF
  __int64 (__fastcall *v194)(); // [rsp+138h] [rbp-98h] BYREF
  unsigned __int64 v195; // [rsp+140h] [rbp-90h] BYREF
  __int64 v196; // [rsp+148h] [rbp-88h]
  __int64 v197; // [rsp+150h] [rbp-80h]
  __int64 v198; // [rsp+158h] [rbp-78h]
  __int64 v199; // [rsp+160h] [rbp-70h]
  __int64 v200; // [rsp+168h] [rbp-68h]
  __int64 v201; // [rsp+170h] [rbp-60h]
  __int64 v202; // [rsp+178h] [rbp-58h]
  __int64 v203; // [rsp+180h] [rbp-50h] BYREF
  __int64 v204; // [rsp+188h] [rbp-48h]
  __int64 v205; // [rsp+190h] [rbp-40h]
  __int64 v206; // [rsp+198h] [rbp-38h]
  __int64 v207; // [rsp+1A0h] [rbp-30h]

  v7 = a2[7];
  v180 = a2;
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v191, v7, a2[8]);
  result = v191;
  v9 = __s1;
  v170 = 0x8000000000000000LL;
  if ( v191 == 0x8000000000000000LL )
  {
    *a1 = 2;
    a1[1] = v9;
    return result;
  }
  v185 = a1;
  v186 = __s1;
  v181 = v191;
  v10 = (__int64)v193;
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v14 = v11;
  if ( *(_BYTE *)(v11 + 16) == 1 )
  {
    v15 = *(_QWORD *)v11;
    v16 = *(_QWORD *)(v14 + 8);
  }
  else
  {
    v15 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v7,
            v12,
            v13);
    *(_QWORD *)v14 = v15;
    *(_QWORD *)(v14 + 8) = v16;
    *(_BYTE *)(v14 + 16) = 1;
  }
  *(_QWORD *)v14 = v15 + 1;
  v194 = nullptr;
  v193 = nullptr;
  __s1 = nullptr;
  v191 = (__int64)&xmmword_1015FBEC0;
  v195 = v15;
  v196 = v16;
  if ( a4 )
  {
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(&v191, a4, &v195, 1);
    do
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v165, a3);
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v191, &v165);
      a3 += 232;
      --a4;
    }
    while ( a4 );
  }
  v179 = v196;
  v178 = v195;
  v177 = v194;
  v176 = (__int64)v193;
  v175 = __s1;
  v174 = (const __m128i *)v191;
  v17 = (__int64)v186;
  codexmate_lib::core::relay::codex_diagnostic::find_foreign_providers::he2f1fa39fdef0c1d(
    &v171,
    (__int64)v186,
    v10,
    (__int64 *)&v174);
  v18 = codexmate_lib::core::relay::codex_diagnostic::is_cc_switch_fingerprint::h0a9e1d8b185a113c(v17, v10);
  v19 = v186;
  codexmate_lib::core::relay::codex_diagnostic::find_third_party_base_url::h66db96e52908178a(
    (unsigned __int64 *)&v191,
    (__int64)v186,
    (_BYTE *)v10);
  v20 = v191;
  if ( v191 == v170 )
  {
    if ( ((v173 == 0) & (unsigned __int8)~v18) != 0 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v191, v19);
      v10 = 18;
      v21 = 1;
      v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
      if ( v22 )
      {
        *(_QWORD *)(v22 + 8) = 0xE78BAEE6B996E689LL;
        *(_QWORD *)v22 = 0xB8E4ACACE7A097E6LL;
        *(_WORD *)(v22 + 16) = -26219;
        v23 = v185;
        v185[1] = 18;
        v23[2] = v22;
        v23[3] = 18;
        *v23 = 11;
        goto LABEL_18;
      }
LABEL_16:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v21, v10);
    }
  }
  else if ( v191 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v191, 1);
  }
  codexmate_lib::core::relay::codex_diagnostic::backup_config_before_fix::hbfd176d416815de7(&v191, v180);
  v24 = v191;
  v25 = __s1;
  v26 = (__int64)v193;
  if ( v191 != 11 )
  {
    v28 = v194;
    v29 = v195;
    v30 = v185;
    v185[11] = v202;
    v30[10] = v201;
    v30[9] = v200;
    v30[8] = v199;
    v30[7] = v198;
    v30[6] = v197;
    v30[5] = v196;
    v30[4] = v29;
    v30[1] = (__int64)v25;
    v30[2] = v26;
    v30[3] = (__int64)v28;
    *v30 = v24;
    goto LABEL_18;
  }
  if ( 2LL * (_QWORD)__s1 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v193, __s1, 1);
    v27 = v10 == 0;
    if ( v10 < 0 )
      goto LABEL_15;
  }
  else
  {
    v27 = v10 == 0;
    if ( v10 < 0 )
    {
LABEL_15:
      v21 = 0;
      goto LABEL_16;
    }
  }
  v162 = v20;
  if ( v27 )
  {
    v44 = 1;
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v25);
    v21 = 1;
    v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1);
    if ( !v43 )
      goto LABEL_16;
    v44 = v43;
  }
  v187 = v10;
  v188 = v44;
  v189 = nullptr;
  v191 = 0;
  __s1 = (void *)v10;
  v193 = (__int64 *)v186;
  v194 = (__int64 (__fastcall *)())v10;
  v195 = 0;
  v196 = v10;
  v197 = 0xA0000000ALL;
  LOBYTE(v198) = 1;
  LOWORD(v199) = 0;
  v45 = 0;
  v46 = 0;
  while ( 1 )
  {
    v47 = v44;
    v48 = (__int64)v193;
    v49 = &v165;
    v50 = &v193;
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
      &v165,
      &v193);
    if ( (_DWORD)v165 == 1 )
    {
      v51 = v191;
      v191 = v167[0];
      v52 = (char *)(v167[0] - v51);
      v53 = (__int64 *)(v51 + v48);
      if ( v167[0] == v51 )
        goto LABEL_54;
      goto LABEL_48;
    }
    if ( BYTE1(v199) )
      break;
    BYTE1(v199) = 1;
    v52 = (char *)__s1 - v191;
    if ( ((unsigned __int8)v199 | (__s1 != (void *)v191)) != 1 )
      break;
    v53 = (__int64 *)((char *)v193 + v191);
    if ( !v52 )
      goto LABEL_54;
LABEL_48:
    if ( v52[(_QWORD)v53 - 1] == 10 )
    {
      if ( v52 == (char *)1 )
      {
        v52 = nullptr;
      }
      else if ( v52[(_QWORD)v53 - 2] == 13 )
      {
        v52 -= 2;
      }
      else
      {
        --v52;
      }
    }
LABEL_54:
    v49 = v53;
    v54 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v53, v52);
    v50 = v55;
    if ( !v55 )
      goto LABEL_63;
    if ( *(_BYTE *)v54 != 91 || *((_BYTE *)v55 + v54 - 1) != 93 )
    {
      if ( (v46 & 1) == 0 )
        goto LABEL_63;
      goto LABEL_41;
    }
    if ( v55 == (__int64 **)1 || *(char *)(v54 + 1) <= -65 )
      core::str::slice_error_fail::h480e51fbd8b15eba(
        v54,
        v55,
        1,
        (char *)v55 - 1,
        &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97);
    if ( (unsigned __int64)v55 - 2 < 0x10 )
    {
      if ( (unsigned __int64)v55 - 2 < 9 )
        goto LABEL_63;
LABEL_70:
      if ( *(_QWORD *)(v54 + 1) ^ 0x73656C69666F7270LL | *(unsigned __int8 *)(v54 + 9) ^ 0x2ELL )
        goto LABEL_63;
      v62 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v54 + 10, (char *)v55 - 11, 34);
      goto LABEL_73;
    }
    v61 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v54 + 1)), (__m128i)xmmword_1015DCC20);
    if ( !_mm_testz_si128(v61, v61) )
      goto LABEL_70;
    v62 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v54 + 17, (char *)v55 - 18, 34);
LABEL_73:
    v64 = v63;
    v207 = (__int64)v62;
    v49 = (__int64 *)v62;
    v50 = (__int64 **)v63;
    if ( codexmate_lib::core::relay::codex_diagnostic::is_known_or_builtin::hedd6b5aaa2876407(
           v62,
           v63,
           (__int64 *)&v174) )
    {
      goto LABEL_63;
    }
    if ( v64 == 12 )
    {
      if ( !(anon_3ce6d1417794db0febde534c64082f90_184 ^ *(_QWORD *)v207 | *(_DWORD *)(v207 + 8) ^ 0x79616C65u) )
        goto LABEL_63;
LABEL_41:
      v44 = v47;
      v46 = 1;
      if ( BYTE1(v199) )
        goto LABEL_80;
    }
    else
    {
      if ( v64 <= 0xC )
        goto LABEL_41;
      v50 = (__int64 **)v207;
      if ( *(_QWORD *)v207 ^ anon_3ce6d1417794db0febde534c64082f90_194
         | *(_QWORD *)(v207 + 5) ^ *(__int64 *)((char *)&anon_3ce6d1417794db0febde534c64082f90_194 + 5) )
      {
        goto LABEL_41;
      }
LABEL_63:
      if ( (unsigned __int64)v52 > v187 - v45 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v187,
          v45,
          v52,
          1,
          1,
          v56);
        v57 = v188;
        v45 = (__int64)v189;
      }
      else
      {
        v57 = v47;
      }
      v49 = (__int64 *)(v45 + v57);
      v50 = (__int64 **)v53;
      memcpy(v49, v53, (size_t)v52);
      v59 = &v52[v45];
      v189 = v59;
      v60 = v59;
      if ( (char *)v187 == v59 )
      {
        v49 = &v187;
        v50 = (__int64 **)v59;
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v187,
          v59,
          1,
          1,
          1,
          v58);
        v60 = v189;
      }
      v44 = v188;
      v60[v188] = 10;
      v189 = v59 + 1;
      v45 = (__int64)(v59 + 1);
      v46 = 0;
      if ( BYTE1(v199) )
        goto LABEL_80;
    }
  }
  v44 = v47;
LABEL_80:
  if ( v45 < 0 )
  {
    v65 = 0;
    goto LABEL_82;
  }
  v163 = v180[73];
  v164 = v180[74];
  v182 = v187;
  if ( v45 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v49, v50);
    v65 = 1;
    v66 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v45, 1);
    if ( !v66 )
LABEL_82:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v65, v45);
  }
  else
  {
    v66 = 1;
  }
  v203 = v45;
  v206 = v66;
  v204 = v66;
  v205 = 0;
  v165 = 0;
  v166 = v45;
  v183 = v44;
  v167[0] = v44;
  v167[1] = v45;
  v167[2] = 0;
  v167[3] = v45;
  v167[4] = 0xA0000000ALL;
  v168 = 1;
  v169 = 0;
  v207 = 0;
  v67 = 0;
  LODWORD(v190) = 0;
  while ( 2 )
  {
    v68 = v167[0];
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
      &v191,
      v167);
    if ( (_DWORD)v191 == 1 )
    {
      v69 = (__int64 *)v165;
      v165 = (__int64)v193;
      v70 = (char *)v193 - (char *)v69;
      v71 = (char *)v69 + v68;
      if ( v193 == v69 )
        goto LABEL_100;
LABEL_94:
      if ( v71[v70 - 1] == 10 )
      {
        if ( v70 == 1 )
        {
          v70 = 0;
        }
        else if ( v71[v70 - 2] == 13 )
        {
          v70 -= 2LL;
        }
        else
        {
          --v70;
        }
      }
LABEL_100:
      v72 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v71, v70);
      v75 = v74;
      v76 = v74 - 30;
      switch ( v74 )
      {
        case 0x1EuLL:
          v77 = _mm_or_si128(
                  _mm_xor_si128(
                    _mm_loadu_si128((const __m128i *)((char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98 + 14)),
                    _mm_loadu_si128((const __m128i *)(v72 + 14))),
                  _mm_xor_si128(
                    _mm_loadu_si128((const __m128i *)v72),
                    _mm_loadu_si128((const __m128i *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98)));
          if ( !_mm_testz_si128(v77, v77) )
            goto LABEL_113;
          goto LABEL_108;
        case 0x24uLL:
          v76 = memcmp((const void *)v72, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_99, 0x24u);
          if ( !v76 )
            goto LABEL_108;
          goto LABEL_113;
        case 0x27uLL:
          v76 = memcmp((const void *)v72, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_100, 0x27u);
          if ( v76 )
            goto LABEL_113;
LABEL_108:
          v78 = v207;
          if ( v70 > v203 - v207 )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v203,
              v207,
              v70,
              1,
              1,
              v73);
            v79 = v204;
            v78 = v205;
          }
          else
          {
            v79 = v206;
          }
          memcpy((void *)(v78 + v79), v71, v70);
          v81 = v78 + v70;
          v205 = v81;
          v82 = v81;
          if ( v203 == v81 )
            goto LABEL_256;
          goto LABEL_129;
        case 0x37uLL:
          v76 = memcmp((const void *)v72, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_101, 0x37u);
          if ( v76 )
            goto LABEL_113;
          goto LABEL_131;
        case 0x3CuLL:
          v76 = memcmp((const void *)v72, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_102, 0x3Cu);
          if ( !v76 )
            goto LABEL_131;
          goto LABEL_113;
        case 0x40uLL:
          v76 = memcmp((const void *)v72, "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)", 0x40u);
          if ( v76 )
            goto LABEL_113;
LABEL_131:
          v95 = v207;
          if ( v70 > v203 - v207 )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v203,
              v207,
              v70,
              1,
              1,
              v73);
            v96 = v204;
            v95 = v205;
          }
          else
          {
            v96 = v206;
          }
          memcpy((void *)(v95 + v96), v71, v70);
          v86 = v95 + v70;
          v205 = v86;
          v87 = v86;
          if ( v203 != v86 )
            goto LABEL_134;
          goto LABEL_255;
        default:
LABEL_113:
          if ( (v67 & 1) != 0 )
          {
            v83 = v207;
            v84 = v206;
            if ( v70 > v203 - v207 )
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                &v203,
                v207,
                v70,
                1,
                1,
                v73);
              v84 = v204;
              v83 = v205;
            }
            memcpy((void *)(v83 + v84), v71, v70);
            v86 = v83 + v70;
            v205 = v86;
            v87 = v86;
            if ( v203 == v86 )
            {
LABEL_255:
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                &v203,
                v86,
                1,
                1,
                1,
                v85);
              v87 = v205;
            }
LABEL_134:
            v206 = v204;
            *(_BYTE *)(v204 + v87) = 10;
            v93 = v86 + 1;
            v205 = v93;
            v67 = 1;
            goto LABEL_135;
          }
          v88 = v206;
          if ( v75 && *(_BYTE *)v72 == 91 )
          {
            if ( v70 > v203 - v207 )
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                &v203,
                v207,
                v70,
                1,
                1,
                v73);
              v88 = v204;
              v207 = v205;
            }
            v89 = v207;
            memcpy((void *)(v207 + v88), v71, v70);
            v91 = v89 + v70;
            v205 = v91;
            v92 = v91;
            if ( v203 == v91 )
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                &v203,
                v91,
                1,
                1,
                1,
                v90);
              v92 = v205;
            }
            v206 = v204;
            *(_BYTE *)(v204 + v92) = 10;
            v93 = v91 + 1;
            v205 = v93;
            LOBYTE(v92) = 1;
            LODWORD(v190) = v92;
            v67 = 0;
LABEL_135:
            v207 = v93;
            goto LABEL_136;
          }
          if ( ((unsigned __int8)v190 & 1) != 0 )
          {
            LOBYTE(v76) = v75 != 0;
            LODWORD(v190) = v76;
            if ( v70 > v203 - v207 )
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                &v203,
                v207,
                v70,
                1,
                1,
                v73);
              v88 = v204;
              v207 = v205;
            }
            v94 = v207;
            memcpy((void *)(v207 + v88), v71, v70);
            v81 = v94 + v70;
            v205 = v81;
            v82 = v81;
            if ( v203 == v81 )
            {
LABEL_256:
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                &v203,
                v81,
                1,
                1,
                1,
                v80);
              v82 = v205;
            }
LABEL_129:
            v206 = v204;
            *(_BYTE *)(v204 + v82) = 10;
            v93 = v81 + 1;
            v205 = v93;
            v67 = 0;
            goto LABEL_135;
          }
          if ( !codexmate_lib::core::relay::codex_diagnostic::is_profile_assignment::hb6d548fc73d167bb(v72, v75) )
            goto LABEL_162;
          __s1 = nullptr;
          v193 = (__int64 *)v75;
          v194 = (__int64 (__fastcall *)())v72;
          v195 = v75;
          v196 = 0;
          v197 = v75;
          v198 = 0x3D0000003DLL;
          LOBYTE(v199) = 1;
          LOWORD(v200) = 1;
          v191 = 1;
          _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
            &v187,
            &v194);
          if ( (_DWORD)v187 == 1 )
          {
            v97 = (__int64 *)v189;
            __s1 = v189;
            v88 = v206;
          }
          else
          {
            v88 = v206;
            if ( BYTE1(v200) )
              goto LABEL_162;
            BYTE1(v200) = 1;
            v97 = (__int64 *)__s1;
            if ( !(_BYTE)v200 && v193 == __s1 )
              goto LABEL_162;
          }
          if ( !v191 )
            goto LABEL_162;
          if ( v191 == 1 )
          {
            v191 = 0;
            if ( BYTE1(v200) )
              goto LABEL_162;
            BYTE1(v200) = 1;
            if ( !(_BYTE)v200 && v193 == v97 )
              goto LABEL_162;
            v98 = (char *)v193 - (char *)v97;
            goto LABEL_147;
          }
          --v191;
          if ( BYTE1(v200) )
            goto LABEL_162;
          v100 = v194;
          _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
            &v187,
            &v194);
          if ( (_DWORD)v187 != 1 )
          {
            if ( BYTE1(v200)
              || (BYTE1(v200) = 1,
                  v97 = (__int64 *)__s1,
                  v98 = (char *)v193 - (_BYTE *)__s1,
                  ((unsigned __int8)v200 | (v193 != __s1)) != 1) )
            {
              v88 = v206;
              goto LABEL_162;
            }
LABEL_147:
            v99 = (char *)v97 + (_QWORD)v194;
            goto LABEL_155;
          }
          v98 = v188 - (_QWORD)__s1;
          v99 = (char *)v100 + (_QWORD)__s1;
          __s1 = v189;
LABEL_155:
          v101 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v99, v98);
          v103 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v101, v102, 34);
          v88 = v206;
          if ( v104 )
          {
            v184 = v104;
            v190 = v103;
            if ( !codexmate_lib::core::relay::codex_diagnostic::is_known_or_builtin::hedd6b5aaa2876407(
                    v103,
                    v104,
                    (__int64 *)&v174) )
            {
              v105 = codexmate_lib::core::relay::codex_writer::is_aimami_relay_model_slug::hc51c0a465fabe627(v190, v184);
              v88 = v206;
              if ( !v105 )
                goto LABEL_249;
            }
          }
LABEL_162:
          if ( !(unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::is_model_provider_assignment::h8e88b4f08f7d63e2(
                                   v72,
                                   v75) )
            goto LABEL_186;
          __s1 = nullptr;
          v193 = (__int64 *)v75;
          v194 = (__int64 (__fastcall *)())v72;
          v195 = v75;
          v196 = 0;
          v197 = v75;
          v198 = 0x3D0000003DLL;
          LOBYTE(v199) = 1;
          LOWORD(v200) = 1;
          v191 = 1;
          _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
            &v187,
            &v194);
          if ( (_DWORD)v187 == 1 )
          {
            v107 = (__int64 *)v189;
            __s1 = v189;
            v88 = v206;
          }
          else
          {
            v88 = v206;
            if ( BYTE1(v200) )
              goto LABEL_186;
            BYTE1(v200) = 1;
            v107 = (__int64 *)__s1;
            if ( !(_BYTE)v200 && v193 == __s1 )
              goto LABEL_186;
          }
          if ( !v191 )
            goto LABEL_186;
          if ( v191 == 1 )
          {
            v191 = 0;
            if ( BYTE1(v200) )
              goto LABEL_186;
            BYTE1(v200) = 1;
            if ( !(_BYTE)v200 && v193 == v107 )
              goto LABEL_186;
            v108 = (char *)v193 - (char *)v107;
            goto LABEL_171;
          }
          --v191;
          if ( BYTE1(v200) )
            goto LABEL_186;
          v110 = v194;
          _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
            &v187,
            &v194);
          if ( (_DWORD)v187 != 1 )
          {
            if ( BYTE1(v200)
              || (BYTE1(v200) = 1,
                  v107 = (__int64 *)__s1,
                  v108 = (char *)v193 - (_BYTE *)__s1,
                  ((unsigned __int8)v200 | (v193 != __s1)) != 1) )
            {
              v88 = v206;
              goto LABEL_186;
            }
LABEL_171:
            v109 = (char *)v107 + (_QWORD)v194;
            goto LABEL_179;
          }
          v108 = v188 - (_QWORD)__s1;
          v109 = (char *)v110 + (_QWORD)__s1;
          __s1 = v189;
LABEL_179:
          v111 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v109, v108);
          v113 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v111, v112, 34);
          v88 = v206;
          if ( v114 )
          {
            v184 = v114;
            v190 = v113;
            if ( !codexmate_lib::core::relay::codex_diagnostic::is_known_or_builtin::hedd6b5aaa2876407(
                    v113,
                    v114,
                    (__int64 *)&v174) )
            {
              v115 = codexmate_lib::core::relay::codex_writer::is_aimami_relay_model_slug::hc51c0a465fabe627(v190, v184);
              v88 = v206;
              if ( !v115 )
                goto LABEL_249;
            }
          }
LABEL_186:
          if ( v75 < 0x12 )
          {
            if ( v75 < 0xF )
              goto LABEL_241;
            goto LABEL_216;
          }
          v116 = _mm_or_si128(
                   _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v72 + 16)), (__m128i)xmmword_1015FBD70),
                   _mm_xor_si128(_mm_loadu_si128((const __m128i *)v72), (__m128i)xmmword_1015FBD60));
          if ( !_mm_testz_si128(v116, v116) )
            goto LABEL_216;
          __s1 = nullptr;
          v193 = (__int64 *)v75;
          v194 = (__int64 (__fastcall *)())v72;
          v195 = v75;
          v196 = 0;
          v197 = v75;
          v198 = 0x3D0000003DLL;
          LOBYTE(v199) = 1;
          LOWORD(v200) = 1;
          v191 = 1;
          _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
            &v187,
            &v194);
          if ( (_DWORD)v187 == 1 )
          {
            v117 = (__int64 *)v189;
            __s1 = v189;
          }
          else if ( BYTE1(v200) || (BYTE1(v200) = 1, v117 = (__int64 *)__s1, !(_BYTE)v200) && v193 == __s1 )
          {
            v118 = 1;
            v121 = 0;
            goto LABEL_212;
          }
          v118 = 1;
          if ( !v191 )
          {
            v121 = 0;
            goto LABEL_212;
          }
          if ( v191 == 1 )
          {
            v191 = 0;
            if ( !BYTE1(v200) )
            {
              BYTE1(v200) = 1;
              if ( (_BYTE)v200 || v193 != v117 )
              {
                v119 = (char *)v193 - (char *)v117;
                goto LABEL_198;
              }
              goto LABEL_211;
            }
          }
          else
          {
            --v191;
            if ( !BYTE1(v200) )
            {
              v122 = v194;
              _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
                &v187,
                &v194);
              if ( (_DWORD)v187 == 1 )
              {
                v119 = v188 - (_QWORD)__s1;
                v120 = (char *)v122 + (_QWORD)__s1;
                __s1 = v189;
                goto LABEL_208;
              }
              if ( !BYTE1(v200) )
              {
                BYTE1(v200) = 1;
                v117 = (__int64 *)__s1;
                v119 = (char *)v193 - (_BYTE *)__s1;
                if ( ((unsigned __int8)v200 | (v193 != __s1)) == 1 )
                {
LABEL_198:
                  v120 = (char *)v117 + (_QWORD)v194;
LABEL_208:
                  v123 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v120, v119);
                  v118 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v123, v124, 34);
                  v121 = v125;
                  goto LABEL_212;
                }
              }
LABEL_211:
              v121 = 0;
              v118 = 1;
LABEL_212:
              codexmate_lib::core::relay::codex_diagnostic::unescape_toml_basic_string::h71fa7a97db3de3a3(
                &v191,
                (unsigned __int8 *)v118,
                v121);
              v27 = v121 == 0;
              v88 = v206;
              if ( !v27 )
              {
                v190 = __s1;
                if ( !(unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::path_is_under_dir::hbebf74f73253219f(
                                         (__int64)__s1,
                                         (__int64)v193,
                                         v163,
                                         v164) )
                {
                  v131 = v191;
                  if ( v191 )
                  {
                    v132 = v190;
LABEL_248:
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v131, 1);
                  }
LABEL_249:
                  LODWORD(v190) = 0;
                  v67 = 0;
                  goto LABEL_136;
                }
              }
              if ( v191 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v191, 1);
LABEL_216:
              if ( *(_QWORD *)v72 ^ 0x625F69616E65706FLL | *(_QWORD *)(v72 + 7) ^ 0x6C72755F65736162LL )
                goto LABEL_241;
              __s1 = nullptr;
              v193 = (__int64 *)v75;
              v194 = (__int64 (__fastcall *)())v72;
              v195 = v75;
              v196 = 0;
              v197 = v75;
              v198 = 0x3D0000003DLL;
              LOBYTE(v199) = 1;
              LOWORD(v200) = 1;
              v191 = 1;
              _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
                &v187,
                &v194);
              if ( (_DWORD)v187 == 1 )
              {
                v126 = (__int64 *)v189;
                __s1 = v189;
              }
              else if ( BYTE1(v200) || (BYTE1(v200) = 1, v126 = (__int64 *)__s1, !(_BYTE)v200) && v193 == __s1 )
              {
                v127 = 1;
                v128 = 0;
                goto LABEL_237;
              }
              v127 = 1;
              v128 = v191;
              if ( v191 )
              {
                if ( v191 == 1 )
                {
                  v191 = 0;
                  if ( !BYTE1(v200) )
                  {
                    BYTE1(v200) = 1;
                    if ( (_BYTE)v200 || v193 != v126 )
                    {
                      v129 = (char *)v193 - (char *)v126;
                      goto LABEL_225;
                    }
                  }
                }
                else
                {
                  --v191;
                  if ( !BYTE1(v200) )
                  {
                    v133 = v194;
                    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
                      &v187,
                      &v194);
                    v127 = 1;
                    if ( (_DWORD)v187 == 1 )
                    {
                      v129 = v188 - (_QWORD)__s1;
                      v130 = (char *)v133 + (_QWORD)__s1;
                      __s1 = v189;
                      goto LABEL_236;
                    }
                    if ( !BYTE1(v200) )
                    {
                      BYTE1(v200) = 1;
                      v126 = (__int64 *)__s1;
                      v129 = (char *)v193 - (_BYTE *)__s1;
                      if ( ((unsigned __int8)v200 | (v193 != __s1)) == 1 )
                      {
LABEL_225:
                        v130 = (char *)v126 + (_QWORD)v194;
LABEL_236:
                        v134 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v130, v129);
                        v127 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v134, v135, 34);
                        v128 = v136;
                        goto LABEL_237;
                      }
                    }
                  }
                }
                v128 = 0;
              }
LABEL_237:
              codexmate_lib::core::relay::codex_diagnostic::unescape_toml_basic_string::h71fa7a97db3de3a3(
                &v191,
                (unsigned __int8 *)v127,
                v128);
              v88 = v206;
              if ( !v128
                || (v137 = __s1,
                    (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                       "/codex/router/v1xy-authorizationproxy-authorizatproxy-authenticate",
                                       0x10u,
                                       __s1)) )
              {
                if ( v191 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v191, 1);
LABEL_241:
                if ( v70 > v203 - v207 )
                {
                  alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                    &v203,
                    v207,
                    v70,
                    1,
                    1,
                    v106);
                  v88 = v204;
                  v207 = v205;
                }
                v138 = v207;
                memcpy((void *)(v207 + v88), v71, v70);
                v140 = v138 + v70;
                v205 = v140;
                v141 = v140;
                if ( v203 == v140 )
                {
                  alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                    &v203,
                    v140,
                    1,
                    1,
                    1,
                    v139);
                  v141 = v205;
                }
                v206 = v204;
                *(_BYTE *)(v204 + v141) = 10;
                v205 = v140 + 1;
                LODWORD(v190) = 0;
                v207 = v140 + 1;
                v67 = 0;
LABEL_136:
                if ( HIBYTE(v169) )
                  goto LABEL_257;
                continue;
              }
              v131 = v191;
              if ( v191 )
              {
                v132 = v137;
                goto LABEL_248;
              }
              goto LABEL_249;
            }
          }
          v121 = 0;
          goto LABEL_212;
      }
    }
    break;
  }
  if ( !HIBYTE(v169) )
  {
    HIBYTE(v169) = 1;
    v70 = v166 - v165;
    if ( ((unsigned __int8)v169 | (v166 != v165)) == 1 )
    {
      v71 = (char *)(v167[0] + v165);
      if ( !v70 )
        goto LABEL_100;
      goto LABEL_94;
    }
  }
LABEL_257:
  v142 = v203;
  if ( v182 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v183, v182, 1);
  v143 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(
           (void *)v180[7],
           v180[8],
           v206,
           v207,
           1);
  if ( v143 )
  {
    v144 = v185;
    *v185 = 2;
    v144[1] = v143;
    if ( v142 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v206, v142, 1);
LABEL_18:
    v31 = v172;
    v32 = v173;
    if ( v173 )
    {
      v33 = (_QWORD *)(v172 + 8);
      do
      {
        v34 = *(v33 - 1);
        if ( v34 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v33, v34, 1);
        v33 += 3;
        --v32;
      }
      while ( v32 );
    }
    result = v171;
    if ( v171 )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 24 * v171, 8);
    v35 = v175;
    if ( v175 )
    {
      v36 = v177;
      if ( v177 )
      {
        v37 = v174;
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v174));
        v39 = v174 + 1;
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v40 = _mm_movemask_epi8(_mm_load_si128(v39));
              v37 -= 24;
              ++v39;
            }
            while ( v40 == 0xFFFF );
            _R13D = ~v40;
          }
          __asm { tzcnt   eax, r13d }
          v41 = -3 * result;
          v42 = *((_QWORD *)&v37[-1] + v41 - 1);
          if ( v42 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37[-1].i64[v41], v42, 1);
          v36 = (__int64 (__fastcall *)())((char *)v36 - 1);
          result = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v36 );
      }
      goto LABEL_284;
    }
  }
  else
  {
    v145 = v173;
    v146 = 1;
    if ( v162 != v170 )
      v146 = (__int64)&unk_1015FDCFD;
    v187 = v173;
    v147 = 24;
    if ( v162 == v170 )
      v147 = 0;
    v165 = v146;
    v166 = v147;
    v191 = (__int64)&v187;
    __s1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    v193 = &v165;
    v194 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v161, &unk_1017C027C, &v191);
    v148 = v185;
    v185[3] = v161[2];
    v149 = v161[0];
    v148[2] = v161[1];
    v148[1] = v149;
    *v148 = 11;
    if ( v142 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v206, v142, 1);
      v145 = v173;
    }
    v150 = v172;
    if ( v145 )
    {
      v151 = (_QWORD *)(v172 + 8);
      do
      {
        v152 = *(v151 - 1);
        if ( v152 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v151, v152, 1);
        v151 += 3;
        --v145;
      }
      while ( v145 );
    }
    result = v171;
    if ( v171 )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v150, 24 * v171, 8);
    v35 = v175;
    if ( v175 )
    {
      v153 = v177;
      if ( v177 )
      {
        v154 = v174;
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v174));
        v156 = v174 + 1;
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v157 = _mm_movemask_epi8(_mm_load_si128(v156));
              v154 -= 24;
              ++v156;
            }
            while ( v157 == 0xFFFF );
            _R13D = ~v157;
          }
          __asm { tzcnt   eax, r13d }
          v158 = -3 * result;
          v159 = *((_QWORD *)&v154[-1] + v158 - 1);
          if ( v159 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v154[-1].i64[v158], v159, 1);
          v153 = (__int64 (__fastcall *)())((char *)v153 - 1);
          result = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v153 );
      }
LABEL_284:
      result = (24LL * (_QWORD)v35 + 39) & 0xFFFFFFFFFFFFFFF0LL;
      v160 = (__int64)v35 + result + 17;
      if ( v160 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v174 - result, v160, 16);
    }
  }
  if ( v181 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v186, v181, 1);
  return result;
}
