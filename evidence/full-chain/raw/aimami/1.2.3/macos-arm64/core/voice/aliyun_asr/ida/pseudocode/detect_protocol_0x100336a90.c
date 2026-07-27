// __ZN13codexmate_lib4core5voice10aliyun_asr15detect_protocol @ 0x100336a90 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::aliyun_asr::detect_protocol::hdd7925c717b6bf1a(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  size_t v7; // rbx
  const void *v8; // r12
  void *v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i si128; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  __m128i v17; // xmm4
  __m128i v18; // xmm5
  __m128i v19; // xmm6
  __int64 v20; // rdx
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm3
  __m128i v25; // xmm4
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  size_t v30; // r15
  void *v31; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __m128i v37; // xmm2
  __m128i v38; // xmm3
  __m128i v39; // xmm4
  __m128i v40; // xmm5
  __m128i v41; // xmm6
  __int64 v42; // rdx
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  __m128i v45; // xmm2
  __m128i v46; // xmm3
  __m128i v47; // xmm4
  void *__src; // [rsp+0h] [rbp-30h]

  v3 = a1[1]; /*0x100336aa1*/
  v4 = a1[2]; /*0x100336aa5*/
  v5 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v3, v4); /*0x100336aa9*/
  v7 = v6; /*0x100336aae*/
  if ( v6 < 0 ) /*0x100336ab4*/
  {
    v1 = 0; /*0x100336ab6*/
    goto LABEL_3; /*0x100336ab6*/
  }
  if ( !v6 ) /*0x100336ac4*/
  {
    v10 = 1; /*0x100336b04*/
    goto LABEL_20; /*0x100336b1a*/
  }
  v8 = (const void *)v5; /*0x100336ac6*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3, v4); /*0x100336ac9*/
  v1 = 1; /*0x100336ace*/
  v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x100336adc*/
  if ( !v9 ) /*0x100336ae4*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v1, v7); /*0x100336ab9*/
  v10 = (__int64)v9; /*0x100336ae6*/
  memcpy(v9, v8, v7); /*0x100336af2*/
  if ( v7 < 8 ) /*0x100336afb*/
  {
    v11 = 0; /*0x100336afd*/
    goto LABEL_18; /*0x100336aff*/
  }
  if ( v7 < 0x20 ) /*0x100336b2d*/
  {
    v11 = 0; /*0x100336b2f*/
    goto LABEL_15; /*0x100336b31*/
  }
  v11 = v7 & 0x7FFFFFFFFFFFFFE0LL; /*0x100336b39*/
  v12 = 0; /*0x100336b3c*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x100336b3e*/
  v14 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100336b46*/
  v15 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100336b4e*/
  do /*0x100336bb9*/
  {
    v16 = _mm_loadu_si128((const __m128i *)(v10 + v12)); /*0x100336b60*/
    v17 = _mm_loadu_si128((const __m128i *)(v10 + v12 + 16)); /*0x100336b66*/
    v18 = _mm_add_epi8(v16, si128); /*0x100336b71*/
    v19 = _mm_add_epi8(v17, si128); /*0x100336b79*/
    *(__m128i *)(v10 + v12) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v18, v14), v18), v15), v16); /*0x100336ba5*/
    *(__m128i *)(v10 + v12 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v19, v14), v19), v15), v17); /*0x100336bab*/
    v12 += 32; /*0x100336bb2*/
  }
  while ( v11 != v12 ); /*0x100336bb9*/
  if ( v7 == v11 ) /*0x100336bbe*/
    goto LABEL_20; /*0x100336bbe*/
  if ( (v7 & 0x18) != 0 ) /*0x100336bc7*/
  {
LABEL_15:
    v20 = v11; /*0x100336bc9*/
    v11 = v7 & 0x7FFFFFFFFFFFFFF8LL; /*0x100336bd3*/
    v21 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100336bd6*/
    v22 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100336bde*/
    v23 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100336be6*/
    do /*0x100336c1f*/
    {
      v24 = _mm_loadl_epi64((const __m128i *)(v10 + v20)); /*0x100336bf0*/
      v25 = _mm_add_epi8(v24, v21); /*0x100336bfa*/
      *(_QWORD *)(v10 + v20) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v25, v22), v25), v23), v24).u64[0]; /*0x100336c12*/
      v20 += 8; /*0x100336c18*/
    }
    while ( v11 != v20 ); /*0x100336c1f*/
    goto LABEL_19; /*0x100336c1f*/
  }
  do /*0x100336c40*/
  {
LABEL_18:
    *(_BYTE *)(v10 + v11) |= 32 * ((unsigned __int8)(*(_BYTE *)(v10 + v11) - 65) < 0x1Au); /*0x100336c23*/
    ++v11; /*0x100336c3a*/
LABEL_19:
    ; /*0x100336c3d*/
  }
  while ( v7 != v11 ); /*0x100336c40*/
LABEL_20:
  v26 = a1[7]; /*0x100336c42*/
  v27 = a1[8]; /*0x100336c46*/
  v28 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v26, v27); /*0x100336c4a*/
  v30 = v29; /*0x100336c4f*/
  if ( v29 < 0 ) /*0x100336c55*/
  {
    v1 = 0; /*0x100336c57*/
    goto LABEL_22; /*0x100336c57*/
  }
  if ( !v29 ) /*0x100336c6a*/
  {
    v32 = 1; /*0x100336cac*/
    goto LABEL_37; /*0x100336cc2*/
  }
  __src = (void *)v28; /*0x100336c6c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v27); /*0x100336c70*/
  v1 = 1; /*0x100336c75*/
  v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v30, 1); /*0x100336c83*/
  if ( !v31 ) /*0x100336c8b*/
LABEL_22:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v1, v30); /*0x100336c5a*/
  v32 = (__int64)v31; /*0x100336c8d*/
  memcpy(v31, __src, v30); /*0x100336c9a*/
  if ( v30 < 8 ) /*0x100336ca3*/
  {
    v33 = 0; /*0x100336ca5*/
    goto LABEL_43; /*0x100336ca7*/
  }
  if ( v30 < 0x20 ) /*0x100336cd5*/
  {
    v33 = 0; /*0x100336cd7*/
    goto LABEL_34; /*0x100336cd9*/
  }
  v33 = v30 & 0x7FFFFFFFFFFFFFE0LL; /*0x100336ce1*/
  v34 = 0; /*0x100336ce4*/
  v35 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x100336ce6*/
  v36 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100336cee*/
  v37 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100336cf6*/
  do /*0x100336d59*/
  {
    v38 = _mm_loadu_si128((const __m128i *)(v32 + v34)); /*0x100336d00*/
    v39 = _mm_loadu_si128((const __m128i *)(v32 + v34 + 16)); /*0x100336d06*/
    v40 = _mm_add_epi8(v38, v35); /*0x100336d11*/
    v41 = _mm_add_epi8(v39, v35); /*0x100336d19*/
    *(__m128i *)(v32 + v34) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v40, v36), v40), v37), v38); /*0x100336d45*/
    *(__m128i *)(v32 + v34 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v41, v36), v41), v37), v39); /*0x100336d4b*/
    v34 += 32; /*0x100336d52*/
  }
  while ( v33 != v34 ); /*0x100336d59*/
  if ( v30 == v33 ) /*0x100336d5e*/
    goto LABEL_45; /*0x100336d5e*/
  if ( (v30 & 0x18) != 0 ) /*0x100336d68*/
  {
LABEL_34:
    v42 = v33; /*0x100336d6e*/
    v33 = v30 & 0x7FFFFFFFFFFFFFF8LL; /*0x100336d78*/
    v43 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100336d7b*/
    v44 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100336d83*/
    v45 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100336d8b*/
    do /*0x100336dcf*/
    {
      v46 = _mm_loadl_epi64((const __m128i *)(v32 + v42)); /*0x100336da0*/
      v47 = _mm_add_epi8(v46, v43); /*0x100336daa*/
      *(_QWORD *)(v32 + v42) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v47, v44), v47), v45), v46).u64[0]; /*0x100336dc2*/
      v42 += 8; /*0x100336dc8*/
    }
    while ( v33 != v42 ); /*0x100336dcf*/
    goto LABEL_44; /*0x100336dcf*/
  }
  do /*0x100336e7a*/
  {
LABEL_43:
    *(_BYTE *)(v32 + v33) |= 32 * ((unsigned __int8)(*(_BYTE *)(v32 + v33) - 65) < 0x1Au); /*0x100336e5d*/
    ++v33; /*0x100336e74*/
LABEL_44:
    ; /*0x100336e77*/
  }
  while ( v30 != v33 ); /*0x100336e7a*/
LABEL_45:
  if ( v30 >= 4 && *(_DWORD *)v32 == 1852143473 ) /*0x100336e8e*/
  {
    LOBYTE(v1) = 1; /*0x100336e94*/
    goto LABEL_48; /*0x100336e94*/
  }
LABEL_37:
  if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100336e23*/
                          "dashscope.aliyuncs.comdashscope-intl.aliyuncs.com",
                          0x16u,
                          (void *)v10)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "dashscope-intl.aliyuncs.com",
                          0x1Bu,
                          (void *)v10) )
  {
    LODWORD(v1) = 0; /*0x100336e2c*/
    if ( !v30 ) /*0x100336e32*/
      goto LABEL_49; /*0x100336e32*/
LABEL_48:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v30, 1); /*0x100336e97*/
    goto LABEL_49; /*0x100336ea2*/
  }
  LOBYTE(v1) = 2; /*0x100336e36*/
  if ( v30 ) /*0x100336e3c*/
    goto LABEL_48; /*0x100336e3c*/
LABEL_49:
  if ( v7 ) /*0x100336eaa*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v7, 1); /*0x100336eb7*/
  return (unsigned int)v1; /*0x100336ec3*/
}