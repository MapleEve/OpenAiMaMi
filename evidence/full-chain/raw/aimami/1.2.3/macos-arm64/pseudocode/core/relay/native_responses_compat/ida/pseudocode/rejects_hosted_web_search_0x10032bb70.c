// __ZN13codexmate_lib4core5relay23native_responses_compat25rejects_hosted_web_search @ 0x10032bb70 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::native_responses_compat::rejects_hosted_web_search::haed7022df3fa3273(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // r12
  char v5; // al
  __int64 v7; // r15
  char v8; // al
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  size_t v14; // rbx
  const void *v15; // r15
  void *v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __m128i si128; // xmm0
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  __m128i v25; // xmm5
  __m128i v26; // xmm6
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  __m128i v32; // xmm4
  _DWORD *v33; // rax
  unsigned __int64 v34; // rdx
  void *v35; // r15
  __int64 v36; // [rsp+0h] [rbp-70h] BYREF
  void *__s1; // [rsp+8h] [rbp-68h]
  __int64 v38; // [rsp+10h] [rbp-60h]
  size_t v39; // [rsp+18h] [rbp-58h]
  __int64 v40; // [rsp+20h] [rbp-50h]
  size_t v41; // [rsp+28h] [rbp-48h]
  __int64 v42; // [rsp+30h] [rbp-40h]
  char v43; // [rsp+38h] [rbp-38h]
  __int16 v44; // [rsp+40h] [rbp-30h]

  if ( a4 != 1 ) /*0x10032bb84*/
  {
    LODWORD(v4) = 0; /*0x10032bb9c*/
    return (unsigned int)v4; /*0x10032bb9c*/
  }
  v5 = *(_BYTE *)(a1 + 231); /*0x10032bb86*/
  if ( v5 ) /*0x10032bb8f*/
  {
    LOBYTE(v4) = 1; /*0x10032bb93*/
    if ( (unsigned __int8)(v5 - 3) < 2u ) /*0x10032bb98*/
      return (unsigned int)v4; /*0x10032bb98*/
  }
  else
  {
    v7 = a3; /*0x10032bbbd*/
    v8 = codexmate_lib::core::relay::models::brand_for_model::hbcc42f602abd2e36(a2, a3); /*0x10032bbc0*/
    a3 = v7; /*0x10032bbc8*/
    LOBYTE(v4) = 1; /*0x10032bbd0*/
    if ( (unsigned __int8)(v8 - 3) < 2u ) /*0x10032bbd5*/
      return (unsigned int)v4; /*0x10032bbd5*/
  }
  v11 = a3; /*0x10032bbdd*/
  v12 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x10032bbe0*/
  v14 = v13; /*0x10032bbe5*/
  if ( v13 < 0 ) /*0x10032bbeb*/
  {
    v4 = 0; /*0x10032bbed*/
    goto LABEL_10; /*0x10032bbed*/
  }
  if ( !v13 ) /*0x10032bbfb*/
  {
    v17 = 1; /*0x10032bc3b*/
    goto LABEL_25; /*0x10032bc51*/
  }
  v15 = (const void *)v12; /*0x10032bbfd*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v11); /*0x10032bc00*/
  v4 = 1; /*0x10032bc05*/
  v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v14, 1); /*0x10032bc13*/
  if ( !v16 ) /*0x10032bc1b*/
LABEL_10:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v14); /*0x10032bbf0*/
  v17 = (__int64)v16; /*0x10032bc1d*/
  memcpy(v16, v15, v14); /*0x10032bc29*/
  if ( v14 < 8 ) /*0x10032bc32*/
  {
    v18 = 0; /*0x10032bc34*/
    goto LABEL_45; /*0x10032bc36*/
  }
  if ( v14 < 0x20 ) /*0x10032bc64*/
  {
    v18 = 0; /*0x10032bc66*/
    goto LABEL_22; /*0x10032bc68*/
  }
  v18 = v14 & 0x7FFFFFFFFFFFFFE0LL; /*0x10032bc70*/
  v19 = 0; /*0x10032bc73*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10032bc75*/
  v21 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x10032bc7d*/
  v22 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10032bc85*/
  do /*0x10032bce9*/
  {
    v23 = _mm_loadu_si128((const __m128i *)(v17 + v19)); /*0x10032bc90*/
    v24 = _mm_loadu_si128((const __m128i *)(v17 + v19 + 16)); /*0x10032bc96*/
    v25 = _mm_add_epi8(v23, si128); /*0x10032bca1*/
    v26 = _mm_add_epi8(v24, si128); /*0x10032bca9*/
    *(__m128i *)(v17 + v19) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v25, v21), v25), v22), v23); /*0x10032bcd5*/
    *(__m128i *)(v17 + v19 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v26, v21), v26), v22), v24); /*0x10032bcdb*/
    v19 += 32; /*0x10032bce2*/
  }
  while ( v18 != v19 ); /*0x10032bce9*/
  if ( v14 == v18 ) /*0x10032bcee*/
    goto LABEL_25; /*0x10032bcee*/
  if ( (v14 & 0x18) != 0 ) /*0x10032bcf3*/
  {
LABEL_22:
    v27 = v18; /*0x10032bcf9*/
    v18 = v14 & 0x7FFFFFFFFFFFFFF8LL; /*0x10032bd03*/
    v28 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x10032bd06*/
    v29 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10032bd0e*/
    v30 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x10032bd16*/
    do /*0x10032bd4f*/
    {
      v31 = _mm_loadl_epi64((const __m128i *)(v17 + v27)); /*0x10032bd20*/
      v32 = _mm_add_epi8(v31, v28); /*0x10032bd2a*/
      *(_QWORD *)(v17 + v27) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v32, v29), v32), v30), v31).u64[0]; /*0x10032bd42*/
      v27 += 8; /*0x10032bd48*/
    }
    while ( v18 != v27 ); /*0x10032bd4f*/
    goto LABEL_44; /*0x10032bd4f*/
  }
  do /*0x10032bf18*/
  {
LABEL_45:
    *(_BYTE *)(v17 + v18) |= 32 * ((unsigned __int8)(*(_BYTE *)(v17 + v18) - 65) < 0x1Au); /*0x10032bf1e*/
    ++v18; /*0x10032bf35*/
LABEL_44:
    ; /*0x10032bf15*/
  }
  while ( v14 != v18 ); /*0x10032bf18*/
LABEL_25:
  v36 = 0; /*0x10032bd56*/
  __s1 = (void *)v14; /*0x10032bd5e*/
  v38 = v17; /*0x10032bd62*/
  v39 = v14; /*0x10032bd66*/
  v40 = 0; /*0x10032bd6a*/
  v41 = v14; /*0x10032bd72*/
  v42 = 0x2F0000002FLL; /*0x10032bd80*/
  v43 = 1; /*0x10032bd84*/
  v44 = 1; /*0x10032bd88*/
  v33 = (_DWORD *)core::str::iter::SplitInternal$LT$P$GT$::next_back::h3733e925f64ab029(&v36); /*0x10032bd92*/
  if ( !v33 ) /*0x10032bd9a*/
  {
    v34 = v14; /*0x10032bd9a*/
    v33 = (_DWORD *)v17; /*0x10032bd9e*/
  }
  if ( v34 < 4 /*0x10032beb0*/
    || *v33 != 1869441389
    && (v34 < 7
     || *v33 ^ 0x696E696D | *(_DWORD *)((char *)v33 + 3) ^ 0x78616D69
     && *v33 ^ 0x676E6F6C | *(_DWORD *)((char *)v33 + 3) ^ 0x74616367
     && (v34 < 0xB || *(_QWORD *)v33 ^ 0x6F632D336E657771LL | *(_QWORD *)((char *)v33 + 3) ^ 0x7265646F632D336ELL)) )
  {
    alloc::str::_$LT$impl$u20$str$GT$::to_ascii_lowercase::h0a527fd5b7c7287b( /*0x10032bdca*/
      &v36,
      *(_QWORD *)(a1 + 56),
      *(_QWORD *)(a1 + 64));
    v35 = __s1; /*0x10032bdcf*/
    LOBYTE(v4) = 1; /*0x10032bdee*/
    if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10032be22*/
                             &unk_1015E45EC,
                             0xEu,
                             __s1)
      && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                             &unk_1015E45FA,
                             0xCu,
                             v35)
      && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                             &unk_1015E4606,
                             0xAu,
                             v35) )
    {
      LODWORD(v4) = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10032be42*/
                      &unk_1015E4610,
                      0xCu,
                      v35);
    }
    if ( v36 ) /*0x10032be4c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v36, 1); /*0x10032be56*/
    if ( v14 ) /*0x10032be5e*/
      goto LABEL_43; /*0x10032be5e*/
  }
  else
  {
    LOBYTE(v4) = 1; /*0x10032beb9*/
    if ( v14 ) /*0x10032bebf*/
LABEL_43:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v14, 1); /*0x10032bec5*/
  }
  return (unsigned int)v4; /*0x10032bba2*/
}