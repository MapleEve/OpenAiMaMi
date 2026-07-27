// __ZN13codexmate_lib4core4auth30is_aimami_managed_virtual_auth @ 0x1008f1cc0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h4d4a884f31f32b45(__int64 a1, __m128i a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rsi
  unsigned __int64 **v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  signed __int64 v14; // rbx
  unsigned __int64 v15; // r15
  char v16; // r14
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // rsi
  unsigned __int64 *v21[6]; // [rsp+8h] [rbp-1B8h] BYREF
  unsigned __int64 *v22[6]; // [rsp+38h] [rbp-188h] BYREF
  _QWORD v23[2]; // [rsp+68h] [rbp-158h] BYREF
  __int64 v24; // [rsp+78h] [rbp-148h] BYREF
  __int64 v25; // [rsp+80h] [rbp-140h]
  __int64 v26; // [rsp+88h] [rbp-138h]
  __int64 (__fastcall *v27)(); // [rsp+90h] [rbp-130h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+98h] [rbp-128h]
  void **v29; // [rsp+A0h] [rbp-120h]
  __int64 (__fastcall *v30)(); // [rsp+A8h] [rbp-118h]
  __int64 v31; // [rsp+B0h] [rbp-110h]
  __int64 v32; // [rsp+B8h] [rbp-108h]
  __int64 (__fastcall *v33)(); // [rsp+F8h] [rbp-C8h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+100h] [rbp-C0h]
  void **v35; // [rsp+108h] [rbp-B8h]
  __int64 (__fastcall *v36)(); // [rsp+110h] [rbp-B0h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+118h] [rbp-A8h]
  void **v38; // [rsp+120h] [rbp-A0h]
  __int64 (__fastcall *v39)(); // [rsp+128h] [rbp-98h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+130h] [rbp-90h]
  void **v41; // [rsp+138h] [rbp-88h]
  __int64 (__fastcall *v42)(); // [rsp+140h] [rbp-80h]
  __int64 v43; // [rsp+148h] [rbp-78h]
  __int64 v44; // [rsp+150h] [rbp-70h]
  __int64 (__fastcall *v45)(); // [rsp+158h] [rbp-68h] BYREF
  __int64 (__fastcall *v46)(); // [rsp+160h] [rbp-60h]
  void **v47; // [rsp+168h] [rbp-58h]
  __int64 (__fastcall *v48)(); // [rsp+170h] [rbp-50h]
  __int64 v49; // [rsp+178h] [rbp-48h]
  __int64 v50; // [rsp+180h] [rbp-40h]
  __int64 (__fastcall *v51)(); // [rsp+188h] [rbp-38h]
  __int64 (__fastcall *v52)(); // [rsp+190h] [rbp-30h]

  LOBYTE(v2) = 1; /*0x1008f1cd4*/
  if ( *(_BYTE *)(a1 + 168) ) /*0x1008f1cd7*/
    return (unsigned int)v2; /*0x1008f1cde*/
  if ( __OFSUB__(0, *(_QWORD *)(a1 + 24)) || *(_QWORD *)(a1 + 40) <= 0x16u ) /*0x1008f1cfe*/
  {
    v3 = *(_QWORD *)(a1 + 48); /*0x1008f1d04*/
    v4 = *(_QWORD *)(a1 + 72); /*0x1008f1d08*/
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 48); /*0x1008f2169*/
    a2 = _mm_or_si128( /*0x1008f216d*/
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)(a1 + 32)), (__m128i)xmmword_1015DCAC0),
           _mm_xor_si128(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 32) + 7LL)), (__m128i)xmmword_1015DCAB0));
    v4 = *(_QWORD *)(a1 + 72); /*0x1008f2181*/
    if ( ((v4 == 0x8000000000000000LL) & _mm_testz_si128(a2, a2) & (v3 == 0x8000000000000000LL)) != 0 ) /*0x1008f218d*/
      return (unsigned int)v2; /*0x1008f218d*/
  }
  v5 = 0; /*0x1008f1d0c*/
  v6 = 0; /*0x1008f1d13*/
  if ( v3 != 0x8000000000000000LL ) /*0x1008f1d1b*/
    v6 = *(_QWORD *)(a1 + 56); /*0x1008f1d1d*/
  codexmate_lib::core::auth::decode_jwt_claims::hb792be1e7518c525(v22, v6, *(_QWORD *)(a1 + 64), *(double *)a2.i64); /*0x1008f1d28*/
  if ( v4 != 0x8000000000000000LL ) /*0x1008f1d34*/
    v5 = *(_QWORD *)(a1 + 80); /*0x1008f1d36*/
  codexmate_lib::core::auth::decode_jwt_claims::hb792be1e7518c525(v21, v5, *(_QWORD *)(a1 + 88), *(double *)a2.i64); /*0x1008f1d44*/
  v7 = v22; /*0x1008f1d57*/
  codexmate_lib::core::auth::nested_dict::hee321afd40c91aed( /*0x1008f1d63*/
    &v27,
    (__int64 *)v22,
    "https://api.openai.com/authhttps://api.openai.com/profilechatgpt_user_idchatgpt_plan_typechatgpt_subscription_active"
    "_untilauth.json contains AiMaMi managed virtual auth; not a real account",
    0x1Bu);
  if ( v27 ) /*0x1008f1d70*/
  {
    v50 = v32; /*0x1008f1d79*/
    v49 = v31; /*0x1008f1d84*/
    v48 = v30; /*0x1008f1d8f*/
    v47 = v29; /*0x1008f1d9a*/
    v46 = v28; /*0x1008f1dac*/
    v45 = v27; /*0x1008f1db0*/
  }
  else
  {
    v7 = v21; /*0x1008f1dc1*/
    codexmate_lib::core::auth::nested_dict::hee321afd40c91aed( /*0x1008f1dcd*/
      &v45,
      (__int64 *)v21,
      "https://api.openai.com/authhttps://api.openai.com/profilechatgpt_user_idchatgpt_plan_typechatgpt_subscription_acti"
      "ve_untilauth.json contains AiMaMi managed virtual auth; not a real account",
      0x1Bu);
  }
  if ( v45 ) /*0x1008f1dd7*/
  {
    v44 = v50; /*0x1008f1ddd*/
    v43 = v49; /*0x1008f1de5*/
    v42 = v48; /*0x1008f1ded*/
    v41 = v47; /*0x1008f1df5*/
    v40 = v46; /*0x1008f1e04*/
    v39 = v45; /*0x1008f1e0b*/
    if ( *(_QWORD *)(a1 + 120) == 0x8000000000000000LL ) /*0x1008f1e16*/
      goto LABEL_19; /*0x1008f1e16*/
  }
  else
  {
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008f1e24*/
    v11 = v8; /*0x1008f1e26*/
    if ( *(_BYTE *)(v8 + 16) == 1 ) /*0x1008f1e2d*/
    {
      v12 = *(_QWORD *)v8; /*0x1008f1e33*/
      v13 = *(_QWORD *)(v11 + 8); /*0x1008f1e36*/
    }
    else
    {
      v12 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008f221c*/
              &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
              v7,
              v9,
              v10);
      *(_QWORD *)v11 = v12; /*0x1008f2221*/
      *(_QWORD *)(v11 + 8) = v13; /*0x1008f2224*/
      *(_BYTE *)(v11 + 16) = 1; /*0x1008f2228*/
    }
    *(_QWORD *)v11 = v12 + 1; /*0x1008f1e3e*/
    v42 = nullptr; /*0x1008f1e48*/
    v41 = nullptr; /*0x1008f1e53*/
    v40 = nullptr; /*0x1008f1e61*/
    v39 = (__int64 (__fastcall *)())anon_155c4da9b5393270cfa7378e2b52c417_32; /*0x1008f1e6f*/
    v43 = v12; /*0x1008f1e76*/
    v44 = v13; /*0x1008f1e7a*/
    if ( *(_QWORD *)(a1 + 120) == 0x8000000000000000LL ) /*0x1008f1e82*/
      goto LABEL_19; /*0x1008f1e82*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v27, a1 + 120); /*0x1008f1e92*/
  if ( v27 == (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1008f1ea1*/
  {
LABEL_19:
    codexmate_lib::core::auth::string_val::h06aa957814d20bfc( /*0x1008f1ea7*/
      (signed __int64 *)&v36,
      (__int64 *)&v39,
      &unk_101677482,
      0x12u);
    goto LABEL_20; /*0x1008f1ec1*/
  }
  if ( !v29 ) /*0x1008f21b9*/
  {
    if ( v27 ) /*0x1008f21d8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x1008f21e3*/
    goto LABEL_19; /*0x1008f21e8*/
  }
  v36 = v27; /*0x1008f21bb*/
  v37 = v28; /*0x1008f21c2*/
  v38 = v29; /*0x1008f21c9*/
LABEL_20:
  codexmate_lib::core::auth::string_val::h06aa957814d20bfc( /*0x1008f1ec6*/
    (signed __int64 *)&v27,
    (__int64 *)&v39,
    "chatgpt_user_idchatgpt_plan_typechatgpt_subscription_active_untilauth.json contains AiMaMi managed virtual auth; not a real account",
    0xFu);
  if ( v27 == (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1008f1eec*/
  {
    codexmate_lib::core::auth::string_val::h06aa957814d20bfc( /*0x1008f1f05*/
      (signed __int64 *)&v45,
      (__int64 *)&v39,
      "chatgpt_account_user_idlast_refresh is outside the supported timestamp rangelast_refresh must be a timestamp string or numberexp",
      0x17u);
    if ( v45 == (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1008f1f0e*/
    {
      codexmate_lib::core::auth::string_val::h06aa957814d20bfc( /*0x1008f1f2a*/
        (signed __int64 *)&v33,
        (__int64 *)&v39,
        &unk_10167747B,
        7u);
      goto LABEL_25; /*0x1008f1f2f*/
    }
  }
  else
  {
    v47 = v29; /*0x1008f1f38*/
    v46 = v28; /*0x1008f1f4a*/
    v45 = v27; /*0x1008f1f4e*/
  }
  v35 = v47; /*0x1008f1f5c*/
  v34 = v46; /*0x1008f1f6b*/
  v33 = v45; /*0x1008f1f72*/
LABEL_25:
  v14 = (signed __int64)v36; /*0x1008f1f79*/
  v15 = (unsigned __int64)v33; /*0x1008f1f87*/
  v52 = v37; /*0x1008f1fa3*/
  v51 = v34; /*0x1008f1fa7*/
  if ( v33 != (__int64 (__fastcall *)())0x8000000000000000LL && v36 != (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1008f1f9e*/
  {
    v23[0] = v34; /*0x1008f1fc6*/
    v23[1] = v35; /*0x1008f1fcd*/
    v45 = v37; /*0x1008f1fd4*/
    v46 = (__int64 (__fastcall *)())v38; /*0x1008f1fd8*/
    v27 = (__int64 (__fastcall *)())v23; /*0x1008f1fe3*/
    v28 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008f1ff1*/
    v29 = (void **)&v45; /*0x1008f1ffc*/
    v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008f2003*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v24, &unk_1017C5F9F, &v27); /*0x1008f201f*/
    v17 = v25; /*0x1008f2024*/
    v18 = v26; /*0x1008f202b*/
    core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2( /*0x1008f204c*/
      &v27,
      v25,
      v26,
      &anon_155c4da9b5393270cfa7378e2b52c417_108,
      2);
    _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x1008f205c*/
      &v45,
      &v27);
    if ( (_DWORD)v45 == 1 /*0x1008f2095*/
      && v18 - (_QWORD)v47 == 36
      && (v2 = (unsigned __int64)v46,
          memcmp((char *)v47 + v17, &anon_155c4da9b5393270cfa7378e2b52c417_258, 0x24u) == 0 && v2 >= 7) )
    {
      LOBYTE(v2) = (*(_DWORD *)(v17 + v2 - 7) ^ 0x6C6E752D | *(_DWORD *)(v17 + v2 - 4) ^ 0x6B636F6C) == 0; /*0x1008f2203*/
      v19 = v24; /*0x1008f2207*/
      if ( !v24 ) /*0x1008f2211*/
        goto LABEL_32; /*0x1008f2211*/
    }
    else
    {
      LODWORD(v2) = 0; /*0x1008f20a0*/
      v19 = v24; /*0x1008f20a3*/
      if ( !v24 ) /*0x1008f20ad*/
      {
LABEL_32:
        if ( v14 ) /*0x1008f20c3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v14, 1); /*0x1008f20cd*/
        if ( v15 ) /*0x1008f20d9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v15, 1); /*0x1008f20e3*/
        v16 = 0; /*0x1008f20e8*/
        goto LABEL_37; /*0x1008f20e8*/
      }
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v19, 1); /*0x1008f20b7*/
    goto LABEL_32; /*0x1008f20b7*/
  }
  v16 = 1; /*0x1008f1fad*/
  LODWORD(v2) = 0; /*0x1008f1fb0*/
LABEL_37:
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(&v39); /*0x1008f20eb*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(v21); /*0x1008f20fe*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(v22); /*0x1008f210a*/
  if ( ((unsigned __int8)v16 & ((v15 & 0x7FFFFFFFFFFFFFFFLL) != 0)) != 0 ) /*0x1008f211b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v15, 1); /*0x1008f2129*/
  if ( ((unsigned __int8)v16 & ((v14 & 0x7FFFFFFFFFFFFFFFLL) != 0)) != 0 ) /*0x1008f2137*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v14, 1); /*0x1008f2145*/
  return (unsigned int)v2; /*0x1008f2196*/
}