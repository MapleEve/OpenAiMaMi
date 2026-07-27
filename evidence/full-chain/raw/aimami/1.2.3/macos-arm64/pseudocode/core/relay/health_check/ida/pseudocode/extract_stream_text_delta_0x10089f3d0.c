// __ZN13codexmate_lib4core5relay12health_check25extract_stream_text_delta @ 0x10089f3d0 | 基线 same-set
signed __int64 *__fastcall codexmate_lib::core::relay::health_check::extract_stream_text_delta::h2d52018377001310(
        signed __int64 *a1,
        char a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  signed __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  const char *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  const void *v21; // r15
  size_t v22; // r14
  signed __int64 v23; // r12
  void *v24; // r13
  const void *v26; // r15
  __int64 v27; // rax
  __int64 v28; // r12
  char v29[8]; // [rsp+0h] [rbp-40h] BYREF
  signed __int64 v30; // [rsp+8h] [rbp-38h]
  void *__dst; // [rsp+10h] [rbp-30h]

  if ( !a2 ) /*0x10089f3e7*/
  {
    v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10089f471*/
           "choicesfinish_reasoncompletedsummary_text",
           7,
           a3);
    if ( !v9 ) /*0x10089f479*/
      goto LABEL_30; /*0x10089f479*/
    if ( *(_BYTE *)v9 != 4 ) /*0x10089f482*/
      goto LABEL_30; /*0x10089f482*/
    if ( !*(_QWORD *)(v9 + 24) ) /*0x10089f488*/
      goto LABEL_30; /*0x10089f488*/
    v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10089f4a3*/
            "delta",
            5,
            *(_QWORD *)(v9 + 16));
    if ( !v10 ) /*0x10089f4ab*/
      goto LABEL_30; /*0x10089f4ab*/
    v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10089f4c0*/
            "contentpattern.output_modehead_limit",
            7,
            v10);
    if ( !v11 || *(_BYTE *)v11 != 3 ) /*0x10089f4d1*/
      goto LABEL_30; /*0x10089f4d1*/
    v12 = *(_QWORD *)(v11 + 24); /*0x10089f4d7*/
    if ( v12 < 0 ) /*0x10089f4de*/
    {
      v13 = 0; /*0x10089f4e4*/
      goto LABEL_17; /*0x10089f4e4*/
    }
    v26 = *(const void **)(v11 + 16); /*0x10089f60e*/
    if ( v12 ) /*0x10089f612*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("contentpattern.output_modehead_limit", 7); /*0x10089f614*/
      v13 = 1; /*0x10089f619*/
      v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x10089f627*/
      if ( !v27 ) /*0x10089f62f*/
LABEL_17:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v12); /*0x10089f4e7*/
      v28 = v27; /*0x10089f635*/
    }
    else
    {
      v28 = 1; /*0x10089f63a*/
    }
    memcpy((void *)v28, v26, v12); /*0x10089f649*/
    *a1 = v12; /*0x10089f64e*/
    a1[1] = v28; /*0x10089f651*/
    a1[2] = v12; /*0x10089f655*/
    return a1; /*0x10089f659*/
  }
  if ( a2 == 1 ) /*0x10089f3ff*/
  {
    v5 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10089f405*/
           &anon_10420c9971c21f44d230d15b39fb3fec_75,
           4,
           a3);
    if ( !v5 || *(_BYTE *)v5 != 3 ) /*0x10089f416*/
      goto LABEL_30; /*0x10089f416*/
    v6 = *(_QWORD *)(v5 + 16); /*0x10089f41c*/
    v7 = *(_QWORD *)(v5 + 24); /*0x10089f420*/
    if ( v7 == 37 ) /*0x10089f428*/
    {
      if ( memcmp((const void *)v6, "response.reasoning_summary_text.delta", 0x25u) ) /*0x10089f57a*/
      {
LABEL_30:
        *a1 = 0x8000000000000000LL; /*0x10089f5ef*/
        return a1; /*0x10089f5f9*/
      }
    }
    else
    {
      if ( v7 != 26 ) /*0x10089f432*/
        goto LABEL_30; /*0x10089f432*/
      v8 = _mm_or_si128( /*0x10089f451*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_101674A00),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v6 + 10)), (__m128i)xmmword_1016749F0));
      if ( !_mm_testz_si128(v8, v8) ) /*0x10089f455*/
        goto LABEL_30; /*0x10089f45a*/
    }
    v17 = "delta"; /*0x10089f583*/
    v18 = 5; /*0x10089f58a*/
    v19 = a3; /*0x10089f58f*/
  }
  else
  {
    v14 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10089f4f2*/
            &anon_10420c9971c21f44d230d15b39fb3fec_75,
            4,
            a3);
    if ( !v14 ) /*0x10089f4fa*/
      goto LABEL_30; /*0x10089f4fa*/
    if ( *(_BYTE *)v14 != 3 ) /*0x10089f503*/
      goto LABEL_30; /*0x10089f503*/
    if ( *(_QWORD *)(v14 + 24) != 19 ) /*0x10089f50e*/
      goto LABEL_30; /*0x10089f50e*/
    v15 = _mm_or_si128( /*0x10089f531*/
            _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v14 + 16)), (__m128i)xmmword_1016749E0),
            _mm_xor_si128(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v14 + 16) + 3LL)), (__m128i)xmmword_1016749D0));
    if ( !_mm_testz_si128(v15, v15) ) /*0x10089f535*/
      goto LABEL_30; /*0x10089f535*/
    v16 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("delta", 5, a3); /*0x10089f54f*/
    if ( !v16 ) /*0x10089f557*/
      goto LABEL_30; /*0x10089f557*/
    v17 = (const char *)&anon_10420c9971c21f44d230d15b39fb3fec_110; /*0x10089f55d*/
    v18 = 4; /*0x10089f564*/
    v19 = v16; /*0x10089f569*/
  }
  v20 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(v17, v18, v19); /*0x10089f592*/
  if ( !v20 || *(_BYTE *)v20 != 3 ) /*0x10089f59f*/
    goto LABEL_30; /*0x10089f59f*/
  v21 = *(const void **)(v20 + 16); /*0x10089f5a1*/
  v22 = *(_QWORD *)(v20 + 24); /*0x10089f5a5*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v29, v22, 0, 1, 1); /*0x10089f5bd*/
  v23 = v30; /*0x10089f5c2*/
  if ( v29[0] ) /*0x10089f5ca*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v30, __dst); /*0x10089f662*/
  v24 = __dst; /*0x10089f5d0*/
  memcpy(__dst, v21, v22); /*0x10089f5dd*/
  *a1 = v23; /*0x10089f5e2*/
  a1[1] = (signed __int64)v24; /*0x10089f5e5*/
  a1[2] = v22; /*0x10089f5e9*/
  return a1; /*0x10089f5ff*/
}