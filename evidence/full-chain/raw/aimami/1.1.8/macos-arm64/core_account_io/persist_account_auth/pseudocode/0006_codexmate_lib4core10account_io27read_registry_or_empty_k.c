// mac 1.1.8 behavioral persist_account_auth 0x1005228c0 d=1
__int64 __fastcall codexmate_lib::core::account_io::read_registry_or_empty_keys::he79c1dd15142f480(
        __int64 *a1,
        const void *a2,
        size_t a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // [rsp+8h] [rbp-118h] BYREF
  __int64 v27; // [rsp+10h] [rbp-110h]
  __int64 v28; // [rsp+18h] [rbp-108h]
  __int64 v29; // [rsp+20h] [rbp-100h]
  __int64 v30; // [rsp+28h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+30h] [rbp-F0h]
  __int64 v32; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-78h]
  __int64 v34; // [rsp+B0h] [rbp-70h]
  __int64 v35; // [rsp+B8h] [rbp-68h]
  __int64 v36; // [rsp+C0h] [rbp-60h]
  __int64 v37; // [rsp+C8h] [rbp-58h]
  __int64 v38; // [rsp+D0h] [rbp-50h]
  __int64 v39; // [rsp+D8h] [rbp-48h]
  __int64 v40; // [rsp+E0h] [rbp-40h]
  __int64 v41; // [rsp+E8h] [rbp-38h]
  __int64 v42; // [rsp+F0h] [rbp-30h]

  std::sys::fs::metadata::h32fa16d3052ea535(&v26, a2, a3); /*0x1005228e4*/
  if ( (_DWORD)v26 == 1 ) /*0x1005228f0*/
  {
    if ( (v27 & 3) == 1 ) /*0x100522905*/
    {
      v4 = *(_QWORD *)(v27 + 7); /*0x10052290f*/
      if ( *(_QWORD *)v4 ) /*0x100522913*/
        (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v27 - 1)); /*0x10052291f*/
      if ( *(_QWORD *)(v4 + 8) ) /*0x100522921*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100522933*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100522945*/
    }
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100522951*/
    v6 = (_QWORD *)v5; /*0x100522953*/
    if ( *(_BYTE *)(v5 + 16) == 1 ) /*0x10052295a*/
    {
      result = *(_QWORD *)v5; /*0x100522960*/
      v8 = v6[1]; /*0x100522963*/
    }
    else
    {
      v25 = v5; /*0x100522ca0*/
      result = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100522ca3*/
      v6 = (_QWORD *)v25; /*0x100522ca8*/
      *(_QWORD *)v25 = result; /*0x100522cab*/
      *(_QWORD *)(v25 + 8) = v8; /*0x100522cae*/
      *(_BYTE *)(v25 + 16) = 1; /*0x100522cb2*/
    }
    *v6 = result + 1; /*0x10052296b*/
    a1[3] = 0; /*0x100522975*/
    a1[2] = 0; /*0x100522980*/
    a1[1] = 0; /*0x10052298b*/
    *a1 = (__int64)anon_daf50d54a2d3ecbdf54de6a8568b21ab_88; /*0x100522996*/
    a1[4] = result; /*0x100522999*/
    a1[5] = v8; /*0x10052299d*/
    return result; /*0x1005229a1*/
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v26, a2, a3); /*0x1005229b3*/
  v9 = v26; /*0x1005229b8*/
  if ( __OFSUB__(-v26, 1) ) /*0x1005229c2*/
  {
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1005229d2*/
    v11 = v10; /*0x1005229d4*/
    if ( *(_BYTE *)(v10 + 16) == 1 ) /*0x1005229db*/
    {
      v12 = *(_QWORD *)v10; /*0x1005229e1*/
      v13 = *(_QWORD *)(v11 + 8); /*0x1005229e4*/
    }
    else
    {
      v12 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100522cbc*/
      *(_QWORD *)v11 = v12; /*0x100522cc1*/
      *(_QWORD *)(v11 + 8) = v13; /*0x100522cc4*/
      *(_BYTE *)(v11 + 16) = 1; /*0x100522cc8*/
    }
    *(_QWORD *)v11 = v12 + 1; /*0x1005229ec*/
    a1[3] = 0; /*0x1005229f6*/
    a1[2] = 0; /*0x100522a01*/
    a1[1] = 0; /*0x100522a0c*/
    *a1 = (__int64)anon_daf50d54a2d3ecbdf54de6a8568b21ab_88; /*0x100522a17*/
    a1[4] = v12; /*0x100522a1a*/
    a1[5] = v13; /*0x100522a1e*/
    result = v27; /*0x100522a22*/
    if ( (v27 & 3) != 1 ) /*0x100522a31*/
      return result; /*0x100522a31*/
    v14 = *(_QWORD *)(v27 + 7); /*0x100522a3f*/
    if ( *(_QWORD *)v14 ) /*0x100522a43*/
      (*(void (__fastcall **)(_QWORD))v14)(*(_QWORD *)(v27 - 1)); /*0x100522a4f*/
    if ( *(_QWORD *)(v14 + 8) ) /*0x100522a51*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100522a63*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100522c89*/
  }
  v32 = v27; /*0x100522a88*/
  v33 = v28; /*0x100522a8c*/
  v34 = 0; /*0x100522a90*/
  v35 = 0; /*0x100522a98*/
  v36 = v27; /*0x100522aa0*/
  v37 = v28; /*0x100522aa4*/
  serde_json::de::from_trait::hfff73d54d71a8a9a(&v26, &v32); /*0x100522ab3*/
  if ( v26 == 0x8000000000000000LL ) /*0x100522acc*/
  {
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100522ad5*/
    v16 = v15; /*0x100522ad7*/
    if ( *(_BYTE *)(v15 + 16) == 1 ) /*0x100522ade*/
    {
      v17 = *(_QWORD *)v15; /*0x100522ae4*/
      v18 = *(_QWORD *)(v16 + 8); /*0x100522ae8*/
    }
    else
    {
      v17 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100522cd2*/
      *(_QWORD *)v16 = v17; /*0x100522cd7*/
      *(_QWORD *)(v16 + 8) = v18; /*0x100522cdb*/
      *(_BYTE *)(v16 + 16) = 1; /*0x100522ce0*/
    }
    *(_QWORD *)v16 = v17 + 1; /*0x100522af1*/
    a1[3] = 0; /*0x100522afc*/
    a1[2] = 0; /*0x100522b07*/
    a1[1] = 0; /*0x100522b12*/
    *a1 = (__int64)anon_daf50d54a2d3ecbdf54de6a8568b21ab_88; /*0x100522b1d*/
    a1[4] = v17; /*0x100522b20*/
    a1[5] = v18; /*0x100522b24*/
    result = core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..repository..RegistryFile$C$serde_json..error..Error$GT$$GT$::hc1281579798507d5(&v26); /*0x100522b2f*/
  }
  else
  {
    v19 = v29; /*0x100522b40*/
    v42 = v30; /*0x100522b4e*/
    v38 = v27; /*0x100522b60*/
    v39 = v27; /*0x100522b64*/
    v40 = v26; /*0x100522b68*/
    v41 = v27 + 360 * v28; /*0x100522b6c*/
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100522b77*/
    v21 = v20; /*0x100522b79*/
    if ( *(_BYTE *)(v20 + 16) == 1 ) /*0x100522b80*/
    {
      v22 = *(_QWORD *)v20; /*0x100522b86*/
      v23 = *(_QWORD *)(v21 + 8); /*0x100522b8a*/
    }
    else
    {
      v22 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100522ceb*/
      *(_QWORD *)v21 = v22; /*0x100522cf0*/
      *(_QWORD *)(v21 + 8) = v23; /*0x100522cf4*/
      *(_BYTE *)(v21 + 16) = 1; /*0x100522cf8*/
    }
    *(_QWORD *)v21 = v22 + 1; /*0x100522b92*/
    v29 = 0; /*0x100522b9d*/
    v28 = 0; /*0x100522bab*/
    v27 = 0; /*0x100522bb9*/
    v26 = (__int64)anon_daf50d54a2d3ecbdf54de6a8568b21ab_88; /*0x100522bc7*/
    v30 = v22; /*0x100522bce*/
    v31 = v23; /*0x100522bd5*/
    if ( v41 != v39 ) /*0x100522be4*/
      hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57( /*0x100522d27*/
        (char **)&v26,
        0x4FA4FA4FA4FA4FA5LL * ((unsigned __int64)(v41 - v39) >> 3),
        (__int64)&v30,
        1u);
    v35 = v41; /*0x100522bee*/
    v34 = v40; /*0x100522bf6*/
    v33 = v39; /*0x100522c02*/
    v32 = v38; /*0x100522c06*/
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1c59451059a40808( /*0x100522c15*/
      &v32,
      &v26);
    a1[5] = v31; /*0x100522c21*/
    a1[4] = v30; /*0x100522c2c*/
    a1[3] = v29; /*0x100522c37*/
    a1[2] = v28; /*0x100522c42*/
    v24 = v26; /*0x100522c46*/
    a1[1] = v27; /*0x100522c54*/
    *a1 = v24; /*0x100522c58*/
    result = 2 * v19; /*0x100522c5b*/
    if ( 2 * v19 ) /*0x100522c5b*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100522c74*/
  }
  if ( v9 ) /*0x100522c7c*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100522c7c*/
  return result; /*0x100522c8e*/
}