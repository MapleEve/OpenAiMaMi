// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::router_unlock_auth::read_cleanup_backup::h6944c532a3c16a6d; addr: 0x10031d6f0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
double __fastcall codexmate_lib::core::relay::router_unlock_auth::read_cleanup_backup::h6944c532a3c16a6d(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rsi
  __m128i v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // r13
  unsigned __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  _BYTE *v26; // r15
  __int64 v27; // r14
  __int64 v28; // r13
  __int64 v29; // r12
  const void *v30; // rsi
  size_t v31; // rdx
  size_t v32; // rbx
  __int64 v33; // rbx
  int v34; // eax
  __int64 v35; // rdx
  char v36; // cl
  void *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdx
  _QWORD *v41; // rdi
  _QWORD *v42; // rcx
  _QWORD *v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // rsi
  __int64 v46; // rdi
  _BYTE *v47; // rax
  __int64 v48; // rax
  unsigned __int8 *v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int8 v51; // r15
  __int64 v52; // rax
  __int64 v53; // r13
  __int64 v54; // rsi
  void *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 *v59; // r14
  __int64 v60; // r13
  __int64 v61; // r15
  __int64 v62; // r12
  size_t v63; // rdx
  size_t v64; // rbx
  int v65; // eax
  char v66; // cl
  __int64 v67; // rax
  bool v68; // cf
  __int64 v69; // rax
  unsigned __int8 *v70; // rdi
  unsigned __int8 *v71; // rax
  unsigned __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r13
  __int64 v79; // r14
  __int64 v80; // r12
  char v81; // al
  __int64 v82; // rdx
  void *v83; // rax
  char v84; // r13
  __int64 v85; // rdx
  void *v86; // rax
  _QWORD *v87; // rax
  void *v88; // rax
  _QWORD v90[3]; // [rsp+0h] [rbp-270h] BYREF
  _QWORD v91[2]; // [rsp+18h] [rbp-258h] BYREF
  _QWORD *v92; // [rsp+28h] [rbp-248h]
  __int64 v93; // [rsp+30h] [rbp-240h]
  __int64 v94; // [rsp+38h] [rbp-238h]
  __int64 v95; // [rsp+40h] [rbp-230h]
  _QWORD v96[22]; // [rsp+48h] [rbp-228h] BYREF
  _QWORD v97[22]; // [rsp+F8h] [rbp-178h] BYREF
  unsigned __int64 v98; // [rsp+1A8h] [rbp-C8h] BYREF
  __int64 v99; // [rsp+1B0h] [rbp-C0h]
  __int64 v100; // [rsp+1B8h] [rbp-B8h]
  __int64 v101; // [rsp+1C0h] [rbp-B0h] BYREF
  __int64 v102; // [rsp+1C8h] [rbp-A8h]
  __int64 v103; // [rsp+1D0h] [rbp-A0h]
  __int64 v104; // [rsp+1D8h] [rbp-98h]
  _QWORD *v105; // [rsp+1E0h] [rbp-90h]
  signed __int64 v106; // [rsp+1E8h] [rbp-88h]
  __int64 v107; // [rsp+1F0h] [rbp-80h] BYREF
  __int64 v108; // [rsp+1F8h] [rbp-78h]
  __int64 v109; // [rsp+200h] [rbp-70h]
  __int64 v110; // [rsp+208h] [rbp-68h]
  signed __int64 v111; // [rsp+210h] [rbp-60h] BYREF
  __int64 v112; // [rsp+218h] [rbp-58h]
  __int64 v113; // [rsp+220h] [rbp-50h]
  __int64 v114; // [rsp+228h] [rbp-48h]
  _QWORD *v115; // [rsp+230h] [rbp-40h]
  __int64 v116; // [rsp+238h] [rbp-38h]
  _BYTE v117[41]; // [rsp+247h] [rbp-29h] BYREF

  v6 = a1; /*0x10031d707*/
  v91[0] = a4; /*0x10031d70a*/
  v91[1] = a5; /*0x10031d711*/
  v92 = a2; /*0x10031d71f*/
  std::fs::read::inner::h6a30c15c40add28b(&v111, a2, a3); /*0x10031d726*/
  if ( __OFSUB__(-v111, 1) ) /*0x10031d736*/
  {
    v107 = v112; /*0x10031d73f*/
    v96[0] = v91; /*0x10031d74a*/
    v96[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x10031d758*/
    v96[2] = &v107; /*0x10031d763*/
    v96[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10031d771*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v97, &unk_1018F54FE, v96); /*0x10031d78d*/
    v7 = v97[0]; /*0x10031d792*/
    v8 = v97[1]; /*0x10031d799*/
    v9 = v97[2]; /*0x10031d7a0*/
    if ( (v107 & 3) == 1 ) /*0x10031d7b3*/
    {
      v105 = a1; /*0x10031d7b5*/
      v115 = (_QWORD *)(v107 - 1); /*0x10031d7c0*/
      v10 = *(_QWORD *)(v107 - 1); /*0x10031d7c4*/
      v11 = *(_QWORD *)(v107 + 7); /*0x10031d7c8*/
      if ( *(_QWORD *)v11 ) /*0x10031d7cc*/
        (*(void (__fastcall **)(_QWORD))v11)(*(_QWORD *)(v107 - 1)); /*0x10031d7d7*/
      v12 = *(_QWORD *)(v11 + 8); /*0x10031d7d9*/
      if ( v12 ) /*0x10031d7e0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16)); /*0x10031d7e9*/
      *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, 24, 8); /*0x10031d7fc*/
      v6 = v105; /*0x10031d801*/
    }
    v6[1] = v7; /*0x10031d808*/
    v6[2] = v8; /*0x10031d80c*/
    v6[3] = v9; /*0x10031d810*/
    *v6 = 10; /*0x10031d814*/
    return *(double *)v13.i64; /*0x10031d81b*/
  }
  v93 = a3; /*0x10031d820*/
  v105 = a1; /*0x10031d827*/
  v106 = v111; /*0x10031d82e*/
  v115 = (_QWORD *)v112; /*0x10031d839*/
  v96[0] = v112; /*0x10031d83d*/
  v102 = v113; /*0x10031d844*/
  v96[1] = v113; /*0x10031d84b*/
  v96[2] = 0; /*0x10031d852*/
  v96[3] = 0; /*0x10031d85d*/
  serde_json::de::from_trait::h89c510e88e63bfb2(v97, v96); /*0x10031d879*/
  if ( LOBYTE(v97[0]) == 6 ) /*0x10031d887*/
  {
    v18 = (_QWORD *)v97[1]; /*0x10031d88d*/
    v107 = v97[1]; /*0x10031d894*/
    v111 = 0; /*0x10031d898*/
    v112 = 1; /*0x10031d8a0*/
    v113 = 0; /*0x10031d8a8*/
    v96[2] = 1610612768; /*0x10031d8b0*/
    v96[0] = &v111; /*0x10031d8bb*/
    v96[1] = &anon_d9d2f5b2094eba1d5a276dc1a2756762_1133; /*0x10031d8c9*/
    if ( (unsigned __int8)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d( /*0x10031d8db*/
                            &v107,
                            v96,
                            v14,
                            v15,
                            v16,
                            v17) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10031e805*/
        &anon_d9d2f5b2094eba1d5a276dc1a2756762_1134,
        55,
        v117,
        &anon_d9d2f5b2094eba1d5a276dc1a2756762_1159,
        &anon_d9d2f5b2094eba1d5a276dc1a2756762_1136);
    v19 = v111; /*0x10031d8e8*/
    v20 = v112; /*0x10031d8ec*/
    v116 = v113; /*0x10031d8f4*/
    v21 = *v18; /*0x10031d8f8*/
    if ( *v18 != 1 ) /*0x10031d900*/
    {
LABEL_12:
      if ( !v21 ) /*0x10031d909*/
      {
        v22 = v18[2]; /*0x10031d90f*/
        if ( v22 ) /*0x10031d916*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18[1], v22, 1); /*0x10031d925*/
      }
      goto LABEL_35; /*0x10031d92a*/
    }
LABEL_34:
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3a76a939600446ed(v18 + 1); /*0x10031daca*/
LABEL_35:
    v39 = 40; /*0x10031dad3*/
    v40 = 8; /*0x10031dad8*/
    v41 = v18; /*0x10031dadd*/
LABEL_36:
    *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v39, v40); /*0x10031dae0*/
    goto LABEL_37; /*0x10031dae0*/
  }
  v107 = v97[0]; /*0x10031d93b*/
  v23 = v97[1]; /*0x10031d941*/
  v108 = v97[1]; /*0x10031d956*/
  v109 = v97[2]; /*0x10031d95a*/
  v110 = v97[3]; /*0x10031d95e*/
  if ( LOBYTE(v97[0]) != 5 ) /*0x10031d967*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v97, v97[2], v97[1]); /*0x10031da55*/
    v19 = 33; /*0x10031da5a*/
    v37 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x10031da6a*/
    if ( v37 ) /*0x10031da72*/
    {
      v20 = (__int64)v37; /*0x10031da78*/
      qmemcpy(v37, "auth backup root is not an object", 33); /*0x10031daaf*/
      v38 = 33; /*0x10031dab6*/
      goto LABEL_32; /*0x10031dab6*/
    }
    goto LABEL_169; /*0x10031da72*/
  }
  if ( !v97[1] ) /*0x10031d970*/
    goto LABEL_79; /*0x10031d970*/
  v103 = v97[2]; /*0x10031d976*/
  v104 = v97[2]; /*0x10031d97d*/
  v116 = v97[1]; /*0x10031d984*/
LABEL_18:
  v24 = v23 + 360; /*0x10031d988*/
  v25 = *(unsigned __int16 *)(v23 + 626); /*0x10031d98f*/
  v94 = v23; /*0x10031d996*/
  v26 = (_BYTE *)(v23 - 31); /*0x10031d99d*/
  v95 = v25; /*0x10031d9a1*/
  v27 = 3LL * (unsigned int)(8 * v25); /*0x10031d9af*/
  v28 = -1; /*0x10031d9b3*/
  do /*0x10031da14*/
  {
    if ( !v27 ) /*0x10031d9c3*/
    {
      v28 = v95; /*0x10031da22*/
LABEL_28:
      if ( !v104 ) /*0x10031da34*/
        goto LABEL_64; /*0x10031da34*/
      --v104; /*0x10031da3a*/
      v23 = *(_QWORD *)(v94 + 8 * v28 + 632); /*0x10031da48*/
      goto LABEL_18; /*0x10031da50*/
    }
    v29 = v24 + 24; /*0x10031d9c5*/
    v30 = *(const void **)(v24 + 8); /*0x10031d9c9*/
    v31 = *(_QWORD *)(v24 + 16); /*0x10031d9cd*/
    v32 = v31 - 25; /*0x10031d9d4*/
    if ( v31 >= 0x19 ) /*0x10031d9dd*/
      v31 = 25; /*0x10031d9dd*/
    v33 = -(__int64)v32; /*0x10031d9e1*/
    v34 = memcmp( /*0x10031d9eb*/
            "aimami_router_unlock_authrouter unlock missing-authrouter unlockrouter unlock auth.jsonrouter unlock auth backuprouter unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanuporphaned missing-authorphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup",
            v30,
            v31);
    if ( v34 ) /*0x10031d9f4*/
      v33 = v34; /*0x10031d9f4*/
    v36 = (v33 > 0) - (v33 < 0); /*0x10031da01*/
    v26 += 32; /*0x10031da03*/
    ++v28; /*0x10031da07*/
    v27 -= 24; /*0x10031da0a*/
    v24 = v29; /*0x10031da0e*/
  }
  while ( v36 == 1 ); /*0x10031da14*/
  if ( v36 ) /*0x10031da1b*/
    goto LABEL_28; /*0x10031da1b*/
  if ( *(v26 - 1) == 1 && *v26 ) /*0x10031dd93*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x10031dd9d*/
      "aimami_router_unlock_authrouter unlock missing-authrouter unlockrouter unlock auth.jsonrouter unlock auth backuprouter unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanuporphaned missing-authorphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup",
      v30,
      v35);
    v19 = 41; /*0x10031dda2*/
    v55 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(41, 1); /*0x10031ddb2*/
    if ( v55 ) /*0x10031ddc1*/
    {
      v20 = (__int64)v55; /*0x10031ddc7*/
      qmemcpy(v55, "backup contains AiMaMi router unlock auth", 41); /*0x10031de0c*/
      v38 = 41; /*0x10031de13*/
      goto LABEL_32; /*0x10031de18*/
    }
LABEL_169:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v19); /*0x10031e831*/
  }
LABEL_64:
  v56 = v116; /*0x10031de37*/
LABEL_65:
  v57 = v56 + 360; /*0x10031de3b*/
  v58 = *(unsigned __int16 *)(v56 + 626); /*0x10031de42*/
  v116 = v56; /*0x10031de49*/
  v59 = (__int64 *)(v56 - 8); /*0x10031de4d*/
  v104 = v58; /*0x10031de51*/
  v60 = 3LL * (unsigned int)(8 * v58); /*0x10031de5f*/
  v61 = -1; /*0x10031de63*/
  do /*0x10031dec4*/
  {
    if ( !v60 ) /*0x10031de73*/
    {
      v61 = v104; /*0x10031ded6*/
      v67 = v103; /*0x10031dedd*/
LABEL_75:
      v68 = v67 == 0; /*0x10031dee4*/
      v69 = v67 - 1; /*0x10031dee4*/
      if ( v68 ) /*0x10031deec*/
        goto LABEL_79; /*0x10031deec*/
      v103 = v69; /*0x10031deee*/
      v56 = *(_QWORD *)(v116 + 8 * v61 + 632); /*0x10031def5*/
      goto LABEL_65; /*0x10031defd*/
    }
    v62 = v57 + 24; /*0x10031de75*/
    v63 = *(_QWORD *)(v57 + 16); /*0x10031de7d*/
    v64 = v63 - 14; /*0x10031de84*/
    if ( v63 >= 0xE ) /*0x10031de8d*/
      v63 = 14; /*0x10031de8d*/
    v20 = -(__int64)v64; /*0x10031de91*/
    v65 = memcmp("OPENAI_API_KEYtokens", *(const void **)(v57 + 8), v63); /*0x10031de9b*/
    if ( v65 ) /*0x10031dea4*/
      v20 = v65; /*0x10031dea4*/
    v66 = (v20 > 0) - (v20 < 0); /*0x10031deb1*/
    v59 += 4; /*0x10031deb3*/
    ++v61; /*0x10031deb7*/
    v60 -= 24; /*0x10031deba*/
    v57 = v62; /*0x10031debe*/
  }
  while ( v66 == 1 ); /*0x10031dec4*/
  v67 = v103; /*0x10031decb*/
  if ( v66 ) /*0x10031ded2*/
    goto LABEL_75; /*0x10031ded2*/
  if ( *((_BYTE *)v59 - 24) == 3 ) /*0x10031df07*/
  {
    v70 = (unsigned __int8 *)*(v59 - 1); /*0x10031df09*/
    v73 = *v59; /*0x10031df0d*/
    v71 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v70, *v59); /*0x10031df10*/
    LOBYTE(v73) = v71 == nullptr || v72 == 0; /*0x10031df22*/
    if ( (_BYTE)v73 != 1 ) /*0x10031df29*/
    {
      if ( v72 >= 0x17 /*0x10031e5dc*/
        && (v13 = _mm_or_si128(
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v71), (__m128i)xmmword_1016E9A90),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v71 + 7)), (__m128i)xmmword_1016E9A80)),
            _mm_testz_si128(v13, v13)) )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v70, v73, v72); /*0x10031e76b*/
        v19 = 39; /*0x10031e770*/
        v88 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1); /*0x10031e780*/
        if ( !v88 ) /*0x10031e78f*/
          goto LABEL_169; /*0x10031e78f*/
        v20 = (__int64)v88; /*0x10031e795*/
        qmemcpy(v88, "backup contains AiMaMi virtual API auth", 39); /*0x10031e7da*/
        v38 = 39; /*0x10031e7dd*/
LABEL_32:
        v116 = v38; /*0x10031dabb*/
      }
      else
      {
        v19 = 0x8000000000000000LL; /*0x10031e5e2*/
      }
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v107); /*0x10031dac3*/
      goto LABEL_37; /*0x10031dac8*/
    }
  }
LABEL_79:
  v114 = v110; /*0x10031df2f*/
  v113 = v109; /*0x10031df3b*/
  v112 = v108; /*0x10031df47*/
  v111 = v107; /*0x10031df4b*/
  serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..value..Value$GT$::deserialize_struct::h7eb21866c9d2e9ef(v96); /*0x10031df73*/
  v78 = v96[0]; /*0x10031df7f*/
  if ( v96[0] == 0x8000000000000001LL ) /*0x10031df96*/
  {
    v18 = (_QWORD *)v96[1]; /*0x10031df9c*/
    v101 = v96[1]; /*0x10031dfa3*/
    v98 = 0; /*0x10031dfaa*/
    v99 = 1; /*0x10031dfb5*/
    v100 = 0; /*0x10031dfc0*/
    v113 = 1610612768; /*0x10031dfcb*/
    v111 = (signed __int64)&v98; /*0x10031dfda*/
    v112 = (__int64)&anon_d9d2f5b2094eba1d5a276dc1a2756762_1133; /*0x10031dfe5*/
    if ( (unsigned __int8)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d( /*0x10031dff4*/
                            &v101,
                            &v111,
                            v74,
                            v75,
                            v76,
                            v77) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10031e82a*/
        &anon_d9d2f5b2094eba1d5a276dc1a2756762_1134,
        55,
        v117,
        &anon_d9d2f5b2094eba1d5a276dc1a2756762_1159,
        &anon_d9d2f5b2094eba1d5a276dc1a2756762_1136);
    v19 = v98; /*0x10031e001*/
    v20 = v99; /*0x10031e008*/
    v116 = v100; /*0x10031e016*/
    v21 = *v18; /*0x10031e01a*/
    if ( *v18 != 1 ) /*0x10031e022*/
      goto LABEL_12; /*0x10031e022*/
    goto LABEL_34; /*0x10031e022*/
  }
  v79 = v96[1]; /*0x10031e036*/
  v20 = v96[2]; /*0x10031e03d*/
  v80 = v96[3]; /*0x10031e044*/
  memcpy(&v97[4], &v96[4], 0x90u); /*0x10031e05e*/
  v97[1] = v96[1]; /*0x10031e063*/
  v97[2] = v96[2]; /*0x10031e06a*/
  v97[3] = v96[3]; /*0x10031e071*/
  v97[0] = v96[0]; /*0x10031e078*/
  v81 = codexmate_lib::core::auth::is_aimami_managed_virtual_auth::hd38d41c44ff05d4c(v97); /*0x10031e086*/
  v116 = v79; /*0x10031e08d*/
  if ( !v81 ) /*0x10031e091*/
  {
    v19 = 0x8000000000000000LL; /*0x10031e3b2*/
    if ( !(unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::h5bcda0a67c51943b(v97) ) /*0x10031e3ad*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v97, &v96[4], v85); /*0x10031e3c4*/
      v19 = 61; /*0x10031e3c9*/
      v86 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(61, 1); /*0x10031e3d9*/
      if ( !v86 ) /*0x10031e3e1*/
LABEL_170:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v19); /*0x10031e840*/
      v20 = (__int64)v86; /*0x10031e3e7*/
      qmemcpy(v86, "backup contains neither user OAuth auth nor user API-key auth", 61); /*0x10031e456*/
    }
    if ( 2 * v78 ) /*0x10031e459*/
      *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v78, 1); /*0x10031e472*/
    if ( v80 != 0x8000000000000000LL && v80 ) /*0x10031e489*/
      *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[4], v80, 1); /*0x10031e49a*/
    if ( v97[6] != 0x8000000000000000LL && v97[6] ) /*0x10031e4b8*/
      *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[7], v97[6], 1); /*0x10031e4c6*/
    if ( v97[9] != 0x8000000000000000LL && v97[9] ) /*0x10031e4e4*/
      *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[10], v97[9], 1); /*0x10031e4f2*/
    if ( v97[12] != 0x8000000000000000LL && v97[12] ) /*0x10031e510*/
      *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[13], v97[12], 1); /*0x10031e51e*/
    if ( v97[15] != 0x8000000000000000LL && v97[15] ) /*0x10031e53c*/
      *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[16], v97[15], 1); /*0x10031e54a*/
    if ( v97[18] != 0x8000000000000000LL && v97[18] ) /*0x10031e568*/
      *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[19], v97[18], 1); /*0x10031e576*/
    v116 = 61; /*0x10031e580*/
    goto LABEL_37; /*0x10031e584*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v97, &v96[4], v82); /*0x10031e097*/
  v19 = 43; /*0x10031e09c*/
  v83 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(43, 1); /*0x10031e0ac*/
  if ( !v83 ) /*0x10031e0b4*/
    goto LABEL_170; /*0x10031e0b4*/
  v20 = (__int64)v83; /*0x10031e0ba*/
  qmemcpy(v83, "backup contains AiMaMi managed virtual auth", 43); /*0x10031e0ff*/
  if ( 2 * v78 ) /*0x10031e109*/
    *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v78, 1); /*0x10031e122*/
  if ( v80 != 0x8000000000000000LL && v80 ) /*0x10031e139*/
    *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[4], v80, 1); /*0x10031e14a*/
  if ( v97[6] != 0x8000000000000000LL && v97[6] ) /*0x10031e168*/
    *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[7], v97[6], 1); /*0x10031e176*/
  if ( v97[9] != 0x8000000000000000LL && v97[9] ) /*0x10031e194*/
    *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[10], v97[9], 1); /*0x10031e1a2*/
  if ( v97[12] != 0x8000000000000000LL && v97[12] ) /*0x10031e1c0*/
    *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[13], v97[12], 1); /*0x10031e1ce*/
  if ( v97[15] != 0x8000000000000000LL && v97[15] ) /*0x10031e1ec*/
    *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[16], v97[15], 1); /*0x10031e1fa*/
  v39 = v97[18]; /*0x10031e1ff*/
  v116 = 43; /*0x10031e20b*/
  if ( v97[18] != 0x8000000000000000LL && v97[18] ) /*0x10031e225*/
  {
    v41 = (_QWORD *)v97[19]; /*0x10031e22b*/
    v40 = 1; /*0x10031e232*/
    goto LABEL_36; /*0x10031e237*/
  }
LABEL_37:
  if ( v19 == 0x8000000000000000LL ) /*0x10031daf2*/
  {
    v42 = v105; /*0x10031dafb*/
    v105[1] = v106; /*0x10031db02*/
    v42[2] = v115; /*0x10031db0a*/
    v42[3] = v102; /*0x10031db15*/
    *v42 = 11; /*0x10031db19*/
    return *(double *)v13.i64; /*0x10031db20*/
  }
  v111 = (signed __int64)v115; /*0x10031db29*/
  v112 = v102; /*0x10031db34*/
  v113 = 0; /*0x10031db38*/
  v114 = 0; /*0x10031db40*/
  serde_json::de::from_trait::h89c510e88e63bfb2(v96, &v111); /*0x10031db53*/
  if ( LOBYTE(v96[0]) != 6 ) /*0x10031db5f*/
  {
    v110 = v96[3]; /*0x10031dc5e*/
    v109 = v96[2]; /*0x10031dc69*/
    v108 = v96[1]; /*0x10031dc7b*/
    v107 = v96[0]; /*0x10031dc7f*/
    v47 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10031dc93*/
                     "aimami_router_unlock_authrouter unlock missing-authrouter unlockrouter unlock auth.jsonrouter unlock auth backuprouter unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanuporphaned missing-authorphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup",
                     25,
                     &v107);
    if ( !v47 || *v47 != 1 || !v47[1] ) /*0x10031dca2*/
    {
      v48 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10031dcbc*/
              "OPENAI_API_KEYtokens",
              14,
              &v107);
      if ( v48 /*0x10031dcdc*/
        && *(_BYTE *)v48 == 3
        && (v49 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(
                    *(unsigned __int8 **)(v48 + 16),
                    *(_QWORD *)(v48 + 24)),
            v50 >= 0x17) )
      {
        v13 = _mm_or_si128( /*0x10031e5a2*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v49), (__m128i)xmmword_1016E9A90),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v49 + 7)), (__m128i)xmmword_1016E9A80));
        v51 = _mm_testz_si128(v13, v13); /*0x10031e5ab*/
      }
      else
      {
        v51 = 0; /*0x10031dce2*/
      }
      v52 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("tokens", 6, &v107); /*0x10031dcf5*/
      if ( v52 && *(_BYTE *)v52 == 5 ) /*0x10031dd06*/
      {
        if ( ((*(_QWORD *)(v52 + 24) == 0) & v51) == 0 ) /*0x10031dd17*/
          goto LABEL_53; /*0x10031dd17*/
      }
      else if ( !v51 ) /*0x10031de20*/
      {
LABEL_53:
        serde_json::de::from_trait::h5e79430ffdcb9680(v97, &v111); /*0x10031dd1d*/
        if ( v97[0] == 0x8000000000000001LL ) /*0x10031dd41*/
        {
          v53 = v97[1]; /*0x10031dd47*/
          if ( *(_QWORD *)v97[1] == 1 ) /*0x10031dd59*/
          {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3a76a939600446ed(v97[1] + 8LL); /*0x10031e5fc*/
          }
          else if ( !*(_QWORD *)v97[1] ) /*0x10031dd4e*/
          {
            v54 = *(_QWORD *)(v97[1] + 16LL); /*0x10031dd68*/
            if ( v54 ) /*0x10031dd6f*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v97[1] + 8LL), v54, 1); /*0x10031dd7e*/
          }
          *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, 40, 8); /*0x10031e60e*/
          v84 = 0; /*0x10031e613*/
        }
        else
        {
          memcpy(v96, v97, sizeof(v96)); /*0x10031e252*/
          v84 = codexmate_lib::core::auth::is_aimami_managed_virtual_auth::hd38d41c44ff05d4c(v96); /*0x10031e25f*/
          if ( v96[0] != 0x8000000000000000LL && v96[0] ) /*0x10031e27e*/
            *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96[1], v96[0], 1); /*0x10031e28c*/
          if ( v96[3] != 0x8000000000000000LL && v96[3] ) /*0x10031e2aa*/
            *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96[4], v96[3], 1); /*0x10031e2b8*/
          if ( v96[6] != 0x8000000000000000LL && v96[6] ) /*0x10031e2d6*/
            *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96[7], v96[6], 1); /*0x10031e2e4*/
          if ( v96[9] != 0x8000000000000000LL && v96[9] ) /*0x10031e302*/
            *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96[10], v96[9], 1); /*0x10031e310*/
          if ( v96[12] != 0x8000000000000000LL && v96[12] ) /*0x10031e32e*/
            *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96[13], v96[12], 1); /*0x10031e33c*/
          if ( v96[15] != 0x8000000000000000LL && v96[15] ) /*0x10031e35a*/
            *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96[16], v96[15], 1); /*0x10031e368*/
          if ( v96[18] != 0x8000000000000000LL && v96[18] ) /*0x10031e38a*/
            *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96[19], v96[18], 1); /*0x10031e39c*/
        }
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v107); /*0x10031e61a*/
        if ( !v84 ) /*0x10031e622*/
          goto LABEL_41; /*0x10031e622*/
LABEL_157:
        v97[0] = v19; /*0x10031e628*/
        v97[1] = v20; /*0x10031e62f*/
        v97[2] = v116; /*0x10031e63a*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10031e64f*/
        {
          v111 = (signed __int64)v97; /*0x10031e655*/
          v112 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10031e660*/
          v96[6] = 2; /*0x10031e664*/
          v96[7] = "codexmate_lib::core::relay::router_unlock_authaimami_router_unlock_authrouter unlock missing-authrouter unlockrouter unlock auth.jsonrouter unlock auth backuprouter unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanuporphaned missing-authorphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup"; /*0x10031e676*/
          v96[8] = 46; /*0x10031e67d*/
          v96[10] = &unk_1018F54B0; /*0x10031e68f*/
          v96[11] = &v111; /*0x10031e69a*/
          v96[0] = 0; /*0x10031e6a1*/
          v96[1] = "codexmate_lib::core::relay::router_unlock_authaimami_router_unlock_authrouter unlock missing-authrouter unlockrouter unlock auth.jsonrouter unlock auth backuprouter unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanuporphaned missing-authorphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup"; /*0x10031e6ac*/
          v96[2] = 46; /*0x10031e6b3*/
          v96[3] = 0; /*0x10031e6be*/
          v96[4] = "src/core/relay/router_unlock_auth.rs"; /*0x10031e6d0*/
          v96[5] = 36; /*0x10031e6d7*/
          v96[9] = 0x14600000001LL; /*0x10031e6ec*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v117, v96); /*0x10031e6fe*/
          v19 = v97[0]; /*0x10031e703*/
        }
        v87 = v105; /*0x10031e70a*/
        v105[1] = 0x8000000000000000LL; /*0x10031e71b*/
        *v87 = 11; /*0x10031e71f*/
        if ( !v19 ) /*0x10031e729*/
          goto LABEL_162; /*0x10031e729*/
        v46 = v97[1]; /*0x10031e72b*/
        v45 = v19; /*0x10031e737*/
        goto LABEL_161; /*0x10031e737*/
      }
    }
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v107); /*0x10031de2a*/
    goto LABEL_157; /*0x10031de32*/
  }
  core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h4c10ab9eca38c556(v96); /*0x10031db6c*/
LABEL_41:
  v97[0] = v19; /*0x10031db71*/
  v97[1] = v20; /*0x10031db78*/
  v97[2] = v116; /*0x10031db83*/
  v111 = (signed __int64)v92; /*0x10031db91*/
  v112 = v93; /*0x10031db9c*/
  v96[0] = v91; /*0x10031dba7*/
  v96[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x10031dbb5*/
  v96[2] = &v111; /*0x10031dbc0*/
  v96[3] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10031dbce*/
  v96[4] = v97; /*0x10031dbd5*/
  v96[5] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10031dbe3*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v90, &unk_1018F545F, v96); /*0x10031dbff*/
  v43 = v105; /*0x10031dc0b*/
  v105[3] = v90[2]; /*0x10031dc12*/
  v44 = v90[0]; /*0x10031dc16*/
  v43[2] = v90[1]; /*0x10031dc24*/
  v43[1] = v44; /*0x10031dc28*/
  *v43 = 10; /*0x10031dc2c*/
  v45 = v97[0]; /*0x10031dc33*/
  if ( !v97[0] ) /*0x10031dc3d*/
    goto LABEL_162; /*0x10031dc3d*/
  v46 = v97[1]; /*0x10031dc43*/
LABEL_161:
  *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v45, 1); /*0x10031e73a*/
LABEL_162:
  if ( v106 ) /*0x10031e749*/
    *(double *)v13.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, v106, 1); /*0x10031e754*/
  return *(double *)v13.i64; /*0x10031e759*/
}
