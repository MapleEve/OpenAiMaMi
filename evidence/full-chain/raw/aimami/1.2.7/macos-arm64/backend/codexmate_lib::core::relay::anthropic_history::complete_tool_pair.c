// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::anthropic_history::complete_tool_pair::h0a6c7b4bbb181489; addr: 0x100c3c230; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:38Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_history::complete_tool_pair::h0a6c7b4bbb181489(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // r15d
  void **v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r12
  char *v33; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+8h] [rbp-D8h]
  __int64 v35; // [rsp+10h] [rbp-D0h]
  __int64 v36; // [rsp+18h] [rbp-C8h]
  __int64 v37; // [rsp+20h] [rbp-C0h]
  __int64 v38; // [rsp+28h] [rbp-B8h]
  char *v39; // [rsp+30h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+38h] [rbp-A8h]
  __int64 v41; // [rsp+40h] [rbp-A0h]
  __int64 v42; // [rsp+48h] [rbp-98h]
  __int64 v43; // [rsp+50h] [rbp-90h]
  __int64 v44; // [rsp+58h] [rbp-88h]
  __int64 v45; // [rsp+60h] [rbp-80h]
  __int64 v46; // [rsp+68h] [rbp-78h]
  __int64 v47; // [rsp+70h] [rbp-70h]
  __int64 v48; // [rsp+78h] [rbp-68h]
  char *v49; // [rsp+80h] [rbp-60h] BYREF
  __int64 v50; // [rsp+88h] [rbp-58h]
  __int64 v51; // [rsp+90h] [rbp-50h]
  __int64 v52; // [rsp+98h] [rbp-48h]
  __int64 v53; // [rsp+A0h] [rbp-40h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-38h]
  void **v55; // [rsp+B0h] [rbp-30h]

  v48 = a5; /*0x100c3c244*/
  v47 = a4; /*0x100c3c248*/
  v7 = 7; /*0x100c3c25c*/
  v8 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100c3c261*/
         &anon_859d1b4600149d0c2c9adb806d5a63b7_295,
         7,
         a1);
  if ( v8 && *(_BYTE *)v8 == 4 && (v9 = *(_QWORD *)(v8 + 24)) != 0 ) /*0x100c3c27f*/
  {
    v10 = *(_QWORD *)(v8 + 16); /*0x100c3c285*/
    v11 = 32 * v9; /*0x100c3c289*/
    while ( 1 ) /*0x100c3c2aa*/
    {
      v7 = 4; /*0x100c3c2aa*/
      v12 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100c3c2b5*/
              &anon_5fc5982723cbea77922f0a3a965b6f67_91,
              4,
              v10);
      if ( v12 ) /*0x100c3c2bd*/
      {
        if ( *(_BYTE *)v12 == 3 /*0x100c3c2d9*/
          && *(_QWORD *)(v12 + 24) == 8
          && **(_QWORD **)(v12 + 16) == anon_5fc5982723cbea77922f0a3a965b6f67_351 )
        {
          v13 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100c3c2ea*/
                  &anon_5fc5982723cbea77922f0a3a965b6f67_189,
                  4,
                  v10);
          if ( !v13 ) /*0x100c3c2f2*/
            return 0; /*0x100c3c364*/
          if ( *(_BYTE *)v13 != 3 ) /*0x100c3c2f7*/
            return 0; /*0x100c3c364*/
          v7 = *(_QWORD *)(v13 + 24); /*0x100c3c2fd*/
          core::str::_$LT$impl$u20$str$GT$::trim_matches::h867b24570208f58e(*(unsigned __int8 **)(v13 + 16), v7); /*0x100c3c301*/
          if ( !v14 ) /*0x100c3c309*/
            return 0; /*0x100c3c364*/
        }
      }
      v10 += 32; /*0x100c3c2a0*/
      v11 -= 32; /*0x100c3c2a4*/
      if ( !v11 ) /*0x100c3c2a8*/
        goto LABEL_14; /*0x100c3c2a8*/
    }
  }
  else
  {
LABEL_14:
    v15 = 24 * a3; /*0x100c3c30d*/
    v16 = a2; /*0x100c3c31c*/
    while ( v15 ) /*0x100c3c323*/
    {
      v15 -= 24; /*0x100c3c325*/
      v17 = *(_QWORD *)(v16 + 16) == 0; /*0x100c3c329*/
      v16 += 24; /*0x100c3c32e*/
      if ( v17 ) /*0x100c3c332*/
        return 0; /*0x100c3c332*/
    }
    v18 = 24 * v48; /*0x100c3c342*/
    v19 = v47; /*0x100c3c346*/
    while ( v18 ) /*0x100c3c353*/
    {
      v18 -= 24; /*0x100c3c355*/
      v17 = *(_QWORD *)(v19 + 16) == 0; /*0x100c3c359*/
      v19 += 24; /*0x100c3c35e*/
      if ( v17 ) /*0x100c3c362*/
        return 0; /*0x100c3c362*/
    }
    v45 = 8 * v48; /*0x100c3c37c*/
    v22 = (void **)&std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384; /*0x100c3c380*/
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100c3c387*/
    v26 = v23; /*0x100c3c389*/
    if ( *(_BYTE *)(v23 + 16) == 1 ) /*0x100c3c390*/
    {
      v27 = *(_QWORD *)v23; /*0x100c3c396*/
      v28 = *(_QWORD *)(v26 + 8); /*0x100c3c39a*/
    }
    else
    {
      v27 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100c3c55d*/
              &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
              v7,
              v24,
              v25);
      *(_QWORD *)v26 = v27; /*0x100c3c562*/
      *(_QWORD *)(v26 + 8) = v28; /*0x100c3c566*/
      *(_BYTE *)(v26 + 16) = 1; /*0x100c3c56a*/
    }
    *(_QWORD *)v26 = v27 + 1; /*0x100c3c3a2*/
    v52 = 0; /*0x100c3c3ad*/
    v51 = 0; /*0x100c3c3b8*/
    v50 = 0; /*0x100c3c3c3*/
    v49 = (char *)anon_859d1b4600149d0c2c9adb806d5a63b7_150; /*0x100c3c3d1*/
    v53 = v27; /*0x100c3c3d5*/
    v54 = v28; /*0x100c3c3d9*/
    if ( a3 ) /*0x100c3c3e0*/
    {
      hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::hc6e7b6d5d2733f2a(&v49, a3, &v53, 1); /*0x100c3c584*/
      v31 = 0; /*0x100c3c589*/
      v55 = (void **)&v49; /*0x100c3c58f*/
      do /*0x100c3c5b5*/
      {
        v7 = *(_QWORD *)(a2 + v31 + 8); /*0x100c3c593*/
        v46 = v31; /*0x100c3c598*/
        v22 = (void **)&v49; /*0x100c3c5a1*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hffb399647901c1a2(&v49, v7, *(_QWORD *)(a2 + v31 + 16)); /*0x100c3c5a5*/
        v31 = v46 + 24; /*0x100c3c5ae*/
      }
      while ( 24 * a3 != v46 + 24 ); /*0x100c3c5b5*/
    }
    v44 = v54; /*0x100c3c3ea*/
    v43 = v53; /*0x100c3c3f5*/
    v42 = v52; /*0x100c3c400*/
    v41 = v51; /*0x100c3c40b*/
    v40 = v50; /*0x100c3c41a*/
    v39 = v49; /*0x100c3c421*/
    if ( *(_BYTE *)(v26 + 16) == 1 ) /*0x100c3c42d*/
    {
      v29 = *(_QWORD *)v26; /*0x100c3c433*/
      v30 = *(_QWORD *)(v26 + 8); /*0x100c3c437*/
    }
    else
    {
      v29 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(v22, v7, v28, v50); /*0x100c3c5bc*/
      *(_QWORD *)v26 = v29; /*0x100c3c5c1*/
      *(_QWORD *)(v26 + 8) = v30; /*0x100c3c5c5*/
      *(_BYTE *)(v26 + 16) = 1; /*0x100c3c5c9*/
    }
    *(_QWORD *)v26 = v29 + 1; /*0x100c3c43f*/
    v52 = 0; /*0x100c3c44a*/
    v51 = 0; /*0x100c3c455*/
    v50 = 0; /*0x100c3c460*/
    v49 = (char *)anon_859d1b4600149d0c2c9adb806d5a63b7_150; /*0x100c3c464*/
    v53 = v29; /*0x100c3c468*/
    v54 = v30; /*0x100c3c46c*/
    if ( v48 ) /*0x100c3c475*/
    {
      hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::hc6e7b6d5d2733f2a(&v49, v48, &v53, 1); /*0x100c3c5e4*/
      v32 = 0; /*0x100c3c5f1*/
      do /*0x100c3c615*/
      {
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hffb399647901c1a2( /*0x100c3c609*/
          &v49,
          *(_QWORD *)(v47 + v32 + 8),
          *(_QWORD *)(v47 + v32 + 16));
        v32 += 24; /*0x100c3c60e*/
      }
      while ( 3 * v45 != v32 ); /*0x100c3c615*/
    }
    v38 = v54; /*0x100c3c47f*/
    v37 = v53; /*0x100c3c48a*/
    v36 = v52; /*0x100c3c495*/
    v35 = v51; /*0x100c3c4a0*/
    v34 = v50; /*0x100c3c4af*/
    v33 = v49; /*0x100c3c4b6*/
    v20 = 0; /*0x100c3c4bd*/
    if ( v42 == a3 && v52 == v48 ) /*0x100c3c4cd*/
      v20 = _$LT$std..collections..hash..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hbb0f0c2dea11c7f2( /*0x100c3c4e5*/
              &v39,
              &v33);
    if ( v34 && 17 * v34 != -33 ) /*0x100c3c502*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v33[-16 * v34 - 16], 17 * v34 + 33, 16); /*0x100c3c517*/
    if ( v40 && 17 * v40 != -33 ) /*0x100c3c53a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v39[-16 * v40 - 16], 17 * v40 + 33, 16); /*0x100c3c553*/
  }
  return v20; /*0x100c3c36a*/
}