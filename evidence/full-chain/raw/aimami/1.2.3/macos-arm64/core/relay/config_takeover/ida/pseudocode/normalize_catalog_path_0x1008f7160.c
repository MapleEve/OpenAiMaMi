// __ZN13codexmate_lib4core5relay15config_takeover22normalize_catalog_path @ 0x1008f7160 | 基线 same-set
double __fastcall codexmate_lib::core::relay::config_takeover::normalize_catalog_path::hb03c0ac6c1aee1ca(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rcx
  __m128i si128; // xmm2
  __m128i v15; // xmm3
  __m128i v16; // xmm4
  __m128i v17; // xmm5
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  __m128i v21; // xmm3
  __int64 v22; // rdx
  char v23; // r8
  char v24; // si
  char v25; // si
  char v26; // si
  unsigned __int64 v27; // rax
  signed __int64 v28; // r12
  unsigned __int64 v29; // rax
  int v30; // ecx
  char v31; // dl
  char v32; // si
  char v33; // di
  unsigned __int64 v34; // rax
  int v35; // esi
  int v36; // edx
  __int64 v37; // r15
  __int64 v38; // r13
  __int64 v39; // rax
  signed __int64 *v41; // [rsp+0h] [rbp-30h]

  v5 = a3; /*0x1008f7174*/
  v6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x1008f7177*/
  v8 = v7; /*0x1008f717c*/
  if ( v7 < 0 ) /*0x1008f7182*/
  {
    v9 = 0; /*0x1008f7184*/
    goto LABEL_3; /*0x1008f7184*/
  }
  if ( v7 ) /*0x1008f7192*/
  {
    v10 = v6; /*0x1008f7194*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v5); /*0x1008f7197*/
    v9 = 1; /*0x1008f719c*/
    a2 = v8; /*0x1008f71a7*/
    v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1008f71aa*/
    if ( !v11 ) /*0x1008f71b2*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1008f7187*/
    v12 = v11; /*0x1008f71b4*/
    if ( (unsigned __int64)(v11 - v10) < 0x20 || v8 < 8 ) /*0x1008f71bb*/
    {
      v13 = 0; /*0x1008f71d2*/
LABEL_18:
      v22 = v13; /*0x1008f72aa*/
      v5 = v8 & 3; /*0x1008f72b0*/
      if ( (v8 & 3) != 0 ) /*0x1008f72b4*/
      {
        a2 = 47; /*0x1008f72b6*/
        v22 = v13; /*0x1008f72bb*/
        do /*0x1008f72d7*/
        {
          v23 = *(_BYTE *)(v10 + v22); /*0x1008f72c0*/
          if ( v23 == 92 ) /*0x1008f72c9*/
            v23 = 47; /*0x1008f72c9*/
          *(_BYTE *)(v11 + v22++) = v23; /*0x1008f72cd*/
          --v5; /*0x1008f72d4*/
        }
        while ( v5 ); /*0x1008f72d7*/
      }
      if ( v13 - v8 <= 0xFFFFFFFFFFFFFFFCLL ) /*0x1008f72e0*/
      {
        do /*0x1008f7339*/
        {
          v24 = *(_BYTE *)(v10 + v22); /*0x1008f72f0*/
          if ( v24 == 92 ) /*0x1008f72f8*/
            v24 = 47; /*0x1008f72f8*/
          *(_BYTE *)(v11 + v22) = v24; /*0x1008f72fb*/
          v25 = *(_BYTE *)(v10 + v22 + 1); /*0x1008f72ff*/
          if ( v25 == 92 ) /*0x1008f7308*/
            v25 = 47; /*0x1008f7308*/
          *(_BYTE *)(v11 + v22 + 1) = v25; /*0x1008f730b*/
          v26 = *(_BYTE *)(v10 + v22 + 2); /*0x1008f7310*/
          if ( v26 == 92 ) /*0x1008f7319*/
            v26 = 47; /*0x1008f7319*/
          *(_BYTE *)(v11 + v22 + 2) = v26; /*0x1008f731c*/
          v5 = *(unsigned __int8 *)(v10 + v22 + 3); /*0x1008f7321*/
          if ( (_BYTE)v5 == 92 ) /*0x1008f732a*/
            v5 = 47; /*0x1008f732a*/
          *(_BYTE *)(v11 + v22 + 3) = v5; /*0x1008f732d*/
          v22 += 4; /*0x1008f7332*/
        }
        while ( v8 != v22 ); /*0x1008f7339*/
      }
      goto LABEL_33; /*0x1008f7339*/
    }
    if ( v8 >= 0x20 ) /*0x1008f71f2*/
    {
      v13 = v8 & 0x7FFFFFFFFFFFFFE0LL; /*0x1008f71fb*/
      v5 = 0; /*0x1008f71fe*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015E36B0); /*0x1008f7200*/
      v15 = _mm_load_si128((const __m128i *)&xmmword_1015E36C0); /*0x1008f7208*/
      do /*0x1008f724d*/
      {
        v16 = _mm_loadu_si128((const __m128i *)(v10 + v5)); /*0x1008f7210*/
        v17 = _mm_loadu_si128((const __m128i *)(v10 + v5 + 16)); /*0x1008f7215*/
        v18 = _mm_cmpeq_epi8(v17, si128); /*0x1008f7230*/
        *(__m128i *)(v11 + v5) = _mm_blendv_epi8(v16, v15, _mm_cmpeq_epi8(v16, si128)); /*0x1008f7239*/
        *(__m128i *)(v11 + v5 + 16) = _mm_blendv_epi8(v17, v15, v18); /*0x1008f723f*/
        v5 += 32; /*0x1008f7246*/
      }
      while ( v13 != v5 ); /*0x1008f724d*/
      if ( v8 == v13 ) /*0x1008f7252*/
        goto LABEL_33; /*0x1008f7252*/
      if ( (v8 & 0x18) == 0 ) /*0x1008f725b*/
        goto LABEL_18; /*0x1008f725b*/
    }
    else
    {
      v13 = 0; /*0x1008f71f4*/
    }
    v5 = v13; /*0x1008f725d*/
    v13 = v8 & 0x7FFFFFFFFFFFFFF8LL; /*0x1008f7267*/
    v19 = _mm_load_si128((const __m128i *)&xmmword_1015E36D0); /*0x1008f726a*/
    v20 = _mm_load_si128((const __m128i *)&xmmword_1015E36E0); /*0x1008f7272*/
    do /*0x1008f729f*/
    {
      v21 = _mm_loadl_epi64((const __m128i *)(v10 + v5)); /*0x1008f7280*/
      v18 = _mm_cmpeq_epi8(v21, v19); /*0x1008f7289*/
      *(_QWORD *)(v11 + v5) = _mm_blendv_epi8(v21, v20, v18).u64[0]; /*0x1008f7292*/
      v5 += 8; /*0x1008f7298*/
    }
    while ( v13 != v5 ); /*0x1008f729f*/
    if ( v8 != v13 ) /*0x1008f72a4*/
      goto LABEL_18; /*0x1008f72a4*/
  }
  else
  {
    v12 = 1; /*0x1008f71d9*/
  }
LABEL_33:
  v27 = v8; /*0x1008f733b*/
  do /*0x1008f73ac*/
  {
    while ( 1 ) /*0x1008f734b*/
    {
      if ( !v27 ) /*0x1008f734e*/
      {
        v41 = a1; /*0x1008f73c3*/
        v38 = 1; /*0x1008f73c7*/
        v28 = 0; /*0x1008f73cd*/
        goto LABEL_48; /*0x1008f73cd*/
      }
      v28 = v27; /*0x1008f7350*/
      v29 = v12 + v27; /*0x1008f7353*/
      v30 = *(char *)(v29 - 1); /*0x1008f7356*/
      if ( v30 < 0 ) /*0x1008f735c*/
        break; /*0x1008f735c*/
      v27 = v29 - 1 - v12; /*0x1008f7343*/
      if ( v30 != 47 ) /*0x1008f7349*/
        goto LABEL_44; /*0x1008f7349*/
    }
    v31 = *(_BYTE *)(v29 - 2); /*0x1008f735e*/
    if ( v31 >= -64 ) /*0x1008f7365*/
    {
      v34 = v29 - 2; /*0x1008f7386*/
      v36 = v31 & 0x1F; /*0x1008f738a*/
    }
    else
    {
      v32 = *(_BYTE *)(v29 - 3); /*0x1008f7367*/
      if ( v32 >= -64 ) /*0x1008f736f*/
      {
        v34 = v29 - 3; /*0x1008f738f*/
        v35 = v32 & 0xF; /*0x1008f7393*/
      }
      else
      {
        v33 = *(_BYTE *)(v29 - 4); /*0x1008f7371*/
        v34 = v29 - 4; /*0x1008f7375*/
        a2 = (unsigned __int8)(v33 & 7) << 6; /*0x1008f737c*/
        v35 = a2 | v32 & 0x3F; /*0x1008f7382*/
      }
      v5 = (unsigned int)(v35 << 6); /*0x1008f7396*/
      v36 = v5 | v31 & 0x3F; /*0x1008f739c*/
    }
    v27 = v34 - v12; /*0x1008f73a6*/
  }
  while ( ((v36 << 6) | v30 & 0x3F) == 0x2F ); /*0x1008f73ac*/
LABEL_44:
  if ( v28 < 0 ) /*0x1008f73b1*/
  {
    v37 = 0; /*0x1008f73b3*/
    goto LABEL_46; /*0x1008f73b3*/
  }
  v41 = a1; /*0x1008f741f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v5); /*0x1008f7423*/
  v37 = 1; /*0x1008f7428*/
  v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v28, 1); /*0x1008f7436*/
  if ( !v39 ) /*0x1008f743e*/
LABEL_46:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v37, v28); /*0x1008f73b6*/
  v38 = v39; /*0x1008f7444*/
LABEL_48:
  memcpy((void *)v38, (const void *)v12, v28); /*0x1008f73d0*/
  *v41 = v28; /*0x1008f73e2*/
  v41[1] = v38; /*0x1008f73e5*/
  v41[2] = v28; /*0x1008f73e9*/
  if ( v8 ) /*0x1008f73f0*/
    *(double *)v18.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v8, 1); /*0x1008f740b*/
  return *(double *)v18.i64; /*0x1008f7401*/
}