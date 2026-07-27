// __ZN13codexmate_lib4core4auth24make_api_request_context @ 0x1008f0900 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::auth::make_api_request_context::hf723ba8d82108568(
        _QWORD *a1,
        _QWORD *a2,
        double a3)
{
  __int64 v5; // r12
  _QWORD *v6; // r14
  __int64 v7; // rax
  void *v8; // rcx
  __int64 v9; // rdx
  void *v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // rdx
  __int64 v14; // rsi
  unsigned __int64 **v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdx
  void *v22; // r15
  _QWORD *v23; // rsi
  __int64 v24; // r12
  __int64 v25; // r14
  void *v26; // rax
  unsigned __int64 *v27[6]; // [rsp+8h] [rbp-118h] BYREF
  unsigned __int64 *v28[6]; // [rsp+38h] [rbp-E8h] BYREF
  void *v29; // [rsp+68h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+70h] [rbp-B0h]
  __int64 v31; // [rsp+78h] [rbp-A8h]
  void *v32; // [rsp+80h] [rbp-A0h]
  __int64 v33; // [rsp+88h] [rbp-98h]
  __int64 v34; // [rsp+90h] [rbp-90h]
  void *v35; // [rsp+98h] [rbp-88h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-80h]
  __int64 v37; // [rsp+A8h] [rbp-78h]
  void *v38; // [rsp+B0h] [rbp-70h]
  __int64 v39; // [rsp+B8h] [rbp-68h]
  __int64 v40; // [rsp+C0h] [rbp-60h]
  void *v41; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-50h]
  __int64 v43; // [rsp+D8h] [rbp-48h]
  void *v44; // [rsp+E0h] [rbp-40h]
  __int64 v45; // [rsp+E8h] [rbp-38h]
  __int64 v46; // [rsp+F0h] [rbp-30h]

  if ( (unsigned __int8)codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h4d4a884f31f32b45(a2) /*0x1008f0945*/
    || a2[9] == 0x8000000000000000LL
    || (v5 = a2[11]) == 0 )
  {
    *a1 = 0x8000000000000000LL; /*0x1008f09db*/
    return a1; /*0x1008f09db*/
  }
  v6 = a2 + 9; /*0x1008f094b*/
  if ( a2[15] == 0x8000000000000000LL || !a2[17] ) /*0x1008f0959*/
  {
    v13 = a2[8]; /*0x1008f09f3*/
    if ( a2[6] == 0x8000000000000000LL ) /*0x1008f09fb*/
      v14 = 0; /*0x1008f0a03*/
    else
      v14 = a2[7]; /*0x1008f09fd*/
    codexmate_lib::core::auth::decode_jwt_claims::hb792be1e7518c525(v28, v14, v13, a3); /*0x1008f0a0c*/
    codexmate_lib::core::auth::decode_jwt_claims::hb792be1e7518c525(v27, a2[10], v5, a3); /*0x1008f0a1f*/
    v15 = v28; /*0x1008f0a32*/
    codexmate_lib::core::auth::nested_dict::hee321afd40c91aed( /*0x1008f0a3e*/
      &v35,
      (__int64 *)v28,
      "https://api.openai.com/authhttps://api.openai.com/profilechatgpt_user_idchatgpt_plan_typechatgpt_subscription_acti"
      "ve_untilauth.json contains AiMaMi managed virtual auth; not a real account",
      0x1Bu);
    if ( v35 ) /*0x1008f0a4b*/
    {
      v34 = v40; /*0x1008f0a51*/
      v33 = v39; /*0x1008f0a5c*/
      v32 = v38; /*0x1008f0a67*/
      v31 = v37; /*0x1008f0a72*/
      v30 = v36; /*0x1008f0a84*/
      v29 = v35; /*0x1008f0a8b*/
    }
    else
    {
      v15 = v27; /*0x1008f0aa2*/
      codexmate_lib::core::auth::nested_dict::hee321afd40c91aed( /*0x1008f0aae*/
        &v29,
        (__int64 *)v27,
        "https://api.openai.com/authhttps://api.openai.com/profilechatgpt_user_idchatgpt_plan_typechatgpt_subscription_ac"
        "tive_untilauth.json contains AiMaMi managed virtual auth; not a real account",
        0x1Bu);
    }
    if ( v29 ) /*0x1008f0abb*/
    {
      v46 = v34; /*0x1008f0ac4*/
      v45 = v33; /*0x1008f0acf*/
      v44 = v32; /*0x1008f0ada*/
      v43 = v31; /*0x1008f0ae5*/
      v42 = v30; /*0x1008f0af7*/
      v41 = v29; /*0x1008f0afb*/
    }
    else
    {
      std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008f0b08*/
      v19 = v16; /*0x1008f0b0a*/
      if ( *(_BYTE *)(v16 + 16) == 1 ) /*0x1008f0b11*/
      {
        v20 = *(_QWORD *)v16; /*0x1008f0b17*/
        v21 = *(_QWORD *)(v19 + 8); /*0x1008f0b1a*/
      }
      else
      {
        v20 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008f0c21*/
                &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                v15,
                v17,
                v18);
        *(_QWORD *)v19 = v20; /*0x1008f0c26*/
        *(_QWORD *)(v19 + 8) = v21; /*0x1008f0c29*/
        *(_BYTE *)(v19 + 16) = 1; /*0x1008f0c2d*/
      }
      *(_QWORD *)v19 = v20 + 1; /*0x1008f0b22*/
      v44 = nullptr; /*0x1008f0b2c*/
      v43 = 0; /*0x1008f0b37*/
      v42 = 0; /*0x1008f0b42*/
      v41 = anon_155c4da9b5393270cfa7378e2b52c417_32; /*0x1008f0b4d*/
      v45 = v20; /*0x1008f0b51*/
      v46 = v21; /*0x1008f0b55*/
    }
    codexmate_lib::core::auth::string_val::h06aa957814d20bfc( /*0x1008f0b70*/
      (signed __int64 *)&v35,
      (__int64 *)&v41,
      &unk_101677482,
      0x12u);
    v22 = v35; /*0x1008f0b75*/
    if ( v35 != (void *)0x8000000000000000LL ) /*0x1008f0b7f*/
    {
      v23 = v6; /*0x1008f0b9b*/
      v24 = v36; /*0x1008f0b9e*/
      v25 = v37; /*0x1008f0ba2*/
      if ( v37 ) /*0x1008f0ba9*/
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v35, v23); /*0x1008f0bb2*/
        a1[2] = v37; /*0x1008f0bbb*/
        v26 = v35; /*0x1008f0bbf*/
        a1[1] = v36; /*0x1008f0bca*/
        *a1 = v26; /*0x1008f0bce*/
        a1[3] = v22; /*0x1008f0bd1*/
        a1[4] = v24; /*0x1008f0bd5*/
        a1[5] = v25; /*0x1008f0bd9*/
        _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(&v41); /*0x1008f0be1*/
        _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(v27); /*0x1008f0bed*/
        goto LABEL_24; /*0x1008f0bed*/
      }
      if ( v35 ) /*0x1008f0c06*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v35, 1); /*0x1008f0c17*/
    }
    *a1 = 0x8000000000000000LL; /*0x1008f0b81*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(&v41); /*0x1008f0b88*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(v27); /*0x1008f0b94*/
LABEL_24:
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(v28); /*0x1008f0bf2*/
    return a1; /*0x1008f0bfe*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v41, v6); /*0x1008f0972*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v29, a2 + 15); /*0x1008f0981*/
  v7 = v43; /*0x1008f0986*/
  v37 = v43; /*0x1008f098a*/
  v8 = v41; /*0x1008f098e*/
  v9 = v42; /*0x1008f0992*/
  v36 = v42; /*0x1008f0996*/
  v35 = v41; /*0x1008f099a*/
  v10 = v29; /*0x1008f09a1*/
  v11 = v30; /*0x1008f09a8*/
  v38 = v29; /*0x1008f09af*/
  v39 = v30; /*0x1008f09b3*/
  v40 = v31; /*0x1008f09be*/
  a1[5] = v31; /*0x1008f09c2*/
  a1[4] = v11; /*0x1008f09c6*/
  a1[3] = v10; /*0x1008f09ca*/
  a1[2] = v7; /*0x1008f09ce*/
  a1[1] = v9; /*0x1008f09d2*/
  *a1 = v8; /*0x1008f09d6*/
  return a1; /*0x1008f09e1*/
}