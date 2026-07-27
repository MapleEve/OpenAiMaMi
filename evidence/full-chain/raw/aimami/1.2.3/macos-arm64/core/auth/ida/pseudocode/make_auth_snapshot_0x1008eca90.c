// __ZN13codexmate_lib4core4auth18make_auth_snapshot @ 0x1008eca90 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __m128i a5)
{
  __int64 *v8; // rbx
  void *v9; // rax
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 **v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rax
  void *v26; // rdx
  signed __int64 v27; // r13
  void *v28; // rax
  void *v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rax
  signed __int64 v32; // rdx
  __int64 v33; // r15
  __int64 v34; // r15
  const void *v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdi
  _QWORD *v39; // r13
  __int64 v40; // r14
  signed __int64 v41; // rsi
  void *v42; // rax
  __int64 v43; // rdi
  char *v44; // r14
  __int64 v45; // r12
  unsigned __int64 v46; // rax
  char *v48; // rsi
  __int64 i; // rdi
  unsigned __int64 v50; // rax
  __m128i v51; // xmm2
  __int64 v53; // r11
  _QWORD *v54; // r14
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r13
  __int64 v60; // r14
  size_t v61; // rdx
  __int64 *v62; // r12
  size_t v63; // rbx
  __int64 v64; // rbx
  int v65; // eax
  bool v66; // zf
  bool v67; // sf
  char v68; // cl
  bool v69; // r14
  __int64 v70; // rsi
  __int64 v71; // rdi
  char v72; // al
  __int64 v73; // rdx
  char v74; // al
  __int64 v75; // rdx
  char v76; // al
  __int64 v77; // rdx
  __int64 *v78; // rdi
  __int64 v79; // rsi
  __int64 *v80; // r12
  __int64 v81; // r14
  void (__fastcall *v82)(__int64); // rax
  __int64 v83; // rsi
  int v84; // edx
  signed __int64 v85; // r12
  char v86; // r14
  __int64 v87; // r13
  __int64 v88; // r14
  void *v89; // rsi
  __int64 v90; // rdi
  char v91; // r13
  __int64 v92; // rdx
  int v93; // edx
  __int64 v94; // rax
  unsigned __int32 v95; // eax
  unsigned int v96; // ecx
  int v97; // edx
  __int64 v98; // r12
  size_t v99; // rax
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rax
  signed __int64 v102; // rax
  __int64 v103; // rax
  signed __int64 v104; // r14
  char *v105; // r15
  const void *v107; // r12
  size_t v108; // r14
  __int64 v109; // r13
  unsigned __int64 *v110[6]; // [rsp+8h] [rbp-338h] BYREF
  unsigned __int64 *v111[6]; // [rsp+38h] [rbp-308h] BYREF
  _QWORD v112[3]; // [rsp+68h] [rbp-2D8h] BYREF
  __int64 v113; // [rsp+80h] [rbp-2C0h] BYREF
  int v114; // [rsp+88h] [rbp-2B8h]
  __int64 v115; // [rsp+90h] [rbp-2B0h] BYREF
  int v116; // [rsp+98h] [rbp-2A8h]
  __int64 v117; // [rsp+A0h] [rbp-2A0h] BYREF
  __int64 v118; // [rsp+A8h] [rbp-298h]
  __int64 v119; // [rsp+B8h] [rbp-288h]
  __int64 v120; // [rsp+C0h] [rbp-280h]
  __int64 v121; // [rsp+C8h] [rbp-278h]
  __int64 v122; // [rsp+D0h] [rbp-270h]
  char *v123; // [rsp+D8h] [rbp-268h] BYREF
  _QWORD __dst[17]; // [rsp+E0h] [rbp-260h] BYREF
  char *v125; // [rsp+168h] [rbp-1D8h] BYREF
  __int64 v126; // [rsp+170h] [rbp-1D0h]
  void *v127; // [rsp+178h] [rbp-1C8h]
  void *v128; // [rsp+180h] [rbp-1C0h]
  void *v129; // [rsp+188h] [rbp-1B8h]
  void *v130; // [rsp+190h] [rbp-1B0h]
  char *v131; // [rsp+198h] [rbp-1A8h] BYREF
  __int64 v132; // [rsp+1A0h] [rbp-1A0h]
  __int64 v133; // [rsp+1A8h] [rbp-198h]
  __int64 v134; // [rsp+1B0h] [rbp-190h]
  unsigned __int64 v135; // [rsp+1B8h] [rbp-188h] BYREF
  __int64 v136; // [rsp+1C0h] [rbp-180h]
  void *v137; // [rsp+1C8h] [rbp-178h]
  char *v138; // [rsp+1D0h] [rbp-170h] BYREF
  __int64 v139; // [rsp+1D8h] [rbp-168h]
  void *v140; // [rsp+1E0h] [rbp-160h]
  char *v141; // [rsp+1E8h] [rbp-158h] BYREF
  __int64 v142; // [rsp+1F0h] [rbp-150h]
  __int64 v143; // [rsp+1F8h] [rbp-148h]
  __int64 v144; // [rsp+200h] [rbp-140h]
  __int64 v145; // [rsp+208h] [rbp-138h] BYREF
  __int64 v146; // [rsp+210h] [rbp-130h]
  unsigned __int64 v147; // [rsp+218h] [rbp-128h] BYREF
  __int64 v148; // [rsp+220h] [rbp-120h]
  size_t v149; // [rsp+228h] [rbp-118h]
  __int64 v150; // [rsp+230h] [rbp-110h]
  char *v151; // [rsp+238h] [rbp-108h]
  __int64 v152; // [rsp+240h] [rbp-100h]
  signed __int64 v153; // [rsp+248h] [rbp-F8h]
  char *v154; // [rsp+250h] [rbp-F0h] BYREF
  __int64 v155; // [rsp+258h] [rbp-E8h]
  void *__src[17]; // [rsp+260h] [rbp-E0h] BYREF
  char *v157; // [rsp+2E8h] [rbp-58h]
  size_t __n; // [rsp+2F0h] [rbp-50h]
  __int64 v159; // [rsp+2F8h] [rbp-48h]
  unsigned __int64 v160; // [rsp+300h] [rbp-40h]
  __int64 v161; // [rsp+308h] [rbp-38h]
  char v162; // [rsp+317h] [rbp-29h]

  v8 = a1; /*0x1008ecaad*/
  if ( (unsigned __int8)codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h4d4a884f31f32b45(a2) ) /*0x1008ecab3*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2); /*0x1008ecabc*/
    v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(66, 1); /*0x1008ecacb*/
    if ( !v9 ) /*0x1008ecad3*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 66); /*0x1008edb22*/
    v10 = (__int64)v9; /*0x1008ecad9*/
    memcpy(v9, "auth.json contains AiMaMi managed virtual auth; not a real account", 0x42u); /*0x1008ecaeb*/
    a1[1] = 10; /*0x1008ecaf0*/
    a1[2] = 66; /*0x1008ecaf8*/
    a1[3] = v10; /*0x1008ecb00*/
    a1[4] = 66; /*0x1008ecb04*/
    *a1 = 2; /*0x1008ecb0c*/
    return v8; /*0x1008ecb13*/
  }
  v11 = 0; /*0x1008ecb18*/
  v12 = a2[8]; /*0x1008ecb1f*/
  v13 = 0; /*0x1008ecb23*/
  if ( !__OFSUB__(0, a2[6]) ) /*0x1008ecb28*/
    v13 = a2[7]; /*0x1008ecb2a*/
  codexmate_lib::core::auth::decode_jwt_claims::hb792be1e7518c525(v111, v13, v12, *(double *)a5.i64); /*0x1008ecb35*/
  if ( !__OFSUB__(0, a2[9]) ) /*0x1008ecb42*/
    v11 = a2[10]; /*0x1008ecb44*/
  codexmate_lib::core::auth::decode_jwt_claims::hb792be1e7518c525(v110, v11, a2[11], *(double *)a5.i64); /*0x1008ecb52*/
  v14 = v111; /*0x1008ecb65*/
  codexmate_lib::core::auth::nested_dict::hee321afd40c91aed( /*0x1008ecb71*/
    &v154,
    (__int64 *)v111,
    "https://api.openai.com/authhttps://api.openai.com/profilechatgpt_user_idchatgpt_plan_typechatgpt_subscription_active"
    "_untilauth.json contains AiMaMi managed virtual auth; not a real account",
    0x1Bu);
  if ( v154 ) /*0x1008ecb7e*/
  {
    __dst[4] = __src[3]; /*0x1008ecb87*/
    __dst[3] = __src[2]; /*0x1008ecb95*/
    __dst[2] = __src[1]; /*0x1008ecba3*/
    __dst[1] = __src[0]; /*0x1008ecbb1*/
    __dst[0] = v155; /*0x1008ecbc6*/
    v123 = v154; /*0x1008ecbcd*/
  }
  else
  {
    v14 = v110; /*0x1008ecbe4*/
    codexmate_lib::core::auth::nested_dict::hee321afd40c91aed( /*0x1008ecbf0*/
      &v123,
      (__int64 *)v110,
      "https://api.openai.com/authhttps://api.openai.com/profilechatgpt_user_idchatgpt_plan_typechatgpt_subscription_acti"
      "ve_untilauth.json contains AiMaMi managed virtual auth; not a real account",
      0x1Bu);
  }
  if ( v123 ) /*0x1008ecbfd*/
  {
    v146 = __dst[4]; /*0x1008ecc06*/
    v145 = __dst[3]; /*0x1008ecc14*/
    v144 = __dst[2]; /*0x1008ecc22*/
    v143 = __dst[1]; /*0x1008ecc30*/
    v142 = __dst[0]; /*0x1008ecc45*/
    v141 = v123; /*0x1008ecc4c*/
  }
  else
  {
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008ecc5c*/
    v18 = v15; /*0x1008ecc5e*/
    if ( *(_BYTE *)(v15 + 16) == 1 ) /*0x1008ecc65*/
    {
      v19 = *(_QWORD *)v15; /*0x1008ecc6b*/
      v20 = *(_QWORD *)(v18 + 8); /*0x1008ecc6e*/
    }
    else
    {
      v19 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008edad7*/
              &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
              v14,
              v16,
              v17);
      *(_QWORD *)v18 = v19; /*0x1008edadc*/
      *(_QWORD *)(v18 + 8) = v20; /*0x1008edadf*/
      *(_BYTE *)(v18 + 16) = 1; /*0x1008edae3*/
    }
    *(_QWORD *)v18 = v19 + 1; /*0x1008ecc76*/
    v144 = 0; /*0x1008ecc80*/
    v143 = 0; /*0x1008ecc8e*/
    v142 = 0; /*0x1008ecc9c*/
    v141 = (char *)anon_155c4da9b5393270cfa7378e2b52c417_32; /*0x1008eccaa*/
    v145 = v19; /*0x1008eccb1*/
    v146 = v20; /*0x1008eccb8*/
  }
  codexmate_lib::core::auth::nested_dict::hee321afd40c91aed( /*0x1008eccd9*/
    &v154,
    (__int64 *)v110,
    "https://api.openai.com/profilechatgpt_user_idchatgpt_plan_typechatgpt_subscription_active_untilauth.json contains AiMaMi managed virtual auth; not a real account",
    0x1Eu);
  if ( v154 ) /*0x1008ecce6*/
  {
    v130 = __src[3]; /*0x1008eccef*/
    v129 = __src[2]; /*0x1008eccfd*/
    v128 = __src[1]; /*0x1008ecd0b*/
    v127 = __src[0]; /*0x1008ecd19*/
    v126 = v155; /*0x1008ecd2e*/
    v125 = v154; /*0x1008ecd35*/
  }
  else
  {
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008ecd45*/
    v24 = v21; /*0x1008ecd47*/
    if ( *(_BYTE *)(v21 + 16) == 1 ) /*0x1008ecd4e*/
    {
      v25 = *(_QWORD *)v21; /*0x1008ecd54*/
      v26 = *(void **)(v24 + 8); /*0x1008ecd57*/
    }
    else
    {
      v25 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008edaed*/
              &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
              v110,
              v22,
              v23);
      *(_QWORD *)v24 = v25; /*0x1008edaf2*/
      *(_QWORD *)(v24 + 8) = v26; /*0x1008edaf5*/
      *(_BYTE *)(v24 + 16) = 1; /*0x1008edaf9*/
    }
    *(_QWORD *)v24 = v25 + 1; /*0x1008ecd5f*/
    v128 = nullptr; /*0x1008ecd69*/
    v127 = nullptr; /*0x1008ecd77*/
    v126 = 0; /*0x1008ecd85*/
    v125 = (char *)anon_155c4da9b5393270cfa7378e2b52c417_32; /*0x1008ecd93*/
    v129 = (void *)v25; /*0x1008ecd9a*/
    v130 = v26; /*0x1008ecda1*/
  }
  codexmate_lib::core::auth::string_val::h06aa957814d20bfc((signed __int64 *)&v154, (__int64 *)v111, &unk_101676711, 5u); /*0x1008ecdc2*/
  v161 = (__int64)a2; /*0x1008ecdd8*/
  v159 = a4; /*0x1008ecddc*/
  v119 = a3; /*0x1008ecde0*/
  if ( v154 != (char *)0x8000000000000000LL ) /*0x1008ecde7*/
  {
    __dst[1] = __src[0]; /*0x1008ece69*/
    __dst[0] = v155; /*0x1008ece7e*/
    v123 = v154; /*0x1008ece85*/
    v27 = (signed __int64)v154; /*0x1008ece8c*/
    goto LABEL_26; /*0x1008ece8c*/
  }
  codexmate_lib::core::auth::string_val::h06aa957814d20bfc( /*0x1008ece03*/
    (signed __int64 *)&v123,
    (__int64 *)&v125,
    &unk_101676711,
    5u);
  v27 = (signed __int64)v123; /*0x1008ece08*/
  if ( v123 != (char *)0x8000000000000000LL ) /*0x1008ece12*/
  {
LABEL_26:
    v29 = (void *)__dst[0]; /*0x1008ece98*/
    v30 = __dst[1]; /*0x1008ece9f*/
    goto LABEL_27; /*0x1008ece9f*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v123, &v125); /*0x1008ece18*/
  v27 = 15; /*0x1008ece1d*/
  v28 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x1008ece2d*/
  if ( !v28 ) /*0x1008ece35*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x1008edb31*/
  v29 = v28; /*0x1008ece3b*/
  qmemcpy(v28, "Unknown Account", 15); /*0x1008ece57*/
  v30 = 15; /*0x1008ece5b*/
LABEL_27:
  v31 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v29, v30); /*0x1008ecea6*/
  v33 = v32; /*0x1008eceae*/
  __n = v32; /*0x1008eceb4*/
  if ( v32 < 0 ) /*0x1008eceb8*/
  {
    v34 = 0; /*0x1008eceba*/
    goto LABEL_29; /*0x1008eceba*/
  }
  v35 = (const void *)v31; /*0x1008ecece*/
  if ( v32 ) /*0x1008eced4*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v30); /*0x1008eced6*/
    v36 = v33; /*0x1008ecedb*/
    v34 = 1; /*0x1008ecede*/
    v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v36, 1); /*0x1008ecee9*/
    if ( !v37 ) /*0x1008ecef1*/
LABEL_29:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v34, __n); /*0x1008ecebd*/
    v38 = v37; /*0x1008ecef3*/
    v33 = __n; /*0x1008ecef6*/
  }
  else
  {
    v38 = 1; /*0x1008ecefc*/
  }
  v150 = v38; /*0x1008ecf01*/
  memcpy((void *)v38, v35, v33); /*0x1008ecf0e*/
  if ( v27 ) /*0x1008ecf16*/
    *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v27, 1); /*0x1008ecf23*/
  v39 = (_QWORD *)v161; /*0x1008ecf32*/
  v40 = v150; /*0x1008ecf3a*/
  if ( *(_QWORD *)(v161 + 120) != 0x8000000000000000LL ) /*0x1008ecf41*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v154, v161 + 120); /*0x1008ecf4e*/
    v41 = (signed __int64)v154; /*0x1008ecf53*/
    if ( v154 != (char *)0x8000000000000000LL ) /*0x1008ecf5d*/
    {
      v43 = v155; /*0x1008ecff3*/
      v152 = (__int64)__src[0]; /*0x1008ed001*/
      if ( __src[0] ) /*0x1008ed00b*/
        goto LABEL_43; /*0x1008ed00b*/
      if ( v154 ) /*0x1008ed6cf*/
        *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v155, v154, 1); /*0x1008ed6da*/
    }
  }
  codexmate_lib::core::auth::string_val::h06aa957814d20bfc( /*0x1008ecf7d*/
    (signed __int64 *)&v154,
    (__int64 *)&v141,
    &unk_101677482,
    0x12u);
  v41 = (signed __int64)v154; /*0x1008ecf82*/
  if ( v154 == (char *)0x8000000000000000LL ) /*0x1008ecf8c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v154, 0x8000000000000000LL); /*0x1008ecf8e*/
    v152 = 15; /*0x1008ecf98*/
    v42 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x1008ecfa9*/
    if ( !v42 ) /*0x1008ecfb1*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x1008edb42*/
    v43 = (__int64)v42; /*0x1008ecfb7*/
    qmemcpy(v42, "unknown-account", 15); /*0x1008ecfd2*/
    v41 = 15; /*0x1008ecfd5*/
  }
  else
  {
    v43 = v155; /*0x1008ecfdc*/
    v152 = (__int64)__src[0]; /*0x1008ecfea*/
  }
LABEL_43:
  v151 = (char *)v43; /*0x1008ed01f*/
  v153 = v41; /*0x1008ed026*/
  codexmate_lib::core::auth::string_val::h06aa957814d20bfc( /*0x1008ed047*/
    (signed __int64 *)&v154,
    (__int64 *)&v141,
    "chatgpt_user_idchatgpt_plan_typechatgpt_subscription_active_untilauth.json contains AiMaMi managed virtual auth; not a real account",
    0xFu);
  if ( v154 == (char *)0x8000000000000000LL ) /*0x1008ed053*/
  {
    codexmate_lib::core::auth::string_val::h06aa957814d20bfc( /*0x1008ed06f*/
      (signed __int64 *)&v123,
      (__int64 *)&v141,
      &unk_10167747B,
      7u);
    if ( v123 == (char *)0x8000000000000000LL ) /*0x1008ed07b*/
    {
      alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v131, v40, v33); /*0x1008ed08a*/
      goto LABEL_48; /*0x1008ed08f*/
    }
  }
  else
  {
    __dst[1] = __src[0]; /*0x1008ed098*/
    __dst[0] = v155; /*0x1008ed0ad*/
    v123 = v154; /*0x1008ed0b4*/
  }
  v133 = __dst[1]; /*0x1008ed0cb*/
  v132 = __dst[0]; /*0x1008ed0e0*/
  v131 = v123; /*0x1008ed0e7*/
LABEL_48:
  codexmate_lib::core::auth::string_val::h06aa957814d20bfc( /*0x1008ed0ee*/
    (signed __int64 *)&v123,
    (__int64 *)&v141,
    "chatgpt_plan_typechatgpt_subscription_active_untilauth.json contains AiMaMi managed virtual auth; not a real account",
    0x11u);
  v44 = v123; /*0x1008ed10d*/
  if ( v123 == (char *)0x8000000000000000LL ) /*0x1008ed117*/
  {
    v162 = 8; /*0x1008ed119*/
  }
  else
  {
    v45 = __dst[0]; /*0x1008ed11f*/
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v154, __dst[0], __dst[1]); /*0x1008ed137*/
    if ( v44 ) /*0x1008ed13f*/
      *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1); /*0x1008ed14c*/
    v44 = (char *)v155; /*0x1008ed158*/
    v162 = 8; /*0x1008ed15f*/
    v160 = (unsigned __int64)v154; /*0x1008ed16d*/
    if ( v154 != (char *)0x8000000000000000LL ) /*0x1008ed174*/
    {
      v162 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v155, (__int64)__src[0]); /*0x1008ed18b*/
      goto LABEL_55; /*0x1008ed18b*/
    }
  }
  v160 = 0x8000000000000000LL; /*0x1008ed176*/
LABEL_55:
  v157 = v44; /*0x1008ed18e*/
  if ( !v144 ) /*0x1008ed19a*/
    goto LABEL_80; /*0x1008ed19a*/
  v46 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345( /*0x1008ed1b3*/
          &v145,
          "organizationstitle`DateTime - TimeDelta` overflowedchatgpt_account_user_idlast_refresh is outside the supporte"
          "d timestamp rangelast_refresh must be a timestamp string or numberexp",
          13);
  a5 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v46 >> 57), (__m128i)0LL); /*0x1008ed1d5*/
  v48 = v141 - 56; /*0x1008ed1da*/
  for ( i = 0; ; i += 16 ) /*0x1008ed1de*/
  {
    v50 = v142 & v46; /*0x1008ed1f8*/
    v51 = _mm_loadu_si128((const __m128i *)&v141[v50]); /*0x1008ed1fb*/
    _R10D = _mm_movemask_epi8(_mm_cmpeq_epi8(v51, a5)); /*0x1008ed208*/
    if ( _R10D ) /*0x1008ed210*/
      break; /*0x1008ed210*/
LABEL_61:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v51, (__m128i)-1LL)) ) /*0x1008ed257*/
      goto LABEL_80; /*0x1008ed25f*/
    v46 = v50 + i + 16; /*0x1008ed265*/
  }
  while ( 1 ) /*0x1008ed212*/
  {
    __asm { tzcnt r11d, r10d } /*0x1008ed212*/
    v53 = -56LL * (v142 & (v50 + _R11)); /*0x1008ed220*/
    if ( *(_QWORD *)&v48[v53 + 16] == 13 ) /*0x1008ed22a*/
    {
      v54 = *(_QWORD **)&v48[v53 + 8]; /*0x1008ed230*/
      v33 = *v54 ^ 0x617A696E6167726FLL; /*0x1008ed237*/
      if ( !(v33 | *(_QWORD *)((char *)v54 + 5) ^ 0x736E6F6974617A69LL) ) /*0x1008ed241*/
        break; /*0x1008ed241*/
    }
    _R11 = (unsigned int)(_R10D - 1); /*0x1008ed246*/
    LOWORD(_R11) = _R10D & (_R10D - 1); /*0x1008ed24a*/
    _R10D = _R11; /*0x1008ed24e*/
    if ( !(_WORD)_R11 ) /*0x1008ed251*/
      goto LABEL_61; /*0x1008ed251*/
  }
  if ( v141[v53 - 32] == 4 /*0x1008ed29e*/
    && *(_QWORD *)&v141[v53 - 8]
    && (v55 = *(_QWORD *)&v141[v53 - 16], *(_BYTE *)v55 == 5)
    && (v56 = *(_QWORD *)(v55 + 8)) != 0 )
  {
    v134 = *(_QWORD *)(v55 + 16); /*0x1008ed2a8*/
LABEL_68:
    v57 = v56 + 360; /*0x1008ed2af*/
    v58 = *(unsigned __int16 *)(v56 + 626); /*0x1008ed2b6*/
    v121 = v56; /*0x1008ed2bd*/
    v33 = v56 - 8; /*0x1008ed2c4*/
    v122 = v58; /*0x1008ed2c8*/
    v59 = 3LL * (unsigned int)(8 * v58); /*0x1008ed2d6*/
    v60 = -1; /*0x1008ed2da*/
    do /*0x1008ed35f*/
    {
      if ( !v59 ) /*0x1008ed2f3*/
      {
        v60 = v122; /*0x1008ed36d*/
LABEL_78:
        v39 = (_QWORD *)v161; /*0x1008ed374*/
        if ( !v134 ) /*0x1008ed38a*/
          goto LABEL_80; /*0x1008ed38a*/
        --v134; /*0x1008ed38c*/
        v56 = *(_QWORD *)(v121 + 8 * v60 + 632); /*0x1008ed393*/
        goto LABEL_68; /*0x1008ed39b*/
      }
      v120 = v57 + 24; /*0x1008ed2f9*/
      v61 = *(_QWORD *)(v57 + 16); /*0x1008ed304*/
      v62 = v8; /*0x1008ed308*/
      v63 = v61 - 5; /*0x1008ed30e*/
      if ( v61 >= 5 ) /*0x1008ed317*/
        v61 = 5; /*0x1008ed317*/
      v64 = -(__int64)v63; /*0x1008ed31b*/
      v65 = memcmp( /*0x1008ed325*/
              "title`DateTime - TimeDelta` overflowedchatgpt_account_user_idlast_refresh is outside the supported timestamp rangelast_refresh must be a timestamp string or numberexp",
              *(const void **)(v57 + 8),
              v61);
      if ( v65 ) /*0x1008ed32e*/
        v64 = v65; /*0x1008ed32e*/
      v66 = v64 == 0; /*0x1008ed332*/
      v67 = v64 < 0; /*0x1008ed332*/
      v8 = v62; /*0x1008ed335*/
      v68 = (!v67 && !v66) - v67; /*0x1008ed348*/
      v33 += 32; /*0x1008ed34a*/
      ++v60; /*0x1008ed34e*/
      v59 -= 24; /*0x1008ed351*/
      v57 = v120; /*0x1008ed355*/
    }
    while ( v68 == 1 ); /*0x1008ed35f*/
    if ( v68 ) /*0x1008ed366*/
      goto LABEL_78; /*0x1008ed366*/
    if ( *(_BYTE *)(v33 - 24) == 3 ) /*0x1008eda52*/
    {
      v107 = *(const void **)(v33 - 8); /*0x1008eda54*/
      v108 = *(_QWORD *)v33; /*0x1008eda58*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v154, *(_QWORD *)v33, 0, 1, 1); /*0x1008eda72*/
      v109 = v155; /*0x1008eda77*/
      if ( (_DWORD)v154 == 1 ) /*0x1008eda85*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v155, __src[0]); /*0x1008edb11*/
      v33 = (__int64)__src[0]; /*0x1008eda87*/
      memcpy(__src[0], v107, v108); /*0x1008eda97*/
      v147 = v109; /*0x1008eda9c*/
      v148 = v33; /*0x1008edaa3*/
      v149 = v108; /*0x1008edaaa*/
      v69 = v109 == 0x8000000000000000LL; /*0x1008edabe*/
    }
    else
    {
      v147 = 0x8000000000000000LL; /*0x1008edac4*/
      v69 = 1; /*0x1008edacb*/
    }
    v39 = (_QWORD *)v161; /*0x1008edace*/
  }
  else
  {
LABEL_80:
    v147 = 0x8000000000000000LL; /*0x1008ed3a0*/
    v69 = 1; /*0x1008ed3a7*/
  }
  codexmate_lib::core::auth::string_val::h06aa957814d20bfc((signed __int64 *)&v154, (__int64 *)v111, &unk_1015FB9C8, 4u); /*0x1008ed3c4*/
  if ( v154 == (char *)0x8000000000000000LL ) /*0x1008ed3d0*/
  {
    codexmate_lib::core::auth::string_val::h06aa957814d20bfc( /*0x1008ed3ec*/
      (signed __int64 *)&v138,
      (__int64 *)&v125,
      &unk_1015FB9C8,
      4u);
    if ( v69 ) /*0x1008ed3f4*/
      goto LABEL_86; /*0x1008ed3f4*/
  }
  else
  {
    v140 = __src[0]; /*0x1008ed3ff*/
    v139 = v155; /*0x1008ed414*/
    v138 = v154; /*0x1008ed41b*/
    if ( v69 ) /*0x1008ed425*/
      goto LABEL_86; /*0x1008ed425*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v154, &v147); /*0x1008ed435*/
  if ( v154 != (char *)0x8000000000000000LL ) /*0x1008ed444*/
  {
    v135 = (unsigned __int64)v154; /*0x1008ed56b*/
    v136 = v155; /*0x1008ed572*/
    v137 = __src[0]; /*0x1008ed579*/
    v70 = v39[20]; /*0x1008ed580*/
    if ( v39[18] == 0x8000000000000000LL ) /*0x1008ed58e*/
      goto LABEL_88; /*0x1008ed58e*/
    goto LABEL_90; /*0x1008ed58e*/
  }
LABEL_86:
  if ( v138 != (char *)0x8000000000000000LL ) /*0x1008ed454*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v135, &v138); /*0x1008ed47f*/
    v70 = v39[20]; /*0x1008ed484*/
    if ( v39[18] == 0x8000000000000000LL ) /*0x1008ed492*/
      goto LABEL_88; /*0x1008ed492*/
LABEL_90:
    v71 = v39[19]; /*0x1008ed494*/
    goto LABEL_91; /*0x1008ed494*/
  }
  v135 = 0x8000000000000000LL; /*0x1008ed456*/
  v70 = v39[20]; /*0x1008ed45d*/
  if ( v39[18] != 0x8000000000000000LL ) /*0x1008ed46b*/
    goto LABEL_90; /*0x1008ed46b*/
LABEL_88:
  v71 = 0; /*0x1008ed46d*/
LABEL_91:
  v72 = codexmate_lib::core::auth::parse_iso_timestamp::hc89d5b79338e23d0(v71, v70); /*0x1008ed49b*/
  v161 = v73; /*0x1008ed4a0*/
  if ( (v72 & 1) != 0 /*0x1008ed4cd*/
    || (v76 = codexmate_lib::core::auth::int_val::hcd49c95662bf88b4(v111, *(double *)a5.i64), v161 = v77, (v76 & 1) != 0)
    || (v74 = codexmate_lib::core::auth::int_val::hcd49c95662bf88b4(v110, *(double *)a5.i64), v161 = v75, (v74 & 1) != 0) )
  {
    if ( *v39 == 0x8000000000000000LL ) /*0x1008ed4d3*/
      goto LABEL_121; /*0x1008ed4d3*/
    goto LABEL_120; /*0x1008ed4d3*/
  }
  v78 = (__int64 *)&v154; /*0x1008ed505*/
  v79 = v119; /*0x1008ed50c*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v154, v119, v159); /*0x1008ed517*/
  v33 = v155; /*0x1008ed51c*/
  if ( (_BYTE)v154 ) /*0x1008ed52a*/
  {
    if ( (v155 & 3) != 1 ) /*0x1008ed535*/
      goto LABEL_112; /*0x1008ed535*/
    v80 = (__int64 *)(v155 - 1); /*0x1008ed53b*/
    v81 = *(_QWORD *)(v155 - 1); /*0x1008ed53f*/
    v33 = *(_QWORD *)(v155 + 7); /*0x1008ed543*/
    v82 = *(void (__fastcall **)(__int64))v33; /*0x1008ed547*/
    if ( !*(_QWORD *)v33 ) /*0x1008ed54d*/
      goto LABEL_108; /*0x1008ed54d*/
    goto LABEL_107; /*0x1008ed54d*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x1008ed5ac*/
  v123 = (char *)v155; /*0x1008ed5b1*/
  v78 = &v115; /*0x1008ed5b8*/
  v79 = (__int64)&v123; /*0x1008ed5bf*/
  std::fs::Metadata::modified::h0e075817eaa8c909(&v115, &v123); /*0x1008ed5c6*/
  if ( v116 != 1000000000 ) /*0x1008ed5d6*/
  {
    v113 = v115; /*0x1008ed632*/
    v114 = v116; /*0x1008ed639*/
    v78 = &v117; /*0x1008ed63f*/
    v79 = (__int64)&v113; /*0x1008ed646*/
    std::time::SystemTime::duration_since::had059553cab94f96(&v117, &v113, 0, 0); /*0x1008ed651*/
    if ( (_DWORD)v117 != 1 ) /*0x1008ed65d*/
    {
      v161 = v118; /*0x1008ed6eb*/
      if ( *v39 == 0x8000000000000000LL ) /*0x1008ed6f3*/
        goto LABEL_121; /*0x1008ed6f3*/
      goto LABEL_120; /*0x1008ed6f3*/
    }
    goto LABEL_112; /*0x1008ed65d*/
  }
  if ( (v115 & 3) == 1 ) /*0x1008ed5e7*/
  {
    v80 = (__int64 *)(v115 - 1); /*0x1008ed5e9*/
    v81 = *(_QWORD *)(v115 - 1); /*0x1008ed5ed*/
    v33 = *(_QWORD *)(v115 + 7); /*0x1008ed5f1*/
    v82 = *(void (__fastcall **)(__int64))v33; /*0x1008ed5f5*/
    if ( !*(_QWORD *)v33 ) /*0x1008ed5fb*/
    {
LABEL_108:
      v83 = *(_QWORD *)(v33 + 8); /*0x1008ed602*/
      if ( v83 ) /*0x1008ed609*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v83, *(_QWORD *)(v33 + 16)); /*0x1008ed612*/
      v79 = 24; /*0x1008ed617*/
      v78 = v80; /*0x1008ed621*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, 24, 8); /*0x1008ed624*/
      goto LABEL_112; /*0x1008ed629*/
    }
LABEL_107:
    v82(v81); /*0x1008ed5fd*/
    goto LABEL_108; /*0x1008ed600*/
  }
LABEL_112:
  v123 = (char *)std::time::SystemTime::now::h1fe79e41f9d5677f(v78, v79); /*0x1008ed663*/
  LODWORD(__dst[0]) = v84; /*0x1008ed66f*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v154, &v123, 0, 0); /*0x1008ed687*/
  if ( (_BYTE)v154 ) /*0x1008ed693*/
  {
    v161 = 0; /*0x1008ed6b2*/
    if ( *v39 == 0x8000000000000000LL ) /*0x1008ed6c8*/
      goto LABEL_121; /*0x1008ed6c8*/
  }
  else
  {
    v161 = v155; /*0x1008ed69c*/
    if ( *v39 == 0x8000000000000000LL ) /*0x1008ed6ae*/
      goto LABEL_121; /*0x1008ed6ae*/
  }
LABEL_120:
  alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v154, v39[1], v39[2]); /*0x1008ed6f5*/
  if ( v154 != (char *)0x8000000000000000LL ) /*0x1008ed71d*/
  {
    if ( __src[0] == (void *)6 ) /*0x1008ed7ef*/
    {
      v95 = _byteswap_ulong(*(_DWORD *)v155); /*0x1008ed7f3*/
      v96 = 1634756971; /*0x1008ed7f5*/
      if ( v95 != 1634756971 /*0x1008ed818*/
        || (v95 = (unsigned __int16)__ROL2__(*(_WORD *)(v155 + 4), 8),
            v96 = 25977,
            v97 = 0,
            (unsigned __int16)v95 != 25977) )
      {
        v97 = 2 * (v95 >= v96) - 1; /*0x1008ed821*/
      }
      LOBYTE(v95) = v97 == 0; /*0x1008ed827*/
    }
    else
    {
      v95 = 0; /*0x1008ed834*/
    }
    LODWORD(v159) = v95; /*0x1008ed839*/
    if ( v154 ) /*0x1008ed83c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v155, v154, 1); /*0x1008ed847*/
    goto LABEL_122; /*0x1008ed84c*/
  }
LABEL_121:
  LODWORD(v159) = 0; /*0x1008ed723*/
LABEL_122:
  codexmate_lib::core::auth::string_val::h06aa957814d20bfc( /*0x1008ed72a*/
    (signed __int64 *)&v154,
    (__int64 *)&v141,
    "chatgpt_subscription_active_untilauth.json contains AiMaMi managed virtual auth; not a real account",
    0x21u);
  v85 = (signed __int64)v154; /*0x1008ed749*/
  if ( v154 == (char *)0x8000000000000000LL ) /*0x1008ed75d*/
  {
    v86 = 2; /*0x1008ed75f*/
    v87 = 0; /*0x1008ed762*/
  }
  else
  {
    v88 = v155; /*0x1008ed76a*/
    v89 = __src[0]; /*0x1008ed771*/
    v90 = v155; /*0x1008ed778*/
    v91 = codexmate_lib::core::auth::parse_iso_timestamp::hc89d5b79338e23d0(v155, __src[0]); /*0x1008ed780*/
    v33 = v92; /*0x1008ed783*/
    if ( v85 ) /*0x1008ed789*/
    {
      v90 = v88; /*0x1008ed790*/
      v89 = (void *)v85; /*0x1008ed793*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v85, 1); /*0x1008ed796*/
    }
    if ( (v91 & 1) != 0 ) /*0x1008ed79f*/
    {
      v123 = (char *)std::time::SystemTime::now::h1fe79e41f9d5677f(v90, v89); /*0x1008ed7aa*/
      LODWORD(__dst[0]) = v93; /*0x1008ed7b1*/
      std::time::SystemTime::duration_since::had059553cab94f96(&v154, &v123, 0, 0); /*0x1008ed7c9*/
      if ( (_BYTE)v154 ) /*0x1008ed7d5*/
        v94 = 0; /*0x1008ed851*/
      else
        v94 = v155; /*0x1008ed7d7*/
      v86 = v33 > v94; /*0x1008ed856*/
      v87 = 1; /*0x1008ed85a*/
    }
    else
    {
      v86 = 2; /*0x1008ed82c*/
      v87 = 0; /*0x1008ed82f*/
    }
  }
  v98 = v132; /*0x1008ed860*/
  v117 = v132; /*0x1008ed86e*/
  v118 = v133; /*0x1008ed875*/
  v123 = v151; /*0x1008ed883*/
  __dst[0] = v152; /*0x1008ed891*/
  v154 = (char *)&v117; /*0x1008ed89f*/
  v155 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008ed8ad*/
  __src[0] = &v123; /*0x1008ed8bb*/
  __src[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008ed8c2*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v112, &unk_1017C5F9F, &v154); /*0x1008ed8de*/
  v99 = __n; /*0x1008ed8e3*/
  v8[5] = __n; /*0x1008ed8e7*/
  v8[6] = v150; /*0x1008ed8f2*/
  v8[7] = v99; /*0x1008ed8f6*/
  v8[10] = (__int64)v137; /*0x1008ed901*/
  v100 = v135; /*0x1008ed905*/
  v8[9] = v136; /*0x1008ed913*/
  v8[8] = v100; /*0x1008ed917*/
  v8[13] = v149; /*0x1008ed922*/
  v101 = v147; /*0x1008ed926*/
  v8[12] = v148; /*0x1008ed934*/
  v8[11] = v101; /*0x1008ed938*/
  v8[16] = (__int64)v140; /*0x1008ed943*/
  v102 = (signed __int64)v138; /*0x1008ed94a*/
  v8[15] = v139; /*0x1008ed958*/
  v8[14] = v102; /*0x1008ed95c*/
  v103 = v112[0]; /*0x1008ed960*/
  v8[3] = v112[1]; /*0x1008ed96e*/
  v8[4] = v112[2]; /*0x1008ed979*/
  v8[2] = v103; /*0x1008ed97d*/
  *v8 = v87; /*0x1008ed981*/
  v8[1] = v33; /*0x1008ed984*/
  v8[17] = v161; /*0x1008ed98c*/
  *((_BYTE *)v8 + 144) = v159; /*0x1008ed996*/
  *((_BYTE *)v8 + 145) = v86; /*0x1008ed99c*/
  *((_BYTE *)v8 + 146) = v162; /*0x1008ed9a7*/
  if ( 2 * v160 ) /*0x1008ed9b1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v160, 1); /*0x1008ed9c7*/
  v104 = v153; /*0x1008ed9d6*/
  v105 = v151; /*0x1008ed9dd*/
  if ( v131 ) /*0x1008ed9e4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98, v131, 1); /*0x1008ed9ee*/
  if ( v104 ) /*0x1008ed9f6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v105, v104, 1); /*0x1008eda03*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(&v125); /*0x1008eda0f*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(&v141); /*0x1008eda1b*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(v110); /*0x1008eda27*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(v111); /*0x1008eda33*/
  return v8; /*0x1008eda3b*/
}