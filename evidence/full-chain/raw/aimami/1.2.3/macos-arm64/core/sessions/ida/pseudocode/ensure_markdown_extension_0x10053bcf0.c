// __ZN13codexmate_lib4core8sessions25ensure_markdown_extension @ 0x10053bcf0 | 基线 same-set
double __fastcall codexmate_lib::core::sessions::ensure_markdown_extension::h1fab5ac73a473fa0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128i si128)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rsi
  size_t v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  void *v12; // r12
  void *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __m128i v20; // xmm5
  __m128i v21; // xmm6
  __int64 v22; // rdx
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  __int64 v27; // rax
  _BYTE v29[8]; // [rsp+0h] [rbp-50h] BYREF
  void *__src; // [rsp+8h] [rbp-48h]
  size_t __n; // [rsp+10h] [rbp-40h]
  __int64 v32; // [rsp+18h] [rbp-38h] BYREF
  __int64 v33; // [rsp+20h] [rbp-30h]
  __int64 v34; // [rsp+28h] [rbp-28h]

  std::path::Path::to_path_buf::h73855ce4b54f7174(&v32, a2, a3); /*0x10053bd06*/
  v5 = std::path::Path::extension::hbb56a39ecf8d3771(v33, v34); /*0x10053bd13*/
  v7 = 1; /*0x10053bd18*/
  if ( !v5 ) /*0x10053bd21*/
    goto LABEL_3; /*0x10053bd21*/
  v8 = v5; /*0x10053bd27*/
  core::str::converts::from_utf8::hb32deb9559450f6e(v29, v5, v6); /*0x10053bd2a*/
  if ( v29[0] ) /*0x10053bd33*/
    goto LABEL_3; /*0x10053bd33*/
  v9 = __n; /*0x10053bd86*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10053bd8d*/
  {
    v11 = 0; /*0x10053bd8f*/
    goto LABEL_9; /*0x10053bd8f*/
  }
  if ( !__n ) /*0x10053bd9b*/
  {
LABEL_3:
    v9 = 0; /*0x10053bd35*/
    goto LABEL_4; /*0x10053bd35*/
  }
  v12 = __src; /*0x10053bd9d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v8); /*0x10053bda1*/
  v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x10053bdae*/
  v11 = 1; /*0x10053bdb3*/
  if ( !v13 ) /*0x10053bdbb*/
LABEL_9:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v9); /*0x10053bd91*/
  v7 = (__int64)v13; /*0x10053bdbd*/
  memcpy(v13, v12, v9); /*0x10053bdc9*/
  if ( v9 < 8 ) /*0x10053bdd2*/
  {
    v14 = 0; /*0x10053bdd4*/
    goto LABEL_23; /*0x10053bdd6*/
  }
  if ( v9 < 0x20 ) /*0x10053bde9*/
  {
    v14 = 0; /*0x10053bdeb*/
    goto LABEL_20; /*0x10053bded*/
  }
  v14 = v9 & 0x7FFFFFFFFFFFFFE0LL; /*0x10053bdf5*/
  v15 = 0; /*0x10053bdf8*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10053bdfa*/
  v16 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x10053be02*/
  v17 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10053be0a*/
  do /*0x10053be6b*/
  {
    v18 = _mm_loadu_si128((const __m128i *)(v7 + v15)); /*0x10053be12*/
    v19 = _mm_loadu_si128((const __m128i *)(v7 + v15 + 16)); /*0x10053be18*/
    v20 = _mm_add_epi8(v18, si128); /*0x10053be23*/
    v21 = _mm_add_epi8(v19, si128); /*0x10053be2b*/
    *(__m128i *)(v7 + v15) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v16), v20), v17), v18); /*0x10053be57*/
    *(__m128i *)(v7 + v15 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v16), v21), v17), v19); /*0x10053be5d*/
    v15 += 32; /*0x10053be64*/
  }
  while ( v14 != v15 ); /*0x10053be6b*/
  if ( v9 == v14 ) /*0x10053be70*/
    goto LABEL_25; /*0x10053be70*/
  if ( (v9 & 0x18) != 0 ) /*0x10053be7a*/
  {
LABEL_20:
    v22 = v14; /*0x10053be80*/
    v14 = v9 & 0x7FFFFFFFFFFFFFF8LL; /*0x10053be8a*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x10053be8d*/
    v23 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10053be95*/
    v24 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x10053be9d*/
    do /*0x10053bed4*/
    {
      v25 = _mm_loadl_epi64((const __m128i *)(v7 + v22)); /*0x10053bea5*/
      v26 = _mm_add_epi8(v25, si128); /*0x10053beaf*/
      *(_QWORD *)(v7 + v22) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v26, v23), v26), v24), v25).u64[0]; /*0x10053bec7*/
      v22 += 8; /*0x10053becd*/
    }
    while ( v14 != v22 ); /*0x10053bed4*/
    goto LABEL_24; /*0x10053bed4*/
  }
  do /*0x10053bf4b*/
  {
LABEL_23:
    *(_BYTE *)(v7 + v14) |= 32 * ((unsigned __int8)(*(_BYTE *)(v7 + v14) - 65) < 0x1Au); /*0x10053bf2e*/
    ++v14; /*0x10053bf45*/
LABEL_24:
    ; /*0x10053bf48*/
  }
  while ( v9 != v14 ); /*0x10053bf4b*/
LABEL_25:
  if ( v9 != 2 ) /*0x10053bf51*/
  {
    if ( v9 != 8 ) /*0x10053bf57*/
      goto LABEL_4; /*0x10053bf57*/
    if ( *(_QWORD *)v7 != 0x6E776F646B72616DLL ) /*0x10053bf6a*/
    {
      v9 = 8; /*0x10053bf6c*/
      goto LABEL_4; /*0x10053bf72*/
    }
LABEL_31:
    a1[2] = v34; /*0x10053bf8a*/
    v27 = v32; /*0x10053bf92*/
    a1[1] = v33; /*0x10053bf9a*/
    *a1 = v27; /*0x10053bf9e*/
    goto LABEL_5; /*0x10053bfa1*/
  }
  if ( *(_WORD *)v7 == 25709 ) /*0x10053bf7d*/
    goto LABEL_31; /*0x10053bf7d*/
  v9 = 2; /*0x10053bf7f*/
LABEL_4:
  std::path::PathBuf::_set_extension::h60d3d6a34fdfa6ec( /*0x10053bd38*/
    &v32,
    "mdworktreesthread_nameupdated_atelectron-saved-workspace-roots",
    2);
  a1[2] = v34; /*0x10053bd51*/
  v10 = v32; /*0x10053bd55*/
  a1[1] = v33; /*0x10053bd5d*/
  *a1 = v10; /*0x10053bd61*/
  if ( v9 ) /*0x10053bd67*/
LABEL_5:
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, 1); /*0x10053bd69*/
  return *(double *)si128.i64; /*0x10053bd79*/
}