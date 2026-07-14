// mac 1.1.8 behavioral persist_account_auth 0x1006c5d70 d=1
__int64 *__fastcall codexmate_lib::core::auth::make_auth_snapshot::h359af250f486fc29(
        __int64 *a1,
        _QWORD *a2,
        const void *a3,
        size_t a4)
{
  __int64 *v7; // rbx
  void *v8; // rax
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rsi
  __m128i *v13; // rax
  __m128i *v14; // r14
  __m128i v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  void *v19; // rdx
  __int64 v20; // r13
  unsigned __int8 *v21; // rax
  unsigned __int8 *v22; // r12
  __int64 v23; // rsi
  unsigned __int8 *v24; // rax
  signed __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // r15
  unsigned __int8 *v28; // r14
  size_t v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdi
  _QWORD *v32; // r13
  __int64 v33; // r14
  void *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  void *v41; // r14
  unsigned __int64 v42; // rax
  __m128i v44; // xmm0
  char *v45; // rsi
  __int64 i; // rdi
  unsigned __int64 v47; // rax
  __m128i v48; // xmm2
  __int64 v50; // r11
  _QWORD *v51; // r14
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r13
  __int64 v57; // r14
  size_t v58; // rdx
  __int64 *v59; // r12
  size_t v60; // rbx
  __int64 v61; // rbx
  int v62; // eax
  bool v63; // zf
  bool v64; // sf
  char v65; // cl
  bool v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rdi
  char v69; // al
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  char v74; // al
  __int64 v75; // rdx
  char v76; // al
  __int64 v77; // rdx
  __int64 v78; // r14
  void (__fastcall *v79)(__int64); // rax
  int v80; // edx
  __int64 v81; // r12
  char v82; // r14
  __int64 v83; // r13
  char v84; // r13
  __int64 v85; // rdx
  int v86; // edx
  __int64 v87; // rax
  unsigned __int32 v88; // eax
  unsigned int v89; // ecx
  int v90; // edx
  size_t v91; // rax
  size_t v92; // rax
  unsigned __int64 v93; // rax
  __int64 v94; // rax
  size_t v95; // rax
  __int64 v96; // r14
  const void *v98; // r12
  size_t v99; // r14
  __int64 v100; // r13
  _BYTE v101[48]; // [rsp+8h] [rbp-338h] BYREF
  _BYTE v102[48]; // [rsp+38h] [rbp-308h] BYREF
  size_t v103[3]; // [rsp+68h] [rbp-2D8h] BYREF
  __int64 v104; // [rsp+80h] [rbp-2C0h] BYREF
  int v105; // [rsp+88h] [rbp-2B8h]
  __int64 v106; // [rsp+90h] [rbp-2B0h] BYREF
  int v107; // [rsp+98h] [rbp-2A8h]
  __int64 v108; // [rsp+A0h] [rbp-2A0h] BYREF
  __int64 v109; // [rsp+A8h] [rbp-298h]
  const void *v110; // [rsp+B8h] [rbp-288h]
  __int64 v111; // [rsp+C0h] [rbp-280h]
  __int64 v112; // [rsp+C8h] [rbp-278h]
  __int64 v113; // [rsp+D0h] [rbp-270h]
  __int64 *v114; // [rsp+D8h] [rbp-268h] BYREF
  __int64 v115; // [rsp+E0h] [rbp-260h]
  void *v116; // [rsp+E8h] [rbp-258h]
  void *v117; // [rsp+F0h] [rbp-250h]
  void *v118; // [rsp+F8h] [rbp-248h]
  void *v119; // [rsp+100h] [rbp-240h]
  __int64 v120; // [rsp+108h] [rbp-238h] BYREF
  _QWORD __dst[17]; // [rsp+110h] [rbp-230h] BYREF
  __int64 v122; // [rsp+198h] [rbp-1A8h] BYREF
  __int64 v123; // [rsp+1A0h] [rbp-1A0h]
  __int64 v124; // [rsp+1A8h] [rbp-198h]
  __int64 v125; // [rsp+1B0h] [rbp-190h]
  __int64 *v126; // [rsp+1B8h] [rbp-188h] BYREF
  __int64 v127; // [rsp+1C0h] [rbp-180h]
  __int64 v128; // [rsp+1C8h] [rbp-178h]
  __int64 v129; // [rsp+1D0h] [rbp-170h] BYREF
  __int64 v130; // [rsp+1D8h] [rbp-168h]
  void *v131; // [rsp+1E0h] [rbp-160h]
  char *v132; // [rsp+1E8h] [rbp-158h] BYREF
  __int64 v133; // [rsp+1F0h] [rbp-150h]
  __int64 v134; // [rsp+1F8h] [rbp-148h]
  __int64 v135; // [rsp+200h] [rbp-140h]
  __m128i v136; // [rsp+208h] [rbp-138h] BYREF
  unsigned __int64 v137; // [rsp+218h] [rbp-128h] BYREF
  __int64 v138; // [rsp+220h] [rbp-120h]
  size_t v139; // [rsp+228h] [rbp-118h]
  __int64 v140; // [rsp+230h] [rbp-110h]
  __int64 v141; // [rsp+238h] [rbp-108h]
  __int64 v142; // [rsp+240h] [rbp-100h]
  __int64 *v143; // [rsp+248h] [rbp-F8h] BYREF
  __int64 v144; // [rsp+250h] [rbp-F0h]
  void *__src[18]; // [rsp+258h] [rbp-E8h] BYREF
  size_t __n; // [rsp+2E8h] [rbp-58h]
  __int64 v147; // [rsp+2F0h] [rbp-50h]
  size_t v148; // [rsp+2F8h] [rbp-48h]
  unsigned __int64 v149; // [rsp+300h] [rbp-40h]
  __int64 v150; // [rsp+308h] [rbp-38h]
  char v151; // [rsp+317h] [rbp-29h]

  v7 = a1; /*0x1006c5d8d*/
  if ( (unsigned __int8)codexmate_lib::core::auth::is_aimami_managed_virtual_auth::he8e0079a2a6340b0(a2) ) /*0x1006c5d93*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006c5d9c*/
    v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x42u, 1u); /*0x1006c5dab*/
    if ( !v8 ) /*0x1006c5db3*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 66); /*0x1006c6e24*/
    v9 = (__int64)v8; /*0x1006c5db9*/
    memcpy(v8, "auth.json contains AiMaMi managed virtual auth; not a real accountuser_idiatchatgpt_account_id", 0x42u); /*0x1006c5dcb*/
    a1[1] = 9; /*0x1006c5dd0*/
    a1[2] = 66; /*0x1006c5dd8*/
    a1[3] = v9; /*0x1006c5de0*/
    a1[4] = 66; /*0x1006c5de4*/
    *a1 = 2; /*0x1006c5dec*/
    return v7; /*0x1006c5df3*/
  }
  v10 = 0; /*0x1006c5df8*/
  v11 = a2[8]; /*0x1006c5dff*/
  v12 = 0; /*0x1006c5e03*/
  if ( !__OFSUB__(0, a2[6]) ) /*0x1006c5e08*/
    v12 = a2[7]; /*0x1006c5e0a*/
  codexmate_lib::core::auth::decode_jwt_claims::ha2ee482457e6696d(v102, v12, v11); /*0x1006c5e15*/
  if ( !__OFSUB__(0, a2[9]) ) /*0x1006c5e22*/
    v10 = a2[10]; /*0x1006c5e24*/
  codexmate_lib::core::auth::decode_jwt_claims::ha2ee482457e6696d(v101, v10, a2[11]); /*0x1006c5e32*/
  codexmate_lib::core::auth::nested_dict::h8e012f62707d045d( /*0x1006c5e51*/
    &v143,
    v102,
    "https://api.openai.com/authhttps://api.openai.com/profileemailchatgpt_user_idchatgpt_plan_type",
    27);
  if ( v143 ) /*0x1006c5e5e*/
  {
    __dst[4] = __src[3]; /*0x1006c5e67*/
    __dst[3] = __src[2]; /*0x1006c5e75*/
    __dst[2] = __src[1]; /*0x1006c5e83*/
    __dst[1] = __src[0]; /*0x1006c5e91*/
    __dst[0] = v144; /*0x1006c5ea6*/
    v120 = (__int64)v143; /*0x1006c5ead*/
  }
  else
  {
    codexmate_lib::core::auth::nested_dict::h8e012f62707d045d( /*0x1006c5ed0*/
      &v120,
      v101,
      "https://api.openai.com/authhttps://api.openai.com/profileemailchatgpt_user_idchatgpt_plan_type",
      27);
  }
  if ( v120 ) /*0x1006c5edd*/
  {
    v136 = *(__m128i *)&__dst[3]; /*0x1006c5ef4*/
    v135 = __dst[2]; /*0x1006c5f02*/
    v134 = __dst[1]; /*0x1006c5f10*/
    v133 = __dst[0]; /*0x1006c5f25*/
    v132 = (char *)v120; /*0x1006c5f2c*/
  }
  else
  {
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1006c5f3c*/
    v14 = v13; /*0x1006c5f3e*/
    if ( v13[1].i8[0] == 1 ) /*0x1006c5f45*/
    {
      v15.i64[0] = v13->i64[0]; /*0x1006c5f4b*/
      v15.i64[1] = v14->i64[1]; /*0x1006c5f4e*/
    }
    else
    {
      v15.i64[0] = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1006c6dd9*/
      *v14 = v15; /*0x1006c6dde*/
      v14[1].i8[0] = 1; /*0x1006c6de5*/
    }
    v14->i64[0] = v15.i64[0] + 1; /*0x1006c5f56*/
    v135 = 0; /*0x1006c5f60*/
    v134 = 0; /*0x1006c5f6e*/
    v133 = 0; /*0x1006c5f7c*/
    v132 = (char *)anon_e90f81edc9eb47f28b006fedbc3b914a_14; /*0x1006c5f8a*/
    v136 = v15; /*0x1006c5f91*/
  }
  codexmate_lib::core::auth::nested_dict::h8e012f62707d045d( /*0x1006c5fb9*/
    &v143,
    v101,
    "https://api.openai.com/profileemailchatgpt_user_idchatgpt_plan_type",
    30);
  if ( v143 ) /*0x1006c5fc6*/
  {
    v119 = __src[3]; /*0x1006c5fcf*/
    v118 = __src[2]; /*0x1006c5fdd*/
    v117 = __src[1]; /*0x1006c5feb*/
    v116 = __src[0]; /*0x1006c5ff9*/
    v115 = v144; /*0x1006c600e*/
    v114 = v143; /*0x1006c6015*/
  }
  else
  {
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1006c6025*/
    v17 = v16; /*0x1006c6027*/
    if ( *(_BYTE *)(v16 + 16) == 1 ) /*0x1006c602e*/
    {
      v18 = *(_QWORD *)v16; /*0x1006c6034*/
      v19 = *(void **)(v17 + 8); /*0x1006c6037*/
    }
    else
    {
      v18 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1006c6def*/
      *(_QWORD *)v17 = v18; /*0x1006c6df4*/
      *(_QWORD *)(v17 + 8) = v19; /*0x1006c6df7*/
      *(_BYTE *)(v17 + 16) = 1; /*0x1006c6dfb*/
    }
    *(_QWORD *)v17 = v18 + 1; /*0x1006c603f*/
    v117 = nullptr; /*0x1006c6049*/
    v116 = nullptr; /*0x1006c6057*/
    v115 = 0; /*0x1006c6065*/
    v114 = (__int64 *)anon_e90f81edc9eb47f28b006fedbc3b914a_14; /*0x1006c6073*/
    v118 = (void *)v18; /*0x1006c607a*/
    v119 = v19; /*0x1006c6081*/
  }
  codexmate_lib::core::auth::string_val::h5d0a38133113115a(&v143, v102, "emailchatgpt_user_idchatgpt_plan_type", 5); /*0x1006c60a2*/
  if ( v143 == (__int64 *)0x8000000000000000LL ) /*0x1006c60b8*/
  {
    codexmate_lib::core::auth::string_val::h5d0a38133113115a(&v120, &v114, "emailchatgpt_user_idchatgpt_plan_type", 5); /*0x1006c60d4*/
  }
  else
  {
    __dst[1] = __src[0]; /*0x1006c60e2*/
    __dst[0] = v144; /*0x1006c60f7*/
    v120 = (__int64)v143; /*0x1006c60fe*/
  }
  v110 = a3; /*0x1006c6105*/
  v148 = a4; /*0x1006c610c*/
  v150 = (__int64)a2; /*0x1006c6110*/
  v20 = v120; /*0x1006c6114*/
  if ( v120 == 0x8000000000000000LL ) /*0x1006c611e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006c6120*/
    v20 = 15; /*0x1006c6125*/
    v21 = (unsigned __int8 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xFu, 1u); /*0x1006c6135*/
    if ( !v21 ) /*0x1006c613d*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x1006c6e33*/
    v22 = v21; /*0x1006c6143*/
    qmemcpy(v21, "Unknown Account", 15); /*0x1006c615f*/
    v23 = 15; /*0x1006c6163*/
  }
  else
  {
    v22 = (unsigned __int8 *)__dst[0]; /*0x1006c616a*/
    v23 = __dst[1]; /*0x1006c6171*/
  }
  v24 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v22, v23); /*0x1006c617b*/
  v26 = v25; /*0x1006c6180*/
  __n = v25; /*0x1006c6186*/
  if ( v25 < 0 ) /*0x1006c618a*/
  {
    v27 = 0; /*0x1006c618c*/
    goto LABEL_30; /*0x1006c618c*/
  }
  v28 = v24; /*0x1006c61a0*/
  if ( v25 ) /*0x1006c61a6*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006c61a8*/
    v29 = v26; /*0x1006c61ad*/
    v27 = 1; /*0x1006c61b0*/
    v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v29, 1u); /*0x1006c61bb*/
    if ( !v30 ) /*0x1006c61c3*/
LABEL_30:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v27, __n); /*0x1006c618f*/
    v31 = v30; /*0x1006c61c5*/
    v26 = __n; /*0x1006c61c8*/
  }
  else
  {
    v31 = 1; /*0x1006c61ce*/
  }
  v140 = v31; /*0x1006c61d3*/
  memcpy((void *)v31, v28, v26); /*0x1006c61e0*/
  if ( v20 ) /*0x1006c61e8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006c61f5*/
  v32 = (_QWORD *)v150; /*0x1006c6204*/
  if ( *(_QWORD *)(v150 + 120) != 0x8000000000000000LL ) /*0x1006c620c*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1((size_t *)&v143, v150 + 120); /*0x1006c6219*/
    v33 = (__int64)v143; /*0x1006c621e*/
    if ( v143 != (__int64 *)0x8000000000000000LL ) /*0x1006c6228*/
    {
      if ( __src[0] ) /*0x1006c62d5*/
      {
        v147 = v144; /*0x1006c62db*/
        v142 = (__int64)__src[0]; /*0x1006c62e6*/
        goto LABEL_45; /*0x1006c62e6*/
      }
      if ( v143 ) /*0x1006c69bb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006c69c9*/
    }
  }
  codexmate_lib::core::auth::string_val::h5d0a38133113115a(&v143, &v132, "chatgpt_account_id", 18); /*0x1006c6248*/
  v33 = (__int64)v143; /*0x1006c624d*/
  if ( v143 == (__int64 *)0x8000000000000000LL ) /*0x1006c6257*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006c6259*/
    v142 = 15; /*0x1006c6263*/
    v34 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xFu, 1u); /*0x1006c6274*/
    if ( !v34 ) /*0x1006c627c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x1006c6e44*/
    v147 = (__int64)v34; /*0x1006c629a*/
    qmemcpy(v34, "unknown-account", 15); /*0x1006c629e*/
    v33 = 15; /*0x1006c62a1*/
  }
  else
  {
    v147 = v144; /*0x1006c62b0*/
    v142 = (__int64)__src[0]; /*0x1006c62bb*/
  }
LABEL_45:
  v141 = v33; /*0x1006c62f4*/
  codexmate_lib::core::auth::string_val::h5d0a38133113115a(&v143, &v132, "chatgpt_user_idchatgpt_plan_type", 15); /*0x1006c6315*/
  if ( v143 == (__int64 *)0x8000000000000000LL ) /*0x1006c6321*/
  {
    codexmate_lib::core::auth::string_val::h5d0a38133113115a(&v120, &v132, "user_idiatchatgpt_account_id", 7); /*0x1006c633d*/
    if ( v120 == 0x8000000000000000LL ) /*0x1006c6349*/
    {
      alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v122, v140, v26, v35, v36, v37); /*0x1006c635c*/
      goto LABEL_50; /*0x1006c6361*/
    }
  }
  else
  {
    __dst[1] = __src[0]; /*0x1006c636a*/
    __dst[0] = v144; /*0x1006c637f*/
    v120 = (__int64)v143; /*0x1006c6386*/
  }
  v124 = __dst[1]; /*0x1006c639d*/
  v123 = __dst[0]; /*0x1006c63b2*/
  v122 = v120; /*0x1006c63b9*/
LABEL_50:
  codexmate_lib::core::auth::string_val::h5d0a38133113115a(&v120, &v132, "chatgpt_plan_type", 17); /*0x1006c63c0*/
  v41 = (void *)v120; /*0x1006c63df*/
  if ( v120 == 0x8000000000000000LL ) /*0x1006c63e9*/
  {
    v151 = 8; /*0x1006c63eb*/
  }
  else
  {
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v143, __dst[0], __dst[1], v38, v39, v40); /*0x1006c6409*/
    if ( v41 ) /*0x1006c6411*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006c641e*/
    v41 = (void *)v144; /*0x1006c642a*/
    v151 = 8; /*0x1006c6431*/
    v149 = (unsigned __int64)v143; /*0x1006c643f*/
    if ( v143 != (__int64 *)0x8000000000000000LL ) /*0x1006c6446*/
    {
      v151 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::h12018c74ad909fdb(v144, __src[0]); /*0x1006c645d*/
      goto LABEL_57; /*0x1006c645d*/
    }
  }
  v149 = 0x8000000000000000LL; /*0x1006c6448*/
LABEL_57:
  __src[17] = v41; /*0x1006c6460*/
  if ( !v135 ) /*0x1006c646c*/
    goto LABEL_82; /*0x1006c646c*/
  v42 = core::hash::BuildHasher::hash_one::h245728ff9d912134(&v136); /*0x1006c6485*/
  v44 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v42 >> 57), (__m128i)0LL); /*0x1006c64a7*/
  v45 = v132 - 56; /*0x1006c64ac*/
  for ( i = 0; ; i += 16 ) /*0x1006c64b0*/
  {
    v47 = v133 & v42; /*0x1006c64ca*/
    v48 = _mm_loadu_si128((const __m128i *)&v132[v47]); /*0x1006c64cd*/
    _R10D = _mm_movemask_epi8(_mm_cmpeq_epi8(v48, v44)); /*0x1006c64da*/
    if ( _R10D ) /*0x1006c64e2*/
      break; /*0x1006c64e2*/
LABEL_63:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v48, (__m128i)-1LL)) ) /*0x1006c6529*/
      goto LABEL_82; /*0x1006c6531*/
    v42 = v47 + i + 16; /*0x1006c6537*/
  }
  while ( 1 ) /*0x1006c64e4*/
  {
    __asm { tzcnt r11d, r10d } /*0x1006c64e4*/
    v50 = -56LL * (v133 & (v47 + _R11)); /*0x1006c64f2*/
    if ( *(_QWORD *)&v45[v50 + 16] == 13 ) /*0x1006c64fc*/
    {
      v51 = *(_QWORD **)&v45[v50 + 8]; /*0x1006c6502*/
      v26 = *v51 ^ 0x617A696E6167726FLL; /*0x1006c6509*/
      if ( !(v26 | *(_QWORD *)((char *)v51 + 5) ^ 0x736E6F6974617A69LL) ) /*0x1006c6513*/
        break; /*0x1006c6513*/
    }
    _R11 = (unsigned int)(_R10D - 1); /*0x1006c6518*/
    LOWORD(_R11) = _R10D & (_R10D - 1); /*0x1006c651c*/
    _R10D = _R11; /*0x1006c6520*/
    if ( !(_WORD)_R11 ) /*0x1006c6523*/
      goto LABEL_63; /*0x1006c6523*/
  }
  if ( v132[v50 - 32] == 4 /*0x1006c6570*/
    && *(_QWORD *)&v132[v50 - 8]
    && (v52 = *(_QWORD *)&v132[v50 - 16], *(_BYTE *)v52 == 5)
    && (v53 = *(_QWORD *)(v52 + 8)) != 0 )
  {
    v125 = *(_QWORD *)(v52 + 16); /*0x1006c657a*/
LABEL_70:
    v54 = v53 + 360; /*0x1006c6581*/
    v55 = *(unsigned __int16 *)(v53 + 626); /*0x1006c6588*/
    v112 = v53; /*0x1006c658f*/
    v26 = v53 - 8; /*0x1006c6596*/
    v113 = v55; /*0x1006c659a*/
    v56 = 3LL * (unsigned int)(8 * v55); /*0x1006c65a8*/
    v57 = -1; /*0x1006c65ac*/
    do /*0x1006c662f*/
    {
      if ( !v56 ) /*0x1006c65c3*/
      {
        v57 = v113; /*0x1006c663d*/
LABEL_80:
        v32 = (_QWORD *)v150; /*0x1006c6644*/
        if ( !v125 ) /*0x1006c665a*/
          goto LABEL_82; /*0x1006c665a*/
        --v125; /*0x1006c665c*/
        v53 = *(_QWORD *)(v112 + 8 * v57 + 632); /*0x1006c6663*/
        goto LABEL_70; /*0x1006c666b*/
      }
      v111 = v54 + 24; /*0x1006c65c9*/
      v58 = *(_QWORD *)(v54 + 16); /*0x1006c65d4*/
      v59 = v7; /*0x1006c65d8*/
      v60 = v58 - 5; /*0x1006c65de*/
      if ( v58 >= 5 ) /*0x1006c65e7*/
        v58 = 5; /*0x1006c65e7*/
      v61 = -(__int64)v60; /*0x1006c65eb*/
      v62 = memcmp( /*0x1006c65f5*/
              "titleTimeDelta::hours out of bounds`DateTime - TimeDelta` overflowedchatgpt_account_user_id",
              *(const void **)(v54 + 8),
              v58);
      if ( v62 ) /*0x1006c65fe*/
        v61 = v62; /*0x1006c65fe*/
      v63 = v61 == 0; /*0x1006c6602*/
      v64 = v61 < 0; /*0x1006c6602*/
      v7 = v59; /*0x1006c6605*/
      v65 = (!v64 && !v63) - v64; /*0x1006c6618*/
      v26 += 32; /*0x1006c661a*/
      ++v57; /*0x1006c661e*/
      v56 -= 24; /*0x1006c6621*/
      v54 = v111; /*0x1006c6625*/
    }
    while ( v65 == 1 ); /*0x1006c662f*/
    if ( v65 ) /*0x1006c6636*/
      goto LABEL_80; /*0x1006c6636*/
    if ( *(_BYTE *)(v26 - 24) == 3 ) /*0x1006c6d54*/
    {
      v98 = *(const void **)(v26 - 8); /*0x1006c6d56*/
      v99 = *(_QWORD *)v26; /*0x1006c6d5a*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h384b07dd33e8b3b5( /*0x1006c6d74*/
        (__int64 *)&v143,
        *(_QWORD *)v26,
        0,
        1u,
        1);
      v100 = v144; /*0x1006c6d79*/
      if ( (_DWORD)v143 == 1 ) /*0x1006c6d87*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v144, (__int64)__src[0]); /*0x1006c6e13*/
      v26 = (__int64)__src[0]; /*0x1006c6d89*/
      memcpy(__src[0], v98, v99); /*0x1006c6d99*/
      v137 = v100; /*0x1006c6d9e*/
      v138 = v26; /*0x1006c6da5*/
      v139 = v99; /*0x1006c6dac*/
      v66 = v100 == 0x8000000000000000LL; /*0x1006c6dc0*/
    }
    else
    {
      v137 = 0x8000000000000000LL; /*0x1006c6dc6*/
      v66 = 1; /*0x1006c6dcd*/
    }
    v32 = (_QWORD *)v150; /*0x1006c6dd0*/
  }
  else
  {
LABEL_82:
    v137 = 0x8000000000000000LL; /*0x1006c6670*/
    v66 = 1; /*0x1006c6677*/
  }
  codexmate_lib::core::auth::string_val::h5d0a38133113115a(&v143, v102, "namemenuhostnsisportNoneSome", 4); /*0x1006c6694*/
  if ( v143 == (__int64 *)0x8000000000000000LL ) /*0x1006c66a0*/
  {
    codexmate_lib::core::auth::string_val::h5d0a38133113115a(&v129, &v114, "namemenuhostnsisportNoneSome", 4); /*0x1006c66bc*/
    if ( v66 ) /*0x1006c66c4*/
      goto LABEL_88; /*0x1006c66c4*/
  }
  else
  {
    v131 = __src[0]; /*0x1006c66cf*/
    v130 = v144; /*0x1006c66e4*/
    v129 = (__int64)v143; /*0x1006c66eb*/
    if ( v66 ) /*0x1006c66f5*/
      goto LABEL_88; /*0x1006c66f5*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1006c6705*/
    (size_t *)&v143,
    (__int64)&v137);
  v120 = v144; /*0x1006c6718*/
  __dst[0] = __src[0]; /*0x1006c6726*/
  if ( v143 != (__int64 *)0x8000000000000000LL ) /*0x1006c6730*/
  {
    v126 = v143; /*0x1006c6849*/
    v127 = v120; /*0x1006c685e*/
    v128 = __dst[0]; /*0x1006c6865*/
    v67 = v32[20]; /*0x1006c686c*/
    if ( v32[18] == 0x8000000000000000LL ) /*0x1006c687a*/
      goto LABEL_90; /*0x1006c687a*/
    goto LABEL_92; /*0x1006c687a*/
  }
LABEL_88:
  if ( v129 != 0x8000000000000000LL ) /*0x1006c6740*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1006c676b*/
      (size_t *)&v126,
      (__int64)&v129);
    v67 = v32[20]; /*0x1006c6770*/
    if ( v32[18] == 0x8000000000000000LL ) /*0x1006c677e*/
      goto LABEL_90; /*0x1006c677e*/
LABEL_92:
    v68 = v32[19]; /*0x1006c6780*/
    goto LABEL_93; /*0x1006c6780*/
  }
  v126 = (__int64 *)0x8000000000000000LL; /*0x1006c6742*/
  v67 = v32[20]; /*0x1006c6749*/
  if ( v32[18] != 0x8000000000000000LL ) /*0x1006c6757*/
    goto LABEL_92; /*0x1006c6757*/
LABEL_90:
  v68 = 0; /*0x1006c6759*/
LABEL_93:
  v69 = codexmate_lib::core::auth::parse_iso_timestamp::he65df4507428e9c9(v68, v67); /*0x1006c6787*/
  v150 = v73; /*0x1006c678c*/
  if ( (v69 & 1) != 0 /*0x1006c67b9*/
    || (v76 = codexmate_lib::core::auth::int_val::ha069df840c5443ae(v102), v150 = v77, (v76 & 1) != 0)
    || (v74 = codexmate_lib::core::auth::int_val::ha069df840c5443ae(v101), v150 = v75, (v74 & 1) != 0) )
  {
    if ( *v32 == 0x8000000000000000LL ) /*0x1006c67bf*/
      goto LABEL_123; /*0x1006c67bf*/
    goto LABEL_122; /*0x1006c67bf*/
  }
  std::sys::fs::metadata::h32fa16d3052ea535((__int64 *)&v143, v110, v148); /*0x1006c6803*/
  v26 = v144; /*0x1006c6808*/
  if ( (_DWORD)v143 == 1 ) /*0x1006c6816*/
  {
    if ( (v144 & 3) != 1 ) /*0x1006c6821*/
      goto LABEL_114; /*0x1006c6821*/
    v78 = *(_QWORD *)(v144 - 1); /*0x1006c682b*/
    v26 = *(_QWORD *)(v144 + 7); /*0x1006c682f*/
    v79 = *(void (__fastcall **)(__int64))v26; /*0x1006c6833*/
    if ( !*(_QWORD *)v26 ) /*0x1006c6839*/
      goto LABEL_110; /*0x1006c6839*/
    goto LABEL_109; /*0x1006c6839*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x1006c6898*/
  v120 = v144; /*0x1006c689d*/
  std::fs::Metadata::modified::h0e075817eaa8c909(&v106, &v120); /*0x1006c68b2*/
  if ( v107 == 1000000000 ) /*0x1006c68c2*/
  {
    if ( (v106 & 3) != 1 ) /*0x1006c68d3*/
      goto LABEL_114; /*0x1006c68d3*/
    v78 = *(_QWORD *)(v106 - 1); /*0x1006c68d9*/
    v26 = *(_QWORD *)(v106 + 7); /*0x1006c68dd*/
    v79 = *(void (__fastcall **)(__int64))v26; /*0x1006c68e1*/
    if ( !*(_QWORD *)v26 ) /*0x1006c68e7*/
      goto LABEL_110; /*0x1006c68e7*/
LABEL_109:
    v79(v78); /*0x1006c68e9*/
LABEL_110:
    if ( *(_QWORD *)(v26 + 8) ) /*0x1006c68ee*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006c68fe*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006c6910*/
LABEL_114:
    v120 = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x1006c694f*/
    LODWORD(__dst[0]) = v80; /*0x1006c695b*/
    std::time::SystemTime::duration_since::had059553cab94f96((__int64)&v143, (__int64)&v120, 0, 0); /*0x1006c6973*/
    if ( (_BYTE)v143 ) /*0x1006c697f*/
    {
      v150 = 0; /*0x1006c699e*/
      if ( *v32 == 0x8000000000000000LL ) /*0x1006c69b4*/
        goto LABEL_123; /*0x1006c69b4*/
    }
    else
    {
      v150 = v144; /*0x1006c6988*/
      if ( *v32 == 0x8000000000000000LL ) /*0x1006c699a*/
        goto LABEL_123; /*0x1006c699a*/
    }
    goto LABEL_122; /*0x1006c699a*/
  }
  v104 = v106; /*0x1006c691e*/
  v105 = v107; /*0x1006c6925*/
  std::time::SystemTime::duration_since::had059553cab94f96((__int64)&v108, (__int64)&v104, 0, 0); /*0x1006c693d*/
  if ( (_DWORD)v108 == 1 ) /*0x1006c6949*/
    goto LABEL_114; /*0x1006c6949*/
  v150 = v109; /*0x1006c69da*/
  if ( *v32 == 0x8000000000000000LL ) /*0x1006c69e2*/
  {
LABEL_123:
    LODWORD(v148) = 0; /*0x1006c6a12*/
    goto LABEL_124; /*0x1006c6a12*/
  }
LABEL_122:
  alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v143, v32[1], v32[2], v70, v71, v72); /*0x1006c69e4*/
  if ( v143 == (__int64 *)0x8000000000000000LL ) /*0x1006c6a0c*/
    goto LABEL_123; /*0x1006c6a0c*/
  if ( __src[0] == (void *)6 ) /*0x1006c6ade*/
  {
    v88 = _byteswap_ulong(*(_DWORD *)v144); /*0x1006c6ae2*/
    v89 = 1634756971; /*0x1006c6ae4*/
    if ( v88 != 1634756971 /*0x1006c6b07*/
      || (v88 = (unsigned __int16)__ROL2__(*(_WORD *)(v144 + 4), 8), v89 = 25977,
                                                                     v90 = 0,
                                                                     (unsigned __int16)v88 != 25977) )
    {
      v90 = 2 * (v88 >= v89) - 1; /*0x1006c6b10*/
    }
    LOBYTE(v88) = v90 == 0; /*0x1006c6b16*/
  }
  else
  {
    v88 = 0; /*0x1006c6b23*/
  }
  LODWORD(v148) = v88; /*0x1006c6b28*/
  if ( v143 ) /*0x1006c6b2b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006c6b36*/
LABEL_124:
  codexmate_lib::core::auth::string_val::h5d0a38133113115a( /*0x1006c6a19*/
    &v143,
    &v132,
    "chatgpt_subscription_active_untilauth.json contains AiMaMi managed virtual auth; not a real accountuser_idiatchatgpt_account_id",
    33);
  v81 = (__int64)v143; /*0x1006c6a38*/
  if ( v143 == (__int64 *)0x8000000000000000LL ) /*0x1006c6a4c*/
  {
    v82 = 2; /*0x1006c6a4e*/
    v83 = 0; /*0x1006c6a51*/
  }
  else
  {
    v84 = codexmate_lib::core::auth::parse_iso_timestamp::he65df4507428e9c9(v144, __src[0]); /*0x1006c6a6f*/
    v26 = v85; /*0x1006c6a72*/
    if ( v81 ) /*0x1006c6a78*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006c6a85*/
    if ( (v84 & 1) != 0 ) /*0x1006c6a8e*/
    {
      v120 = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x1006c6a99*/
      LODWORD(__dst[0]) = v86; /*0x1006c6aa0*/
      std::time::SystemTime::duration_since::had059553cab94f96((__int64)&v143, (__int64)&v120, 0, 0); /*0x1006c6ab8*/
      if ( (_BYTE)v143 ) /*0x1006c6ac4*/
        v87 = 0; /*0x1006c6b40*/
      else
        v87 = v144; /*0x1006c6ac6*/
      v82 = v26 > v87; /*0x1006c6b45*/
      v83 = 1; /*0x1006c6b49*/
    }
    else
    {
      v82 = 2; /*0x1006c6b1b*/
      v83 = 0; /*0x1006c6b1e*/
    }
  }
  v108 = v123; /*0x1006c6b5d*/
  v109 = v124; /*0x1006c6b64*/
  v120 = v147; /*0x1006c6b6f*/
  __dst[0] = v142; /*0x1006c6b7d*/
  v143 = &v108; /*0x1006c6b8b*/
  v144 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1006c6b99*/
  __src[0] = &v120; /*0x1006c6ba7*/
  __src[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1006c6bae*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v103, byte_10122D972, (unsigned __int64)&v143); /*0x1006c6bca*/
  v91 = __n; /*0x1006c6bcf*/
  v7[5] = __n; /*0x1006c6bd3*/
  v7[6] = v140; /*0x1006c6bde*/
  v7[7] = v91; /*0x1006c6be2*/
  v7[10] = v128; /*0x1006c6bed*/
  v92 = (size_t)v126; /*0x1006c6bf1*/
  v7[9] = v127; /*0x1006c6bff*/
  v7[8] = v92; /*0x1006c6c03*/
  v7[13] = v139; /*0x1006c6c0e*/
  v93 = v137; /*0x1006c6c12*/
  v7[12] = v138; /*0x1006c6c20*/
  v7[11] = v93; /*0x1006c6c24*/
  v7[16] = (__int64)v131; /*0x1006c6c2f*/
  v94 = v129; /*0x1006c6c36*/
  v7[15] = v130; /*0x1006c6c44*/
  v7[14] = v94; /*0x1006c6c48*/
  v95 = v103[0]; /*0x1006c6c4c*/
  v7[3] = v103[1]; /*0x1006c6c5a*/
  v7[4] = v103[2]; /*0x1006c6c65*/
  v7[2] = v95; /*0x1006c6c69*/
  *v7 = v83; /*0x1006c6c6d*/
  v7[1] = v26; /*0x1006c6c70*/
  v7[17] = v150; /*0x1006c6c78*/
  *((_BYTE *)v7 + 144) = v148; /*0x1006c6c82*/
  *((_BYTE *)v7 + 145) = v82; /*0x1006c6c88*/
  *((_BYTE *)v7 + 146) = v151; /*0x1006c6c93*/
  if ( 2 * v149 ) /*0x1006c6c9d*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006c6d2e*/
    v96 = v141; /*0x1006c6d3d*/
    if ( !v122 ) /*0x1006c6d44*/
      goto LABEL_145; /*0x1006c6d44*/
    goto LABEL_144; /*0x1006c6d44*/
  }
  v96 = v141; /*0x1006c6cb4*/
  if ( v122 ) /*0x1006c6cbb*/
LABEL_144:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006c6cbd*/
LABEL_145:
  if ( v96 ) /*0x1006c6ccd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006c6cdb*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h31da0902497d8a6e(&v114); /*0x1006c6ce7*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h31da0902497d8a6e(&v132); /*0x1006c6cf3*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h31da0902497d8a6e(v101); /*0x1006c6cff*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h31da0902497d8a6e(v102); /*0x1006c6d0b*/
  return v7; /*0x1006c6d13*/
}