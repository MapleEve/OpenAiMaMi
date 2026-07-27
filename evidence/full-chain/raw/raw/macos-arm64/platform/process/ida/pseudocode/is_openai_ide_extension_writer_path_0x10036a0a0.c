// __ZN13codexmate_lib8platform7process35is_openai_ide_extension_writer_path @ 0x10036a0a0
__int64 __fastcall codexmate_lib::platform::process::is_openai_ide_extension_writer_path::h13d20a8a985da07b(
        __int64 a1,
        size_t a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rsi
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __m128i v11; // xmm4
  __m128i v12; // xmm5
  __m128i si128; // xmm1
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  void *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __m128i v23; // xmm4
  __m128i v24; // xmm5
  __m128i v25; // xmm6
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  __m128i v30; // xmm3
  __m128i v31; // xmm4
  unsigned int v32; // r12d

  if ( (a2 & 0x8000000000000000LL) != 0LL ) /*0x10036a0b1*/
  {
    v3 = 0; /*0x10036a0b3*/
    goto LABEL_3; /*0x10036a0b3*/
  }
  if ( !a2 ) /*0x10036a0c1*/
  {
    v7 = 1; /*0x10036a0f6*/
    v5 = 1; /*0x10036a0fc*/
    goto LABEL_34; /*0x10036a102*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10036a0c6*/
  v3 = 1; /*0x10036a0cb*/
  v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a2, 1); /*0x10036a0d9*/
  if ( !v4 ) /*0x10036a0e1*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v3, a2); /*0x10036a0b6*/
  v5 = v4; /*0x10036a0e3*/
  if ( a2 <= 7 ) /*0x10036a0ed*/
  {
    v6 = 0; /*0x10036a0ef*/
    goto LABEL_18; /*0x10036a0f1*/
  }
  if ( a2 < 0x20 ) /*0x10036a115*/
  {
    v6 = 0; /*0x10036a117*/
LABEL_15:
    v8 = v6; /*0x10036a189*/
    v6 = a2 & 0x7FFFFFFFFFFFFFF8LL; /*0x10036a193*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_1015E36D0); /*0x10036a196*/
    v14 = _mm_load_si128((const __m128i *)&xmmword_1015E36E0); /*0x10036a19e*/
    do /*0x10036a1cf*/
    {
      v15 = _mm_loadl_epi64((const __m128i *)(a1 + v8)); /*0x10036a1b0*/
      *(_QWORD *)(v4 + v8) = _mm_blendv_epi8(v15, v14, _mm_cmpeq_epi8(v15, si128)).u64[0]; /*0x10036a1c2*/
      v8 += 8; /*0x10036a1c8*/
    }
    while ( v6 != v8 ); /*0x10036a1cf*/
    if ( a2 == v6 ) /*0x10036a1d4*/
      goto LABEL_21; /*0x10036a1d4*/
    goto LABEL_18; /*0x10036a1d4*/
  }
  v6 = a2 & 0x7FFFFFFFFFFFFFE0LL; /*0x10036a11e*/
  v8 = 0; /*0x10036a121*/
  v9 = _mm_load_si128((const __m128i *)&xmmword_1015E36B0); /*0x10036a123*/
  v10 = _mm_load_si128((const __m128i *)&xmmword_1015E36C0); /*0x10036a12b*/
  do /*0x10036a17d*/
  {
    v11 = _mm_loadu_si128((const __m128i *)(a1 + v8)); /*0x10036a140*/
    v12 = _mm_loadu_si128((const __m128i *)(a1 + v8 + 16)); /*0x10036a145*/
    *(__m128i *)(v4 + v8) = _mm_blendv_epi8(v11, v10, _mm_cmpeq_epi8(v11, v9)); /*0x10036a169*/
    *(__m128i *)(v4 + v8 + 16) = _mm_blendv_epi8(v12, v10, _mm_cmpeq_epi8(v12, v9)); /*0x10036a16f*/
    v8 += 32; /*0x10036a176*/
  }
  while ( v6 != v8 ); /*0x10036a17d*/
  if ( a2 == v6 ) /*0x10036a182*/
    goto LABEL_21; /*0x10036a182*/
  if ( (a2 & 0x18) != 0 ) /*0x10036a187*/
    goto LABEL_15; /*0x10036a187*/
  do /*0x10036a1f5*/
  {
LABEL_18:
    v8 = *(unsigned __int8 *)(a1 + v6); /*0x10036a1e0*/
    if ( (_BYTE)v8 == 92 ) /*0x10036a1e8*/
      v8 = 47; /*0x10036a1e8*/
    *(_BYTE *)(v4 + v6++) = v8; /*0x10036a1eb*/
  }
  while ( a2 != v6 ); /*0x10036a1f5*/
LABEL_21:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v8); /*0x10036a1f7*/
  v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a2, 1); /*0x10036a204*/
  if ( !v16 ) /*0x10036a20c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a2); /*0x10036a33e*/
  v7 = (__int64)v16; /*0x10036a212*/
  memcpy(v16, (const void *)v5, a2); /*0x10036a21e*/
  if ( a2 < 8 ) /*0x10036a227*/
  {
    v17 = 0; /*0x10036a229*/
    goto LABEL_38; /*0x10036a22b*/
  }
  if ( a2 < 0x20 ) /*0x10036a23e*/
  {
    v17 = 0; /*0x10036a240*/
    goto LABEL_30; /*0x10036a242*/
  }
  v17 = a2 & 0x7FFFFFFFFFFFFFE0LL; /*0x10036a24a*/
  v18 = 0; /*0x10036a24d*/
  v19 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10036a24f*/
  v20 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x10036a257*/
  v21 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10036a25f*/
  do /*0x10036a2c9*/
  {
    v22 = _mm_loadu_si128((const __m128i *)(v7 + v18)); /*0x10036a270*/
    v23 = _mm_loadu_si128((const __m128i *)(v7 + v18 + 16)); /*0x10036a276*/
    v24 = _mm_add_epi8(v22, v19); /*0x10036a281*/
    v25 = _mm_add_epi8(v23, v19); /*0x10036a289*/
    *(__m128i *)(v7 + v18) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v24, v20), v24), v21), v22); /*0x10036a2b5*/
    *(__m128i *)(v7 + v18 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v25, v20), v25), v21), v23); /*0x10036a2bb*/
    v18 += 32; /*0x10036a2c2*/
  }
  while ( v17 != v18 ); /*0x10036a2c9*/
  if ( a2 == v17 ) /*0x10036a2ce*/
    goto LABEL_34; /*0x10036a2ce*/
  if ( (a2 & 0x18) != 0 ) /*0x10036a2d3*/
  {
LABEL_30:
    v26 = v17; /*0x10036a2d9*/
    v17 = a2 & 0x7FFFFFFFFFFFFFF8LL; /*0x10036a2e3*/
    v27 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x10036a2e6*/
    v28 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10036a2ee*/
    v29 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x10036a2f6*/
    do /*0x10036a32f*/
    {
      v30 = _mm_loadl_epi64((const __m128i *)(v7 + v26)); /*0x10036a300*/
      v31 = _mm_add_epi8(v30, v27); /*0x10036a30a*/
      *(_QWORD *)(v7 + v26) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v31, v28), v31), v29), v30).u64[0]; /*0x10036a322*/
      v26 += 8; /*0x10036a328*/
    }
    while ( v17 != v26 ); /*0x10036a32f*/
    goto LABEL_37; /*0x10036a32f*/
  }
  do /*0x10036a3d2*/
  {
LABEL_38:
    *(_BYTE *)(v7 + v17) |= 32 * ((unsigned __int8)(*(_BYTE *)(v7 + v17) - 65) < 0x1Au); /*0x10036a3d8*/
    ++v17; /*0x10036a3ef*/
LABEL_37:
    ; /*0x10036a3cf*/
  }
  while ( a2 != v17 ); /*0x10036a3d2*/
LABEL_34:
  v32 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10036a34a*/
          "/extensions/openai.chatgpt",
          0x1Au,
          (void *)v7);
  if ( a2 ) /*0x10036a367*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, a2, 1); /*0x10036a374*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, a2, 1); /*0x10036a389*/
  }
  return v32; /*0x10036a391*/
}