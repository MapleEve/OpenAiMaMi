// __ZN13codexmate_lib4core5relay7storage28apply_provider_id_migrations @ 0x1008b0c50 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::storage::apply_provider_id_migrations::h3d4155c9aa9a75e9(
        __int64 a1,
        _QWORD *a2,
        const __m128i *a3,
        __int64 a4)
{
  const __m128i *v5; // r15
  __int64 v7; // r14
  const __m128i *v8; // rsi
  unsigned __int64 v9; // r12
  const __m128i *v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rcx
  void *v16; // rax
  void *v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rbx
  _QWORD *v27; // r13
  _QWORD *v28; // r15
  __int64 v29; // rsi
  __int64 (__fastcall *v31)(); // rbx
  __int64 v32; // r14
  const __m128i *v33; // r15
  const __m128i *v35; // r12
  int v36; // r13d
  __int64 v37; // rax
  __int64 v38; // rsi
  unsigned __int64 v39; // rax
  __int64 v40; // rbx
  _BYTE v42[48]; // [rsp+8h] [rbp-138h] BYREF
  _QWORD v43[4]; // [rsp+38h] [rbp-108h] BYREF
  _QWORD v44[3]; // [rsp+58h] [rbp-E8h] BYREF
  _QWORD v45[2]; // [rsp+70h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+80h] [rbp-C0h]
  __int64 v47; // [rsp+88h] [rbp-B8h]
  _QWORD *v48; // [rsp+90h] [rbp-B0h]
  const __m128i *v49; // [rsp+98h] [rbp-A8h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+A0h] [rbp-A0h]
  __int64 v51; // [rsp+A8h] [rbp-98h]
  __int64 v52; // [rsp+B0h] [rbp-90h]
  const char *v53; // [rsp+B8h] [rbp-88h]
  __int64 v54; // [rsp+C0h] [rbp-80h]
  __int64 v55; // [rsp+C8h] [rbp-78h]
  void *v56; // [rsp+D0h] [rbp-70h]
  __int64 v57; // [rsp+D8h] [rbp-68h]
  __int64 v58; // [rsp+E0h] [rbp-60h]
  void *v59; // [rsp+E8h] [rbp-58h]
  const __m128i **v60; // [rsp+F0h] [rbp-50h]
  const __m128i *v61; // [rsp+F8h] [rbp-48h] BYREF
  __int64 (__fastcall *v62)(); // [rsp+100h] [rbp-40h]
  __int8 *v63; // [rsp+108h] [rbp-38h]
  __int64 (__fastcall *v64)(); // [rsp+110h] [rbp-30h]

  v5 = a3; /*0x1008b0c67*/
  v47 = a1; /*0x1008b0c6d*/
  v7 = a4 << 6; /*0x1008b0c77*/
  v8 = a3; /*0x1008b0c85*/
  _$LT$std..collections..hash..map..HashMap$LT$K$C$V$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::hd53f5778f76ddc70( /*0x1008b0c88*/
    v42,
    a3,
    &a3[4 * a4]);
  if ( a4 ) /*0x1008b0c90*/
  {
    v46 = a2[1]; /*0x1008b0c9a*/
    v9 = a2[2]; /*0x1008b0ca1*/
    v48 = a2; /*0x1008b0ca5*/
    while ( 1 ) /*0x1008b0cde*/
    {
      v11 = v5[3].u64[0]; /*0x1008b0cde*/
      if ( v11 < v9 ) /*0x1008b0ce5*/
        break; /*0x1008b0ce5*/
LABEL_4:
      v5 += 4; /*0x1008b0cd0*/
      v7 -= 64; /*0x1008b0cd4*/
      if ( !v7 ) /*0x1008b0cd8*/
        goto LABEL_26; /*0x1008b0cd8*/
    }
    v12 = v46 + 232 * v11; /*0x1008b0cf5*/
    if ( *(_BYTE *)(v12 + 228) == 1 ) /*0x1008b0d01*/
    {
      v13 = v47; /*0x1008b0d1b*/
      codexmate_lib::core::relay::keychain::copy_api_key_from_legacy_id::h440d262830c5cdf7( /*0x1008b0d22*/
        (unsigned __int64 *)&v61,
        v47,
        v5->i64[1],
        v5[1].i64[0],
        v5[2].i64[0],
        v5[2].i64[1]);
      if ( v61 == (const __m128i *)0x8000000000000000LL ) /*0x1008b0d35*/
      {
        if ( (_BYTE)v62 ) /*0x1008b0d3b*/
        {
          v5[3].i8[8] = 1; /*0x1008b0d41*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 1u ) /*0x1008b0d54*/
            goto LABEL_18; /*0x1008b0d54*/
        }
        else
        {
          *(_BYTE *)(v12 + 228) = 0; /*0x1008b0f22*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v61, v13); /*0x1008b0f29*/
          v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(82, 1); /*0x1008b0f38*/
          if ( !v16 ) /*0x1008b0f40*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 82); /*0x1008b120a*/
          v17 = v16; /*0x1008b0f46*/
          memcpy(v16, &unk_101675CB1, 0x52u); /*0x1008b0f58*/
          v18 = *(_QWORD *)(v12 + 168); /*0x1008b0f5d*/
          if ( v18 != 0x8000000000000000LL && v18 ) /*0x1008b0f76*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v12 + 176), v18, 1); /*0x1008b0f84*/
          *(_QWORD *)(v12 + 168) = 82; /*0x1008b0f89*/
          *(_QWORD *)(v12 + 176) = v17; /*0x1008b0f94*/
          *(_QWORD *)(v12 + 184) = 82; /*0x1008b0f9b*/
          a2 = v48; /*0x1008b0fa6*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 1u ) /*0x1008b0fbb*/
            goto LABEL_18; /*0x1008b0fbb*/
        }
        goto LABEL_17; /*0x1008b0d54*/
      }
      v51 = (__int64)v63; /*0x1008b0d63*/
      v50 = v62; /*0x1008b0d72*/
      v49 = v61; /*0x1008b0d79*/
      *(_BYTE *)(v12 + 228) = 0; /*0x1008b0d80*/
      v45[0] = &v49; /*0x1008b0d8e*/
      v45[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008b0d9c*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v44, &unk_1017C61E6, v45); /*0x1008b0db8*/
      v14 = *(_QWORD *)(v12 + 168); /*0x1008b0dbd*/
      if ( v14 != 0x8000000000000000LL && v14 ) /*0x1008b0dd6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v12 + 176), v14, 1); /*0x1008b0de4*/
      *(_QWORD *)(v12 + 184) = v44[2]; /*0x1008b0df7*/
      v15 = v44[0]; /*0x1008b0dfb*/
      *(_QWORD *)(v12 + 176) = v44[1]; /*0x1008b0e09*/
      *(_QWORD *)(v12 + 168) = v15; /*0x1008b0e0d*/
      if ( v49 ) /*0x1008b0e1a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1); /*0x1008b0e28*/
    }
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 1u ) /*0x1008b0e3e*/
    {
LABEL_18:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v49, &v5[1].u64[1]); /*0x1008b0ef3*/
      v8 = *(const __m128i **)v12; /*0x1008b0f03*/
      if ( *(_QWORD *)v12 ) /*0x1008b0f03*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v12 + 8), v8, 1); /*0x1008b0f18*/
      *(_QWORD *)(v12 + 16) = v51; /*0x1008b0cb7*/
      v10 = v49; /*0x1008b0cbb*/
      *(_QWORD *)(v12 + 8) = v50; /*0x1008b0cc9*/
      *(_QWORD *)v12 = v10; /*0x1008b0ccd*/
      goto LABEL_4; /*0x1008b0ccd*/
    }
LABEL_17:
    v61 = v5; /*0x1008b0e44*/
    v62 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h2ab36388d9951754; /*0x1008b0e53*/
    v63 = &v5[1].i8[8]; /*0x1008b0e57*/
    v64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008b0e62*/
    v55 = 2; /*0x1008b0e66*/
    v56 = &unk_101675C8E; /*0x1008b0e75*/
    v57 = 35; /*0x1008b0e79*/
    v59 = &unk_1017C6234; /*0x1008b0e88*/
    v60 = &v61; /*0x1008b0e90*/
    v49 = nullptr; /*0x1008b0e94*/
    v50 = (__int64 (__fastcall *)())&unk_101675C8E; /*0x1008b0e9f*/
    v51 = 35; /*0x1008b0ea6*/
    v52 = 0; /*0x1008b0eb1*/
    v53 = "src/core/relay/storage.rs"; /*0x1008b0ec3*/
    v54 = 25; /*0x1008b0eca*/
    v58 = 0x17900000001LL; /*0x1008b0edc*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v45, &v49); /*0x1008b0eee*/
    goto LABEL_18; /*0x1008b0eee*/
  }
LABEL_26:
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008b0fc6*/
  v22 = v19; /*0x1008b0fcf*/
  if ( *(_BYTE *)(v19 + 16) == 1 ) /*0x1008b0fd6*/
  {
    v23 = *(_QWORD *)v19; /*0x1008b0fdc*/
    v24 = *(_QWORD *)(v22 + 8); /*0x1008b0fdf*/
  }
  else
  {
    v23 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008b11ea*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v8,
            v20,
            v21);
    *(_QWORD *)v22 = v23; /*0x1008b11ef*/
    *(_QWORD *)(v22 + 8) = v24; /*0x1008b11f2*/
    *(_BYTE *)(v22 + 16) = 1; /*0x1008b11f6*/
  }
  *(_QWORD *)v22 = v23 + 1; /*0x1008b0fe7*/
  v52 = 0; /*0x1008b0ff1*/
  v51 = 0; /*0x1008b0fff*/
  v50 = nullptr; /*0x1008b100d*/
  v49 = (const __m128i *)&xmmword_1015FBEC0; /*0x1008b101b*/
  v53 = (const char *)v23; /*0x1008b1022*/
  v54 = v24; /*0x1008b1029*/
  v26 = a2[5]; /*0x1008b1031*/
  v43[0] = a2[4]; /*0x1008b103d*/
  v25 = v43[0]; /*0x1008b102d*/
  v43[1] = v43[0] + 24 * v26; /*0x1008b1044*/
  v43[2] = v42; /*0x1008b1052*/
  v43[3] = &v49; /*0x1008b1060*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h178676d4979c8c15( /*0x1008b1072*/
    &v61,
    v43);
  v27 = a2 + 3; /*0x1008b1077*/
  if ( v26 ) /*0x1008b107e*/
  {
    v28 = (_QWORD *)(v25 + 8); /*0x1008b1080*/
    do /*0x1008b1097*/
    {
      v29 = *(v28 - 1); /*0x1008b1099*/
      if ( v29 ) /*0x1008b10a0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v28, v29, 1); /*0x1008b10aa*/
      v28 += 3; /*0x1008b1090*/
      --v26; /*0x1008b1094*/
    }
    while ( v26 ); /*0x1008b1097*/
  }
  if ( *v27 ) /*0x1008b10b1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24LL * *v27, 8); /*0x1008b10ca*/
  v27[2] = v63; /*0x1008b10d3*/
  _RAX = v61; /*0x1008b10d7*/
  v27[1] = v62; /*0x1008b10df*/
  *v27 = _RAX; /*0x1008b10e3*/
  v31 = v50; /*0x1008b10e7*/
  if ( v50 ) /*0x1008b10f1*/
  {
    v32 = v52; /*0x1008b10f7*/
    if ( v52 ) /*0x1008b1101*/
    {
      v33 = v49; /*0x1008b1107*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v49)); /*0x1008b1118*/
      v35 = v49 + 1; /*0x1008b111b*/
      do /*0x1008b1140*/
      {
        if ( !(_WORD)_R13D ) /*0x1008b1146*/
        {
          do /*0x1008b116d*/
          {
            v36 = _mm_movemask_epi8(_mm_load_si128(v35)); /*0x1008b1156*/
            v33 -= 24; /*0x1008b115b*/
            ++v35; /*0x1008b1162*/
          }
          while ( v36 == 0xFFFF ); /*0x1008b116d*/
          _R13D = ~v36; /*0x1008b116f*/
        }
        __asm { tzcnt eax, r13d } /*0x1008b1172*/
        v37 = -3LL * (_QWORD)_RAX; /*0x1008b117a*/
        v38 = *((_QWORD *)&v33[-1] + v37 - 1); /*0x1008b117e*/
        if ( v38 ) /*0x1008b1186*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33[-1].i64[v37], v38, 1); /*0x1008b1195*/
        --v32; /*0x1008b1130*/
        _RAX = (const __m128i *)(_R13D & (unsigned int)(_R13D - 1)); /*0x1008b1137*/
        _R13D &= _R13D - 1; /*0x1008b113a*/
      }
      while ( v32 ); /*0x1008b1140*/
    }
    v39 = (24LL * (_QWORD)v31 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1008b11a8*/
    v40 = (__int64)v31 + v39 + 17; /*0x1008b11af*/
    if ( v40 ) /*0x1008b11b3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v49 - v39, v40, 16); /*0x1008b11c7*/
  }
  return _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h51cd264a45cd2627(v42); /*0x1008b11d8*/
}