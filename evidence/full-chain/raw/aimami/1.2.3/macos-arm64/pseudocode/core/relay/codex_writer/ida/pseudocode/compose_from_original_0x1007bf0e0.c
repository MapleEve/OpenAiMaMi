// __ZN13codexmate_lib4core5relay12codex_writer21compose_from_original @ 0x1007bf0e0 | 基线 same-set
// [FULL decompile]

__int64 __fastcall codexmate_lib::core::relay::codex_writer::compose_from_original::h499b644f0fb511a8(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r13
  size_t v6; // r15
  __int64 v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rsi
  size_t v12; // r12
  __int64 v13; // rbx
  char *v14; // rcx
  size_t v15; // rax
  char *v16; // rax
  const void *v17; // r15
  size_t v18; // r12
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r15
  char v23; // r15
  unsigned __int8 v24; // al
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // r14
  __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  size_t v32; // r14
  __int64 v33; // r12
  size_t v34; // rax
  size_t v35; // r13
  size_t v36; // rdx
  __int64 v37; // r12
  size_t v38; // r15
  size_t v39; // r13
  size_t v40; // r15
  size_t v41; // rax
  size_t v42; // r13
  char *v43; // r15
  size_t v44; // rax
  __int64 v45; // r12
  __int64 v46; // r14
  __int64 v47; // rax
  size_t v48; // rcx
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // r13
  char v52; // r12
  size_t v53; // r15
  size_t v54; // r12
  __int64 v55; // r9
  size_t v56; // r13
  size_t v57; // rax
  __int64 v58; // rsi
  __int64 v60; // rcx
  __int64 v61; // r15
  const __m128i *v62; // r12
  const __m128i *v64; // r13
  int v65; // r14d
  __int64 v66; // rax
  __int64 v67; // rsi
  unsigned __int64 v68; // rax
  char v70; // cl
  size_t v71; // r15
  __int64 *v72; // rdi
  size_t *v73; // rsi
  size_t v74; // rax
  size_t v75; // r14
  __int64 *v76; // r15
  _BYTE *v77; // rax
  size_t *v78; // rdx
  __int64 v79; // r9
  char v80; // al
  __int64 v81; // r9
  size_t *v82; // r14
  unsigned __int64 v83; // rax
  __int64 v84; // r14
  __int64 v85; // rax
  __int64 v86; // rcx
  size_t v87; // rdx
  size_t v88; // r13
  size_t v89; // rax
  size_t v90; // r15
  char *v91; // r13
  _BYTE *v92; // rax
  unsigned __int64 v93; // rdx
  __int64 v94; // r9
  _BYTE *v95; // r12
  unsigned __int64 v96; // r14
  char v97; // al
  __int64 v98; // rax
  unsigned int v99; // ecx
  int v100; // eax
  int v101; // esi
  int v102; // edx
  size_t v103; // r14
  __int64 v104; // r9
  size_t *v105; // r15
  __int64 v106; // r14
  size_t v107; // rax
  _BYTE *v108; // rcx
  unsigned int v109; // eax
  char v110; // al
  unsigned int v111; // ecx
  int v112; // eax
  int v113; // esi
  int v114; // edx
  unsigned int v115; // eax
  char v116; // al
  unsigned int v117; // ecx
  int v118; // eax
  int v119; // esi
  int v120; // edx
  unsigned int v121; // eax
  char v122; // al
  __m128i v123; // xmm1
  unsigned int v124; // ecx
  int v125; // eax
  int v126; // esi
  int v127; // edx
  unsigned int v128; // eax
  char v129; // al
  __m128i v130; // xmm1
  unsigned int v131; // ecx
  int v132; // eax
  int v133; // esi
  int v134; // edx
  unsigned int v135; // eax
  char v136; // al
  __int64 v137; // r14
  __int64 v138; // r9
  size_t *v139; // r15
  char *v140; // rax
  unsigned __int64 v141; // r15
  __int64 i; // r13
  __int64 v143; // rsi
  unsigned __int64 v144; // rax
  char v145; // cl
  char v146; // dl
  int v147; // edx
  unsigned int v148; // ecx
  size_t *v149; // r14
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // rcx
  __int64 v153; // r8
  const __m128i *v154; // [rsp+8h] [rbp-158h] BYREF
  __int64 v155; // [rsp+10h] [rbp-150h]
  __int64 v156; // [rsp+20h] [rbp-140h]
  __int64 v157; // [rsp+38h] [rbp-128h]
  __int64 v158; // [rsp+40h] [rbp-120h] BYREF
  __int64 v159; // [rsp+48h] [rbp-118h]
  __int64 v160; // [rsp+50h] [rbp-110h]
  __int64 v161; // [rsp+58h] [rbp-108h]
  __int64 v162; // [rsp+60h] [rbp-100h]
  __int64 v163; // [rsp+68h] [rbp-F8h]
  __int64 v164; // [rsp+70h] [rbp-F0h] BYREF
  void *v165; // [rsp+78h] [rbp-E8h]
  size_t v166; // [rsp+80h] [rbp-E0h]
  __int64 v167; // [rsp+88h] [rbp-D8h]
  __int64 v168; // [rsp+90h] [rbp-D0h]
  size_t __n; // [rsp+98h] [rbp-C8h]
  size_t v170; // [rsp+A0h] [rbp-C0h]
  void *v171; // [rsp+A8h] [rbp-B8h]
  void *__src; // [rsp+B0h] [rbp-B0h]
  void *v173; // [rsp+B8h] [rbp-A8h]
  size_t v174; // [rsp+C0h] [rbp-A0h] BYREF
  __int64 v175; // [rsp+C8h] [rbp-98h]
  size_t v176; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v177; // [rsp+D8h] [rbp-88h]
  __int64 v178; // [rsp+E0h] [rbp-80h]
  __int64 v179; // [rsp+E8h] [rbp-78h]
  __int64 v180; // [rsp+F0h] [rbp-70h]
  char v181; // [rsp+F8h] [rbp-68h]
  __int16 v182; // [rsp+100h] [rbp-60h]
  size_t *v183; // [rsp+108h] [rbp-58h] BYREF
  __int64 v184; // [rsp+110h] [rbp-50h]
  unsigned __int64 v185; // [rsp+118h] [rbp-48h]
  __int64 v186; // [rsp+120h] [rbp-40h]
  __int64 v187; // [rsp+128h] [rbp-38h]
  __int64 v188; // [rsp+130h] [rbp-30h]

  v4 = a4;
  v161 = a1;
  v6 = *(_QWORD *)a4;
  v7 = *(_QWORD *)(a4 + 8);
  v171 = a2;
  v170 = v6;
  v168 = v7;
  if ( !v7 )
  {
    __src = *(void **)(a4 + 16);
    __n = *(_QWORD *)(a4 + 24);
    v186 = 8;
    v10 = 0;
    v162 = 0;
LABEL_25:
    v23 = 0;
    goto LABEL_26;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
  v8 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
  if ( !v8 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 32);
  *v8 = v6;
  v174 = 4;
  v175 = (__int64)v8;
  v176 = 1;
  v163 = a3;
  if ( v7 == 1 )
  {
    v186 = (__int64)v8;
    v10 = 4;
    v11 = 1;
  }
  else
  {
    v12 = v6 + 232;
    v13 = 232 * v7 - 232;
    v11 = 1;
    do
    {
      if ( v11 == v174 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v174, v11, 1, 8, 8, v9);
        v8 = (_QWORD *)v175;
      }
      v8[v11] = v12;
      v12 += 232LL;
      v176 = ++v11;
      v13 -= 232;
    }
    while ( v13 );
    v10 = v174;
    v186 = v175;
    a3 = v163;
  }
  v14 = *(char **)(v4 + 16);
  v15 = *(_QWORD *)(v4 + 24);
  v162 = v11;
  __src = v14;
  if ( !v15 )
  {
    __n = 0;
    goto LABEL_25;
  }
  v167 = v4;
  __n = v15;
  v173 = &v14[24 * v15];
  v188 = 8 * v11;
  v16 = v14;
  while ( 2 )
  {
    v17 = *((const void **)v16 + 1);
    v18 = *((_QWORD *)v16 + 2);
    v187 = (__int64)(v16 + 24);
    v19 = 0;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v186 + v19);
      if ( *(_QWORD *)(v20 + 16) == v18 && !memcmp(*(const void **)(v20 + 8), v17, v18) )
        break;
      v19 += 8;
      if ( v188 == v19 )
        goto LABEL_14;
    }
    codexmate_lib::core::relay::models::RelayProvider::exposed_models::h9992f3acf525d658(&v174, v20);
    if ( v176 )
    {
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)(v175 + 24), *(_QWORD *)(v175 + 32));
      v22 = v21;
      core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..models..RelayModelEntry$GT$$GT$::h0c66d149bfaf8c94(&v174);
      if ( v22 )
      {
        v23 = 1;
        goto LABEL_23;
      }
    }
    else
    {
      core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..models..RelayModelEntry$GT$$GT$::h0c66d149bfaf8c94(&v174);
    }
LABEL_14:
    v16 = (char *)v187;
    if ( (void *)v187 != v173 )
      continue;
    break;
  }
  v23 = 0;
LABEL_23:
  v4 = v167;
  a3 = v163;
LABEL_26:
  v24 = *(_BYTE *)(v4 + 64);
  v25 = *(_QWORD *)(v4 + 48);
  v157 = *(_QWORD *)(v4 + 32);
  if ( (v24 ^ 1 | (v157 == 0) | (v25 == 0)) == 1 || !v162 )
    v23 = 0;
  codexmate_lib::core::relay::models::active_codex_relay_model_slugs::hb3cbe297656c04c0(
    &v154,
    v170,
    v168,
    (__int64)__src,
    __n);
  v168 = v25;
  codexmate_lib::core::relay::codex_writer::strip_all_managed_blocks::h80da2768569d91b4(&v158, v171, a3);
  v26 = v159;
  v27 = v160;
  if ( !v23 )
  {
    codexmate_lib::core::relay::codex_writer::strip_invalid_router_top_level_model::he0dd77d4066d2a83(
      &v164,
      v159,
      v160,
      0,
      &v154);
LABEL_34:
    v31 = 0x8000000000000000LL;
    v188 = 0x8000000000000000LL;
    goto LABEL_35;
  }
  if ( v160 < 0 )
  {
    v28 = v186;
    v29 = 0;
    goto LABEL_32;
  }
  v167 = v4;
  if ( v160 )
  {
    v28 = v186;
    v49 = v159;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v158, v159);
    v29 = 1;
    v50 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v27, 1);
    if ( !v50 )
    {
LABEL_32:
      v186 = v28;
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v29, v27);
    }
    v26 = v49;
  }
  else
  {
    v50 = 1;
  }
  v183 = (size_t *)v27;
  v173 = (void *)v50;
  v184 = v50;
  v185 = 0;
  v174 = 0;
  v175 = v27;
  v176 = v26;
  v177 = v27;
  v178 = 0;
  v179 = v27;
  v180 = 0xA0000000ALL;
  v181 = 1;
  v182 = 0;
  v51 = 0;
  v52 = 0;
  while ( 1 )
  {
    v71 = v176;
    v72 = &v164;
    v73 = &v176;
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
      &v164,
      &v176);
    if ( (_DWORD)v164 != 1 )
      break;
    v74 = v174;
    v174 = v166;
    v75 = v166 - v74;
    v76 = (__int64 *)(v74 + v71);
    if ( v166 == v74 )
      goto LABEL_117;
LABEL_111:
    if ( *((_BYTE *)v76 + v75 - 1) == 10 )
    {
      if ( v75 == 1 )
      {
        v75 = 0;
      }
      else if ( *((_BYTE *)v76 + v75 - 2) == 13 )
      {
        v75 -= 2LL;
      }
      else
      {
        --v75;
      }
    }
LABEL_117:
    v72 = v76;
    v73 = (size_t *)v75;
    v77 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v76, v75);
    if ( v78 )
    {
      if ( *v77 == 91 )
      {
        v73 = v78;
        if ( *((_BYTE *)v78 + (_QWORD)v77 - 1) == 93 )
        {
          if ( v78 == (size_t *)1 || (char)v77[1] <= -65 )
            core::str::slice_error_fail::h480e51fbd8b15eba(
              v77,
              v78,
              1,
              (char *)v78 - 1,
              &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97);
          v73 = (size_t *)((char *)v78 - 2);
          v72 = (__int64 *)(v77 + 1);
          v80 = codexmate_lib::core::relay::config_takeover::is_foreign_model_section::h9031f03a25b35ea5(
                  v77 + 1,
                  (char *)v78 - 2);
          v70 = 1;
          if ( v80 )
            goto LABEL_104;
LABEL_125:
          if ( v75 > (unsigned __int64)v183 - v51 )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v183,
              v51,
              v75,
              1,
              1,
              v79);
            v173 = (void *)v184;
            v51 = v185;
          }
          v72 = (__int64 *)((char *)v173 + v51);
          v73 = (size_t *)v76;
          memcpy((char *)v173 + v51, v76, v75);
          v82 = (size_t *)(v51 + v75);
          v185 = (unsigned __int64)v82;
          v83 = (unsigned __int64)v82;
          if ( v183 == v82 )
          {
            v72 = (__int64 *)&v183;
            v73 = v82;
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v183,
              v82,
              1,
              1,
              1,
              v81);
            v83 = v185;
          }
          v173 = (void *)v184;
          *(_BYTE *)(v184 + v83) = 10;
          v185 = (unsigned __int64)v82 + 1;
          v70 = 0;
          v51 = (__int64)v82 + 1;
          goto LABEL_104;
        }
      }
    }
    v70 = 1;
    if ( (v52 & 1) == 0 )
      goto LABEL_125;
LABEL_104:
    v52 = v70;
    if ( HIBYTE(v182) )
      goto LABEL_129;
  }
  if ( !HIBYTE(v182) )
  {
    HIBYTE(v182) = 1;
    v75 = v175 - v174;
    if ( ((unsigned __int8)v182 | (v175 != v174)) == 1 )
    {
      v76 = (__int64 *)(v176 + v174);
      if ( !v75 )
        goto LABEL_117;
      goto LABEL_111;
    }
  }
LABEL_129:
  v171 = v183;
  if ( v51 < 0 )
  {
    v84 = 0;
    goto LABEL_131;
  }
  if ( v51 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v72, v73);
    v84 = 1;
    v85 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v51, 1);
    if ( !v85 )
LABEL_131:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v84, v51);
    v86 = v85;
  }
  else
  {
    v86 = 1;
  }
  v183 = (size_t *)v51;
  v184 = v86;
  v185 = 0;
  v174 = 0;
  v175 = v51;
  v176 = (size_t)v173;
  v177 = v51;
  v178 = 0;
  v179 = v51;
  v180 = 0xA0000000ALL;
  v181 = 1;
  v182 = 0;
  v87 = 0;
  v170 = 0;
  __src = (void *)v86;
  v187 = v86;
  __n = 0;
  while ( 2 )
  {
    v188 = v87;
    v88 = v176;
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
      &v164,
      &v176);
    if ( (_DWORD)v164 == 1 )
    {
      v89 = v174;
      v174 = v166;
      v90 = v166 - v89;
      v91 = (char *)(v89 + v88);
      if ( v166 == v89 )
        goto LABEL_149;
      goto LABEL_143;
    }
    if ( !HIBYTE(v182) )
    {
      HIBYTE(v182) = 1;
      v90 = v175 - v174;
      if ( ((unsigned __int8)v182 | (v175 != v174)) == 1 )
      {
        v91 = (char *)(v176 + v174);
        if ( !v90 )
          goto LABEL_149;
LABEL_143:
        if ( v91[v90 - 1] == 10 )
        {
          if ( v90 == 1 )
          {
            v90 = 0;
          }
          else if ( v91[v90 - 2] == 13 )
          {
            v90 -= 2LL;
          }
          else
          {
            --v90;
          }
        }
LABEL_149:
        v92 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v91, v90);
        if ( !v93 )
        {
          if ( (v170 & 1) != 0 )
            goto LABEL_172;
          goto LABEL_292;
        }
        v95 = v92;
        v96 = v93;
        v97 = *v92;
        if ( v97 == 91 )
        {
          if ( v95[v93 - 1] != 93 )
          {
            if ( (v170 & 1) != 0 )
              goto LABEL_172;
LABEL_158:
            if ( v93 <= 0xF )
            {
              v98 = 0;
              while ( v95[v98] != 61 )
              {
                if ( v93 == ++v98 )
                  goto LABEL_292;
              }
              if ( v93 >= 7 )
                goto LABEL_166;
              goto LABEL_292;
            }
            if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(61, v95, v93) != 1 )
              goto LABEL_292;
LABEL_166:
            if ( !(*(_DWORD *)v95 ^ 0x666F7270 | *(_DWORD *)(v95 + 3) ^ 0x656C6966) && v96 != 7 )
            {
              v99 = (unsigned __int8)v95[7];
              if ( (v99 & 0x80u) != 0 )
              {
                v100 = v99 & 0x1F;
                v101 = v95[8] & 0x3F;
                if ( (unsigned __int8)v99 <= 0xDFu )
                {
                  v99 = v101 | (v100 << 6);
                }
                else
                {
                  v102 = (v101 << 6) | v95[9] & 0x3F;
                  if ( (unsigned __int8)v99 < 0xF0u )
                    v99 = (v100 << 12) | v102;
                  else
                    v99 = ((v99 & 7) << 18) | (v102 << 6) | v95[10] & 0x3F;
                }
              }
              v107 = 0;
              if ( v99 == 32 || v99 == 61 )
                goto LABEL_299;
              if ( v99 - 9 < 5 )
                goto LABEL_298;
              if ( v99 >= 0x80 )
              {
                v109 = v99 >> 8;
                if ( v99 >> 8 > 0x1F )
                {
                  if ( v109 == 32 )
                  {
                    v110 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v99] >> 1;
                    goto LABEL_198;
                  }
                  if ( v109 == 48 )
                  {
                    v110 = v99 == 12288;
                    goto LABEL_198;
                  }
                }
                else
                {
                  if ( !v109 )
                  {
                    v110 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v99];
                    goto LABEL_198;
                  }
                  if ( v109 == 22 )
                  {
                    v110 = v99 == 5760;
LABEL_198:
                    if ( (v110 & 1) != 0 )
                      goto LABEL_298;
                  }
                }
              }
            }
            if ( v96 >= 0xF )
            {
              if ( !(*(_QWORD *)v95 ^ 0x625F69616E65706FLL | *(_QWORD *)(v95 + 7) ^ 0x6C72755F65736162LL) && v96 != 15 )
              {
                v111 = (unsigned __int8)v95[15];
                if ( (v111 & 0x80u) != 0 )
                {
                  v112 = v111 & 0x1F;
                  v113 = v95[16] & 0x3F;
                  if ( (unsigned __int8)v111 < 0xE0u )
                  {
                    v111 = v113 | (v112 << 6);
                  }
                  else
                  {
                    v114 = (v113 << 6) | v95[17] & 0x3F;
                    if ( (unsigned __int8)v111 < 0xF0u )
                      v111 = (v112 << 12) | v114;
                    else
                      v111 = ((v111 & 7) << 18) | (v114 << 6) | v95[18] & 0x3F;
                  }
                }
                v107 = 0;
                if ( v111 == 32 || v111 == 61 )
                  goto LABEL_299;
                if ( v111 - 9 < 5 )
                  goto LABEL_298;
                if ( v111 >= 0x80 )
                {
                  v115 = v111 >> 8;
                  if ( v111 >> 8 > 0x1F )
                  {
                    if ( v115 == 32 )
                    {
                      v116 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v111] >> 1;
                    }
                    else
                    {
                      if ( v115 != 48 )
                        goto LABEL_224;
                      v116 = v111 == 12288;
                    }
                  }
                  else if ( v115 )
                  {
                    if ( v115 != 22 )
                      goto LABEL_224;
                    v116 = v111 == 5760;
                  }
                  else
                  {
                    v116 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v111];
                  }
                  if ( (v116 & 1) != 0 )
                    goto LABEL_298;
                }
              }
            }
            else if ( v96 != 14 )
            {
              goto LABEL_292;
            }
LABEL_224:
            if ( !(*(_QWORD *)v95 ^ 0x72705F6C65646F6DLL | *(_QWORD *)(v95 + 6) ^ 0x72656469766F7270LL) && v96 != 14 )
            {
              v117 = (unsigned __int8)v95[14];
              if ( (v117 & 0x80u) != 0 )
              {
                v118 = v117 & 0x1F;
                v119 = v95[15] & 0x3F;
                if ( (unsigned __int8)v117 < 0xE0u )
                {
                  v117 = v119 | (v118 << 6);
                }
                else
                {
                  v120 = (v119 << 6) | v95[16] & 0x3F;
                  if ( (unsigned __int8)v117 < 0xF0u )
                    v117 = (v118 << 12) | v120;
                  else
                    v117 = ((v117 & 7) << 18) | (v120 << 6) | v95[17] & 0x3F;
                }
              }
              v107 = 0;
              if ( v117 == 32 || v117 == 61 )
                goto LABEL_299;
              if ( v117 - 9 < 5 )
                goto LABEL_298;
              if ( v117 >= 0x80 )
              {
                v121 = v117 >> 8;
                if ( v117 >> 8 > 0x1F )
                {
                  if ( v121 == 32 )
                  {
                    v122 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v117] >> 1;
                    goto LABEL_245;
                  }
                  if ( v121 == 48 )
                  {
                    v122 = v117 == 12288;
                    goto LABEL_245;
                  }
                }
                else
                {
                  if ( !v121 )
                  {
                    v122 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v117];
                    goto LABEL_245;
                  }
                  if ( v121 == 22 )
                  {
                    v122 = v117 == 5760;
LABEL_245:
                    if ( (v122 & 1) != 0 )
                      goto LABEL_298;
                  }
                }
              }
            }
            if ( v96 < 0x12 )
              goto LABEL_292;
            v123 = _mm_or_si128(
                     _mm_xor_si128(_mm_cvtsi32_si128(*((unsigned __int16 *)v95 + 8)), (__m128i)xmmword_1015FBD70),
                     _mm_xor_si128(_mm_loadu_si128((const __m128i *)v95), (__m128i)xmmword_1015FBD60));
            if ( _mm_testz_si128(v123, v123) && v96 != 18 )
            {
              v124 = (unsigned __int8)v95[18];
              if ( (v124 & 0x80u) != 0 )
              {
                v125 = v124 & 0x1F;
                v126 = v95[19] & 0x3F;
                if ( (unsigned __int8)v124 < 0xE0u )
                {
                  v124 = v126 | (v125 << 6);
                }
                else
                {
                  v127 = (v126 << 6) | v95[20] & 0x3F;
                  if ( (unsigned __int8)v124 < 0xF0u )
                    v124 = (v125 << 12) | v127;
                  else
                    v124 = ((v124 & 7) << 18) | (v127 << 6) | v95[21] & 0x3F;
                }
              }
              v107 = 0;
              if ( v124 == 32 || v124 == 61 )
                goto LABEL_299;
              if ( v124 - 9 < 5 )
                goto LABEL_298;
              if ( v124 >= 0x80 )
              {
                v128 = v124 >> 8;
                if ( v124 >> 8 > 0x1F )
                {
                  if ( v128 == 32 )
                  {
                    v129 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v124] >> 1;
                    goto LABEL_268;
                  }
                  if ( v128 == 48 )
                  {
                    v129 = v124 == 12288;
                    goto LABEL_268;
                  }
                }
                else
                {
                  if ( !v128 )
                  {
                    v129 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v124];
                    goto LABEL_268;
                  }
                  if ( v128 == 22 )
                  {
                    v129 = v124 == 5760;
LABEL_268:
                    if ( (v129 & 1) != 0 )
                      goto LABEL_298;
                  }
                }
              }
            }
            if ( v96 < 0x18 )
              goto LABEL_292;
            v130 = _mm_or_si128(
                     _mm_xor_si128(_mm_loadl_epi64((const __m128i *)v95 + 1), (__m128i)xmmword_1016731E0),
                     _mm_xor_si128(_mm_loadu_si128((const __m128i *)v95), (__m128i)xmmword_1016731F0));
            if ( !_mm_testz_si128(v130, v130) || v96 == 24 )
              goto LABEL_292;
            v131 = (unsigned __int8)v95[24];
            if ( (v131 & 0x80u) != 0 )
            {
              v132 = v131 & 0x1F;
              v133 = v95[25] & 0x3F;
              if ( (unsigned __int8)v131 < 0xE0u )
              {
                v131 = v133 | (v132 << 6);
              }
              else
              {
                v134 = (v133 << 6) | v95[26] & 0x3F;
                if ( (unsigned __int8)v131 < 0xF0u )
                  v131 = (v132 << 12) | v134;
                else
                  v131 = ((v131 & 7) << 18) | (v134 << 6) | v95[27] & 0x3F;
              }
            }
            v107 = 0;
            if ( v131 == 32 || v131 == 61 )
              goto LABEL_299;
            if ( v131 - 9 < 5 )
              goto LABEL_298;
            if ( v131 < 0x80 )
              goto LABEL_292;
            v135 = v131 >> 8;
            if ( v131 >> 8 > 0x1F )
            {
              if ( v135 == 32 )
              {
                v136 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v131] >> 1;
              }
              else
              {
                if ( v135 != 48 )
                  goto LABEL_292;
                v136 = v131 == 12288;
              }
            }
            else if ( v135 )
            {
              if ( v135 != 22 )
                goto LABEL_292;
              v136 = v131 == 5760;
            }
            else
            {
              v136 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v131];
            }
            if ( (v136 & 1) == 0 )
            {
LABEL_292:
              if ( v90 > (unsigned __int64)v183 - v188 )
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                  &v183,
                  v188,
                  v90,
                  1,
                  1,
                  v94);
                v187 = v184;
                v188 = v185;
              }
              v137 = v188;
              memcpy((void *)(v188 + v187), v91, v90);
              v139 = (size_t *)(v137 + v90);
              v185 = (unsigned __int64)v139;
              v140 = (char *)v139;
              if ( v183 == v139 )
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                  &v183,
                  v139,
                  1,
                  1,
                  1,
                  v138);
                v140 = (char *)v185;
              }
              v187 = v184;
              v140[v184] = 10;
              v141 = (unsigned __int64)v139 + 1;
              v185 = v141;
              v87 = v141;
              if ( HIBYTE(v182) )
                goto LABEL_304;
              continue;
            }
LABEL_298:
            v107 = 0;
LABEL_299:
            v108 = (_BYTE *)v187;
            v87 = v188;
LABEL_300:
            v187 = (__int64)v108;
            __src = v108;
            __n = v87;
            v170 = v107;
            v141 = v87;
            if ( HIBYTE(v182) )
              goto LABEL_304;
            continue;
          }
          if ( v93 == 1 || (char)v95[1] <= -65 )
            core::str::slice_error_fail::h480e51fbd8b15eba(
              v95,
              v93,
              1,
              v93 - 1,
              &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97);
          if ( v90 > (unsigned __int64)v183 - v188 )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v183,
              v188,
              v90,
              1,
              1,
              v94);
            v187 = v184;
            v188 = v185;
          }
          v106 = v188;
          memcpy((void *)(v188 + v187), v91, v90);
          v105 = (size_t *)(v106 + v90);
          v185 = (unsigned __int64)v105;
          if ( v183 != v105 )
          {
LABEL_182:
            v107 = (size_t)v105;
LABEL_183:
            v108 = (_BYTE *)v184;
            *(_BYTE *)(v184 + v107) = 10;
            v185 = (unsigned __int64)v105 + 1;
            LOBYTE(v107) = 1;
            v87 = (size_t)v105 + 1;
            goto LABEL_300;
          }
        }
        else
        {
          if ( (v170 & 1) == 0 )
          {
            if ( v97 != 35 )
              goto LABEL_158;
            goto LABEL_292;
          }
LABEL_172:
          v103 = __n;
          if ( v90 > (unsigned __int64)v183 - __n )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v183,
              __n,
              v90,
              1,
              1,
              v94);
            __src = (void *)v184;
            v103 = v185;
          }
          memcpy((char *)__src + v103, v91, v90);
          v105 = (size_t *)(v103 + v90);
          v185 = (unsigned __int64)v105;
          if ( v183 != v105 )
            goto LABEL_182;
        }
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v183,
          v105,
          1,
          1,
          1,
          v104);
        v107 = v185;
        goto LABEL_183;
      }
    }
    break;
  }
  v141 = v188;
LABEL_304:
  for ( i = v167; v141 >= 2; v141 += v144 )
  {
    v143 = v187;
    if ( *(_WORD *)(v187 + v141 - 2) != 2570 )
      goto LABEL_320;
    v144 = -1;
    if ( *(char *)(v187 + v141 - 1) < 0 )
    {
      v145 = *(_BYTE *)(v187 + v141 - 2);
      if ( v145 > -65 )
      {
        v148 = v145 & 0x1F;
        if ( v148 >= 2 )
          goto LABEL_317;
      }
      else
      {
        v146 = *(_BYTE *)(v187 + v141 - 3);
        if ( v146 > -65 )
          v147 = v146 & 0xF;
        else
          v147 = ((*(_BYTE *)(v187 + v141 - 4) & 7) << 6) | v146 & 0x3F;
        v148 = (v147 << 6) | v145 & 0x3F;
        if ( v148 >= 2 )
        {
LABEL_317:
          v144 = -2;
          if ( v148 >= 0x20 )
            v144 = (v148 < 0x400) | 0xFFFFFFFFFFFFFFFCLL;
        }
      }
    }
  }
  v185 = v141;
  if ( v141 )
  {
    v143 = v187;
    v141 = *(_BYTE *)v187 != 10;
  }
  else
  {
    v141 = 0;
    v143 = v187;
  }
LABEL_320:
  v149 = v183;
  codexmate_lib::core::relay::codex_writer::strip_invalid_router_top_level_model::he0dd77d4066d2a83(
    &v164,
    v143,
    v141,
    1,
    &v154);
  if ( v171 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v173, v171, 1);
  if ( v149 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v187, v149, 1);
  if ( !v157 )
    goto LABEL_34;
  codexmate_lib::core::relay::codex_writer::render_bottom_block::hfe725bfceb75b183(
    &v174,
    v157,
    *(_QWORD *)(i + 40),
    v150,
    v151,
    v30);
  v188 = v174;
  v171 = (void *)v175;
  v170 = v176;
  if ( v168 )
  {
    codexmate_lib::core::relay::codex_writer::render_router_top_block::h23146f81a9f60f95(
      &v174,
      v168,
      *(_QWORD *)(i + 56),
      v152,
      v153,
      v30);
    v31 = v174;
    __src = (void *)v175;
    __n = v176;
  }
  else
  {
    v31 = 0x8000000000000000LL;
  }
LABEL_35:
  v173 = v165;
  v32 = v166;
  v174 = 0;
  v175 = 1;
  v176 = 0;
  v187 = v31;
  if ( v31 != 0x8000000000000000LL )
  {
    v36 = __n;
    if ( __n )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v174, 0, __n, 1, 1, v30);
      v38 = v176;
      v168 = v174;
      v37 = v175;
      v36 = __n;
    }
    else
    {
      v37 = 1;
      v168 = 0;
      v38 = 0;
    }
    v39 = v36;
    memcpy((void *)(v37 + v38), __src, v36);
    v40 = v39 + v38;
    v176 = v40;
    v41 = v40;
    if ( v168 == v40 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v174, v168, 1, 1, 1, v30);
      v37 = v175;
      v41 = v176;
    }
    *(_BYTE *)(v37 + v41) = 10;
    v42 = v40 + 1;
    v176 = v40 + 1;
    if ( v32 )
    {
      v34 = v174;
      if ( v174 == v42 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v174,
          v40 + 1,
          1,
          1,
          1,
          v30);
        v34 = v174;
        v42 = v176;
      }
      v33 = v175;
      *(_BYTE *)(v175 + v42) = 10;
      v176 = v40 + 2;
      v35 = v40 + 2;
LABEL_46:
      if ( v32 > v34 - v35 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v174,
          v35,
          v32,
          1,
          1,
          v30);
        v33 = v175;
        v35 = v176;
      }
      v43 = (char *)v173;
      memcpy((void *)(v33 + v35), v173, v32);
      v42 = v32 + v35;
      v176 = v42;
      if ( v43[v32 - 1] != 10 )
      {
        v44 = v42;
        if ( v174 == v42 )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v174,
            v42,
            1,
            1,
            1,
            v30);
          v33 = v175;
          v44 = v176;
        }
        *(_BYTE *)(v33 + v44) = 10;
        v176 = ++v42;
      }
    }
    v45 = v188;
    if ( v188 == 0x8000000000000000LL )
    {
      v46 = v175;
      goto LABEL_78;
    }
    if ( v42 )
    {
      v47 = v175;
      if ( v42 == 1 || *(_WORD *)(v175 + v42 - 2) != 2570 )
      {
        if ( *(_BYTE *)(v175 + v42 - 1) == 10 )
        {
          v48 = v42;
          if ( v174 == v42 )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v174,
              v42,
              1,
              1,
              1,
              v30);
            v47 = v175;
            v48 = v176;
          }
          *(_BYTE *)(v47 + v48) = 10;
          ++v42;
        }
        else
        {
          if ( v174 - v42 <= 1 )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v174,
              v42,
              2,
              1,
              1,
              v30);
            v47 = v175;
            v42 = v176;
          }
          *(_WORD *)(v47 + v42) = 2570;
          v42 += 2LL;
        }
        v176 = v42;
      }
    }
    else
    {
      v42 = 0;
    }
    goto LABEL_73;
  }
  if ( v166 )
  {
    v33 = 1;
    v34 = 0;
    v35 = 0;
    goto LABEL_46;
  }
  v46 = 1;
  v42 = 0;
  v45 = v188;
  if ( v188 != 0x8000000000000000LL )
  {
LABEL_73:
    v53 = v174;
    v188 = v45;
    if ( v170 > v174 - v42 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        &v174,
        v42,
        v170,
        1,
        1,
        v30);
      v53 = v174;
      v42 = v176;
    }
    v46 = v175;
    v54 = v170;
    memcpy((void *)(v175 + v42), v171, v170);
    v56 = v54 + v42;
    v176 = v56;
    v57 = v56;
    v45 = v188;
    if ( v53 == v56 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v174, v53, 1, 1, 1, v55);
      v46 = v175;
      v57 = v176;
    }
    *(_BYTE *)(v46 + v57) = 10;
    v42 = v56 + 1;
    v176 = v42;
  }
LABEL_78:
  codexmate_lib::core::relay::config_takeover::tidy_blank_lines::ha2f63e114ed499f6(v161, v46, v42);
  if ( v174 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v174, 1);
  if ( !(2 * v187) )
  {
    if ( !(2 * v45) )
      goto LABEL_82;
LABEL_101:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v171, v45, 1);
    v58 = v164;
    if ( !v164 )
      goto LABEL_84;
LABEL_83:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v165, v58, 1);
    goto LABEL_84;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v187, 1);
  if ( 2 * v45 )
    goto LABEL_101;
LABEL_82:
  v58 = v164;
  if ( v164 )
    goto LABEL_83;
LABEL_84:
  if ( v158 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v159, v158, 1);
  HIDWORD(_RAX) = HIDWORD(v155);
  v60 = v10;
  if ( v155 )
  {
    v188 = v155;
    v61 = v156;
    if ( v156 )
    {
      v62 = v154;
      _R14D = ~_mm_movemask_epi8(_mm_load_si128(v154));
      v64 = v154 + 1;
      do
      {
        if ( !(_WORD)_R14D )
        {
          do
          {
            v65 = _mm_movemask_epi8(_mm_load_si128(v64));
            v62 -= 24;
            ++v64;
          }
          while ( v65 == 0xFFFF );
          _R14D = ~v65;
        }
        __asm { tzcnt   eax, r14d }
        v66 = -3 * _RAX;
        v67 = *((_QWORD *)&v62[-1] + v66 - 1);
        if ( v67 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62[-1].i64[v66], v67, 1);
          v60 = v10;
        }
        --v61;
        _RAX = _R14D & (unsigned int)(_R14D - 1);
        _R14D &= _R14D - 1;
      }
      while ( v61 );
    }
    v68 = (24 * v188 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v68 + v188 != -17 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v154 - v68, v68 + v188 + 17, 16);
      v60 = v10;
    }
  }
  if ( v60 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v186, 8 * v60, 8);
  return v161;
}
