// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::relay::diagnose_codex_router::h75b570ceeb47f4c4; addr: 0x100a03260; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:30Z
_QWORD *__fastcall codexmate_lib::commands::relay::diagnose_codex_router::h75b570ceeb47f4c4(
        _QWORD *__dst,
        __int64 *a2,
        __m128i a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // r12
  __int16 v13; // r13
  __int16 v14; // r15
  unsigned __int64 v15; // rax
  double v16; // xmm0_8
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // r14
  size_t v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r15
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rsi
  unsigned __int64 v35; // rsi
  __int64 v36; // rdx
  const void *v37; // r14
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // r14
  void *v41; // rax
  __int64 v42; // rax
  void *v43; // rax
  void *v44; // rax
  char v45; // r15
  char v46; // r13
  __int16 v47; // r12
  __int64 v48; // r14
  __int64 v49; // r14
  void *v50; // rax
  void *v51; // rax
  void *v52; // rax
  _QWORD v53[93]; // [rsp+0h] [rbp-990h] BYREF
  __int64 v54; // [rsp+2E8h] [rbp-6A8h] BYREF
  __int64 v55; // [rsp+2F0h] [rbp-6A0h]
  __int64 v56; // [rsp+2F8h] [rbp-698h]
  __int64 v57; // [rsp+300h] [rbp-690h] BYREF
  _QWORD v58[44]; // [rsp+308h] [rbp-688h] BYREF
  _QWORD v59[16]; // [rsp+468h] [rbp-528h] BYREF
  __int64 v60[50]; // [rsp+4E8h] [rbp-4A8h] BYREF
  _QWORD __dsta[47]; // [rsp+678h] [rbp-318h] BYREF
  _QWORD v62[20]; // [rsp+7F0h] [rbp-1A0h] BYREF
  __int64 v63; // [rsp+890h] [rbp-100h] BYREF
  unsigned __int64 v64; // [rsp+898h] [rbp-F8h]
  __int64 v65; // [rsp+8A0h] [rbp-F0h]
  _QWORD v66[2]; // [rsp+8A8h] [rbp-E8h] BYREF
  __int64 v67; // [rsp+8B8h] [rbp-D8h]
  _QWORD v68[3]; // [rsp+8C0h] [rbp-D0h] BYREF
  __int64 v69; // [rsp+8D8h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+8E0h] [rbp-B0h] BYREF
  size_t v71; // [rsp+8E8h] [rbp-A8h]
  __int64 v72; // [rsp+8F0h] [rbp-A0h]
  __int64 v73; // [rsp+8F8h] [rbp-98h] BYREF
  __int64 v74; // [rsp+900h] [rbp-90h]
  __int64 v75; // [rsp+908h] [rbp-88h]
  __int64 *v76; // [rsp+910h] [rbp-80h] BYREF
  __int64 v77; // [rsp+918h] [rbp-78h]
  __int64 v78; // [rsp+920h] [rbp-70h]
  __int64 v79; // [rsp+928h] [rbp-68h]
  unsigned __int64 v80; // [rsp+930h] [rbp-60h]
  unsigned __int64 v81; // [rsp+938h] [rbp-58h]
  __int64 v82; // [rsp+940h] [rbp-50h]
  __int64 v83; // [rsp+948h] [rbp-48h]
  __int64 v84; // [rsp+950h] [rbp-40h]
  __int64 v85; // [rsp+958h] [rbp-38h]
  size_t __n; // [rsp+960h] [rbp-30h]

  v5 = a2[2]; /*0x100a03284*/
  if ( __OFSUB__(0, *(_QWORD *)(v5 + 16)) ) /*0x100a0328a*/
  {
    codexmate_lib::core::relay::manager::RelayManager::snapshot::h527950d12ca05baa(v53, a2); /*0x100a032a1*/
    codexmate_lib::core::relay::storage::sanitize_for_export::h611985cee17feb5d((__int64)v60, (__int64)v53); /*0x100a032b0*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hf5a9511b9a61ea04(v53); /*0x100a032bc*/
    memcpy(__dsta, &v60[1], sizeof(__dsta)); /*0x100a032db*/
    if ( v60[0] != 0x8000000000000000LL ) /*0x100a032e3*/
    {
      v62[2] = __dsta[2]; /*0x100a032f0*/
      v62[1] = __dsta[1]; /*0x100a03305*/
      v62[0] = __dsta[0]; /*0x100a0330c*/
      memcpy(v58, &__dsta[3], sizeof(v58)); /*0x100a03326*/
      v59[2] = __dsta[2]; /*0x100a03332*/
      v55 = __dsta[0]; /*0x100a03347*/
      v56 = __dsta[1]; /*0x100a0334e*/
      v57 = __dsta[2]; /*0x100a03355*/
      v54 = v60[0]; /*0x100a0335c*/
      if ( v58[15] == 0x8000000000000000LL ) /*0x100a0336a*/
      {
        v62[0] = 0x8000000000000000LL; /*0x100a03370*/
        goto LABEL_19; /*0x100a03377*/
      }
      v12 = v58[33]; /*0x100a034b0*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dsta, &v58[15]); /*0x100a034be*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v60, &v58[18]); /*0x100a034d1*/
      if ( v58[21] == 0x8000000000000000LL ) /*0x100a034dd*/
      {
        __n = 0x8000000000000000LL; /*0x100a034df*/
        if ( v58[24] == 0x8000000000000000LL ) /*0x100a034ea*/
          goto LABEL_11; /*0x100a034ea*/
      }
      else
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v53, &v58[21]); /*0x100a03514*/
        __n = v53[0]; /*0x100a03520*/
        v78 = v53[1]; /*0x100a0352b*/
        v82 = v53[2]; /*0x100a03536*/
        if ( v58[24] == 0x8000000000000000LL ) /*0x100a03541*/
        {
LABEL_11:
          v80 = 0x8000000000000000LL; /*0x100a034ec*/
          if ( v58[27] == 0x8000000000000000LL ) /*0x100a034f7*/
          {
LABEL_12:
            v81 = 0x8000000000000000LL; /*0x100a034fd*/
LABEL_16:
            v13 = v58[34]; /*0x100a035b8*/
            v14 = WORD1(v58[34]); /*0x100a035c3*/
            v15 = 0x8000000000000000LL; /*0x100a035cb*/
            if ( v58[30] != 0x8000000000000000LL ) /*0x100a035d5*/
            {
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v53, &v58[30]); /*0x100a035e5*/
              v15 = v53[0]; /*0x100a035ea*/
              v59[0] = v53[1]; /*0x100a035f8*/
              v59[1] = v53[2]; /*0x100a03606*/
            }
            v53[2] = __dsta[2]; /*0x100a03614*/
            v53[1] = __dsta[1]; /*0x100a03622*/
            v53[0] = __dsta[0]; /*0x100a03630*/
            v53[3] = v60[0]; /*0x100a0363e*/
            v53[4] = v60[1]; /*0x100a0364c*/
            v53[5] = v60[2]; /*0x100a0365a*/
            v62[16] = v59[0]; /*0x100a03668*/
            v62[17] = v59[1]; /*0x100a03676*/
            v62[5] = v60[2]; /*0x100a03684*/
            v62[4] = v60[1]; /*0x100a03692*/
            v62[3] = v60[0]; /*0x100a036a0*/
            v62[2] = __dsta[2]; /*0x100a036ae*/
            v62[1] = __dsta[1]; /*0x100a036bc*/
            v62[0] = __dsta[0]; /*0x100a036ca*/
            v62[6] = __n; /*0x100a036d5*/
            v62[7] = v78; /*0x100a036e0*/
            v62[8] = v82; /*0x100a036eb*/
            v62[9] = v80; /*0x100a036f6*/
            v62[10] = v79; /*0x100a03701*/
            v62[11] = v84; /*0x100a0370c*/
            v62[12] = v81; /*0x100a03717*/
            v62[13] = v85; /*0x100a03722*/
            v62[14] = v83; /*0x100a0372d*/
            v62[15] = v15; /*0x100a03734*/
            v62[18] = v12; /*0x100a0373b*/
            LOWORD(v62[19]) = v13; /*0x100a03742*/
            WORD1(v62[19]) = v14; /*0x100a0374a*/
LABEL_19:
            codexmate_lib::core::relay::manager::RelayManager::snapshot::h527950d12ca05baa(v53, a2); /*0x100a0375c*/
            v16 = codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason_for_snapshot::h1e92b44969b5c7fa( /*0x100a03780*/
                    v68,
                    *a2,
                    a2[3],
                    (__int64)v53,
                    a3);
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hf5a9511b9a61ea04(v53); /*0x100a0378c*/
            v70 = v56; /*0x100a03798*/
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hed1423a2d8278088(v66, &v57); /*0x100a037ad*/
            v69 = v67; /*0x100a037b9*/
            codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::haab94df6ced9d9a1(v60); /*0x100a037c7*/
            codexmate_lib::platform::paths::CodexPaths::from_home::hc20059b25f02ceac(v53, v60); /*0x100a037da*/
            v17 = v53[7]; /*0x100a037df*/
            std::fs::read_to_string::inner::hcce2334f4117b5b3(v60); /*0x100a037f4*/
            v21 = v60[0]; /*0x100a037f9*/
            if ( v60[0] == 0x8000000000000000LL ) /*0x100a03803*/
            {
              if ( (v60[1] & 3) == 1 ) /*0x100a03814*/
              {
                v22 = v60[0]; /*0x100a03816*/
                __n = v60[1] - 1; /*0x100a0381d*/
                v23 = *(_QWORD *)(v60[1] - 1); /*0x100a03821*/
                v24 = *(_QWORD *)(v60[1] + 7); /*0x100a03825*/
                if ( *(_QWORD *)v24 ) /*0x100a03829*/
                  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, double, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v24)( /*0x100a03835*/
                    v23,
                    v17,
                    v18,
                    v60[1] - 1,
                    v19,
                    v20,
                    v16,
                    v53[0],
                    v53[1],
                    v53[2],
                    v53[3],
                    v53[4],
                    v53[5]);
                v25 = *(_QWORD *)(v24 + 8); /*0x100a03837*/
                if ( v25 ) /*0x100a0383f*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v25, *(_QWORD *)(v24 + 16)); /*0x100a03849*/
                v16 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__n, 24, 8); /*0x100a0385c*/
                v21 = v22; /*0x100a03861*/
              }
              v59[0] = 0x8000000000000000LL; /*0x100a03864*/
              LODWORD(v79) = 0; /*0x100a0386b*/
              LODWORD(v78) = 0; /*0x100a03872*/
            }
            else
            {
              v72 = v60[1]; /*0x100a0389a*/
              codexmate_lib::core::relay::invariants::RouterConfigSurface::parse::h382900189213d5d3(v60, v53); /*0x100a038a1*/
              qmemcpy(v59, v60, sizeof(v59)); /*0x100a038b9*/
              if ( v59[0] == 0x8000000000000000LL ) /*0x100a038c3*/
              {
                LODWORD(v79) = 0; /*0x100a038c5*/
                LODWORD(v78) = 0; /*0x100a038cc*/
              }
              else
              {
                v26 = 0; /*0x100a038d5*/
                if ( v59[3] != 0x8000000000000000LL && v59[5] == 6 ) /*0x100a038e8*/
                {
                  v26 = anon_4bf7b7c8c09ec04f58b93d1c5edcde78_291 ^ *(_DWORD *)v59[4] /*0x100a03907*/
                      | *(_WORD *)(v59[4] + 4LL) ^ 0x3169;
                  LOBYTE(v26) = v26 == 0; /*0x100a03909*/
                }
                LODWORD(v79) = v26; /*0x100a0390c*/
                LODWORD(v78) = LOBYTE(v59[15]); /*0x100a03916*/
              }
            }
            codexmate_lib::core::relay::codex_writer::user_top_level_profile::hff86aa3934a38a46(v60, v53, v16); /*0x100a03927*/
            if ( LODWORD(v60[0]) == 11 ) /*0x100a03933*/
            {
              __dsta[0] = v60[2]; /*0x100a03943*/
              __dsta[1] = v60[3]; /*0x100a03951*/
              if ( v60[1] != 0x8000000000000001LL ) /*0x100a0395f*/
              {
                v73 = v60[1]; /*0x100a03961*/
                v74 = __dsta[0]; /*0x100a03976*/
                v75 = __dsta[1]; /*0x100a0397d*/
                goto LABEL_38; /*0x100a03984*/
              }
            }
            else
            {
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v60); /*0x100a0398d*/
            }
            v73 = 0x8000000000000000LL; /*0x100a03992*/
LABEL_38:
            std::path::Path::_join::hb1a495d4f06b13b8(&v63, v53[73], v53[74], "codex_router_catalog.json::", 25); /*0x100a03999*/
            v27 = v64; /*0x100a039c0*/
            v28 = v65; /*0x100a039c7*/
            v29 = (size_t)v60; /*0x100a039ce*/
            v80 = v64; /*0x100a039d5*/
            std::sys::fs::metadata::h32fa16d3052ea535(v60, v64, v65); /*0x100a039dc*/
            v31 = v60[0]; /*0x100a039e1*/
            if ( v60[0] ) /*0x100a039eb*/
            {
              if ( (v60[1] & 3) == 1 ) /*0x100a03a00*/
              {
                v82 = v21; /*0x100a03a25*/
                __n = v60[1] - 1; /*0x100a03a2d*/
                v32 = *(_QWORD *)(v60[1] - 1); /*0x100a03a31*/
                v33 = *(_QWORD *)(v60[1] + 7); /*0x100a03a35*/
                if ( *(_QWORD *)v33 ) /*0x100a03a39*/
                  (*(void (__fastcall **)(__int64))v33)(v32); /*0x100a03a45*/
                v34 = *(_QWORD *)(v33 + 8); /*0x100a03a47*/
                if ( v34 ) /*0x100a03a4f*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v34, *(_QWORD *)(v33 + 16)); /*0x100a03a59*/
                v27 = 24; /*0x100a03a5e*/
                v29 = __n; /*0x100a03a68*/
                v16 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__n, 24, 8); /*0x100a03a6c*/
                v21 = v82; /*0x100a03a7b*/
                if ( (_BYTE)v31 ) /*0x100a03a82*/
                {
LABEL_41:
                  __n = 0x8000000000000000LL; /*0x100a03a07*/
                  v82 = v21; /*0x100a03a12*/
                  v81 = v31; /*0x100a03a16*/
                  if ( v68[0] != 0x8000000000000000LL ) /*0x100a03a1a*/
                    goto LABEL_66; /*0x100a03a1a*/
LABEL_57:
                  if ( BYTE4(v58[41]) ) /*0x100a03b3b*/
                  {
                    if ( BYTE2(v58[11]) ) /*0x100a03b44*/
                    {
                      if ( v73 != 0x8000000000000000LL ) /*0x100a03b51*/
                      {
                        v76 = &v73; /*0x100a03f4c*/
                        __dsta[0] = &v76; /*0x100a03f54*/
                        __dsta[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1d0e7a253d9414a9; /*0x100a03f62*/
                        alloc::fmt::format::format_inner::h3c16c74008a310d4(v60, &unk_101904D3D, __dsta); /*0x100a03f7e*/
                        goto LABEL_67; /*0x100a03f83*/
                      }
                      if ( (_BYTE)v31 ) /*0x100a03b5a*/
                      {
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v27, v30); /*0x100a03b60*/
                        v40 = 101; /*0x100a03b65*/
                        v41 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(101, 1); /*0x100a03b75*/
                        if ( v41 ) /*0x100a03b7d*/
                        {
                          v83 = 101; /*0x100a03b8f*/
                          v85 = (__int64)v41; /*0x100a03b98*/
                          memcpy(v41, &unk_10179226B, 0x65u); /*0x100a03b9f*/
                          v42 = 101; /*0x100a03ba4*/
LABEL_73:
                          v84 = v42; /*0x100a03d1e*/
                          goto LABEL_74; /*0x100a03d1e*/
                        }
                      }
                      else if ( (unsigned __int8)v78 | BYTE6(v58[43]) ^ 1 ) /*0x100a03f91*/
                      {
                        if ( (_BYTE)v79 ) /*0x100a03f9e*/
                        {
                          if ( v69 ) /*0x100a03fac*/
                          {
                            v60[0] = (__int64)&v69; /*0x100a03fc0*/
                            v60[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100a03fce*/
                            v60[2] = (__int64)&v70; /*0x100a03fdc*/
                            v60[3] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100a03fe3*/
                            v60[4] = (__int64)&v58[11]; /*0x100a03fea*/
                            v60[5] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x100a03ff8*/
                            alloc::fmt::format::format_inner::h3c16c74008a310d4(__dsta, &unk_101904CE9, v60); /*0x100a04014*/
                            v84 = __dsta[0]; /*0x100a04020*/
                            v85 = __dsta[1]; /*0x100a0402b*/
                            v83 = __dsta[2]; /*0x100a04036*/
                            goto LABEL_74; /*0x100a0403a*/
                          }
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v27, v30); /*0x100a040db*/
                          v40 = 143; /*0x100a040e0*/
                          v52 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(143, 1); /*0x100a040f0*/
                          if ( v52 ) /*0x100a040f8*/
                          {
                            v83 = 143; /*0x100a04106*/
                            v85 = (__int64)v52; /*0x100a0410f*/
                            memcpy(v52, &unk_1017923FD, 0x8Fu); /*0x100a04116*/
                            v42 = 143; /*0x100a0411b*/
                            goto LABEL_73; /*0x100a04120*/
                          }
                        }
                        else
                        {
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v27, v30); /*0x100a0408d*/
                          v40 = 148; /*0x100a04092*/
                          v51 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(148, 1); /*0x100a040a2*/
                          if ( v51 ) /*0x100a040aa*/
                          {
                            v83 = 148; /*0x100a040bc*/
                            v85 = (__int64)v51; /*0x100a040c5*/
                            memcpy(v51, &unk_101792369, 0x94u); /*0x100a040cc*/
                            v42 = 148; /*0x100a040d1*/
                            goto LABEL_73; /*0x100a040d6*/
                          }
                        }
                      }
                      else
                      {
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v27, v30); /*0x100a0403f*/
                        v40 = 153; /*0x100a04044*/
                        v50 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(153, 1); /*0x100a04054*/
                        if ( v50 ) /*0x100a0405c*/
                        {
                          v83 = 153; /*0x100a0406e*/
                          v85 = (__int64)v50; /*0x100a04077*/
                          memcpy(v50, &unk_1017922D0, 0x99u); /*0x100a0407e*/
                          v42 = 153; /*0x100a04083*/
                          goto LABEL_73; /*0x100a04088*/
                        }
                      }
                    }
                    else
                    {
                      if ( v58[8] != 0x8000000000000000LL && v58[10] ) /*0x100a03c93*/
                      {
                        v76 = &v58[8]; /*0x100a03c9c*/
                        __dsta[0] = &v76; /*0x100a03ca4*/
                        __dsta[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1d0e7a253d9414a9; /*0x100a03cb2*/
                        alloc::fmt::format::format_inner::h3c16c74008a310d4(v60, &unk_101904CA1, __dsta); /*0x100a03cce*/
                        goto LABEL_67; /*0x100a03cd3*/
                      }
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v27, v30); /*0x100a03cd5*/
                      v40 = 71; /*0x100a03cda*/
                      v44 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(71, 1); /*0x100a03cea*/
                      if ( v44 ) /*0x100a03cf2*/
                      {
                        v83 = 71; /*0x100a03d04*/
                        v85 = (__int64)v44; /*0x100a03d0d*/
                        memcpy(v44, &unk_101792224, 0x47u); /*0x100a03d14*/
                        v42 = 71; /*0x100a03d19*/
                        goto LABEL_73; /*0x100a03d19*/
                      }
                    }
                  }
                  else
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v27, v30); /*0x100a03bae*/
                    v40 = 66; /*0x100a03bb3*/
                    v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(66, 1); /*0x100a03bc3*/
                    if ( v43 ) /*0x100a03bcb*/
                    {
                      v83 = 66; /*0x100a03bdd*/
                      v85 = (__int64)v43; /*0x100a03be6*/
                      memcpy(v43, &unk_1017921E2, 0x42u); /*0x100a03bed*/
                      v42 = 66; /*0x100a03bf2*/
                      goto LABEL_73; /*0x100a03bf7*/
                    }
                  }
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v40); /*0x100a04155*/
                }
              }
              else if ( LOBYTE(v60[0]) ) /*0x100a03a05*/
              {
                goto LABEL_41; /*0x100a03a05*/
              }
            }
            v35 = v80; /*0x100a03a8b*/
            alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v60, v80, v28); /*0x100a03a92*/
            v37 = (const void *)v60[1]; /*0x100a03a97*/
            __n = v60[2]; /*0x100a03aa5*/
            if ( v60[2] < 0 ) /*0x100a03aac*/
            {
              v38 = 0; /*0x100a03aae*/
              goto LABEL_50; /*0x100a03aae*/
            }
            if ( v60[2] ) /*0x100a03ac2*/
            {
              v81 = v31; /*0x100a03ac4*/
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v60, v35, v36); /*0x100a03ac8*/
              v38 = 1; /*0x100a03acd*/
              v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100a03adc*/
              if ( !v39 ) /*0x100a03ae4*/
LABEL_50:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v38, __n); /*0x100a03ab1*/
              v29 = v39; /*0x100a03ae6*/
              v31 = v81; /*0x100a03ae9*/
            }
            else
            {
              v29 = 1; /*0x100a03aef*/
            }
            v71 = v29; /*0x100a03af4*/
            memcpy((void *)v29, v37, __n); /*0x100a03b02*/
            v27 = v60[0]; /*0x100a03b07*/
            if ( 2 * v60[0] ) /*0x100a03b0e*/
            {
              v29 = (size_t)v37; /*0x100a03c01*/
              v16 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v60[0], 1); /*0x100a03c04*/
              v82 = v21; /*0x100a03c10*/
              v81 = v31; /*0x100a03c14*/
              if ( v68[0] == 0x8000000000000000LL ) /*0x100a03c18*/
                goto LABEL_57; /*0x100a03c18*/
            }
            else
            {
              v82 = v21; /*0x100a03b26*/
              v81 = v31; /*0x100a03b2a*/
              if ( v68[0] == 0x8000000000000000LL ) /*0x100a03b2e*/
                goto LABEL_57; /*0x100a03b2e*/
            }
LABEL_66:
            v76 = v68; /*0x100a03c1e*/
            __dsta[0] = &v76; /*0x100a03c2d*/
            __dsta[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1d0e7a253d9414a9; /*0x100a03c3b*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v60, &unk_101904DDE, __dsta); /*0x100a03c57*/
LABEL_67:
            v84 = v60[0]; /*0x100a03c5c*/
            v85 = v60[1]; /*0x100a03c6e*/
            v83 = v60[2]; /*0x100a03c79*/
LABEL_74:
            v45 = BYTE4(v58[41]); /*0x100a03d22*/
            v46 = BYTE2(v58[11]); /*0x100a03d2a*/
            v47 = v58[11]; /*0x100a03d32*/
            v48 = 0x8000000000000000LL; /*0x100a03d44*/
            if ( v58[8] != 0x8000000000000000LL ) /*0x100a03d4e*/
            {
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v60, &v58[8]); /*0x100a03d5e*/
              v48 = v60[0]; /*0x100a03d63*/
              v76 = (__int64 *)v60[1]; /*0x100a03d71*/
              v77 = v60[2]; /*0x100a03d7c*/
            }
            __dsta[2] = v67; /*0x100a03d87*/
            __dsta[1] = v66[1]; /*0x100a03d9c*/
            __dsta[0] = v66[0]; /*0x100a03da3*/
            __dsta[9] = __n; /*0x100a03dae*/
            __dsta[10] = v71; /*0x100a03dbc*/
            __dsta[11] = __n; /*0x100a03dc3*/
            __dsta[12] = v73; /*0x100a03dd8*/
            __dsta[13] = v74; /*0x100a03ddf*/
            __dsta[14] = v75; /*0x100a03ded*/
            __dsta[15] = v68[0]; /*0x100a03e02*/
            __dsta[16] = v68[1]; /*0x100a03e09*/
            __dsta[17] = v68[2]; /*0x100a03e17*/
            memcpy(&__dsta[18], v62, 0xA0u); /*0x100a03e31*/
            __dsta[3] = v84; /*0x100a03e3a*/
            __dsta[4] = v85; /*0x100a03e45*/
            __dsta[5] = v83; /*0x100a03e50*/
            BYTE2(__dsta[39]) = v45; /*0x100a03e57*/
            BYTE3(__dsta[39]) = v46; /*0x100a03e5e*/
            LOWORD(__dsta[39]) = v47; /*0x100a03e65*/
            __dsta[6] = v48; /*0x100a03e6d*/
            __dsta[7] = v76; /*0x100a03e7c*/
            __dsta[8] = v77; /*0x100a03e83*/
            __dsta[38] = v70; /*0x100a03e91*/
            BYTE4(__dsta[39]) = v81 ^ 1; /*0x100a03e9e*/
            BYTE5(__dsta[39]) = v79; /*0x100a03ea7*/
            BYTE6(__dsta[39]) = v78; /*0x100a03eb0*/
            codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h490e26c1b2034581(v60, __dsta); /*0x100a03ec4*/
            memcpy(__dst, v60, 0x190u); /*0x100a03ed8*/
            v49 = v82; /*0x100a03ee7*/
            if ( v63 ) /*0x100a03eeb*/
              v16 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v63, 1); /*0x100a03ef6*/
            core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..invariants..RouterConfigSurface$GT$$GT$::h015e45e2e80ebb6a( /*0x100a03f02*/
              v59,
              v16);
            if ( 2 * v49 ) /*0x100a03f07*/
              v16 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v49, 1); /*0x100a03f23*/
            core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::h2cfd58f3a1a2f74b(v53); /*0x100a03f2f*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hf5a9511b9a61ea04(&v54, v16); /*0x100a03f3b*/
            return __dst; /*0x100a03f40*/
          }
LABEL_15:
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v53, &v58[27]); /*0x100a03584*/
          v81 = v53[0]; /*0x100a0359e*/
          v85 = v53[1]; /*0x100a035a9*/
          v83 = v53[2]; /*0x100a035b4*/
          goto LABEL_16; /*0x100a035b4*/
        }
      }
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v53, &v58[24]); /*0x100a03551*/
      v80 = v53[0]; /*0x100a0355d*/
      v79 = v53[1]; /*0x100a03568*/
      v84 = v53[2]; /*0x100a03573*/
      if ( v58[27] == 0x8000000000000000LL ) /*0x100a0357e*/
        goto LABEL_12; /*0x100a0357e*/
      goto LABEL_15; /*0x100a0357e*/
    }
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v53[1], v5 + 16); /*0x100a03387*/
    v53[0] = 9; /*0x100a0338c*/
    qmemcpy(__dsta, v53, 0x60u); /*0x100a033aa*/
  }
  qmemcpy(v53, __dsta, 0x60u); /*0x100a033c3*/
  v54 = 0; /*0x100a033c6*/
  v55 = 1; /*0x100a033d1*/
  v56 = 0; /*0x100a033dc*/
  v60[2] = 1610612768; /*0x100a033e7*/
  v60[0] = (__int64)&v54; /*0x100a033f9*/
  v60[1] = (__int64)&anon_25039b10cfdf58965817401c80a821a1_817; /*0x100a03407*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a03418*/
                          v53,
                          v60,
                          v6,
                          (__int64)&anon_25039b10cfdf58965817401c80a821a1_817,
                          v7,
                          v8) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a04146*/
      &anon_25039b10cfdf58965817401c80a821a1_818,
      55,
      &v63,
      &anon_25039b10cfdf58965817401c80a821a1_840,
      &anon_25039b10cfdf58965817401c80a821a1_820);
  v62[0] = v54; /*0x100a03433*/
  v62[1] = v55; /*0x100a0343a*/
  v62[2] = v56; /*0x100a03448*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(__dsta); /*0x100a03456*/
  v59[2] = v62[2]; /*0x100a03462*/
  v9 = v62[0]; /*0x100a03469*/
  v10 = v62[1]; /*0x100a03470*/
  v59[1] = v62[1]; /*0x100a03477*/
  v59[0] = v62[0]; /*0x100a0347e*/
  __dst[3] = v62[2]; /*0x100a03485*/
  __dst[2] = v10; /*0x100a03489*/
  __dst[1] = v9; /*0x100a0348d*/
  *__dst = 0x8000000000000000LL; /*0x100a03491*/
  return __dst; /*0x100a03497*/
}