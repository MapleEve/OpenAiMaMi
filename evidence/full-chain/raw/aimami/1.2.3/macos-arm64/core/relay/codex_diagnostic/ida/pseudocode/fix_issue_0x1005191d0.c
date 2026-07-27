// __ZN13codexmate_lib4core5relay16codex_diagnostic9fix_issue @ 0x1005191d0 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::relay::codex_diagnostic::fix_issue::h260abb9ade4e9823(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  char v12; // al
  __int64 *v13; // rdi
  void *v14; // rsi
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // r13
  __int64 v26; // r15
  void (__fastcall *v27)(_QWORD *, __int64, double); // r14
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // rdx
  __m128i v36; // xmm1
  __m128i v37; // xmm1
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  void (__fastcall *v47)(_QWORD *, __int64); // r13
  __int64 v48; // rax
  __int64 v49; // r15
  __int64 v50; // rsi
  __int64 v51; // r14
  __int64 v52; // r13
  __int64 v53; // r12
  __int64 v54; // rdx
  void (__fastcall *v55)(_QWORD *, __int64, double); // r14
  __int64 v56; // r14
  __int64 v57; // r12
  __int64 v58; // rax
  __int64 v59; // rdx
  void *v60; // r12
  _BYTE *v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdi
  __int64 v66[9]; // [rsp+8h] [rbp-128h] BYREF
  _QWORD v67[2]; // [rsp+50h] [rbp-E0h] BYREF
  __int64 v68; // [rsp+60h] [rbp-D0h] BYREF
  __int64 v69; // [rsp+68h] [rbp-C8h]
  __int64 v70; // [rsp+70h] [rbp-C0h]
  __int64 v71; // [rsp+78h] [rbp-B8h]
  __int64 v72; // [rsp+80h] [rbp-B0h]
  __int64 v73; // [rsp+88h] [rbp-A8h]
  _QWORD v74[13]; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+F8h] [rbp-38h]
  _QWORD *v76; // [rsp+100h] [rbp-30h]

  v75 = a3; /*0x1005191ed*/
  v76 = a2; /*0x1005191f1*/
  v67[0] = a4; /*0x1005191fd*/
  v67[1] = a5; /*0x100519204*/
  v12 = codexmate_lib::core::relay::codex_diagnostic::fix_requires_quiet_window::h450b49c01f430cd0(a4, a5); /*0x100519211*/
  if ( a8 || (v12 & 1) == 0 ) /*0x10051921d*/
  {
    switch ( a5 ) /*0x10051926b*/
    {
      case 12LL: /*0x10051926b*/
        if ( *(_QWORD *)a4 ^ 0x735F6769666E6F63LL | *(unsigned int *)(a4 + 8) ^ 0x656C6174LL ) /*0x100519286*/
          goto LABEL_40; /*0x100519289*/
        codexmate_lib::core::relay::codex_diagnostic::fix_config_stale::h961bc9ea7feb54e4( /*0x1005192a9*/
          a1,
          v76[7],
          v76[8],
          v75,
          a6,
          *(__int64 (__fastcall **)(_QWORD *, __int64))(a7 + 40));
        break; /*0x1005192ae*/
      case 14LL: /*0x10051926b*/
        if ( *(_QWORD *)a4 ^ 0x746E695F68747561LL | *(_QWORD *)(a4 + 6) ^ 0x797469726765746ELL ) /*0x1005196ec*/
        {
          if ( *(_QWORD *)a4 ^ 0x6C61756469736572LL | *(_QWORD *)(a4 + 6) ^ 0x65686361635F6C61LL ) /*0x100519711*/
            goto LABEL_40; /*0x100519714*/
          codexmate_lib::core::relay::codex_diagnostic::fix_residual_cache::h049b2d6edb00f0c8(a1, v76[73], v76[74]); /*0x10051972f*/
        }
        else
        {
          codexmate_lib::core::relay::codex_diagnostic::fix_auth_integrity::hd25994f874548912(a1, (__int64)v76); /*0x1005199fc*/
        }
        break; /*0x100519734*/
      case 17LL: /*0x10051926b*/
        v36 = _mm_or_si128( /*0x100519669*/
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(a4 + 16)), (__m128i)xmmword_1015FBD00),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBCF0));
        if ( _mm_testz_si128(v36, v36) ) /*0x100519672*/
        {
          codexmate_lib::core::relay::codex_diagnostic::fix_residual_manifest::h145dbcbebf3e60e6(a1, v76[73], v76[74]); /*0x1005199eb*/
        }
        else
        {
          v37 = _mm_or_si128( /*0x100519697*/
                  _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(a4 + 16)), (__m128i)xmmword_1015FBD20),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBD10));
          if ( !_mm_testz_si128(v37, v37) ) /*0x1005196a0*/
            goto LABEL_40; /*0x1005196a0*/
          codexmate_lib::core::relay::codex_diagnostic::fix_catalog_integrity::h32467177c4c7cf47( /*0x1005196c6*/
            a1,
            v76[73],
            v76[74],
            v75,
            a6,
            *(__int64 (__fastcall **)(_QWORD *, __int64))(a7 + 40));
        }
        break; /*0x1005196cb*/
      case 18LL: /*0x10051926b*/
        v22 = _mm_or_si128( /*0x10051949d*/
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a4 + 16)), (__m128i)xmmword_1015FBCA0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBC90));
        if ( _mm_testz_si128(v22, v22) ) /*0x1005194a6*/
        {
          v47 = *(void (__fastcall **)(_QWORD *, __int64))(a7 + 40); /*0x100519932*/
          codexmate_lib::core::relay::codex_diagnostic::fix_config_toml_syntax_text::hcfdbad13ceb8a6f8(v74, v76); /*0x100519941*/
          v48 = v74[0]; /*0x100519946*/
          v49 = v74[1]; /*0x10051994d*/
          v50 = v74[2]; /*0x100519954*/
          v51 = v74[3]; /*0x10051995b*/
          if ( v74[0] == 11 ) /*0x100519966*/
          {
            v75 = v74[2]; /*0x10051996c*/
            v47(v74, a6); /*0x10051997a*/
            if ( LODWORD(v74[0]) == 11 ) /*0x100519984*/
            {
              std::fs::read_to_string::inner::hcce2334f4117b5b3(v74, v76[7], v76[8]); /*0x10051999d*/
              v52 = v74[0]; /*0x1005199a2*/
              v53 = v74[1]; /*0x1005199a9*/
              if ( __OFSUB__(-v74[0], 1) ) /*0x1005199b3*/
              {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x1005199c9*/
                  0x8000000000000000LL,
                  v74[1]);
                v53 = 0; /*0x1005199ce*/
              }
              else
              {
                v54 = v74[2]; /*0x100519cc0*/
              }
              codexmate_lib::core::relay::codex_diagnostic::check_config_toml_syntax::ha7a46b071f53d04b( /*0x100519cd1*/
                (__int64)v74,
                v53,
                v54);
              v68 = v49; /*0x100519cd6*/
              v69 = v75; /*0x100519ce1*/
              v70 = v51; /*0x100519ce8*/
              codexmate_lib::core::relay::codex_diagnostic::checked_fix_result::hcecd381739201c5f( /*0x100519d10*/
                v66,
                &anon_92869709a5e99ce1936aa4e326b6c562_457,
                0x12u,
                v74,
                &v68);
              qmemcpy(a1 + 1, v66, 0x48u); /*0x100519d25*/
              *a1 = 11; /*0x100519d28*/
              if ( 2 * v52 ) /*0x100519d2f*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v52, 1); /*0x100519d4b*/
            }
            else
            {
              qmemcpy(a1, v74, 0x60u); /*0x100519c9e*/
              if ( v49 ) /*0x100519ca4*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v49, 1); /*0x100519cb6*/
            }
          }
          else
          {
            a1[11] = v74[11]; /*0x100519c0d*/
            a1[10] = v74[10]; /*0x100519c15*/
            a1[9] = v74[9]; /*0x100519c1d*/
            a1[8] = v74[8]; /*0x100519c25*/
            a1[7] = v74[7]; /*0x100519c2d*/
            a1[6] = v74[6]; /*0x100519c35*/
            v64 = v74[4]; /*0x100519c39*/
            a1[5] = v74[5]; /*0x100519c41*/
            a1[4] = v64; /*0x100519c45*/
            a1[1] = v49; /*0x100519c49*/
            a1[2] = v50; /*0x100519c4d*/
            a1[3] = v51; /*0x100519c51*/
            *a1 = v48; /*0x100519c55*/
          }
        }
        else
        {
          v23 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBCB0); /*0x1005194bb*/
          v24 = _mm_or_si128( /*0x1005194cb*/
                  _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a4 + 16)), (__m128i)xmmword_1015FBCC0),
                  v23);
          if ( !_mm_testz_si128(v24, v24) ) /*0x1005194d4*/
            goto LABEL_40; /*0x1005194d4*/
          v25 = *(_QWORD *)(v75 + 8); /*0x1005194de*/
          v26 = *(_QWORD *)(v75 + 16); /*0x1005194e2*/
          v27 = *(void (__fastcall **)(_QWORD *, __int64, double))(a7 + 40); /*0x1005194e6*/
          codexmate_lib::core::relay::codex_diagnostic::fix_config_third_party_text::h7c56543f2e575f68( /*0x1005194fb*/
            v74,
            v76,
            v25,
            v26);
          v28 = v74[0]; /*0x100519500*/
          v29 = v74[1]; /*0x100519507*/
          v30 = v74[2]; /*0x10051950e*/
          if ( v74[0] != 11 ) /*0x100519519*/
            goto LABEL_63; /*0x100519519*/
          if ( v74[1] ) /*0x100519522*/
            *(double *)v23.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74[2], v74[1], 1); /*0x100519529*/
          v27(v74, a6, *(double *)v23.i64); /*0x100519538*/
          if ( LODWORD(v74[0]) != 11 ) /*0x100519542*/
            goto LABEL_66; /*0x100519542*/
          v31 = std::thread::local::LocalKey$LT$T$GT$::with::h2d85312d63c74f41(&off_1019642C0); /*0x100519559*/
          v74[0] = &xmmword_1015FBEC0; /*0x100519565*/
          memset(&v74[1], 0, 24); /*0x100519573*/
          v74[4] = v31; /*0x100519596*/
          v74[5] = v32; /*0x10051959a*/
          _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::hc41beb1c229e3025( /*0x1005195ab*/
            v74,
            v25,
            v25 + 232 * v26);
          v73 = v74[5]; /*0x1005195b4*/
          v72 = v74[4]; /*0x1005195bf*/
          v71 = v74[3]; /*0x1005195cd*/
          v70 = v74[2]; /*0x1005195db*/
          v69 = v74[1]; /*0x1005195f0*/
          v68 = v74[0]; /*0x1005195f7*/
          std::fs::read_to_string::inner::hcce2334f4117b5b3(v74, v76[7], v76[8]); /*0x100519611*/
          v33 = v74[0]; /*0x100519616*/
          v34 = v74[1]; /*0x10051961d*/
          if ( __OFSUB__(-v74[0], 1) ) /*0x100519627*/
          {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x10051963d*/
              0x8000000000000000LL,
              v74[1]);
            v34 = 0; /*0x100519642*/
          }
          else
          {
            v35 = v74[2]; /*0x100519de5*/
          }
          codexmate_lib::core::relay::codex_diagnostic::check_config_third_party::h0fff69e9ac3abe91( /*0x100519dfd*/
            (__int64)v74,
            v34,
            v35,
            &v68);
          codexmate_lib::core::relay::codex_diagnostic::checked_fix_result::hbdd9e58b4320b7fd( /*0x100519e29*/
            v66,
            &anon_92869709a5e99ce1936aa4e326b6c562_455,
            0x12u,
            v74,
            &unk_1015FCEE4,
            0x27u);
          qmemcpy(a1 + 1, v66, 0x48u); /*0x100519e3e*/
          *a1 = 11; /*0x100519e41*/
          _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v68); /*0x100519e4f*/
          if ( 2 * v33 ) /*0x100519e54*/
          {
            v65 = v34; /*0x100519e6a*/
            goto LABEL_79; /*0x100519e6a*/
          }
        }
        break; /*0x100519e6a*/
      case 19LL: /*0x10051926b*/
        v17 = _mm_or_si128( /*0x100519362*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBB80),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 3)), (__m128i)xmmword_1015FBB70));
        if ( _mm_testz_si128(v17, v17) ) /*0x10051936b*/
        {
          codexmate_lib::core::relay::codex_diagnostic::fix_db_orphan_providers::h4a50b8ce63a1b452( /*0x100519928*/
            (char *)a1,
            (__int64)v76,
            v75);
        }
        else
        {
          v18 = _mm_or_si128( /*0x10051938d*/
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBD90),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 3)), (__m128i)xmmword_1015FBD80));
          if ( !_mm_testz_si128(v18, v18) ) /*0x100519396*/
            goto LABEL_40; /*0x100519396*/
          codexmate_lib::core::relay::codex_diagnostic::fix_state_db_relocation::hecf1d03613f77738((__int64)a1, v76); /*0x1005193a3*/
        }
        break; /*0x1005193a8*/
      case 20LL: /*0x10051926b*/
        v20 = _mm_or_si128( /*0x100519405*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBCE0),
                _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(a4 + 16)), (__m128i)xmmword_1015FBCD0));
        if ( !_mm_testz_si128(v20, v20) ) /*0x10051940e*/
          goto LABEL_40; /*0x10051940e*/
        codexmate_lib::core::relay::codex_diagnostic::fix_router_http_contract::h7bd4fe1ed817f034( /*0x10051942e*/
          a1,
          v76[7],
          v76[8],
          v75,
          a6,
          *(__int64 (__fastcall **)(_QWORD *, __int64))(a7 + 40));
        break; /*0x100519433*/
      case 21LL: /*0x10051926b*/
        v38 = _mm_or_si128( /*0x100519755*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBBC0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 5)), (__m128i)xmmword_1015FBBB0));
        if ( !_mm_testz_si128(v38, v38) ) /*0x10051975e*/
          goto LABEL_40; /*0x10051975e*/
        codexmate_lib::core::relay::codex_diagnostic::fix_catalog_path_validity::h1e41ae17259608a3( /*0x10051977c*/
          a1,
          v76,
          *(_DWORD *)(v75 + 292),
          a6,
          *(__int64 (__fastcall **)(_QWORD *, __int64))(a7 + 40));
        break; /*0x100519781*/
      case 22LL: /*0x10051926b*/
        v39 = _mm_or_si128( /*0x1005197a2*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBBE0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 6)), (__m128i)xmmword_1015FBBD0));
        if ( _mm_testz_si128(v39, v39) ) /*0x1005197ab*/
        {
          codexmate_lib::core::relay::codex_diagnostic::fix_takeover_backup_orphan::h2d8b6a51f7905902( /*0x100519a17*/
            a1,
            (__int64)v76,
            *(_DWORD *)(v75 + 292));
        }
        else
        {
          v40 = _mm_or_si128( /*0x1005197cd*/
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBC00),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 6)), (__m128i)xmmword_1015FBBF0));
          if ( !_mm_testz_si128(v40, v40) ) /*0x1005197d6*/
            goto LABEL_40; /*0x1005197d6*/
          codexmate_lib::core::relay::codex_diagnostic::fix_config_global_validity::h86dd4bf45d205385(a1, v76); /*0x1005197df*/
        }
        break; /*0x1005197e4*/
      case 23LL: /*0x10051926b*/
        v43 = _mm_or_si128( /*0x10051987c*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBC20),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_1015FBC10));
        if ( _mm_testz_si128(v43, v43) ) /*0x100519885*/
        {
          v55 = *(void (__fastcall **)(_QWORD *, __int64, double))(a7 + 40); /*0x100519a36*/
          codexmate_lib::core::relay::codex_diagnostic::fix_config_profile_conflict_text::h3fbaf0f7415d3b27(v74, v76); /*0x100519a45*/
          v28 = v74[0]; /*0x100519a4a*/
          v29 = v74[1]; /*0x100519a51*/
          v30 = v74[2]; /*0x100519a58*/
          if ( v74[0] == 11 ) /*0x100519a63*/
          {
            if ( v74[1] ) /*0x100519a6c*/
              *(double *)v43.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74[2], v74[1], 1); /*0x100519a73*/
            v55(v74, a6, *(double *)v43.i64); /*0x100519a82*/
            if ( LODWORD(v74[0]) == 11 ) /*0x100519a8c*/
            {
              v56 = *(_QWORD *)(v75 + 8); /*0x100519a96*/
              v57 = v56 + 232LL * *(_QWORD *)(v75 + 16); /*0x100519aa2*/
              v58 = std::thread::local::LocalKey$LT$T$GT$::with::h2d85312d63c74f41(&off_1019642C0); /*0x100519aac*/
              v74[0] = &xmmword_1015FBEC0; /*0x100519ab8*/
              memset(&v74[1], 0, 24); /*0x100519ac6*/
              v74[4] = v58; /*0x100519ae9*/
              v74[5] = v59; /*0x100519aed*/
              _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::hc41beb1c229e3025( /*0x100519afe*/
                v74,
                v56,
                v57);
              v73 = v74[5]; /*0x100519b07*/
              v72 = v74[4]; /*0x100519b12*/
              v71 = v74[3]; /*0x100519b20*/
              v70 = v74[2]; /*0x100519b2e*/
              v69 = v74[1]; /*0x100519b43*/
              v68 = v74[0]; /*0x100519b4a*/
              std::fs::read_to_string::inner::hcce2334f4117b5b3(v74, v76[7], v76[8]); /*0x100519b64*/
              v33 = v74[0]; /*0x100519b69*/
              v60 = (void *)v74[1]; /*0x100519b70*/
              if ( __OFSUB__(-v74[0], 1) ) /*0x100519b7a*/
              {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x100519b90*/
                  0x8000000000000000LL,
                  v74[1]);
                v60 = nullptr; /*0x100519b95*/
              }
              else
              {
                v61 = (_BYTE *)v74[2]; /*0x100519d55*/
              }
              codexmate_lib::core::relay::codex_diagnostic::check_config_profile_conflict::h6d9e2a9aff7b2558( /*0x100519d70*/
                v74,
                v60,
                v61,
                *(_DWORD *)(v75 + 292));
              codexmate_lib::core::relay::codex_diagnostic::checked_fix_result::hbdd9e58b4320b7fd( /*0x100519d9c*/
                v66,
                &anon_92869709a5e99ce1936aa4e326b6c562_608,
                0x17u,
                v74,
                &unk_1015FDCCB,
                0x30u);
              qmemcpy(a1 + 1, v66, 0x48u); /*0x100519db1*/
              *a1 = 11; /*0x100519db4*/
              _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v68); /*0x100519dc2*/
              if ( 2 * v33 ) /*0x100519dc7*/
              {
                v65 = (__int64)v60; /*0x100519ddd*/
LABEL_79:
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v33, 1); /*0x100519e6d*/
              }
            }
            else
            {
LABEL_66:
              qmemcpy(a1, v74, 0x60u); /*0x100519c6c*/
            }
          }
          else
          {
LABEL_63:
            v62 = v74[3]; /*0x100519b9d*/
            v63 = v74[4]; /*0x100519ba4*/
            a1[11] = v74[11]; /*0x100519bac*/
            a1[10] = v74[10]; /*0x100519bb4*/
            a1[9] = v74[9]; /*0x100519bbc*/
            a1[8] = v74[8]; /*0x100519bc4*/
            a1[7] = v74[7]; /*0x100519bcc*/
            a1[6] = v74[6]; /*0x100519bd4*/
            a1[5] = v74[5]; /*0x100519bdc*/
            a1[4] = v63; /*0x100519be0*/
            a1[1] = v29; /*0x100519be4*/
            a1[2] = v30; /*0x100519be8*/
            a1[3] = v62; /*0x100519bec*/
            *a1 = v28; /*0x100519bf0*/
          }
        }
        else
        {
          v44 = _mm_or_si128( /*0x1005198a7*/
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBC40),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_1015FBC30));
          if ( _mm_testz_si128(v44, v44) ) /*0x1005198b0*/
          {
            codexmate_lib::core::relay::codex_diagnostic::fix_thread_missing_rollouts::h4269f9c8756722e5( /*0x100519bff*/
              a1,
              (__int64)v76);
          }
          else
          {
            v45 = _mm_or_si128( /*0x1005198d2*/
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBC60),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_1015FBC50));
            if ( _mm_testz_si128(v45, v45) ) /*0x1005198db*/
            {
              codexmate_lib::core::relay::codex_diagnostic::fix_legacy_migrated_threads::h15906ac7b0e2f32f( /*0x100519c85*/
                (__int64)a1,
                v76,
                *(_DWORD *)(v75 + 292));
            }
            else
            {
              v46 = _mm_or_si128( /*0x1005198fd*/
                      _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBC80),
                      _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_1015FBC70));
              if ( !_mm_testz_si128(v46, v46) ) /*0x100519906*/
                goto LABEL_40; /*0x100519906*/
              codexmate_lib::core::relay::codex_diagnostic::fix_project_state_integrity::h3f5ce51e2bdd4fc3( /*0x100519913*/
                (__int64)a1,
                (__int64)v76);
            }
          }
        }
        break; /*0x100519918*/
      case 24LL: /*0x10051926b*/
        v41 = _mm_or_si128( /*0x100519802*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBB00),
                _mm_xor_si128(_mm_loadl_epi64((const __m128i *)(a4 + 16)), (__m128i)xmmword_1015FBAF0));
        if ( !_mm_testz_si128(v41, v41) ) /*0x10051980b*/
          goto LABEL_40; /*0x10051980b*/
        codexmate_lib::core::relay::codex_diagnostic::fix_rollout_orphan_providers::hd1231c3d976f3847( /*0x100519a2c*/
          a1,
          (__int64)v76,
          v75);
        break; /*0x100519a31*/
      case 26LL: /*0x10051926b*/
        v16 = _mm_or_si128( /*0x10051931c*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBBA0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 10)), (__m128i)xmmword_1015FBB90));
        if ( !_mm_testz_si128(v16, v16) ) /*0x100519325*/
          goto LABEL_40; /*0x100519325*/
        codexmate_lib::core::relay::codex_diagnostic::fix_router_unlock_auth_residue::h71fd42faed4546d1( /*0x10051933c*/
          (__int64)a1,
          (__int64)v76,
          *(_DWORD *)(v75 + 292));
        break; /*0x100519341*/
      case 27LL: /*0x10051926b*/
        v21 = _mm_or_si128( /*0x100519454*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBB60),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 11)), (__m128i)xmmword_1015FBB50));
        if ( !_mm_testz_si128(v21, v21) ) /*0x10051945d*/
          goto LABEL_40; /*0x10051945d*/
        codexmate_lib::core::relay::codex_diagnostic::fix_thread_provider_consistency::h65b4351e9c8337a6( /*0x100519474*/
          a1,
          (__int64)v76,
          *(_DWORD *)(v75 + 292));
        break; /*0x100519479*/
      case 28LL: /*0x10051926b*/
        v19 = _mm_or_si128( /*0x1005193c9*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBB20),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 12)), (__m128i)xmmword_1015FBB10));
        if ( !_mm_testz_si128(v19, v19) ) /*0x1005193d2*/
          goto LABEL_40; /*0x1005193d2*/
        codexmate_lib::core::relay::codex_diagnostic::fix_thread_poisoned_instructions::h2e3af49a31edf81c( /*0x1005193df*/
          (__int64)a1,
          (__int64)v76);
        break; /*0x1005193e4*/
      case 32LL: /*0x10051926b*/
        v15 = _mm_or_si128( /*0x1005192cf*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_1015FBB40),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a4 + 16)), (__m128i)xmmword_1015FBB30));
        if ( !_mm_testz_si128(v15, v15) ) /*0x1005192d8*/
          goto LABEL_40; /*0x1005192d8*/
        codexmate_lib::core::relay::codex_diagnostic::fix_thread_model_catalog_consistency::h09ef669ed095bbda( /*0x1005192f6*/
          a1,
          (__int64)v76,
          *(_DWORD *)(v75 + 292),
          a6,
          *(__int64 (__fastcall **)(_QWORD *, __int64))(a7 + 40));
        break; /*0x1005192fb*/
      default:
LABEL_40:
        v74[0] = v67; /*0x100519811*/
        v74[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100519826*/
        v13 = a1 + 1; /*0x10051982d*/
        v14 = &unk_1017C114E; /*0x100519831*/
        goto LABEL_41; /*0x100519831*/
    }
  }
  else
  {
    v74[0] = v67; /*0x100519226*/
    v74[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100519234*/
    v13 = a1 + 1; /*0x10051923b*/
    v14 = &unk_1017C1112; /*0x10051923f*/
LABEL_41:
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v13, v14, v74); /*0x100519838*/
    *a1 = 10; /*0x100519844*/
  }
  return a1; /*0x10051984e*/
}