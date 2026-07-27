// __ZN13codexmate_lib4core5relay16codex_diagnostic29diagnostic_valid_provider_ids @ 0x10050a640 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::diagnostic_valid_provider_ids::hc5129088cc949268(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __m128i *a4,
        char a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int128 *i8; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  const __m128i *v21; // r13
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 result; // rax
  const __m128i *v31; // [rsp+0h] [rbp-190h] BYREF
  __int64 v32; // [rsp+8h] [rbp-188h]
  __int64 v33; // [rsp+18h] [rbp-178h]
  __m128i si128; // [rsp+30h] [rbp-160h] BYREF
  _QWORD v35[4]; // [rsp+48h] [rbp-148h] BYREF
  __m128i v36; // [rsp+68h] [rbp-128h]
  __int64 v37; // [rsp+78h] [rbp-118h] BYREF
  __int64 v38; // [rsp+80h] [rbp-110h]
  __int64 v39; // [rsp+90h] [rbp-100h]
  __int128 *v40; // [rsp+98h] [rbp-F8h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-F0h]
  __int64 v42; // [rsp+A8h] [rbp-E8h]
  const __m128i *v43; // [rsp+B0h] [rbp-E0h]
  __int64 v44; // [rsp+B8h] [rbp-D8h]
  __int64 v45; // [rsp+C0h] [rbp-D0h]
  __int64 v46; // [rsp+C8h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-C0h]
  __int64 v48; // [rsp+D8h] [rbp-B8h]
  __int64 v49; // [rsp+E0h] [rbp-B0h]
  __m128i v50; // [rsp+E8h] [rbp-A8h]
  __int64 v51; // [rsp+F8h] [rbp-98h]
  __m128i v52; // [rsp+100h] [rbp-90h] BYREF
  __int64 v53; // [rsp+118h] [rbp-78h]
  __int64 v54; // [rsp+120h] [rbp-70h]
  __int64 v55; // [rsp+128h] [rbp-68h] BYREF
  __int64 v56; // [rsp+130h] [rbp-60h]
  __int64 v57; // [rsp+138h] [rbp-58h]
  const __m128i *v58; // [rsp+140h] [rbp-50h]
  const __m128i *v59; // [rsp+148h] [rbp-48h]
  __int64 v60; // [rsp+150h] [rbp-40h]
  __int16 v61; // [rsp+158h] [rbp-38h]
  __int64 v62; // [rsp+160h] [rbp-30h]

  v52 = a4[2]; /*0x10050a664*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h127091071eec6b7a(v35); /*0x10050a675*/
  v36 = _mm_load_si128(&v52); /*0x10050a682*/
  v46 = v35[0]; /*0x10050a698*/
  v47 = v35[1]; /*0x10050a69f*/
  v48 = v35[2]; /*0x10050a6ad*/
  v49 = v35[3]; /*0x10050a6bb*/
  v50 = v36; /*0x10050a6d0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v35, a4); /*0x10050a6de*/
  v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10050a6ed*/
  if ( !v9 ) /*0x10050a6f5*/
    goto LABEL_20; /*0x10050a6f5*/
  *(_WORD *)(v9 + 4) = 26977; /*0x10050a6fb*/
  *(_DWORD *)v9 = 1852141679; /*0x10050a701*/
  v55 = 6; /*0x10050a707*/
  v56 = v9; /*0x10050a70f*/
  v57 = 6; /*0x10050a713*/
  hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v46, &v55); /*0x10050a726*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v46, &v55); /*0x10050a72b*/
  v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10050a73a*/
  if ( !v10 ) /*0x10050a742*/
    goto LABEL_20; /*0x10050a742*/
  *(_WORD *)(v10 + 4) = 18753; /*0x10050a748*/
  *(_DWORD *)v10 = 1852141647; /*0x10050a74e*/
  v55 = 6; /*0x10050a754*/
  v56 = v10; /*0x10050a75c*/
  v57 = 6; /*0x10050a760*/
  hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v46, &v55); /*0x10050a773*/
  if ( (a5 & 1) == 0 ) /*0x10050a77c*/
    goto LABEL_6; /*0x10050a77c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v46, &v55); /*0x10050a77e*/
  v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10050a78d*/
  if ( !v11 ) /*0x10050a795*/
LABEL_20:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x10050aaac*/
  *(_WORD *)(v11 + 4) = 12649; /*0x10050a79b*/
  *(_DWORD *)v11 = 1634560353; /*0x10050a7a1*/
  v55 = 6; /*0x10050a7a7*/
  v56 = v11; /*0x10050a7af*/
  v57 = 6; /*0x10050a7b3*/
  hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v46, &v55); /*0x10050a7c6*/
LABEL_6:
  v12 = a2; /*0x10050a7cb*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v37, a2, a3); /*0x10050a7d8*/
  i8 = (__int128 *)v37; /*0x10050a7dd*/
  if ( v37 == 0x8000000000000000LL ) /*0x10050a7f5*/
  {
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x10050a7fe*/
    v17 = v14; /*0x10050a800*/
    if ( *(_BYTE *)(v14 + 16) == 1 ) /*0x10050a807*/
    {
      v18 = *(_QWORD *)v14; /*0x10050a80d*/
      v19 = *(_QWORD *)(v17 + 8); /*0x10050a810*/
    }
    else
    {
      v18 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x10050aa73*/
              &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
              v12,
              v15,
              v16);
      *(_QWORD *)v17 = v18; /*0x10050aa78*/
      *(_QWORD *)(v17 + 8) = v19; /*0x10050aa7b*/
      *(_BYTE *)(v17 + 16) = 1; /*0x10050aa7f*/
    }
    *(_QWORD *)v17 = v18 + 1; /*0x10050a818*/
    v58 = nullptr; /*0x10050a822*/
    v57 = 0; /*0x10050a82d*/
    v56 = 0; /*0x10050a838*/
    v55 = (__int64)&xmmword_1015FBEC0; /*0x10050a843*/
    v59 = (const __m128i *)v18; /*0x10050a847*/
    v60 = v19; /*0x10050a84b*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x10050a860*/
      0x8000000000000000LL,
      v38);
  }
  else
  {
    v20 = v38; /*0x10050a86a*/
    v51 = v38; /*0x10050a87f*/
    v52.i64[0] = v37; /*0x10050a886*/
    codexmate_lib::core::relay::codex_diagnostic::collect_defined_providers::h441d9e50c74bedaf((__int128 **)&v31, v38); /*0x10050a88d*/
    v21 = v31; /*0x10050a892*/
    v22 = v32; /*0x10050a899*/
    if ( v32 ) /*0x10050a8a3*/
    {
      v54 = 17 * v32 + 33; /*0x10050a8b1*/
      i8 = (__int128 *)v31[-v32 - 1].i8; /*0x10050a8bb*/
      v53 = 16; /*0x10050a8c4*/
    }
    else
    {
      v53 = 0; /*0x10050a8ca*/
    }
    si128 = _mm_load_si128(v31); /*0x10050a8d8*/
    v39 = v33; /*0x10050a8e7*/
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x10050a8f5*/
    v26 = v23; /*0x10050a8f7*/
    if ( *(_BYTE *)(v23 + 16) == 1 ) /*0x10050a8fe*/
    {
      v27 = *(_QWORD *)v23; /*0x10050a904*/
      v28 = *(_QWORD *)(v26 + 8); /*0x10050a908*/
    }
    else
    {
      v27 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x10050aa89*/
              &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
              v20,
              v24,
              v25);
      *(_QWORD *)v26 = v27; /*0x10050aa8e*/
      *(_QWORD *)(v26 + 8) = v28; /*0x10050aa92*/
      *(_BYTE *)(v26 + 16) = 1; /*0x10050aa97*/
    }
    v29 = _mm_load_si128(&si128); /*0x10050a911*/
    *(_QWORD *)v26 = v27 + 1; /*0x10050a928*/
    v43 = nullptr; /*0x10050a933*/
    v42 = 0; /*0x10050a941*/
    v41 = 0; /*0x10050a94f*/
    v40 = &xmmword_1015FBEC0; /*0x10050a95d*/
    v44 = v27; /*0x10050a964*/
    v45 = v28; /*0x10050a96b*/
    v55 = v53; /*0x10050a976*/
    v56 = v54; /*0x10050a97e*/
    v57 = (__int64)i8; /*0x10050a982*/
    v58 = v21; /*0x10050a986*/
    v59 = v21 + 1; /*0x10050a98a*/
    v60 = (__int64)v21->i64 + v22 + 1; /*0x10050a98e*/
    v61 = ~(unsigned __int16)_mm_movemask_epi8(v29); /*0x10050a992*/
    v62 = v39; /*0x10050a99d*/
    _$LT$hashbrown..set..IntoIter$LT$K$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h9896475586603b1a( /*0x10050a9ac*/
      &v55,
      &v40);
    v55 = (__int64)v40; /*0x10050a9bf*/
    v56 = v41; /*0x10050a9c3*/
    v57 = v42; /*0x10050a9ce*/
    v58 = v43; /*0x10050a9d9*/
    v59 = (const __m128i *)v44; /*0x10050a9e4*/
    v60 = v45; /*0x10050a9ef*/
    if ( v52.i64[0] ) /*0x10050a9fd*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v52.i64[0], 1); /*0x10050aa0b*/
  }
  _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::h911197e5f3927a7d( /*0x10050aa1b*/
    &v46,
    &v55);
  a1[2] = v50; /*0x10050aa32*/
  a1[1].i64[1] = v49; /*0x10050aa3d*/
  a1[1].i64[0] = v48; /*0x10050aa48*/
  result = v46; /*0x10050aa4c*/
  a1->i64[1] = v47; /*0x10050aa5a*/
  a1->i64[0] = result; /*0x10050aa5e*/
  return result; /*0x10050aa61*/
}