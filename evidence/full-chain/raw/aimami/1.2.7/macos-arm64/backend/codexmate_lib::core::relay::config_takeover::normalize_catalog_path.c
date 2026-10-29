// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::config_takeover::normalize_catalog_path::h76e5dc74ef5e9bb7; addr: 0x100223580; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
double __fastcall codexmate_lib::core::relay::config_takeover::normalize_catalog_path::h76e5dc74ef5e9bb7(
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
  char v22; // r8
  char v23; // si
  char v24; // si
  char v25; // si
  unsigned __int64 v26; // rax
  signed __int64 v27; // r12
  unsigned __int64 v28; // rax
  int v29; // ecx
  char v30; // dl
  char v31; // si
  char v32; // di
  unsigned __int64 v33; // rax
  int v34; // esi
  int v35; // edx
  __int64 v36; // r15
  __int64 v37; // r13
  __int64 v38; // rax
  signed __int64 *v40; // [rsp+0h] [rbp-30h]

  v5 = a3; /*0x100223594*/
  v6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(a2, a3); /*0x100223597*/
  v8 = v7; /*0x10022359c*/
  if ( v7 < 0 ) /*0x1002235a2*/
  {
    v9 = 0; /*0x1002235a4*/
    goto LABEL_3; /*0x1002235a4*/
  }
  if ( v7 ) /*0x1002235b2*/
  {
    v10 = v6; /*0x1002235b4*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v5, v7); /*0x1002235b7*/
    v9 = 1; /*0x1002235bc*/
    a2 = v8; /*0x1002235c7*/
    v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1002235ca*/
    if ( !v11 ) /*0x1002235d2*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1002235a7*/
    v12 = v11; /*0x1002235d4*/
    if ( (unsigned __int64)(v11 - v10) < 0x20 || v8 < 8 ) /*0x1002235db*/
    {
      v13 = 0; /*0x1002235f2*/
LABEL_18:
      v7 = v13; /*0x1002236ca*/
      v5 = v8 & 3; /*0x1002236d0*/
      if ( (v8 & 3) != 0 ) /*0x1002236d4*/
      {
        a2 = 47; /*0x1002236d6*/
        v7 = v13; /*0x1002236db*/
        do /*0x1002236f7*/
        {
          v22 = *(_BYTE *)(v10 + v7); /*0x1002236e0*/
          if ( v22 == 92 ) /*0x1002236e9*/
            v22 = 47; /*0x1002236e9*/
          *(_BYTE *)(v11 + v7++) = v22; /*0x1002236ed*/
          --v5; /*0x1002236f4*/
        }
        while ( v5 ); /*0x1002236f7*/
      }
      if ( v13 - v8 <= 0xFFFFFFFFFFFFFFFCLL ) /*0x100223700*/
      {
        do /*0x100223759*/
        {
          v23 = *(_BYTE *)(v10 + v7); /*0x100223710*/
          if ( v23 == 92 ) /*0x100223718*/
            v23 = 47; /*0x100223718*/
          *(_BYTE *)(v11 + v7) = v23; /*0x10022371b*/
          v24 = *(_BYTE *)(v10 + v7 + 1); /*0x10022371f*/
          if ( v24 == 92 ) /*0x100223728*/
            v24 = 47; /*0x100223728*/
          *(_BYTE *)(v11 + v7 + 1) = v24; /*0x10022372b*/
          v25 = *(_BYTE *)(v10 + v7 + 2); /*0x100223730*/
          if ( v25 == 92 ) /*0x100223739*/
            v25 = 47; /*0x100223739*/
          *(_BYTE *)(v11 + v7 + 2) = v25; /*0x10022373c*/
          v5 = *(unsigned __int8 *)(v10 + v7 + 3); /*0x100223741*/
          if ( (_BYTE)v5 == 92 ) /*0x10022374a*/
            v5 = 47; /*0x10022374a*/
          *(_BYTE *)(v11 + v7 + 3) = v5; /*0x10022374d*/
          v7 += 4; /*0x100223752*/
        }
        while ( v8 != v7 ); /*0x100223759*/
      }
      goto LABEL_33; /*0x100223759*/
    }
    v7 = 0x7FFFFFFFFFFFFFE0LL; /*0x100223604*/
    if ( v8 >= 0x20 ) /*0x100223612*/
    {
      v13 = v8 & 0x7FFFFFFFFFFFFFE0LL; /*0x10022361b*/
      v5 = 0; /*0x10022361e*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1016E9990); /*0x100223620*/
      v15 = _mm_load_si128((const __m128i *)&xmmword_1016E99A0); /*0x100223628*/
      do /*0x10022366d*/
      {
        v16 = _mm_loadu_si128((const __m128i *)(v10 + v5)); /*0x100223630*/
        v17 = _mm_loadu_si128((const __m128i *)(v10 + v5 + 16)); /*0x100223635*/
        v18 = _mm_cmpeq_epi8(v17, si128); /*0x100223650*/
        *(__m128i *)(v11 + v5) = _mm_blendv_epi8(v16, v15, _mm_cmpeq_epi8(v16, si128)); /*0x100223659*/
        *(__m128i *)(v11 + v5 + 16) = _mm_blendv_epi8(v17, v15, v18); /*0x10022365f*/
        v5 += 32; /*0x100223666*/
      }
      while ( v13 != v5 ); /*0x10022366d*/
      if ( v8 == v13 ) /*0x100223672*/
        goto LABEL_33; /*0x100223672*/
      if ( (v8 & 0x18) == 0 ) /*0x10022367b*/
        goto LABEL_18; /*0x10022367b*/
    }
    else
    {
      v13 = 0; /*0x100223614*/
    }
    v5 = v13; /*0x10022367d*/
    v7 = 0x7FFFFFFFFFFFFFF8LL; /*0x100223680*/
    v13 = v8 & 0x7FFFFFFFFFFFFFF8LL; /*0x100223687*/
    v19 = _mm_load_si128((const __m128i *)&xmmword_1016E99B0); /*0x10022368a*/
    v20 = _mm_load_si128((const __m128i *)&xmmword_1016E99C0); /*0x100223692*/
    do /*0x1002236bf*/
    {
      v21 = _mm_loadl_epi64((const __m128i *)(v10 + v5)); /*0x1002236a0*/
      v18 = _mm_cmpeq_epi8(v21, v19); /*0x1002236a9*/
      *(_QWORD *)(v11 + v5) = _mm_blendv_epi8(v21, v20, v18).u64[0]; /*0x1002236b2*/
      v5 += 8; /*0x1002236b8*/
    }
    while ( v13 != v5 ); /*0x1002236bf*/
    if ( v8 != v13 ) /*0x1002236c4*/
      goto LABEL_18; /*0x1002236c4*/
  }
  else
  {
    v12 = 1; /*0x1002235f9*/
  }
LABEL_33:
  v26 = v8; /*0x10022375b*/
  do /*0x1002237cc*/
  {
    while ( 1 ) /*0x10022376b*/
    {
      if ( !v26 ) /*0x10022376e*/
      {
        v40 = a1; /*0x1002237e3*/
        v37 = 1; /*0x1002237e7*/
        v27 = 0; /*0x1002237ed*/
        goto LABEL_48; /*0x1002237ed*/
      }
      v27 = v26; /*0x100223770*/
      v28 = v12 + v26; /*0x100223773*/
      v29 = *(char *)(v28 - 1); /*0x100223776*/
      if ( v29 < 0 ) /*0x10022377c*/
        break; /*0x10022377c*/
      v26 = v28 - 1 - v12; /*0x100223763*/
      if ( v29 != 47 ) /*0x100223769*/
        goto LABEL_44; /*0x100223769*/
    }
    v30 = *(_BYTE *)(v28 - 2); /*0x10022377e*/
    if ( v30 >= -64 ) /*0x100223785*/
    {
      v33 = v28 - 2; /*0x1002237a6*/
      v35 = v30 & 0x1F; /*0x1002237aa*/
    }
    else
    {
      v31 = *(_BYTE *)(v28 - 3); /*0x100223787*/
      if ( v31 >= -64 ) /*0x10022378f*/
      {
        v33 = v28 - 3; /*0x1002237af*/
        v34 = v31 & 0xF; /*0x1002237b3*/
      }
      else
      {
        v32 = *(_BYTE *)(v28 - 4); /*0x100223791*/
        v33 = v28 - 4; /*0x100223795*/
        a2 = (unsigned __int8)(v32 & 7) << 6; /*0x10022379c*/
        v34 = a2 | v31 & 0x3F; /*0x1002237a2*/
      }
      v5 = (unsigned int)(v34 << 6); /*0x1002237b6*/
      v35 = v5 | v30 & 0x3F; /*0x1002237bc*/
    }
    v7 = (unsigned int)(v35 << 6); /*0x1002237be*/
    v26 = v33 - v12; /*0x1002237c6*/
  }
  while ( ((unsigned int)v7 | v29 & 0x3F) == 0x2F ); /*0x1002237cc*/
LABEL_44:
  if ( v27 < 0 ) /*0x1002237d1*/
  {
    v36 = 0; /*0x1002237d3*/
    goto LABEL_46; /*0x1002237d3*/
  }
  v40 = a1; /*0x10022383f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v5, v7); /*0x100223843*/
  v36 = 1; /*0x100223848*/
  v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v27, 1); /*0x100223856*/
  if ( !v38 ) /*0x10022385e*/
LABEL_46:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v36, v27); /*0x1002237d6*/
  v37 = v38; /*0x100223864*/
LABEL_48:
  memcpy((void *)v37, (const void *)v12, v27); /*0x1002237f0*/
  *v40 = v27; /*0x100223802*/
  v40[1] = v37; /*0x100223805*/
  v40[2] = v27; /*0x100223809*/
  if ( v8 ) /*0x100223810*/
    *(double *)v18.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v8, 1); /*0x10022382b*/
  return *(double *)v18.i64; /*0x100223821*/
}
