// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::codex_diagnostic::fix_issue::h164e280104b0cd43; addr: 0x10077b370; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:42Z
_QWORD *__fastcall codexmate_lib::core::relay::codex_diagnostic::fix_issue::h164e280104b0cd43(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9)
{
  char v13; // al
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  void *v16; // rsi
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __int64 v27; // r13
  __int64 v28; // r15
  void (__fastcall *v29)(_QWORD *, __int64, double); // r14
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r14
  __int64 v39; // r15
  __m128i v40; // xmm1
  __m128i v41; // xmm1
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  void (__fastcall *v52)(_QWORD *, __int64); // r13
  __int64 v53; // rax
  __int64 v54; // r15
  __int64 v55; // rsi
  __int64 v56; // r14
  __int64 v57; // rdx
  __int64 v58; // r12
  __int64 v59; // r13
  void (__fastcall *v60)(_QWORD *, __int64, double); // r14
  __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r14
  __int64 v65; // r12
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // r12
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdi
  __int64 v74; // r13
  __int64 v75; // rsi
  __int64 v76; // r15
  __int64 v77; // r13
  __int64 v78; // r12
  __int64 v79; // rsi
  __int64 v80; // r15
  __int64 v81; // r12
  __int64 v82; // r13
  __int64 v83; // rsi
  _BYTE v84[72]; // [rsp+0h] [rbp-130h] BYREF
  _QWORD v85[2]; // [rsp+48h] [rbp-E8h] BYREF
  __int64 v86; // [rsp+58h] [rbp-D8h]
  __int64 v87; // [rsp+60h] [rbp-D0h] BYREF
  __int64 v88; // [rsp+68h] [rbp-C8h]
  __int64 v89; // [rsp+70h] [rbp-C0h]
  __int64 v90; // [rsp+78h] [rbp-B8h]
  __int64 v91; // [rsp+80h] [rbp-B0h]
  __int64 v92; // [rsp+88h] [rbp-A8h]
  _QWORD v93[13]; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v94; // [rsp+F8h] [rbp-38h]
  _QWORD *v95; // [rsp+100h] [rbp-30h]

  v94 = a3; /*0x10077b38d*/
  v95 = a2; /*0x10077b391*/
  v85[0] = a4; /*0x10077b39d*/
  v85[1] = a5; /*0x10077b3a4*/
  v13 = codexmate_lib::core::relay::codex_diagnostic::fix_requires_quiet_window::h735a1da6e6aefbfe(a4, a5); /*0x10077b3b1*/
  if ( a8 || (v13 & 1) == 0 ) /*0x10077b3bd*/
  {
    switch ( a5 ) /*0x10077b40f*/
    {
      case 12LL: /*0x10077b40f*/
        if ( *(_QWORD *)a4 ^ 0x735F6769666E6F63LL | *(unsigned int *)(a4 + 8) ^ 0x656C6174LL ) /*0x10077b42a*/
          goto LABEL_47; /*0x10077b42d*/
        codexmate_lib::core::relay::codex_diagnostic::fix_config_stale::h346af815d2bb5d28( /*0x10077b445*/
          a1,
          v95,
          v94,
          a6,
          *(_QWORD *)(a7 + 40));
        break; /*0x10077b44a*/
      case 14LL: /*0x10077b40f*/
        if ( *(_QWORD *)a4 ^ 0x746E695F68747561LL | *(_QWORD *)(a4 + 6) ^ 0x797469726765746ELL ) /*0x10077b888*/
        {
          if ( *(_QWORD *)a4 ^ 0x6C61756469736572LL | *(_QWORD *)(a4 + 6) ^ 0x65686361635F6C61LL ) /*0x10077b8ad*/
            goto LABEL_47; /*0x10077b8b0*/
          codexmate_lib::core::relay::codex_diagnostic::fix_residual_cache::hdf3296f9bfdabaf5(a1, v95[73], v95[74]); /*0x10077b8cb*/
        }
        else
        {
          codexmate_lib::core::relay::codex_diagnostic::fix_auth_integrity::h96b219a022741f54( /*0x10077bbc6*/
            a1,
            v95,
            *(unsigned int *)(v94 + 364));
        }
        break; /*0x10077b8d0*/
      case 17LL: /*0x10077b40f*/
        v40 = _mm_or_si128( /*0x10077b805*/
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(a4 + 16)), (__m128i)xmmword_1018C3800),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C37F0));
        if ( _mm_testz_si128(v40, v40) ) /*0x10077b80e*/
        {
          codexmate_lib::core::relay::codex_diagnostic::fix_residual_manifest::h7cbe8c7f90f659ba(a1, v95[73], v95[74]); /*0x10077bbab*/
        }
        else
        {
          v41 = _mm_or_si128( /*0x10077b833*/
                  _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(a4 + 16)), (__m128i)xmmword_1018201E0),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C3810));
          if ( !_mm_testz_si128(v41, v41) ) /*0x10077b83c*/
            goto LABEL_47; /*0x10077b83c*/
          codexmate_lib::core::relay::codex_diagnostic::fix_catalog_integrity::h3c0990a5201499ae( /*0x10077b862*/
            a1,
            v95[73],
            v95[74],
            v94,
            a6,
            *(_QWORD *)(a7 + 40));
        }
        break; /*0x10077b867*/
      case 18LL: /*0x10077b40f*/
        v24 = _mm_or_si128( /*0x10077b640*/
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a4 + 16)), (__m128i)xmmword_1018C37A0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C3790));
        if ( _mm_testz_si128(v24, v24) ) /*0x10077b649*/
        {
          v52 = *(void (__fastcall **)(_QWORD *, __int64))(a7 + 40); /*0x10077baf6*/
          codexmate_lib::core::relay::codex_diagnostic::fix_config_toml_syntax_text::h1a80018c2489f023( /*0x10077bb05*/
            v93,
            (__int64)v95);
          v53 = v93[0]; /*0x10077bb0a*/
          v54 = v93[1]; /*0x10077bb11*/
          v55 = v93[2]; /*0x10077bb18*/
          v56 = v93[3]; /*0x10077bb1f*/
          if ( v93[0] == 11 ) /*0x10077bb2a*/
          {
            v94 = v93[2]; /*0x10077bb30*/
            v52(v93, a6); /*0x10077bb3e*/
            if ( LODWORD(v93[0]) == 11 ) /*0x10077bb48*/
            {
              std::fs::read_to_string::inner::hcce2334f4117b5b3(v93, v95[7], v95[8]); /*0x10077bb61*/
              v58 = v93[0]; /*0x10077bb66*/
              if ( __OFSUB__(-v93[0], 1) ) /*0x10077bb70*/
              {
                if ( (v93[1] & 3) == 1 ) /*0x10077bb88*/
                {
                  v86 = v93[1] - 1LL; /*0x10077c066*/
                  v95 = *(_QWORD **)(v93[1] - 1LL); /*0x10077c071*/
                  v74 = *(_QWORD *)(v93[1] + 7LL); /*0x10077c079*/
                  if ( *(_QWORD *)v74 ) /*0x10077c07c*/
                    (*(void (__fastcall **)(_QWORD *))v74)(v95); /*0x10077c088*/
                  v75 = *(_QWORD *)(v74 + 8); /*0x10077c08a*/
                  if ( v75 ) /*0x10077c091*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v75, *(_QWORD *)(v74 + 16)); /*0x10077c09b*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, 24, 8); /*0x10077c0b1*/
                  v59 = 0; /*0x10077c0b6*/
                }
                else
                {
                  v59 = 0; /*0x10077bb8e*/
                }
              }
              else
              {
                v59 = v93[1]; /*0x10077be93*/
                v57 = v93[2]; /*0x10077be9a*/
              }
              codexmate_lib::core::relay::codex_diagnostic::check_config_toml_syntax::h57d5b99d9feb344a(v93, v59, v57); /*0x10077beab*/
              v87 = v54; /*0x10077beb0*/
              v88 = v94; /*0x10077bebb*/
              v89 = v56; /*0x10077bec2*/
              codexmate_lib::core::relay::codex_diagnostic::checked_fix_result::hb281db8023401419( /*0x10077beea*/
                v84,
                &anon_4114c41c52614d982439c1a03d06b8ac_498,
                18,
                v93,
                &v87);
              qmemcpy(a1 + 1, v84, 0x48u); /*0x10077beff*/
              *a1 = 11; /*0x10077bf02*/
              if ( 2 * v58 ) /*0x10077bf09*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v58, 1); /*0x10077bf25*/
            }
            else
            {
              qmemcpy(a1, v93, 0x60u); /*0x10077be60*/
              if ( v54 ) /*0x10077be66*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v54, 1); /*0x10077be78*/
            }
          }
          else
          {
            a1[11] = v93[11]; /*0x10077bdcf*/
            a1[10] = v93[10]; /*0x10077bdd7*/
            a1[9] = v93[9]; /*0x10077bddf*/
            a1[8] = v93[8]; /*0x10077bde7*/
            a1[7] = v93[7]; /*0x10077bdef*/
            a1[6] = v93[6]; /*0x10077bdf7*/
            v72 = v93[4]; /*0x10077bdfb*/
            a1[5] = v93[5]; /*0x10077be03*/
            a1[4] = v72; /*0x10077be07*/
            a1[1] = v54; /*0x10077be0b*/
            a1[2] = v55; /*0x10077be0f*/
            a1[3] = v56; /*0x10077be13*/
            *a1 = v53; /*0x10077be17*/
          }
        }
        else
        {
          v25 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C37B0); /*0x10077b65e*/
          v26 = _mm_or_si128( /*0x10077b66e*/
                  _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a4 + 16)), (__m128i)xmmword_1018C37C0),
                  v25);
          if ( !_mm_testz_si128(v26, v26) ) /*0x10077b677*/
            goto LABEL_47; /*0x10077b677*/
          v27 = *(_QWORD *)(v94 + 8); /*0x10077b681*/
          v28 = *(_QWORD *)(v94 + 16); /*0x10077b685*/
          v29 = *(void (__fastcall **)(_QWORD *, __int64, double))(a7 + 40); /*0x10077b689*/
          codexmate_lib::core::relay::codex_diagnostic::fix_config_third_party_text::hb3965a930e7943ba( /*0x10077b69e*/
            v93,
            v95,
            v27,
            v28);
          v30 = v93[0]; /*0x10077b6a3*/
          v31 = v93[1]; /*0x10077b6aa*/
          v32 = v93[2]; /*0x10077b6b1*/
          if ( v93[0] != 11 ) /*0x10077b6bc*/
            goto LABEL_66; /*0x10077b6bc*/
          if ( v93[1] ) /*0x10077b6c5*/
            *(double *)v25.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93[2], v93[1], 1); /*0x10077b6cc*/
          v29(v93, a6, *(double *)v25.i64); /*0x10077b6db*/
          if ( LODWORD(v93[0]) != 11 ) /*0x10077b6e5*/
            goto LABEL_69; /*0x10077b6e5*/
          v35 = std::thread::local::LocalKey$LT$T$GT$::with::h5de23883585d1a7a( /*0x10077b6f9*/
                  &anon_4114c41c52614d982439c1a03d06b8ac_14,
                  a6,
                  v33,
                  v34);
          v93[0] = anon_4114c41c52614d982439c1a03d06b8ac_16; /*0x10077b705*/
          memset(&v93[1], 0, 24); /*0x10077b713*/
          v93[4] = v35; /*0x10077b736*/
          v93[5] = v36; /*0x10077b73a*/
          _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::hc39ef675a7a89aeb( /*0x10077b74b*/
            v93,
            v27,
            v27 + (v28 << 8));
          v92 = v93[5]; /*0x10077b754*/
          v91 = v93[4]; /*0x10077b75f*/
          v90 = v93[3]; /*0x10077b76d*/
          v89 = v93[2]; /*0x10077b77b*/
          v88 = v93[1]; /*0x10077b790*/
          v87 = v93[0]; /*0x10077b797*/
          std::fs::read_to_string::inner::hcce2334f4117b5b3(v93, v95[7], v95[8]); /*0x10077b7b1*/
          v38 = v93[0]; /*0x10077b7b6*/
          if ( __OFSUB__(-v93[0], 1) ) /*0x10077b7c0*/
          {
            if ( (v93[1] & 3) == 1 ) /*0x10077b7d8*/
            {
              v80 = v93[1] - 1LL; /*0x10077c109*/
              v81 = *(_QWORD *)(v93[1] - 1LL); /*0x10077c10d*/
              v82 = *(_QWORD *)(v93[1] + 7LL); /*0x10077c111*/
              if ( *(_QWORD *)v82 ) /*0x10077c115*/
                (*(void (__fastcall **)(__int64))v82)(v81); /*0x10077c121*/
              v83 = *(_QWORD *)(v82 + 8); /*0x10077c123*/
              if ( v83 ) /*0x10077c12a*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v83, *(_QWORD *)(v82 + 16)); /*0x10077c133*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, 24, 8); /*0x10077c145*/
              v39 = 0; /*0x10077c14a*/
            }
            else
            {
              v39 = 0; /*0x10077b7de*/
            }
          }
          else
          {
            v39 = v93[1]; /*0x10077bfc6*/
            v37 = v93[2]; /*0x10077bfcd*/
          }
          codexmate_lib::core::relay::codex_diagnostic::check_config_third_party::h4c4100d4803a23ae(v93, v39, v37, &v87); /*0x10077bfe5*/
          codexmate_lib::core::relay::codex_diagnostic::checked_fix_result::h48939bdd8992b1cd( /*0x10077c011*/
            v84,
            &anon_4114c41c52614d982439c1a03d06b8ac_496,
            18,
            v93,
            &unk_1018C548E,
            39);
          qmemcpy(a1 + 1, v84, 0x48u); /*0x10077c026*/
          *a1 = 11; /*0x10077c029*/
          _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9e8243b909921cfb(&v87); /*0x10077c037*/
          if ( 2 * v38 ) /*0x10077c03c*/
          {
            v73 = v39; /*0x10077c052*/
            goto LABEL_83; /*0x10077c052*/
          }
        }
        break; /*0x10077c052*/
      case 19LL: /*0x10077b40f*/
        v19 = _mm_or_si128( /*0x10077b505*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C36A0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 3)), (__m128i)xmmword_1018C3690));
        if ( _mm_testz_si128(v19, v19) ) /*0x10077b50e*/
          goto LABEL_42; /*0x10077b50e*/
        v20 = _mm_or_si128( /*0x10077b530*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C3860),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 3)), (__m128i)xmmword_1018C3850));
        if ( !_mm_testz_si128(v20, v20) ) /*0x10077b539*/
          goto LABEL_47; /*0x10077b539*/
        codexmate_lib::core::relay::codex_diagnostic::fix_state_db_relocation::h0a79acc146e9db45((__int64)a1, v95); /*0x10077b546*/
        break; /*0x10077b54b*/
      case 20LL: /*0x10077b40f*/
        v22 = _mm_or_si128( /*0x10077b5a8*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C37E0),
                _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(a4 + 16)), (__m128i)xmmword_1018C37D0));
        if ( !_mm_testz_si128(v22, v22) ) /*0x10077b5b1*/
          goto LABEL_47; /*0x10077b5b1*/
        codexmate_lib::core::relay::codex_diagnostic::fix_router_http_contract::h118f3999c1035852( /*0x10077b5d1*/
          a1,
          v95[7],
          v95[8],
          v94,
          a6,
          *(_QWORD *)(a7 + 40));
        break; /*0x10077b5d6*/
      case 21LL: /*0x10077b40f*/
        v42 = _mm_or_si128( /*0x10077b8f1*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C36E0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 5)), (__m128i)xmmword_1018C36D0));
        if ( !_mm_testz_si128(v42, v42) ) /*0x10077b8fa*/
          goto LABEL_47; /*0x10077b8fa*/
        codexmate_lib::core::relay::codex_diagnostic::fix_catalog_path_validity::hc4e4e2c407bf3a9f( /*0x10077b91f*/
          a1,
          v95,
          *(unsigned int *)(v94 + 364),
          *(unsigned __int8 *)(v94 + 382),
          a6,
          *(_QWORD *)(a7 + 40));
        break; /*0x10077b924*/
      case 22LL: /*0x10077b40f*/
        v43 = _mm_or_si128( /*0x10077b945*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C3700),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 6)), (__m128i)xmmword_1018C36F0));
        if ( _mm_testz_si128(v43, v43) ) /*0x10077b94e*/
        {
          codexmate_lib::core::relay::codex_diagnostic::fix_takeover_backup_orphan::h782ebc8c8ad44718( /*0x10077bbe1*/
            a1,
            v95,
            *(unsigned int *)(v94 + 364),
            a9);
        }
        else
        {
          v44 = _mm_or_si128( /*0x10077b970*/
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C3720),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 6)), (__m128i)xmmword_1018C3710));
          if ( !_mm_testz_si128(v44, v44) ) /*0x10077b979*/
            goto LABEL_47; /*0x10077b979*/
          codexmate_lib::core::relay::codex_diagnostic::fix_config_global_validity::he26c58744ab65a00(a1, v95, v14, a9); /*0x10077b986*/
        }
        break; /*0x10077b98b*/
      case 23LL: /*0x10077b40f*/
        v47 = _mm_or_si128( /*0x10077ba17*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C3740),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_1018C3730));
        if ( _mm_testz_si128(v47, v47) ) /*0x10077ba20*/
        {
          v60 = *(void (__fastcall **)(_QWORD *, __int64, double))(a7 + 40); /*0x10077bbfc*/
          codexmate_lib::core::relay::codex_diagnostic::fix_config_profile_conflict_text::h8f81ee69d6ed2e64( /*0x10077bc0b*/
            v93,
            v95,
            v14,
            a9);
          v30 = v93[0]; /*0x10077bc10*/
          v31 = v93[1]; /*0x10077bc17*/
          v32 = v93[2]; /*0x10077bc1e*/
          if ( v93[0] == 11 ) /*0x10077bc29*/
          {
            if ( v93[1] ) /*0x10077bc32*/
              *(double *)v47.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93[2], v93[1], 1); /*0x10077bc39*/
            v61 = a6; /*0x10077bc45*/
            v60(v93, a6, *(double *)v47.i64); /*0x10077bc48*/
            if ( LODWORD(v93[0]) == 11 ) /*0x10077bc52*/
            {
              v64 = *(_QWORD *)(v94 + 8); /*0x10077bc5c*/
              v65 = v64 + (*(_QWORD *)(v94 + 16) << 8); /*0x10077bc68*/
              v66 = std::thread::local::LocalKey$LT$T$GT$::with::h5de23883585d1a7a( /*0x10077bc72*/
                      &anon_4114c41c52614d982439c1a03d06b8ac_14,
                      v61,
                      v62,
                      v63);
              v93[0] = anon_4114c41c52614d982439c1a03d06b8ac_16; /*0x10077bc7e*/
              memset(&v93[1], 0, 24); /*0x10077bc8c*/
              v93[4] = v66; /*0x10077bcaf*/
              v93[5] = v67; /*0x10077bcb3*/
              _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::hc39ef675a7a89aeb( /*0x10077bcc4*/
                v93,
                v64,
                v65);
              v92 = v93[5]; /*0x10077bccd*/
              v91 = v93[4]; /*0x10077bcd8*/
              v90 = v93[3]; /*0x10077bce6*/
              v89 = v93[2]; /*0x10077bcf4*/
              v88 = v93[1]; /*0x10077bd09*/
              v87 = v93[0]; /*0x10077bd10*/
              std::fs::read_to_string::inner::hcce2334f4117b5b3(v93, v95[7], v95[8]); /*0x10077bd2a*/
              v38 = v93[0]; /*0x10077bd2f*/
              if ( __OFSUB__(-v93[0], 1) ) /*0x10077bd39*/
              {
                if ( (v93[1] & 3) == 1 ) /*0x10077bd51*/
                {
                  v76 = v93[1] - 1LL; /*0x10077c0be*/
                  v77 = *(_QWORD *)(v93[1] - 1LL); /*0x10077c0c2*/
                  v78 = *(_QWORD *)(v93[1] + 7LL); /*0x10077c0c6*/
                  if ( *(_QWORD *)v78 ) /*0x10077c0ca*/
                    (*(void (__fastcall **)(__int64))v78)(v77); /*0x10077c0d6*/
                  v79 = *(_QWORD *)(v78 + 8); /*0x10077c0d8*/
                  if ( v79 ) /*0x10077c0e0*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v79, *(_QWORD *)(v78 + 16)); /*0x10077c0ea*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, 24, 8); /*0x10077c0fc*/
                  v69 = 0; /*0x10077c101*/
                }
                else
                {
                  v69 = 0; /*0x10077bd57*/
                }
              }
              else
              {
                v69 = v93[1]; /*0x10077bf2f*/
                v68 = v93[2]; /*0x10077bf36*/
              }
              codexmate_lib::core::relay::codex_diagnostic::check_config_profile_conflict::h4068565e343a7e0e( /*0x10077bf51*/
                v93,
                v69,
                v68,
                *(unsigned int *)(v94 + 364));
              codexmate_lib::core::relay::codex_diagnostic::checked_fix_result::h48939bdd8992b1cd( /*0x10077bf7d*/
                v84,
                &anon_4114c41c52614d982439c1a03d06b8ac_629,
                23,
                v93,
                &unk_1018C6494,
                48);
              qmemcpy(a1 + 1, v84, 0x48u); /*0x10077bf92*/
              *a1 = 11; /*0x10077bf95*/
              _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9e8243b909921cfb(&v87); /*0x10077bfa3*/
              if ( 2 * v38 ) /*0x10077bfa8*/
              {
                v73 = v69; /*0x10077bfbe*/
LABEL_83:
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v38, 1); /*0x10077c055*/
              }
            }
            else
            {
LABEL_69:
              qmemcpy(a1, v93, 0x60u); /*0x10077be2e*/
            }
          }
          else
          {
LABEL_66:
            v70 = v93[3]; /*0x10077bd5f*/
            v71 = v93[4]; /*0x10077bd66*/
            a1[11] = v93[11]; /*0x10077bd6e*/
            a1[10] = v93[10]; /*0x10077bd76*/
            a1[9] = v93[9]; /*0x10077bd7e*/
            a1[8] = v93[8]; /*0x10077bd86*/
            a1[7] = v93[7]; /*0x10077bd8e*/
            a1[6] = v93[6]; /*0x10077bd96*/
            a1[5] = v93[5]; /*0x10077bd9e*/
            a1[4] = v71; /*0x10077bda2*/
            a1[1] = v31; /*0x10077bda6*/
            a1[2] = v32; /*0x10077bdaa*/
            a1[3] = v70; /*0x10077bdae*/
            *a1 = v30; /*0x10077bdb2*/
          }
        }
        else
        {
          v48 = _mm_or_si128( /*0x10077ba42*/
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_101831690),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_101831680));
          if ( _mm_testz_si128(v48, v48) ) /*0x10077ba4b*/
          {
            codexmate_lib::core::relay::codex_diagnostic::fix_thread_missing_rollouts::h2ad54cc83aa4628d( /*0x10077bdc1*/
              a1,
              v95,
              v14,
              a9);
          }
          else
          {
            v49 = _mm_or_si128( /*0x10077ba6d*/
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C3760),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_1018C3750));
            if ( _mm_testz_si128(v49, v49) ) /*0x10077ba76*/
            {
              codexmate_lib::core::relay::codex_diagnostic::fix_legacy_migrated_threads::hf4e5a8bcc20e2749( /*0x10077be47*/
                a1,
                v95,
                *(unsigned int *)(v94 + 364),
                a9);
            }
            else
            {
              v50 = _mm_or_si128( /*0x10077ba98*/
                      _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C3780),
                      _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_1018C3770));
              if ( !_mm_testz_si128(v50, v50) ) /*0x10077baa1*/
                goto LABEL_47; /*0x10077baa1*/
              codexmate_lib::core::relay::codex_diagnostic::fix_project_state_integrity::hf4fef8cb8e0388c5( /*0x10077be89*/
                a1,
                v95,
                v14,
                a9);
            }
          }
        }
        break; /*0x10077be8e*/
      case 24LL: /*0x10077b40f*/
        v45 = _mm_or_si128( /*0x10077b9ac*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C3610),
                _mm_xor_si128(_mm_loadl_epi64((const __m128i *)(a4 + 16)), (__m128i)xmmword_1018C3600));
        if ( _mm_testz_si128(v45, v45) ) /*0x10077b9b5*/
        {
          codexmate_lib::core::relay::codex_diagnostic::fix_thread_response_item_ids::h02094edf2bdf5700( /*0x10077bbf2*/
            a1,
            (__int64)v95);
        }
        else
        {
          v46 = _mm_or_si128( /*0x10077b9d7*/
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C3620),
                  _mm_xor_si128(_mm_loadl_epi64((const __m128i *)(a4 + 16)), (__m128i)xmmword_101831660));
          if ( !_mm_testz_si128(v46, v46) ) /*0x10077b9e0*/
            goto LABEL_47; /*0x10077b9e0*/
LABEL_42:
          codexmate_lib::core::relay::codex_diagnostic::fix_orphan_thread_providers::h208c495524460aec(a1, v95, v94, a9); /*0x10077b9e6*/
        }
        break; /*0x10077b9f6*/
      case 26LL: /*0x10077b40f*/
        v18 = _mm_or_si128( /*0x10077b4b8*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C36C0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 10)), (__m128i)xmmword_1018C36B0));
        if ( !_mm_testz_si128(v18, v18) ) /*0x10077b4c1*/
          goto LABEL_47; /*0x10077b4c1*/
        codexmate_lib::core::relay::codex_diagnostic::fix_router_unlock_auth_residue::h8238b2623b63d97c( /*0x10077b4df*/
          a1,
          v95,
          *(unsigned int *)(v94 + 364),
          *(unsigned __int8 *)(v94 + 382));
        break; /*0x10077b4e4*/
      case 27LL: /*0x10077b40f*/
        v23 = _mm_or_si128( /*0x10077b5f7*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C3680),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 11)), (__m128i)xmmword_1018C3670));
        if ( !_mm_testz_si128(v23, v23) ) /*0x10077b600*/
          goto LABEL_47; /*0x10077b600*/
        codexmate_lib::core::relay::codex_diagnostic::fix_thread_provider_consistency::h47b715d60f5ee8f7( /*0x10077b617*/
          a1,
          v95,
          *(unsigned int *)(v94 + 364),
          a9);
        break; /*0x10077b61c*/
      case 28LL: /*0x10077b40f*/
        v21 = _mm_or_si128( /*0x10077b56c*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C3640),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 12)), (__m128i)xmmword_1018C3630));
        if ( !_mm_testz_si128(v21, v21) ) /*0x10077b575*/
          goto LABEL_47; /*0x10077b575*/
        codexmate_lib::core::relay::codex_diagnostic::fix_thread_poisoned_instructions::h0b947664c262bce9( /*0x10077b582*/
          (__int64)a1,
          (__int64)v95);
        break; /*0x10077b587*/
      case 32LL: /*0x10077b40f*/
        v17 = _mm_or_si128( /*0x10077b46b*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1018C3660),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 16)), (__m128i)xmmword_1018C3650));
        if ( !_mm_testz_si128(v17, v17) ) /*0x10077b474*/
          goto LABEL_47; /*0x10077b474*/
        codexmate_lib::core::relay::codex_diagnostic::fix_thread_model_catalog_consistency::h744156f35557bddf( /*0x10077b492*/
          a1,
          v95,
          *(unsigned int *)(v94 + 364),
          a6,
          *(_QWORD *)(a7 + 40));
        break; /*0x10077b497*/
      default:
LABEL_47:
        v93[0] = v85; /*0x10077baa7*/
        v93[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e; /*0x10077babc*/
        v15 = a1 + 1; /*0x10077bac3*/
        v16 = &unk_101A36C4D; /*0x10077bac7*/
        goto LABEL_48; /*0x10077bac7*/
    }
  }
  else
  {
    v93[0] = v85; /*0x10077b3c6*/
    v93[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e; /*0x10077b3d4*/
    v15 = a1 + 1; /*0x10077b3db*/
    v16 = &unk_101A36C11; /*0x10077b3df*/
LABEL_48:
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v15, v16, v93); /*0x10077bace*/
    *a1 = 10; /*0x10077bada*/
  }
  return a1; /*0x10077bae4*/
}