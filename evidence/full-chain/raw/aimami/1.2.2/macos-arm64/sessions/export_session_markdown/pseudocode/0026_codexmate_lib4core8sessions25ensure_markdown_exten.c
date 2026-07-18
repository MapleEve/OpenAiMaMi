// mac 1.2.2 NEW export_session_markdown 0x100a39c60 d=1
__int64 __fastcall codexmate_lib::core::sessions::ensure_markdown_extension::h2fa5786bb66d7966(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  size_t v7; // r15
  __int64 result; // rax
  __int64 v9; // rdi
  void *v10; // r12
  _WORD *v11; // rax
  _WORD *v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i si128; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __m128i v20; // xmm5
  __m128i v21; // xmm6
  __int64 v22; // rdx
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  __m128i v26; // xmm3
  __m128i v27; // xmm4
  __int64 v28; // rax
  char v29[8]; // [rsp+0h] [rbp-50h] BYREF
  void *__src; // [rsp+8h] [rbp-48h]
  size_t __n; // [rsp+10h] [rbp-40h]
  __int64 v32; // [rsp+18h] [rbp-38h] BYREF
  __int64 v33; // [rsp+20h] [rbp-30h]
  __int64 v34; // [rsp+28h] [rbp-28h]

  std::path::Path::to_path_buf::h73855ce4b54f7174(&v32, a2, a3); /*0x100a39c76*/
  v6 = std::path::Path::extension::hbb56a39ecf8d3771(v33, v34, v4, v5); /*0x100a39c83*/
  if ( !v6 ) /*0x100a39c91*/
    goto LABEL_3; /*0x100a39c91*/
  core::str::converts::from_utf8::hb32deb9559450f6e(v29, v6); /*0x100a39c9a*/
  if ( v29[0] ) /*0x100a39ca3*/
    goto LABEL_3; /*0x100a39ca3*/
  v7 = __n; /*0x100a39cf6*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100a39cfd*/
  {
    v9 = 0; /*0x100a39cff*/
    goto LABEL_9; /*0x100a39cff*/
  }
  if ( !__n ) /*0x100a39d0b*/
  {
LABEL_3:
    v7 = 0; /*0x100a39ca5*/
    goto LABEL_4; /*0x100a39ca5*/
  }
  v10 = __src; /*0x100a39d0d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a39d11*/
  v11 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1u); /*0x100a39d1e*/
  v9 = 1; /*0x100a39d23*/
  if ( !v11 ) /*0x100a39d2b*/
LABEL_9:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9); /*0x100a39d01*/
  v12 = v11; /*0x100a39d2d*/
  memcpy(v11, v10, v7); /*0x100a39d39*/
  if ( v7 < 8 ) /*0x100a39d42*/
  {
    v13 = 0; /*0x100a39d44*/
    goto LABEL_23; /*0x100a39d46*/
  }
  if ( v7 < 0x20 ) /*0x100a39d59*/
  {
    v13 = 0; /*0x100a39d5b*/
    goto LABEL_20; /*0x100a39d5d*/
  }
  v13 = v7 & 0x7FFFFFFFFFFFFFE0LL; /*0x100a39d65*/
  v14 = 0; /*0x100a39d68*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_101513710); /*0x100a39d6a*/
  v16 = _mm_load_si128((const __m128i *)&xmmword_101513720); /*0x100a39d72*/
  v17 = _mm_load_si128((const __m128i *)&xmmword_101513730); /*0x100a39d7a*/
  do /*0x100a39ddb*/
  {
    v18 = _mm_loadu_si128((const __m128i *)&v12[v14 / 2]); /*0x100a39d82*/
    v19 = _mm_loadu_si128((const __m128i *)&v12[v14 / 2 + 8]); /*0x100a39d88*/
    v20 = _mm_add_epi8(v18, si128); /*0x100a39d93*/
    v21 = _mm_add_epi8(v19, si128); /*0x100a39d9b*/
    *(__m128i *)&v12[v14 / 2] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v16), v20), v17), v18); /*0x100a39dc7*/
    *(__m128i *)&v12[v14 / 2 + 8] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v16), v21), v17), v19); /*0x100a39dcd*/
    v14 += 32LL; /*0x100a39dd4*/
  }
  while ( v13 != v14 ); /*0x100a39ddb*/
  if ( v7 == v13 ) /*0x100a39de0*/
    goto LABEL_25; /*0x100a39de0*/
  if ( (v7 & 0x18) != 0 ) /*0x100a39dea*/
  {
LABEL_20:
    v22 = v13; /*0x100a39df0*/
    v13 = v7 & 0x7FFFFFFFFFFFFFF8LL; /*0x100a39dfa*/
    v23 = _mm_load_si128((const __m128i *)&xmmword_101513740); /*0x100a39dfd*/
    v24 = _mm_load_si128((const __m128i *)&xmmword_101513750); /*0x100a39e05*/
    v25 = _mm_load_si128((const __m128i *)&xmmword_101513760); /*0x100a39e0d*/
    do /*0x100a39e44*/
    {
      v26 = _mm_loadl_epi64((const __m128i *)((char *)v12 + v22)); /*0x100a39e15*/
      v27 = _mm_add_epi8(v26, v23); /*0x100a39e1f*/
      *(_QWORD *)((char *)v12 + v22) = _mm_or_si128( /*0x100a39e37*/
                                         _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v27, v24), v27), v25),
                                         v26).u64[0];
      v22 += 8; /*0x100a39e3d*/
    }
    while ( v13 != v22 ); /*0x100a39e44*/
    goto LABEL_24; /*0x100a39e44*/
  }
  do /*0x100a39ebb*/
  {
LABEL_23:
    *((_BYTE *)v12 + v13) |= 32 * ((unsigned __int8)(*((_BYTE *)v12 + v13) - 65) < 0x1Au); /*0x100a39e9e*/
    ++v13; /*0x100a39eb5*/
LABEL_24:
    ; /*0x100a39eb8*/
  }
  while ( v7 != v13 ); /*0x100a39ebb*/
LABEL_25:
  if ( v7 == 2 ) /*0x100a39ec1*/
  {
    if ( *v12 != 25709 ) /*0x100a39eed*/
    {
      v7 = 2; /*0x100a39eef*/
LABEL_4:
      std::path::PathBuf::_set_extension::h60d3d6a34fdfa6ec( /*0x100a39ca8*/
        &v32,
        "mdworktreesthread_nameupdated_atelectron-saved-workspace-roots",
        2);
      a1[2] = v34; /*0x100a39cc1*/
      result = v32; /*0x100a39cc5*/
      a1[1] = v33; /*0x100a39ccd*/
      *a1 = result; /*0x100a39cd1*/
      if ( !v7 ) /*0x100a39cd7*/
        return result; /*0x100a39cd7*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a39cd7*/
    }
  }
  else
  {
    if ( v7 != 8 ) /*0x100a39ec7*/
      goto LABEL_4; /*0x100a39ec7*/
    if ( *(_QWORD *)v12 != 0x6E776F646B72616DLL ) /*0x100a39eda*/
    {
      v7 = 8; /*0x100a39edc*/
      goto LABEL_4; /*0x100a39ee2*/
    }
  }
  a1[2] = v34; /*0x100a39efe*/
  v28 = v32; /*0x100a39f02*/
  a1[1] = v33; /*0x100a39f0a*/
  *a1 = v28; /*0x100a39f0e*/
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a39ce9*/
}