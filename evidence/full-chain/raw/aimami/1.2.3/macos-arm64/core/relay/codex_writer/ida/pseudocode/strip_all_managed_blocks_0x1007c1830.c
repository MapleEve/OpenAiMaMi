// __ZN13codexmate_lib4core5relay12codex_writer24strip_all_managed_blocks @ 0x1007c1830 | 基线 same-set
// [FULL hexrays]

__int64 *__fastcall codexmate_lib::core::relay::codex_writer::strip_all_managed_blocks::h80da2768569d91b4(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // bl
  unsigned __int64 v10; // r15
  __int64 *v11; // rdi
  __int64 *v12; // rsi
  size_t v13; // rax
  __int64 *v14; // r15
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r13
  bool v18; // al
  __m128i v19; // xmm2
  bool v20; // zf
  size_t v21; // rdx
  bool v22; // zf
  bool v23; // sf
  size_t v24; // r13
  size_t v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // rax
  const __m128i *v32; // r15
  __int8 v33; // bl
  char v34; // r12
  char v35; // al
  unsigned __int64 v36; // r14
  __int64 v37; // rdi
  __int64 v38; // rsi
  size_t v39; // rcx
  unsigned __int64 v40; // rbx
  char *v41; // r14
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r10
  __int64 v46; // rdx
  __m128i v47; // xmm2
  size_t v48; // rdx
  size_t v49; // rdx
  int v50; // eax
  int v51; // eax
  __int64 v52; // r10
  unsigned __int64 v53; // r9
  __int64 v54; // rax
  size_t v55; // rdx
  unsigned __int64 v56; // r14
  __int64 v57; // rbx
  __int64 v58; // r9
  __int64 v59; // r14
  __int64 v60; // rax
  __int64 v61; // rbx
  unsigned __int64 v62; // r12
  size_t v63; // rcx
  __int64 v64; // r12
  size_t v65; // r14
  __int64 v66; // rax
  __int64 v67; // r9
  __int64 v68; // rdx
  __m128i v69; // xmm2
  size_t v70; // rdx
  size_t v71; // r12
  __int64 v72; // r9
  __int64 v73; // r12
  __int64 v74; // rax
  __int64 v75; // r12
  __int64 v76; // rax
  size_t v77; // rdx
  unsigned __int64 v78; // r14
  __int64 v79; // rbx
  __int64 v80; // r9
  __int64 v81; // r14
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rcx
  __m128i v85; // xmm0
  __int64 v86; // r8
  __int64 v87; // r9
  size_t v90; // r12
  const __m128i *v91; // rbx
  __int64 v92; // rcx
  bool v93; // cf
  __int64 v94; // rcx
  int v95; // edx
  __int64 v96; // rcx
  size_t v97; // r15
  __int64 v98; // rcx
  bool v99; // r14
  __int64 v100; // r14
  size_t v101; // rdx
  __int64 v102; // r12
  size_t v103; // r14
  size_t v104; // rdx
  int v105; // eax
  _QWORD *v106; // r14
  __int64 v107; // rsi
  __int64 *v108; // rbx
  __int64 v109; // rbx
  unsigned __int64 v110; // r14
  __int64 v111; // rdi
  bool v112; // r14
  unsigned __int64 v113; // rbx
  size_t v114; // rax
  size_t v115; // r12
  char *v116; // rbx
  __int64 v117; // rax
  unsigned __int64 v118; // rdx
  __int64 v119; // r9
  unsigned __int64 v120; // r10
  unsigned __int64 v121; // r14
  __int64 v122; // r9
  size_t v123; // r12
  size_t v124; // rax
  __int64 v125; // rax
  unsigned __int64 v126; // rdx
  bool v127; // cc
  __m128i v128; // xmm0
  unsigned __int64 v129; // r14
  char v130; // al
  __m128i v131; // xmm0
  unsigned __int64 v132; // r14
  int v133; // eax
  __m128i v134; // xmm1
  unsigned __int64 v135; // r14
  int v136; // eax
  __m128i v137; // xmm0
  __int64 v138; // r14
  int v139; // eax
  __int64 v140; // r14
  int v141; // eax
  __m128i v142; // xmm1
  unsigned __int64 v143; // rdi
  unsigned __int64 v144; // rax
  char v145; // cl
  char v146; // dl
  int v147; // edx
  unsigned int v148; // ecx
  const __m128i *v150; // rbx
  int v152; // r14d
  __int64 v153; // rax
  __int64 v154; // rsi
  unsigned __int64 v155; // rax
  __int64 v157; // rbx
  const __m128i *v158; // [rsp+8h] [rbp-168h]
  __int64 v159; // [rsp+10h] [rbp-160h]
  __int64 v160; // [rsp+18h] [rbp-158h]
  const __m128i *v161; // [rsp+20h] [rbp-150h]
  char *__src; // [rsp+28h] [rbp-148h]
  size_t v163; // [rsp+30h] [rbp-140h]
  size_t __n; // [rsp+40h] [rbp-130h]
  bool v166; // [rsp+4Ch] [rbp-124h]
  const __m128i *v167; // [rsp+50h] [rbp-120h] BYREF
  __int64 v168; // [rsp+58h] [rbp-118h]
  size_t v169; // [rsp+60h] [rbp-110h]
  __int64 v170; // [rsp+68h] [rbp-108h]
  __int64 v171; // [rsp+70h] [rbp-100h]
  __int64 v172; // [rsp+78h] [rbp-F8h]
  __m128i v173; // [rsp+80h] [rbp-F0h]
  __int64 v174; // [rsp+98h] [rbp-D8h]
  size_t v175; // [rsp+A0h] [rbp-D0h]
  const __m128i *v176; // [rsp+A8h] [rbp-C8h]
  size_t v177; // [rsp+B0h] [rbp-C0h]
  __int64 v178; // [rsp+B8h] [rbp-B8h]
  unsigned __int64 v179; // [rsp+C0h] [rbp-B0h] BYREF
  __int64 v180; // [rsp+C8h] [rbp-A8h]
  __int64 v181; // [rsp+D0h] [rbp-A0h]
  __int64 v182; // [rsp+D8h] [rbp-98h]
  __int64 v183; // [rsp+E0h] [rbp-90h]
  char v184; // [rsp+E8h] [rbp-88h]
  __int16 v185; // [rsp+F0h] [rbp-80h]
  __int64 v186; // [rsp+F8h] [rbp-78h] BYREF
  __int64 v187; // [rsp+100h] [rbp-70h]
  size_t v188; // [rsp+108h] [rbp-68h]
  __int64 v189; // [rsp+110h] [rbp-60h] BYREF
  __int64 v190; // [rsp+118h] [rbp-58h]
  __int64 v191; // [rsp+120h] [rbp-50h]
  __int64 v192; // [rsp+128h] [rbp-48h]
  unsigned __int64 v193; // [rsp+130h] [rbp-40h]
  __int64 v194; // [rsp+138h] [rbp-38h]
  __int64 v195; // [rsp+140h] [rbp-30h]

  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v6 = (_QWORD *)v4;
  if ( *(_BYTE *)(v4 + 16) == 1 )
  {
    v7 = *(_QWORD *)v4;
    v8 = v6[1];
  }
  else
  {
    v157 = v4;
    v7 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
           &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
           a2,
           v5,
           v4);
    v6 = (_QWORD *)v157;
    *(_QWORD *)v157 = v7;
    *(_QWORD *)(v157 + 8) = v8;
    *(_BYTE *)(v157 + 16) = 1;
  }
  *v6 = v7 + 1;
  v170 = 0;
  v169 = 0;
  v168 = 0;
  v167 = (const __m128i *)anon_3ce6d1417794db0febde534c64082f90_12;
  v171 = v7;
  v172 = v8;
  v177 = 0;
  v178 = a3;
  v192 = a2;
  v179 = a2;
  v180 = a3;
  v181 = 0;
  v195 = a3;
  v182 = a3;
  v183 = 0xA0000000ALL;
  v184 = 1;
  v185 = 0;
LABEL_4:
  v9 = 0;
  while ( 2 )
  {
    v10 = v179;
    v11 = &v186;
    v12 = (__int64 *)&v179;
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
      &v186,
      &v179);
    if ( (_DWORD)v186 == 1 )
    {
      v13 = v177;
      v177 = v188;
      v12 = (__int64 *)(v188 - v13);
      v14 = (__int64 *)(v13 + v10);
      if ( v188 == v13 )
        goto LABEL_18;
LABEL_12:
      if ( *((_BYTE *)v12 + (_QWORD)v14 - 1) == 10 )
      {
        if ( v12 == (__int64 *)1 )
        {
          v12 = nullptr;
        }
        else if ( *((_BYTE *)v12 + (_QWORD)v14 - 2) == 13 )
        {
          v12 = (__int64 *)((char *)v12 - 2);
        }
        else
        {
          v12 = (__int64 *)((char *)v12 - 1);
        }
      }
      goto LABEL_18;
    }
    if ( HIBYTE(v185) )
      goto LABEL_46;
    HIBYTE(v185) = 1;
    v12 = (__int64 *)(v178 - v177);
    if ( ((unsigned __int8)v185 | (v178 != v177)) != 1 )
      goto LABEL_46;
    v14 = (__int64 *)(v179 + v177);
    if ( v12 )
      goto LABEL_12;
LABEL_18:
    v11 = v14;
    v15 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v14, v12);
    v17 = v16;
    v18 = 0;
    switch ( v16 )
    {
      case 30LL:
        v19 = _mm_or_si128(
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)((char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98 + 14)),
                  _mm_loadu_si128((const __m128i *)(v15 + 14))),
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)v15),
                  _mm_loadu_si128((const __m128i *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98)));
        v20 = _mm_testz_si128(v19, v19);
        goto LABEL_25;
      case 36LL:
        v21 = 36;
        v11 = (__int64 *)v15;
        v12 = (__int64 *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_99;
        goto LABEL_24;
      case 39LL:
        v21 = 39;
        v11 = (__int64 *)v15;
        v12 = (__int64 *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_100;
LABEL_24:
        v20 = memcmp(v11, v12, v21) == 0;
LABEL_25:
        v18 = v20;
        goto LABEL_26;
      case 55LL:
        v11 = (__int64 *)v15;
        v12 = (__int64 *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_101;
        if ( !memcmp((const void *)v15, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_101, 0x37u) )
          goto LABEL_5;
        goto LABEL_31;
      case 60LL:
        v11 = (__int64 *)v15;
        v12 = (__int64 *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_102;
        if ( memcmp((const void *)v15, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_102, 0x3Cu) )
          goto LABEL_31;
        goto LABEL_5;
      case 64LL:
        v11 = (__int64 *)v15;
        v12 = (__int64 *)"# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)";
        if ( !memcmp((const void *)v15, "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)", 0x40u) )
        {
LABEL_5:
          v9 = 1;
          if ( HIBYTE(v185) )
            goto LABEL_46;
          continue;
        }
LABEL_31:
        v18 = 0;
        if ( (v9 & 1) != 0 )
        {
LABEL_32:
          v9 = !v18;
          if ( HIBYTE(v185) )
            goto LABEL_46;
          continue;
        }
LABEL_34:
        if ( v17 && *(_BYTE *)v15 == 91 && *(_BYTE *)(v15 + v17 - 1) == 93 )
        {
          if ( v17 == 1 || *(char *)(v15 + 1) <= -65 )
            core::str::slice_error_fail::h480e51fbd8b15eba(
              v15,
              v17,
              1,
              v17 - 1,
              &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97);
          v22 = v17 == 2;
          v23 = v17 - 2 < 0;
          v24 = v17 - 2;
          v25 = v193;
          if ( v23 )
          {
            v111 = 0;
            goto LABEL_197;
          }
          if ( !v22 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v193);
            v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1);
            if ( v26 )
            {
              v27 = v26;
              goto LABEL_44;
            }
            v25 = v24;
            v111 = 1;
LABEL_197:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v111, v25);
          }
          v27 = 1;
LABEL_44:
          memcpy((void *)v27, (const void *)(v15 + 1), v24);
          v186 = v24;
          v187 = v27;
          v188 = v24;
          v11 = (__int64 *)&v167;
          v12 = &v186;
          hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v167, &v186);
          v193 = v27;
        }
        if ( !HIBYTE(v185) )
          goto LABEL_4;
LABEL_46:
        v176 = v167;
        v174 = v168;
        v28 = v170;
        v29 = v195;
        if ( v195 < 0 )
        {
          v30 = 0;
          goto LABEL_48;
        }
        if ( v195 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v12);
          v30 = 1;
          v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v29, 1);
          if ( !v31 )
LABEL_48:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v30, v29);
        }
        else
        {
          v31 = 1;
        }
        v189 = v29;
        v193 = v31;
        v190 = v31;
        v191 = 0;
        v177 = 0;
        v178 = v29;
        v179 = v192;
        v180 = v29;
        v181 = 0;
        v182 = v29;
        v183 = 0xA0000000ALL;
        v184 = 1;
        v185 = 0;
        v32 = v176 + 1;
        v33 = 1;
        v194 = 0;
        v34 = 0;
LABEL_57:
        v36 = v179;
        v37 = (__int64)&v167;
        v38 = (__int64)&v179;
        _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
          &v167,
          &v179);
        v173.i8[0] = v33;
        if ( (_BYTE)v167 )
        {
          v39 = v177;
          v177 = v169;
          v40 = v169 - v39;
          v41 = (char *)(v39 + v36);
          if ( v169 == v39 )
            goto LABEL_69;
LABEL_63:
          if ( v41[v40 - 1] == 10 )
          {
            if ( v40 == 1 )
            {
              v40 = 0;
            }
            else if ( v41[v40 - 2] == 13 )
            {
              v40 -= 2LL;
            }
            else
            {
              --v40;
            }
          }
        }
        else
        {
          if ( HIBYTE(v185) )
            goto LABEL_194;
          HIBYTE(v185) = 1;
          v40 = v178 - v177;
          if ( ((unsigned __int8)v185 | (v178 != v177)) != 1 )
            goto LABEL_194;
          v41 = (char *)(v179 + v177);
          if ( v40 )
            goto LABEL_63;
        }
LABEL_69:
        v37 = (__int64)v41;
        v38 = v40;
        v45 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v41, v40);
        v192 = v46;
        switch ( v46 )
        {
          case 30LL:
            v47 = _mm_or_si128(
                    _mm_xor_si128(
                      _mm_loadu_si128((const __m128i *)((char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98 + 14)),
                      _mm_loadu_si128((const __m128i *)(v45 + 14))),
                    _mm_xor_si128(
                      _mm_loadu_si128((const __m128i *)v45),
                      _mm_loadu_si128((const __m128i *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98)));
            if ( _mm_testz_si128(v47, v47) )
              goto LABEL_76;
            goto LABEL_80;
          case 36LL:
            v48 = 36;
            v37 = v45;
            v38 = (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_99;
            goto LABEL_75;
          case 39LL:
            v48 = 39;
            v37 = v45;
            v38 = (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_100;
LABEL_75:
            v195 = v45;
            v50 = memcmp((const void *)v37, (const void *)v38, v48);
            v45 = v195;
            if ( v50 )
              goto LABEL_80;
LABEL_76:
            v35 = 0;
            v34 = 0;
            goto LABEL_56;
          case 55LL:
            v49 = 55;
            v37 = v45;
            v38 = (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_101;
            goto LABEL_79;
          case 60LL:
            v49 = 60;
            v37 = v45;
            v38 = (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_102;
            goto LABEL_79;
          case 64LL:
            v49 = 64;
            v37 = v45;
            v38 = (__int64)"# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)";
LABEL_79:
            v195 = v45;
            v51 = memcmp((const void *)v37, (const void *)v38, v49);
            v45 = v195;
            if ( v51 )
              goto LABEL_80;
            goto LABEL_54;
          default:
LABEL_80:
            if ( (v34 & 1) != 0 )
            {
              if ( !v192 || *(_BYTE *)v45 != 91 || *(_BYTE *)(v45 + v192 - 1) != 93 )
              {
                v35 = 1;
                if ( (v173.i8[0] & 1) == 0 )
                {
                  if ( v40 > v189 - v194 )
                  {
                    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                      &v189,
                      v194,
                      v40,
                      1,
                      1,
                      v192);
                    v193 = v190;
                    v76 = v191;
                  }
                  else
                  {
                    v76 = v194;
                  }
                  v37 = v76 + v193;
                  v38 = (__int64)v41;
                  v77 = v40;
                  v78 = v40;
                  v79 = v76;
                  memcpy((void *)(v76 + v193), (const void *)v38, v77);
                  v81 = v79 + v78;
                  v191 = v81;
                  if ( v189 == v81 )
                    goto LABEL_192;
LABEL_128:
                  v82 = v81;
                  goto LABEL_129;
                }
                goto LABEL_55;
              }
              if ( v192 == 1 || *(char *)(v45 + 1) <= -65 )
                core::str::slice_error_fail::h480e51fbd8b15eba(
                  v45,
                  v192,
                  1,
                  v192 - 1,
                  &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97);
              v52 = v45 + 1;
              v53 = v192 - 2;
              if ( (unsigned __int64)(v192 - 2) >= 0x10 )
              {
                if ( !(*(_QWORD *)v52 ^ 0x72705F6C65646F6DLL | *(_QWORD *)(v52 + 8) ^ 0x2E7372656469766FLL) )
                {
                  v83 = 16;
                  v84 = -16;
LABEL_136:
                  v42 = v53 + v84;
                  if ( v42 == 12 )
                  {
                    v42 = *(_QWORD *)(v52 + v83) ^ 0x725F696D616D6961LL;
                    if ( !(v42 | *(unsigned int *)(v52 + v83 + 8) ^ 0x79616C65LL) )
                      goto LABEL_54;
                    goto LABEL_146;
                  }
                  if ( v42 <= 0xC
                    || (v37 = 0x5F79616C65725F69LL,
                        (v38 = *(_QWORD *)(v52 + v83) ^ 0x725F696D616D6961LL
                             | *(_QWORD *)(v52 + v83 + 5) ^ 0x5F79616C65725F69LL) != 0) )
                  {
                    if ( v42 == 6 )
                    {
                      v42 = *(_DWORD *)(v52 + v83) ^ 0x616D6961u;
                      if ( !((unsigned int)v42 | *(unsigned __int16 *)(v52 + v83 + 4) ^ 0x3169) )
                        goto LABEL_54;
                    }
                    else if ( v42 == 19 )
                    {
                      v85 = _mm_or_si128(
                              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v52 + v83)), (__m128i)xmmword_1015FBE90),
                              _mm_xor_si128(
                                _mm_loadu_si128((const __m128i *)(v52 + v83 + 3)),
                                (__m128i)xmmword_1015FBE80));
                      if ( _mm_testz_si128(v85, v85) )
                        goto LABEL_54;
                    }
                    goto LABEL_146;
                  }
LABEL_54:
                  v35 = 1;
LABEL_55:
                  v34 = 1;
                  goto LABEL_56;
                }
              }
              else if ( v53 < 9 )
              {
                goto LABEL_146;
              }
              v42 = *(_QWORD *)v52 ^ 0x73656C69666F7270LL | *(unsigned __int8 *)(v52 + 8) ^ 0x2ELL;
              if ( v42 )
              {
LABEL_146:
                v37 = (__int64)&v186;
                v38 = v52;
                codexmate_lib::core::relay::codex_writer::split_toml_section_header::hb60c247d95bb914b(
                  &v186,
                  (unsigned __int8 *)v52,
                  v53,
                  v42,
                  v43,
                  v53);
                __n = v40;
                _RAX = (__int64)v176;
                _RDX = (unsigned int)~_mm_movemask_epi8(_mm_load_si128(v176));
                v195 = v187;
                v90 = v188;
                v163 = v188 - 1;
                v91 = v32;
                v92 = v28;
                v161 = v32;
                __src = v41;
                v175 = v188;
                while ( 1 )
                {
                  v160 = v92;
                  v93 = v92 == 0;
                  v94 = v92 - 1;
                  if ( v93 )
                  {
LABEL_178:
                    if ( v90 )
                    {
                      v108 = (__int64 *)(v195 + 8);
                      do
                      {
                        v38 = *(v108 - 1);
                        if ( v38 )
                        {
                          v37 = *v108;
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v108, v38, 1);
                        }
                        v108 += 3;
                        --v90;
                      }
                      while ( v90 );
                    }
                    if ( v186 )
                    {
                      v38 = 24 * v186;
                      v37 = v195;
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v195, 24 * v186, 8);
                    }
                    v35 = 1;
                    if ( v160 )
                      goto LABEL_55;
                    if ( __n > v189 - v194 )
                    {
                      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                        &v189,
                        v194,
                        __n,
                        1,
                        1,
                        v87);
                      v193 = v190;
                      v194 = v191;
                    }
                    v109 = v194;
                    v37 = v194 + v193;
                    v38 = (__int64)v41;
                    memcpy((void *)(v194 + v193), v41, __n);
                    v81 = v109 + __n;
                    v191 = v109 + __n;
                    if ( v189 != v109 + __n )
                      goto LABEL_128;
LABEL_192:
                    v37 = (__int64)&v189;
                    v38 = v81;
                    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                      &v189,
                      v81,
                      1,
                      1,
                      1,
                      v80);
                    v82 = v191;
LABEL_129:
                    v193 = v190;
                    *(_BYTE *)(v190 + v82) = 10;
                    v191 = v81 + 1;
                    v34 = 1;
                    v35 = 0;
                    v194 = v81 + 1;
LABEL_56:
                    v33 = v35;
                    if ( HIBYTE(v185) )
                      goto LABEL_194;
                    goto LABEL_57;
                  }
                  v159 = v94;
                  if ( !(_WORD)_RDX )
                  {
                    do
                    {
                      v95 = _mm_movemask_epi8(_mm_load_si128(v91));
                      _RAX -= 384;
                      ++v91;
                    }
                    while ( v95 == 0xFFFF );
                    _RDX = (unsigned int)~v95;
                  }
                  v96 = _RAX;
                  v192 = _RDX;
                  __asm { tzcnt   eax, edx }
                  v158 = (const __m128i *)v96;
                  codexmate_lib::core::relay::codex_writer::split_toml_section_header::hb60c247d95bb914b(
                    (__int64 *)&v167,
                    *(unsigned __int8 **)(v96 - 24 * _RAX - 16),
                    *(_QWORD *)(v96 - 24 * _RAX - 8),
                    v96,
                    v86,
                    v87);
                  v173.i64[0] = v168;
                  v97 = v169;
                  v98 = v195;
                  v38 = v192;
                  if ( v90 < v169 )
                    goto LABEL_153;
                  if ( v169 )
                    break;
                  v99 = 1;
                  v90 = v175;
LABEL_174:
                  v37 = v173.i64[0];
                  if ( v167 )
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v173.i64[0], 24LL * (_QWORD)v167, 8);
                    v38 = v192;
                  }
                  _RDX = (unsigned int)v38 & ((_DWORD)v38 - 1);
                  v20 = !v99;
                  v32 = v161;
                  v41 = __src;
                  _RAX = (__int64)v158;
                  v92 = v159;
                  if ( !v20 )
                    goto LABEL_178;
                }
                v102 = 16;
                v103 = v169;
                while ( 1 )
                {
                  v104 = *(_QWORD *)(v98 + v102);
                  if ( v104 != *(_QWORD *)(v173.i64[0] + v102) )
                    break;
                  v105 = memcmp(*(const void **)(v195 + v102 - 8), *(const void **)(v173.i64[0] + v102 - 8), v104);
                  v38 = v192;
                  v98 = v195;
                  if ( v105 )
                    break;
                  v102 += 24;
                  if ( !--v103 )
                  {
                    v99 = 1;
                    v90 = v175;
                    goto LABEL_169;
                  }
                }
LABEL_153:
                v90 = v175;
                v99 = v97 >= v175;
                if ( v163 >= v97 )
                {
LABEL_168:
                  if ( v97 )
                  {
LABEL_169:
                    v166 = v99;
                    v106 = (_QWORD *)(v173.i64[0] + 8);
                    do
                    {
                      v107 = *(v106 - 1);
                      if ( v107 )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v106, v107, 1);
                      v106 += 3;
                      --v97;
                    }
                    while ( v97 );
                    v38 = v192;
                    v99 = v166;
                  }
                }
                else
                {
                  v100 = 16;
                  while ( 1 )
                  {
                    v101 = *(_QWORD *)(v173.i64[0] + v100);
                    if ( v101 != *(_QWORD *)(v98 + v100) )
                    {
                      v99 = 0;
                      v90 = v175;
                      goto LABEL_168;
                    }
                    if ( memcmp(*(const void **)(v173.i64[0] + v100 - 8), *(const void **)(v98 + v100 - 8), v101) )
                      break;
                    v100 += 24;
                    --v90;
                    v98 = v195;
                    v38 = v192;
                    if ( !v90 )
                    {
                      v99 = 1;
                      v90 = v175;
                      if ( v97 )
                        goto LABEL_169;
                      goto LABEL_174;
                    }
                  }
                  v99 = 0;
                  v90 = v175;
                  v38 = v192;
                  if ( v97 )
                    goto LABEL_169;
                }
                goto LABEL_174;
              }
              v83 = 9;
              v84 = -9;
              goto LABEL_136;
            }
            if ( v40 > v189 - v194 )
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                &v189,
                v194,
                v40,
                1,
                1,
                v44);
              v193 = v190;
              v54 = v191;
            }
            else
            {
              v54 = v194;
            }
            v37 = v54 + v193;
            v38 = (__int64)v41;
            v55 = v40;
            v56 = v40;
            v57 = v54;
            memcpy((void *)(v54 + v193), (const void *)v38, v55);
            v59 = v57 + v56;
            v191 = v59;
            v60 = v59;
            if ( v189 == v59 )
            {
              v37 = (__int64)&v189;
              v38 = v59;
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                &v189,
                v59,
                1,
                1,
                1,
                v58);
              v60 = v191;
            }
            v193 = v190;
            *(_BYTE *)(v190 + v60) = 10;
            v61 = v59 + 1;
            v191 = v59 + 1;
            if ( HIBYTE(v185) )
            {
              v75 = v59 + 1;
LABEL_199:
              v194 = v75;
            }
            else
            {
              while ( 2 )
              {
                v62 = v179;
                v37 = (__int64)&v167;
                v38 = (__int64)&v179;
                _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
                  &v167,
                  &v179);
                if ( (_DWORD)v167 == 1 )
                {
                  v63 = v177;
                  v177 = v169;
                  v38 = v169 - v63;
                  v64 = v63 + v62;
                  if ( v169 == v63 )
                    goto LABEL_106;
LABEL_100:
                  if ( *(_BYTE *)(v64 + v38 - 1) == 10 )
                  {
                    if ( v38 == 1 )
                    {
                      v38 = 0;
                    }
                    else if ( *(_BYTE *)(v64 + v38 - 2) == 13 )
                    {
                      v38 -= 2;
                    }
                    else
                    {
                      --v38;
                    }
                  }
LABEL_106:
                  v37 = v64;
                  v65 = v38;
                  v66 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v64, v38);
                  switch ( v68 )
                  {
                    case 30LL:
                      v69 = _mm_or_si128(
                              _mm_xor_si128(
                                _mm_loadu_si128((const __m128i *)((char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98 + 14)),
                                _mm_loadu_si128((const __m128i *)(v66 + 14))),
                              _mm_xor_si128(
                                _mm_loadu_si128((const __m128i *)v66),
                                _mm_loadu_si128((const __m128i *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98)));
                      if ( !_mm_testz_si128(v69, v69) )
                        goto LABEL_118;
                      goto LABEL_131;
                    case 36LL:
                      v37 = v66;
                      v38 = (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_99;
                      if ( !memcmp((const void *)v66, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_99, 0x24u) )
                        goto LABEL_131;
                      goto LABEL_118;
                    case 39LL:
                      v37 = v66;
                      v38 = (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_100;
                      if ( memcmp((const void *)v66, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_100, 0x27u) )
                        goto LABEL_118;
LABEL_131:
                      v35 = 0;
                      v194 = v61;
                      v34 = 0;
                      goto LABEL_56;
                    case 55LL:
                      v37 = v66;
                      v38 = (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_101;
                      if ( !memcmp((const void *)v66, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_101, 0x37u) )
                        goto LABEL_130;
                      goto LABEL_118;
                    case 60LL:
                      v37 = v66;
                      v38 = (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_102;
                      if ( memcmp((const void *)v66, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_102, 0x3Cu) )
                        goto LABEL_118;
                      goto LABEL_130;
                    case 64LL:
                      v37 = v66;
                      v38 = (__int64)"# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)";
                      if ( memcmp(
                             (const void *)v66,
                             "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)",
                             0x40u) )
                      {
                        goto LABEL_118;
                      }
LABEL_130:
                      v35 = 1;
                      v194 = v61;
                      goto LABEL_55;
                    default:
LABEL_118:
                      v70 = v65;
                      if ( v65 > v189 - v61 )
                      {
                        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                          &v189,
                          v61,
                          v65,
                          1,
                          1,
                          v67);
                        v193 = v190;
                        v61 = v191;
                        v70 = v65;
                      }
                      v37 = v61 + v193;
                      v38 = v64;
                      v71 = v70;
                      memcpy((void *)(v61 + v193), (const void *)v38, v70);
                      v73 = v61 + v71;
                      v191 = v73;
                      v74 = v73;
                      if ( v189 == v73 )
                      {
                        v37 = (__int64)&v189;
                        v38 = v73;
                        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                          &v189,
                          v73,
                          1,
                          1,
                          1,
                          v72);
                        v74 = v191;
                      }
                      v193 = v190;
                      *(_BYTE *)(v190 + v74) = 10;
                      v75 = v73 + 1;
                      v191 = v75;
                      v61 = v75;
                      if ( HIBYTE(v185) )
                        goto LABEL_199;
                      continue;
                  }
                }
                break;
              }
              if ( !HIBYTE(v185) )
              {
                HIBYTE(v185) = 1;
                v38 = v178 - v177;
                if ( ((unsigned __int8)v185 | (v178 != v177)) == 1 )
                {
                  v64 = v179 + v177;
                  if ( v38 )
                    goto LABEL_100;
                  goto LABEL_106;
                }
              }
              v194 = v61;
LABEL_194:
              if ( !v194 )
              {
                v195 = 1;
                v194 = 0;
                v110 = v193;
                goto LABEL_201;
              }
            }
            v110 = v193;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v37, v38);
            v195 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v194, 1);
            if ( !v195 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v194);
LABEL_201:
            v193 = 0;
            v186 = v194;
            v187 = v195;
            v188 = 0;
            v177 = 0;
            v178 = v194;
            v179 = v110;
            v180 = v194;
            v181 = 0;
            v182 = v194;
            v183 = 0xA0000000ALL;
            v184 = 1;
            v185 = 0;
            v173 = _mm_unpacklo_epi64((__m128i)0x207865646F432023uLL, (__m128i)0xB7E8BD83E8BA99E6LL);
            v112 = 0;
            while ( 2 )
            {
              v113 = v179;
              _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
                &v167,
                &v179);
              if ( (_DWORD)v167 == 1 )
              {
                v114 = v177;
                v177 = v169;
                v115 = v169 - v114;
                v116 = (char *)(v114 + v113);
                if ( v169 == v114 )
                  goto LABEL_216;
LABEL_210:
                if ( v116[v115 - 1] == 10 )
                {
                  if ( v115 == 1 )
                  {
                    v115 = 0;
                  }
                  else if ( v116[v115 - 2] == 13 )
                  {
                    v115 -= 2LL;
                  }
                  else
                  {
                    --v115;
                  }
                }
LABEL_216:
                v117 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v116, v115);
                v119 = v117;
                v120 = v118;
                if ( v118 && *(_BYTE *)v117 == 91 && *(_BYTE *)(v117 + v118 - 1) == 93 )
                {
                  if ( v118 == 1 || *(char *)(v117 + 1) < -64 )
                    core::str::slice_error_fail::h480e51fbd8b15eba(v117, v118, 1, v118 - 1, &off_10196B328);
                  if ( v118 - 2 >= 0x10 )
                  {
                    if ( *(_QWORD *)(v117 + 1) ^ 0x72705F6C65646F6DLL | *(_QWORD *)(v117 + 9) ^ 0x2E7372656469766FLL )
                      goto LABEL_232;
                    v125 = 16;
                    v126 = v118 - 18;
                    v127 = v120 - 18 <= 0xC;
                    if ( v120 != 30 )
                      goto LABEL_237;
LABEL_234:
                    if ( *(_QWORD *)(v119 + v125 + 1) ^ 0x725F696D616D6961LL
                       | *(unsigned int *)(v119 + v125 + 9) ^ 0x79616C65LL )
                    {
                      goto LABEL_244;
                    }
                    goto LABEL_242;
                  }
                  if ( v118 - 2 >= 9 )
                  {
LABEL_232:
                    if ( *(_QWORD *)(v117 + 1) ^ 0x73656C69666F7270LL | *(unsigned __int8 *)(v117 + 9) ^ 0x2ELL )
                      goto LABEL_244;
                    v125 = 9;
                    v126 = v118 - 11;
                    v127 = v120 - 11 <= 0xC;
                    if ( v120 == 23 )
                      goto LABEL_234;
LABEL_237:
                    if ( v127
                      || *(_QWORD *)(v119 + v125 + 1) ^ 0x725F696D616D6961LL
                       | *(_QWORD *)(v119 + v125 + 6) ^ 0x5F79616C65725F69LL )
                    {
                      if ( v126 == 6 )
                      {
                        if ( !(*(_DWORD *)(v119 + v125 + 1) ^ 0x616D6961
                             | *(unsigned __int16 *)(v119 + v125 + 5) ^ 0x3169) )
                          goto LABEL_242;
                      }
                      else if ( v126 == 19 )
                      {
                        v128 = _mm_or_si128(
                                 _mm_xor_si128(
                                   _mm_loadu_si128((const __m128i *)(v119 + v125 + 1)),
                                   (__m128i)xmmword_1015FBE90),
                                 _mm_xor_si128(
                                   _mm_loadu_si128((const __m128i *)(v119 + v125 + 4)),
                                   (__m128i)xmmword_1015FBE80));
                        if ( _mm_testz_si128(v128, v128) )
                          goto LABEL_242;
                      }
LABEL_244:
                      v20 = (*(_DWORD *)v119 ^ 0x4C432023 | *(unsigned __int16 *)(v119 + 4) ^ 0x3A49) == 0;
                      v192 = v119;
                      if ( !v20
                        || (v129 = v120,
                            v130 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                     &anon_3ce6d1417794db0febde534c64082f90_184,
                                     0xCu,
                                     (void *)v119),
                            v119 = v192,
                            v120 = v129,
                            !v130) )
                      {
                        if ( v120 >= 0x28 )
                        {
                          v132 = v120;
                          v133 = memcmp(&unk_101673C44, (const void *)v119, 0x28u);
                          v120 = v132;
                          v119 = v192;
                          if ( !v133 )
                            goto LABEL_262;
                        }
                        else if ( v120 < 0x15 )
                        {
                          if ( v120 == 20 )
                          {
                            v131 = _mm_or_si128(
                                     _mm_xor_si128(_mm_loadu_si128((const __m128i *)v119), v173),
                                     _mm_xor_si128(
                                       _mm_cvtsi32_si128(0xB194E7AF),
                                       _mm_cvtsi32_si128(*(_DWORD *)(v119 + 16))));
                            if ( _mm_testz_si128(v131, v131) )
                              goto LABEL_262;
LABEL_261:
                            v142 = _mm_or_si128(
                                     _mm_xor_si128(
                                       _mm_cvtsi32_si128(*(_DWORD *)(v119 + 16)),
                                       (__m128i)xmmword_101673220),
                                     _mm_xor_si128(_mm_loadu_si128((const __m128i *)v119), (__m128i)xmmword_101673230));
                            if ( _mm_testz_si128(v142, v142) )
                              goto LABEL_262;
                          }
LABEL_226:
                          v121 = v193;
                          if ( v115 > v186 - v193 )
                          {
                            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                              &v186,
                              v193,
                              v115,
                              1,
                              1,
                              v119);
                            v195 = v187;
                            v121 = v188;
                          }
                          memcpy((void *)(v121 + v195), v116, v115);
                          v123 = v121 + v115;
                          v188 = v123;
                          v124 = v123;
                          if ( v186 == v123 )
                          {
                            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                              &v186,
                              v123,
                              1,
                              1,
                              1,
                              v122);
                            v124 = v188;
                          }
                          v195 = v187;
                          *(_BYTE *)(v187 + v124) = 10;
                          v188 = v123 + 1;
                          v112 = 0;
                          v193 = v123 + 1;
LABEL_203:
                          if ( HIBYTE(v185) )
                            goto LABEL_263;
                          continue;
                        }
                        v134 = _mm_or_si128(
                                 _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v119 + 5)), (__m128i)xmmword_101673200),
                                 _mm_xor_si128(_mm_loadu_si128((const __m128i *)v119), (__m128i)xmmword_101673210));
                        if ( !_mm_testz_si128(v134, v134) )
                        {
                          if ( v120 < 0x25
                            || (v135 = v120,
                                v136 = memcmp(&unk_101673C71, (const void *)v119, 0x25u),
                                v120 = v135,
                                v119 = v192,
                                v136) )
                          {
                            v137 = _mm_or_si128(
                                     _mm_xor_si128(_mm_loadu_si128((const __m128i *)v119), v173),
                                     _mm_xor_si128(
                                       _mm_cvtsi32_si128(0xB194E7AF),
                                       _mm_cvtsi32_si128(*(_DWORD *)(v119 + 16))));
                            if ( !_mm_testz_si128(v137, v137) )
                            {
                              if ( v120 >= 0x23 )
                              {
                                v138 = v119;
                                v139 = memcmp(&unk_101673C9A, (const void *)v119, 0x23u);
                                v119 = v138;
                                if ( !v139 )
                                  goto LABEL_262;
                              }
                              else if ( v120 != 34 )
                              {
                                goto LABEL_261;
                              }
                              v140 = v119;
                              v141 = memcmp(&unk_101673CBD, (const void *)v119, 0x22u);
                              v119 = v140;
                              if ( !v141 )
                                goto LABEL_262;
                              goto LABEL_261;
                            }
                          }
                        }
                      }
LABEL_262:
                      v112 = 0;
                      goto LABEL_203;
                    }
LABEL_242:
                    v112 = 1;
                    goto LABEL_203;
                  }
                }
                else if ( v112 )
                {
                  v112 = v118 != 0;
                  goto LABEL_203;
                }
                if ( v118 >= 6 )
                  goto LABEL_244;
                goto LABEL_226;
              }
              break;
            }
            if ( !HIBYTE(v185) )
            {
              HIBYTE(v185) = 1;
              v115 = v178 - v177;
              if ( ((unsigned __int8)v185 | (v178 != v177)) == 1 )
              {
                v116 = (char *)(v179 + v177);
                if ( v115 )
                  goto LABEL_210;
                goto LABEL_216;
              }
            }
LABEL_263:
            v143 = v193;
            while ( 2 )
            {
              if ( v143 >= 2 )
              {
                if ( *(_WORD *)(v195 + v143 - 2) != 2570 )
                  goto LABEL_280;
                v144 = -1;
                if ( *(char *)(v195 + v143 - 1) < 0 )
                {
                  v145 = *(_BYTE *)(v195 + v143 - 2);
                  if ( v145 > -65 )
                  {
                    v148 = v145 & 0x1F;
                    if ( v148 >= 2 )
                      goto LABEL_275;
                  }
                  else
                  {
                    v146 = *(_BYTE *)(v195 + v143 - 3);
                    if ( v146 > -65 )
                      v147 = v146 & 0xF;
                    else
                      v147 = ((*(_BYTE *)(v195 + v143 - 4) & 7) << 6) | v146 & 0x3F;
                    v148 = (v147 << 6) | v145 & 0x3F;
                    if ( v148 >= 2 )
                    {
LABEL_275:
                      v144 = -2;
                      if ( v148 >= 0x20 )
                        v144 = (v148 < 0x400) | 0xFFFFFFFFFFFFFFFCLL;
                    }
                  }
                }
                v143 += v144;
                continue;
              }
              break;
            }
            v188 = v143;
            if ( v143 && *(_BYTE *)v195 == 10 )
            {
              v143 = 0;
LABEL_280:
              v188 = v143;
            }
            a1[2] = v188;
            _RAX = v186;
            a1[1] = v187;
            *a1 = _RAX;
            if ( v189 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190, v189, 1);
            if ( v174 )
            {
              if ( v28 )
              {
                v150 = v176;
                _R14D = ~_mm_movemask_epi8(_mm_load_si128(v176));
                do
                {
                  if ( !(_WORD)_R14D )
                  {
                    do
                    {
                      v152 = _mm_movemask_epi8(_mm_load_si128(v32));
                      v150 -= 24;
                      ++v32;
                    }
                    while ( v152 == 0xFFFF );
                    _R14D = ~v152;
                  }
                  __asm { tzcnt   eax, r14d }
                  v153 = -3 * _RAX;
                  v154 = *((_QWORD *)&v150[-1] + v153 - 1);
                  if ( v154 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v150[-1].i64[v153], v154, 1);
                  --v28;
                  _RAX = _R14D & (unsigned int)(_R14D - 1);
                  _R14D &= _R14D - 1;
                }
                while ( v28 );
              }
              v155 = (24 * v174 + 39) & 0xFFFFFFFFFFFFFFF0LL;
              if ( v155 + v174 != -17 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v176 - v155, v155 + v174 + 17, 16);
            }
            return a1;
        }
      default:
LABEL_26:
        if ( ((v18 | (unsigned __int8)v9) & 1) == 0 )
          goto LABEL_34;
        goto LABEL_32;
    }
  }
}
