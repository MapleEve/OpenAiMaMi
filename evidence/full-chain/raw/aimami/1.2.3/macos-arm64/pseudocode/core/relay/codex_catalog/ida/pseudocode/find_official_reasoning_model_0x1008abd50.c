// __ZN13codexmate_lib4core5relay13codex_catalog29find_official_reasoning_model28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1008abd50
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_catalog::find_official_reasoning_model | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
size_t __fastcall codexmate_lib::core::relay::codex_catalog::find_official_reasoning_model::_$u7b$$u7b$closure$u7d$$u7d$::h4efe6e3dfa135df0(
        __int64 a1,
        __int64 a2)
{
  size_t v2; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  const void *v11; // r13
  void *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i si128; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  __m128i v19; // xmm3
  __m128i v20; // xmm4
  __m128i v21; // xmm5
  __m128i v22; // xmm6
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __m128i v27; // xmm3
  __m128i v28; // xmm4
  bool v29; // zf
  bool v30; // r12
  __int64 v31; // rax
  size_t v32; // r13
  __int64 v33; // [rsp+8h] [rbp-48h] BYREF
  _DWORD *v34; // [rsp+10h] [rbp-40h]
  unsigned __int64 v35; // [rsp+18h] [rbp-38h]
  __int64 v36; // [rsp+20h] [rbp-30h]

  v4 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008abd76*/
         &anon_10420c9971c21f44d230d15b39fb3fec_727,
         4,
         a2);
  if ( !v4 || *(_BYTE *)v4 != 3 ) /*0x1008abd83*/
    return v2; /*0x1008abd83*/
  v5 = *(_QWORD *)(v4 + 16); /*0x1008abd85*/
  v6 = *(_QWORD *)(v4 + 24); /*0x1008abd89*/
  v7 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v5, v6); /*0x1008abd8d*/
  v2 = v8; /*0x1008abd92*/
  if ( v8 < 0 ) /*0x1008abd98*/
  {
    v9 = 0; /*0x1008abd9a*/
    goto LABEL_5; /*0x1008abd9a*/
  }
  if ( !v8 ) /*0x1008abdbf*/
  {
    v13 = 1; /*0x1008abe07*/
    goto LABEL_23; /*0x1008abe1d*/
  }
  v36 = a1; /*0x1008abdc1*/
  v11 = (const void *)v7; /*0x1008abdc5*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, v6); /*0x1008abdc8*/
  v9 = 1; /*0x1008abdcd*/
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v2, 1); /*0x1008abddb*/
  if ( !v12 ) /*0x1008abde3*/
LABEL_5:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v2); /*0x1008abd9d*/
  v13 = (__int64)v12; /*0x1008abde5*/
  memcpy(v12, v11, v2); /*0x1008abdf1*/
  if ( v2 < 8 ) /*0x1008abdfa*/
  {
    v14 = 0; /*0x1008abdfc*/
    a1 = v36; /*0x1008abdfe*/
    goto LABEL_21; /*0x1008abe02*/
  }
  a1 = v36; /*0x1008abe30*/
  if ( v2 < 0x20 ) /*0x1008abe34*/
  {
    v14 = 0; /*0x1008abe36*/
    goto LABEL_18; /*0x1008abe38*/
  }
  v14 = v2 & 0x7FFFFFFFFFFFFFE0LL; /*0x1008abe40*/
  v15 = 0; /*0x1008abe43*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x1008abe45*/
  v17 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x1008abe4d*/
  v18 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x1008abe55*/
  do /*0x1008abeb9*/
  {
    v19 = _mm_loadu_si128((const __m128i *)(v13 + v15)); /*0x1008abe60*/
    v20 = _mm_loadu_si128((const __m128i *)(v13 + v15 + 16)); /*0x1008abe66*/
    v21 = _mm_add_epi8(v19, si128); /*0x1008abe71*/
    v22 = _mm_add_epi8(v20, si128); /*0x1008abe79*/
    *(__m128i *)(v13 + v15) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v17), v21), v18), v19); /*0x1008abea5*/
    *(__m128i *)(v13 + v15 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v22, v17), v22), v18), v20); /*0x1008abeab*/
    v15 += 32; /*0x1008abeb2*/
  }
  while ( v14 != v15 ); /*0x1008abeb9*/
  if ( v2 == v14 ) /*0x1008abebe*/
    goto LABEL_23; /*0x1008abebe*/
  if ( (v2 & 0x18) != 0 ) /*0x1008abec8*/
  {
LABEL_18:
    v23 = v14; /*0x1008abeca*/
    v14 = v2 & 0x7FFFFFFFFFFFFFF8LL; /*0x1008abed4*/
    v24 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x1008abed7*/
    v25 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x1008abedf*/
    v26 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x1008abee7*/
    do /*0x1008abf1f*/
    {
      v27 = _mm_loadl_epi64((const __m128i *)(v13 + v23)); /*0x1008abef0*/
      v28 = _mm_add_epi8(v27, v24); /*0x1008abefa*/
      *(_QWORD *)(v13 + v23) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v28, v25), v28), v26), v27).u64[0]; /*0x1008abf12*/
      v23 += 8; /*0x1008abf18*/
    }
    while ( v14 != v23 ); /*0x1008abf1f*/
    goto LABEL_22; /*0x1008abf1f*/
  }
  do /*0x1008abf40*/
  {
LABEL_21:
    *(_BYTE *)(v13 + v14) |= 32 * ((unsigned __int8)(*(_BYTE *)(v13 + v14) - 65) < 0x1Au); /*0x1008abf23*/
    ++v14; /*0x1008abf3a*/
LABEL_22:
    ; /*0x1008abf3d*/
  }
  while ( v2 != v14 ); /*0x1008abf40*/
LABEL_23:
  codexmate_lib::core::relay::codex_catalog::model_tail_lower::hea6c4cd51fc9dd0a(&v33, v13, v2); /*0x1008abf42*/
  if ( v35 == 7 ) /*0x1008abf5d*/
  {
    v29 = (*v34 ^ 0x2D747067 | *(_DWORD *)((char *)v34 + 3) ^ 0x362E352D) == 0; /*0x1008abf6e*/
LABEL_28:
    v30 = v29; /*0x1008abf86*/
    goto LABEL_29; /*0x1008abf86*/
  }
  if ( v35 > 7 ) /*0x1008abf72*/
  {
    v29 = *(_QWORD *)v34 == 0x2D362E352D747067LL; /*0x1008abf83*/
    goto LABEL_28; /*0x1008abf83*/
  }
  v30 = 0; /*0x1008abf74*/
LABEL_29:
  if ( v33 ) /*0x1008abf91*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x1008abf98*/
  if ( v30 ) /*0x1008abfa0*/
  {
    v31 = a1; /*0x1008abfa2*/
    v32 = *(_QWORD *)(a1 + 16); /*0x1008abfa5*/
    if ( v32 >= v2 ) /*0x1008abfac*/
      memcmp((const void *)v13, *(const void **)(v31 + 8), v2); /*0x1008abfbb*/
  }
  if ( v2 ) /*0x1008abfc9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v2, 1); /*0x1008abfda*/
  return v2; /*0x1008abdb0*/
}