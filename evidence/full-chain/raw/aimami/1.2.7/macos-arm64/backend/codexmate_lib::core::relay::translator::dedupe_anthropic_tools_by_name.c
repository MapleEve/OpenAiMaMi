// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::dedupe_anthropic_tools_by_name::h45a5b28270b34445; addr: 0x10080bec0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:23Z
double __fastcall codexmate_lib::core::relay::translator::dedupe_anthropic_tools_by_name::h45a5b28270b34445(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // r12
  __int64 *v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r15
  __int8 v17; // al
  __int64 v18; // rax
  __int64 v19; // rsi
  signed __int64 v20; // r12
  __int64 v21; // r14
  void *v22; // r14
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int128 v26; // kr00_16
  __int64 v27; // rax
  __int64 v29; // rbx
  __int64 v30; // r14
  const __m128i *v31; // r15
  __m128i si128; // xmm0
  const __m128i *v34; // r12
  int v35; // r13d
  __int64 v36; // rax
  __int64 v37; // rsi
  unsigned __int64 v38; // rax
  __int64 v39; // rbx
  _QWORD v41[3]; // [rsp+8h] [rbp-108h] BYREF
  const __m128i *v42; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v43; // [rsp+28h] [rbp-E8h]
  __int64 v44; // [rsp+30h] [rbp-E0h]
  __int64 v45; // [rsp+38h] [rbp-D8h]
  __int64 v46; // [rsp+40h] [rbp-D0h]
  __int64 v47; // [rsp+48h] [rbp-C8h]
  __int64 *v48; // [rsp+50h] [rbp-C0h]
  void *__src; // [rsp+58h] [rbp-B8h]
  __int128 v50; // [rsp+60h] [rbp-B0h]
  _BYTE v51[15]; // [rsp+70h] [rbp-A0h]
  __m256i v52; // [rsp+80h] [rbp-90h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-68h]
  __int64 v55; // [rsp+B0h] [rbp-60h]
  __int64 v56; // [rsp+B8h] [rbp-58h]
  __int64 v57; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-48h]
  __int64 v59; // [rsp+D0h] [rbp-40h]
  void *__dst; // [rsp+D8h] [rbp-38h]
  _QWORD *v61; // [rsp+E0h] [rbp-30h]

  v2 = (__int64)a2; /*0x10080bed4*/
  v3 = a1; /*0x10080bed7*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x10080bee1*/
  v7 = v4; /*0x10080bee3*/
  if ( *(_BYTE *)(v4 + 16) == 1 ) /*0x10080beea*/
  {
    v8 = *(_QWORD *)v4; /*0x10080bef0*/
    v9 = *(_QWORD *)(v7 + 8); /*0x10080bef3*/
  }
  else
  {
    v8 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x10080c2ce*/
           &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
           a2,
           v5,
           v6);
    *(_QWORD *)v7 = v8; /*0x10080c2d3*/
    *(_QWORD *)(v7 + 8) = v9; /*0x10080c2d6*/
    *(_BYTE *)(v7 + 16) = 1; /*0x10080c2da*/
  }
  *(_QWORD *)v7 = v8 + 1; /*0x10080befb*/
  v45 = 0; /*0x10080bf05*/
  v44 = 0; /*0x10080bf13*/
  v43 = 0; /*0x10080bf21*/
  v42 = (const __m128i *)&xmmword_10182BC00; /*0x10080bf2f*/
  v46 = v8; /*0x10080bf36*/
  v47 = v9; /*0x10080bf3d*/
  v10 = a2[2]; /*0x10080bf44*/
  v11 = 32 * v10; /*0x10080bf4c*/
  if ( v10 ) /*0x10080bf53*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384); /*0x10080bf55*/
    v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 8); /*0x10080bf62*/
    if ( !v12 ) /*0x10080bf6a*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, v11); /*0x10080bf74*/
  }
  else
  {
    v12 = 8; /*0x10080bf7e*/
  }
  v57 = v10; /*0x10080bf83*/
  v58 = v12; /*0x10080bf87*/
  v59 = 0; /*0x10080bf8b*/
  v13 = *a2; /*0x10080bf93*/
  v14 = a2[1]; /*0x10080bf97*/
  v15 = v14 + v11; /*0x10080bf9c*/
  v53 = v14; /*0x10080bf9f*/
  v54 = v14; /*0x10080bfa3*/
  v55 = v13; /*0x10080bfa7*/
  v56 = v15; /*0x10080bfab*/
  if ( !v10 ) /*0x10080bfb2*/
    goto LABEL_28; /*0x10080bfb2*/
  v48 = a1; /*0x10080bfb8*/
  v61 = a2; /*0x10080bfbf*/
  v16 = v14 + 32; /*0x10080bfca*/
  do /*0x10080c173*/
  {
    v17 = *(_BYTE *)(v16 - 32); /*0x10080bfce*/
    *(_QWORD *)&v51[7] = *(_QWORD *)(v16 - 8); /*0x10080bfd7*/
    *(_QWORD *)v51 = *(_QWORD *)(v16 - 15); /*0x10080bfe2*/
    v50 = *(_OWORD *)(v16 - 31); /*0x10080bff8*/
    if ( v17 == 6 ) /*0x10080c001*/
      goto LABEL_27; /*0x10080c001*/
    v52.i8[0] = v17; /*0x10080c007*/
    v52.i64[3] = *(_QWORD *)&v51[7]; /*0x10080c014*/
    *(__int64 *)((char *)&v52.i64[2] + 1) = *(_QWORD *)v51; /*0x10080c01f*/
    *(__int128 *)((char *)v52.i128 + 1) = v50; /*0x10080c035*/
    v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10080c04c*/
            &anon_5fc5982723cbea77922f0a3a965b6f67_189,
            4,
            &v52);
    if ( !v18 || *(_BYTE *)v18 != 3 ) /*0x10080c05d*/
    {
LABEL_17:
      v23 = v59; /*0x10080c110*/
      v2 = 1; /*0x10080c114*/
      if ( v59 == v57 ) /*0x10080c11e*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v57); /*0x10080c124*/
      goto LABEL_19; /*0x10080c124*/
    }
    v19 = v2; /*0x10080c063*/
    v20 = *(_QWORD *)(v18 + 24); /*0x10080c066*/
    if ( v20 < 0 ) /*0x10080c06d*/
    {
      v21 = 0; /*0x10080c194*/
      goto LABEL_26; /*0x10080c194*/
    }
    if ( !v20 ) /*0x10080c073*/
      goto LABEL_17; /*0x10080c073*/
    __src = *(void **)(v18 + 16); /*0x10080c07d*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&anon_5fc5982723cbea77922f0a3a965b6f67_189); /*0x10080c084*/
    v21 = 1; /*0x10080c089*/
    __dst = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v20, 1); /*0x10080c09c*/
    if ( !__dst ) /*0x10080c0a3*/
    {
      v19 = v20; /*0x10080c2e4*/
LABEL_26:
      v54 = v16; /*0x10080c197*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v21, v19); /*0x10080c1a2*/
    }
    v22 = __dst; /*0x10080c0a9*/
    memcpy(__dst, __src, v20); /*0x10080c0ba*/
    v41[0] = v20; /*0x10080c0bf*/
    v41[1] = v22; /*0x10080c0c6*/
    v41[2] = v20; /*0x10080c0cd*/
    if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h54d7bf1164eb3522(&v42, v41) ) /*0x10080c0e2*/
    {
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v52); /*0x10080c0f6*/
      v2 = (__int64)__dst; /*0x10080c0fb*/
      goto LABEL_20; /*0x10080c0ff*/
    }
    v23 = v59; /*0x10080c17b*/
    if ( v59 == v57 ) /*0x10080c183*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v57); /*0x10080c189*/
    v2 = (__int64)__dst; /*0x10080c18e*/
LABEL_19:
    v24 = v58; /*0x10080c129*/
    v25 = 32 * v23; /*0x10080c130*/
    v26 = v52.i128[0]; /*0x10080c13b*/
    *(_OWORD *)(v58 + v25 + 16) = v52.i128[1]; /*0x10080c14f*/
    *(_OWORD *)(v24 + v25) = v26; /*0x10080c159*/
    v59 = v23 + 1; /*0x10080c160*/
LABEL_20:
    v27 = v16 - 32; /*0x10080c164*/
    v16 += 32; /*0x10080c168*/
  }
  while ( v27 + 32 != v15 ); /*0x10080c173*/
  v16 = v15; /*0x10080c1a9*/
LABEL_27:
  v54 = v16; /*0x10080c1ac*/
  v3 = v48; /*0x10080c1b4*/
LABEL_28:
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h152eadf90434d158(&v53); /*0x10080c1bb*/
  v3[2] = v59; /*0x10080c1c8*/
  _RAX = v57; /*0x10080c1cc*/
  v3[1] = v58; /*0x10080c1d4*/
  *v3 = _RAX; /*0x10080c1d8*/
  v29 = v43; /*0x10080c1dc*/
  if ( v43 ) /*0x10080c1e6*/
  {
    v30 = v45; /*0x10080c1ec*/
    if ( v45 ) /*0x10080c1f6*/
    {
      v31 = v42; /*0x10080c1fc*/
      si128 = _mm_load_si128(v42); /*0x10080c203*/
      _R13D = ~_mm_movemask_epi8(si128); /*0x10080c20d*/
      v34 = v42 + 1; /*0x10080c210*/
      do /*0x10080c230*/
      {
        if ( !(_WORD)_R13D ) /*0x10080c236*/
        {
          do /*0x10080c25d*/
          {
            si128 = _mm_load_si128(v34); /*0x10080c240*/
            v35 = _mm_movemask_epi8(si128); /*0x10080c246*/
            v31 -= 24; /*0x10080c24b*/
            ++v34; /*0x10080c252*/
          }
          while ( v35 == 0xFFFF ); /*0x10080c25d*/
          _R13D = ~v35; /*0x10080c25f*/
        }
        __asm { tzcnt eax, r13d } /*0x10080c262*/
        v36 = -3 * _RAX; /*0x10080c26a*/
        v37 = *((_QWORD *)&v31[-1] + v36 - 1); /*0x10080c26e*/
        if ( v37 ) /*0x10080c276*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31[-1].i64[v36], v37, 1); /*0x10080c285*/
        --v30; /*0x10080c220*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x10080c227*/
        _R13D &= _R13D - 1; /*0x10080c22a*/
      }
      while ( v30 ); /*0x10080c230*/
    }
    v38 = (24 * v29 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x10080c298*/
    v39 = v38 + v29 + 17; /*0x10080c29f*/
    if ( v39 ) /*0x10080c2a3*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v42 - v38, v39, 16); /*0x10080c2b7*/
  }
  return *(double *)si128.i64; /*0x10080c2bc*/
}