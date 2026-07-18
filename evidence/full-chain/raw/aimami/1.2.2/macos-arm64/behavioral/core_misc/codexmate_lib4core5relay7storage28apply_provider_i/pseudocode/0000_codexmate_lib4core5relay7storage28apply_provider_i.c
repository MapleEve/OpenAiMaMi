// mac 1.2.2 NEW codexmate_lib4core5relay7storage28apply_provider_i 0x10042a860 d=0
__int64 __fastcall codexmate_lib::core::relay::storage::apply_provider_id_migrations::h66877766ff237c4a(
        __int64 a1,
        _QWORD *a2,
        const __m128i *a3,
        __int64 a4)
{
  const __m128i *v5; // r15
  _QWORD *v6; // r13
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  const __m128i *v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  size_t v13; // rcx
  void *v14; // rax
  void *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rsi
  _QWORD *v24; // r13
  __int64 v25; // r15
  __int64 (__fastcall *v27)(); // rbx
  __int64 v28; // r14
  const __m128i *v29; // r15
  const __m128i *v31; // r12
  int v32; // r13d
  unsigned __int64 v33; // rbx
  _BYTE v35[48]; // [rsp+8h] [rbp-138h] BYREF
  _QWORD v36[4]; // [rsp+38h] [rbp-108h] BYREF
  size_t v37[3]; // [rsp+58h] [rbp-E8h] BYREF
  _QWORD v38[2]; // [rsp+70h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+80h] [rbp-C0h]
  __int64 v40; // [rsp+88h] [rbp-B8h]
  _QWORD *v41; // [rsp+90h] [rbp-B0h]
  const __m128i *v42; // [rsp+98h] [rbp-A8h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+A0h] [rbp-A0h]
  __int64 v44; // [rsp+A8h] [rbp-98h]
  __int64 v45; // [rsp+B0h] [rbp-90h]
  const char *v46; // [rsp+B8h] [rbp-88h]
  __int64 v47; // [rsp+C0h] [rbp-80h]
  __int64 v48; // [rsp+C8h] [rbp-78h]
  void *v49; // [rsp+D0h] [rbp-70h]
  __int64 v50; // [rsp+D8h] [rbp-68h]
  __int64 v51; // [rsp+E0h] [rbp-60h]
  void *v52; // [rsp+E8h] [rbp-58h]
  const __m128i **v53; // [rsp+F0h] [rbp-50h]
  const __m128i *v54; // [rsp+F8h] [rbp-48h] BYREF
  __int64 (__fastcall *v55)(); // [rsp+100h] [rbp-40h]
  __int64 v56; // [rsp+108h] [rbp-38h]
  __int64 (__fastcall *v57)(); // [rsp+110h] [rbp-30h]

  v5 = a3; /*0x10042a877*/
  v6 = a2; /*0x10042a87a*/
  v40 = a1; /*0x10042a87d*/
  v7 = a4 << 6; /*0x10042a887*/
  _$LT$std..collections..hash..map..HashMap$LT$K$C$V$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::h3fb6c5eb51045d1d( /*0x10042a898*/
    v35,
    a3,
    &a3[4 * a4]);
  if ( a4 ) /*0x10042a8a0*/
  {
    v39 = a2[1]; /*0x10042a8aa*/
    v8 = a2[2]; /*0x10042a8b1*/
    v41 = a2; /*0x10042a8b5*/
    while ( 1 ) /*0x10042a8ee*/
    {
      v10 = v5[3].u64[0]; /*0x10042a8ee*/
      if ( v10 < v8 ) /*0x10042a8f5*/
        break; /*0x10042a8f5*/
LABEL_4:
      v5 += 4; /*0x10042a8e0*/
      v7 -= 64; /*0x10042a8e4*/
      if ( !v7 ) /*0x10042a8e8*/
        goto LABEL_26; /*0x10042a8e8*/
    }
    v11 = v39 + 232 * v10; /*0x10042a905*/
    if ( *(_BYTE *)(v11 + 228) == 1 ) /*0x10042a911*/
    {
      codexmate_lib::core::relay::keychain::copy_api_key_from_legacy_id::h33737e9173015a42( /*0x10042a932*/
        &v54,
        v40,
        v5->i64[1],
        v5[1].i64[0],
        v5[2].i64[0],
        v5[2].i64[1]);
      if ( v54 == (const __m128i *)0x8000000000000000LL ) /*0x10042a945*/
      {
        if ( (_BYTE)v55 ) /*0x10042a94b*/
        {
          v5[3].i8[8] = 1; /*0x10042a951*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 1u ) /*0x10042a964*/
            goto LABEL_18; /*0x10042a964*/
        }
        else
        {
          *(_BYTE *)(v11 + 228) = 0; /*0x10042ab32*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10042ab39*/
          v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x52u, 1u); /*0x10042ab48*/
          if ( !v14 ) /*0x10042ab50*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x10042ae1a*/
          v15 = v14; /*0x10042ab56*/
          memcpy(v14, &unk_10151D514, 0x52u); /*0x10042ab68*/
          v16 = *(_QWORD *)(v11 + 168); /*0x10042ab6d*/
          if ( v16 != 0x8000000000000000LL && v16 ) /*0x10042ab86*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042ab94*/
          *(_QWORD *)(v11 + 168) = 82; /*0x10042ab99*/
          *(_QWORD *)(v11 + 176) = v15; /*0x10042aba4*/
          *(_QWORD *)(v11 + 184) = 82; /*0x10042abab*/
          v6 = v41; /*0x10042abb6*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 1u ) /*0x10042abcb*/
            goto LABEL_18; /*0x10042abcb*/
        }
        goto LABEL_17; /*0x10042a964*/
      }
      v44 = v56; /*0x10042a973*/
      v43 = v55; /*0x10042a982*/
      v42 = v54; /*0x10042a989*/
      *(_BYTE *)(v11 + 228) = 0; /*0x10042a990*/
      v38[0] = &v42; /*0x10042a99e*/
      v38[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10042a9ac*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v37, byte_1016F1E4D, (unsigned __int64)v38); /*0x10042a9c8*/
      v12 = *(_QWORD *)(v11 + 168); /*0x10042a9cd*/
      if ( v12 != 0x8000000000000000LL && v12 ) /*0x10042a9e6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042a9f4*/
      *(_QWORD *)(v11 + 184) = v37[2]; /*0x10042aa07*/
      v13 = v37[0]; /*0x10042aa0b*/
      *(_QWORD *)(v11 + 176) = v37[1]; /*0x10042aa19*/
      *(_QWORD *)(v11 + 168) = v13; /*0x10042aa1d*/
      if ( v42 ) /*0x10042aa2a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042aa38*/
    }
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 1u ) /*0x10042aa4e*/
    {
LABEL_18:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10042ab03*/
        (size_t *)&v42,
        (__int64)&v5[1].i64[1]);
      if ( *(_QWORD *)v11 ) /*0x10042ab13*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042ab28*/
      *(_QWORD *)(v11 + 16) = v44; /*0x10042a8c7*/
      v9 = v42; /*0x10042a8cb*/
      *(_QWORD *)(v11 + 8) = v43; /*0x10042a8d9*/
      *(_QWORD *)v11 = v9; /*0x10042a8dd*/
      goto LABEL_4; /*0x10042a8dd*/
    }
LABEL_17:
    v54 = v5; /*0x10042aa54*/
    v55 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h2ab36388d9951754; /*0x10042aa63*/
    v56 = (__int64)&v5[1].i64[1]; /*0x10042aa67*/
    v57 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10042aa72*/
    v48 = 2; /*0x10042aa76*/
    v49 = &unk_10151D4F1; /*0x10042aa85*/
    v50 = 35; /*0x10042aa89*/
    v52 = &unk_1016F1E9B; /*0x10042aa98*/
    v53 = &v54; /*0x10042aaa0*/
    v42 = nullptr; /*0x10042aaa4*/
    v43 = (__int64 (__fastcall *)())&unk_10151D4F1; /*0x10042aaaf*/
    v44 = 35; /*0x10042aab6*/
    v45 = 0; /*0x10042aac1*/
    v46 = "src/core/relay/storage.rs"; /*0x10042aad3*/
    v47 = 25; /*0x10042aada*/
    v51 = 0x12F00000001LL; /*0x10042aaec*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v38, &v42); /*0x10042aafe*/
    goto LABEL_18; /*0x10042aafe*/
  }
LABEL_26:
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x10042abd6*/
  v18 = v17; /*0x10042abdf*/
  if ( *(_BYTE *)(v17 + 16) == 1 ) /*0x10042abe6*/
  {
    v19 = *(_QWORD *)v17; /*0x10042abec*/
    v20 = *(_QWORD *)(v18 + 8); /*0x10042abef*/
  }
  else
  {
    v19 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x10042adfa*/
    *(_QWORD *)v18 = v19; /*0x10042adff*/
    *(_QWORD *)(v18 + 8) = v20; /*0x10042ae02*/
    *(_BYTE *)(v18 + 16) = 1; /*0x10042ae06*/
  }
  *(_QWORD *)v18 = v19 + 1; /*0x10042abf7*/
  v45 = 0; /*0x10042ac01*/
  v44 = 0; /*0x10042ac0f*/
  v43 = nullptr; /*0x10042ac1d*/
  v42 = (const __m128i *)&xmmword_101513850; /*0x10042ac2b*/
  v46 = (const char *)v19; /*0x10042ac32*/
  v47 = v20; /*0x10042ac39*/
  v22 = v6[5]; /*0x10042ac41*/
  v36[0] = v6[4]; /*0x10042ac4d*/
  v21 = v36[0]; /*0x10042ac3d*/
  v36[1] = v36[0] + 24 * v22; /*0x10042ac54*/
  v36[2] = v35; /*0x10042ac62*/
  v36[3] = &v42; /*0x10042ac70*/
  v23 = (__int64)v36; /*0x10042ac7b*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h68a700f692cc770e( /*0x10042ac82*/
    &v54,
    v36);
  v24 = v6 + 3; /*0x10042ac87*/
  if ( v22 ) /*0x10042ac8e*/
  {
    v25 = v21 + 8; /*0x10042ac90*/
    do /*0x10042aca7*/
    {
      v23 = *(_QWORD *)(v25 - 8); /*0x10042aca9*/
      if ( v23 ) /*0x10042acb0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042acba*/
      v25 += 24; /*0x10042aca0*/
      --v22; /*0x10042aca4*/
    }
    while ( v22 ); /*0x10042aca7*/
  }
  if ( *v24 ) /*0x10042acc1*/
  {
    v23 = 24LL * *v24; /*0x10042acce*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042acda*/
  }
  v24[2] = v56; /*0x10042ace3*/
  _RAX = v54; /*0x10042ace7*/
  v24[1] = v55; /*0x10042acef*/
  *v24 = _RAX; /*0x10042acf3*/
  v27 = v43; /*0x10042acf7*/
  if ( v43 ) /*0x10042ad01*/
  {
    v28 = v45; /*0x10042ad07*/
    if ( v45 ) /*0x10042ad11*/
    {
      v29 = v42; /*0x10042ad17*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v42)); /*0x10042ad28*/
      v31 = v42 + 1; /*0x10042ad2b*/
      do /*0x10042ad50*/
      {
        if ( !(_WORD)_R13D ) /*0x10042ad56*/
        {
          do /*0x10042ad7d*/
          {
            v32 = _mm_movemask_epi8(_mm_load_si128(v31)); /*0x10042ad66*/
            v29 -= 24; /*0x10042ad6b*/
            ++v31; /*0x10042ad72*/
          }
          while ( v32 == 0xFFFF ); /*0x10042ad7d*/
          _R13D = ~v32; /*0x10042ad7f*/
        }
        __asm { tzcnt eax, r13d } /*0x10042ad82*/
        v23 = *((_QWORD *)&v29[-1] - 3 * (_QWORD)_RAX - 1); /*0x10042ad8e*/
        if ( v23 ) /*0x10042ad96*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042ada5*/
        --v28; /*0x10042ad40*/
        _RAX = (const __m128i *)(_R13D & (unsigned int)(_R13D - 1)); /*0x10042ad47*/
        _R13D &= _R13D - 1; /*0x10042ad4a*/
      }
      while ( v28 ); /*0x10042ad50*/
    }
    v33 = (unsigned __int64)v27 + ((24LL * (_QWORD)v27 + 39) & 0xFFFFFFFFFFFFFFF0LL) + 17; /*0x10042adbf*/
    if ( v33 ) /*0x10042adc3*/
    {
      v23 = v33; /*0x10042add4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10042add7*/
    }
  }
  return _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc14174b96e674899( /*0x10042ade8*/
           v35,
           v23);
}