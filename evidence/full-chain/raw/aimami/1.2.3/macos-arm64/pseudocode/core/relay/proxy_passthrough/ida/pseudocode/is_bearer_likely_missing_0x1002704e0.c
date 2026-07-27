// __ZN13codexmate_lib4core5relay17proxy_passthrough24is_bearer_likely_missing @ 0x1002704e0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::proxy_passthrough::is_bearer_likely_missing::h09ed3414092fcf7b(
        __int64 a1)
{
  const void *v1; // r15
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  size_t v8; // rbx
  __int64 v9; // r12
  char *v10; // rax
  char *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i si128; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  __m128i v18; // xmm4
  __m128i v19; // xmm5
  __m128i v20; // xmm6
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  bool v27; // zf
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __m128i v31; // xmm0
  _QWORD v32[8]; // [rsp+0h] [rbp-40h] BYREF

  v32[3] = 0; /*0x1002704ef*/
  v32[2] = 0; /*0x1002704f7*/
  v32[1] = 16; /*0x1002704ff*/
  v32[0] = 0; /*0x100270507*/
  v2 = http::header::map::HeaderMap$LT$T$GT$::get::hcb866ec1781bf934(a1, v32); /*0x100270513*/
  LOBYTE(v1) = 1; /*0x100270518*/
  if ( !v2 ) /*0x10027051e*/
    return (unsigned int)v1; /*0x10027051e*/
  v3 = *(_QWORD *)(v2 + 8); /*0x100270524*/
  v4 = *(_QWORD *)(v2 + 16); /*0x100270528*/
  if ( !v4 ) /*0x10027052f*/
  {
LABEL_6:
    v6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v3, v4); /*0x100270563*/
    if ( !v7 ) /*0x10027056b*/
      return (unsigned int)v1; /*0x10027056b*/
    v8 = v7; /*0x100270571*/
    if ( v7 < 0 ) /*0x100270574*/
    {
      v9 = 0; /*0x100270576*/
      goto LABEL_9; /*0x100270576*/
    }
    v1 = (const void *)v6; /*0x100270584*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3, v4); /*0x100270587*/
    v9 = 1; /*0x10027058c*/
    v10 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x10027059a*/
    if ( !v10 ) /*0x1002705a2*/
LABEL_9:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x100270579*/
    v11 = v10; /*0x1002705a4*/
    memcpy(v10, v1, v8); /*0x1002705b0*/
    if ( v8 < 8 ) /*0x1002705b9*/
    {
      v12 = 0; /*0x1002705bb*/
      goto LABEL_22; /*0x1002705bd*/
    }
    if ( v8 >= 0x20 ) /*0x1002705d0*/
    {
      v12 = v8 & 0x7FFFFFFFFFFFFFE0LL; /*0x1002705dc*/
      v13 = 0; /*0x1002705df*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x1002705e1*/
      v15 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x1002705e9*/
      v16 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x1002705f1*/
      do /*0x100270659*/
      {
        v17 = _mm_loadu_si128((const __m128i *)&v11[v13]); /*0x100270600*/
        v18 = _mm_loadu_si128((const __m128i *)&v11[v13 + 16]); /*0x100270606*/
        v19 = _mm_add_epi8(v17, si128); /*0x100270611*/
        v20 = _mm_add_epi8(v18, si128); /*0x100270619*/
        *(__m128i *)&v11[v13] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v19, v15), v19), v16), v17); /*0x100270645*/
        *(__m128i *)&v11[v13 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v15), v20), v16), v18); /*0x10027064b*/
        v13 += 32; /*0x100270652*/
      }
      while ( v12 != v13 ); /*0x100270659*/
      if ( v8 == v12 ) /*0x10027065e*/
        goto LABEL_24; /*0x10027065e*/
      if ( (v8 & 0x18) == 0 ) /*0x100270667*/
      {
        do /*0x1002706e0*/
        {
LABEL_22:
          v11[v12] |= 32 * ((unsigned __int8)(v11[v12] - 65) < 0x1Au); /*0x1002706c3*/
          ++v12; /*0x1002706da*/
LABEL_23:
          ; /*0x1002706dd*/
        }
        while ( v8 != v12 ); /*0x1002706e0*/
LABEL_24:
        if ( v8 == 6 ) /*0x1002706e6*/
        {
          v27 = (*(_DWORD *)v11 ^ 0x72616562 | *((unsigned __int16 *)v11 + 2) ^ 0x7265) == 0; /*0x1002706fb*/
LABEL_26:
          LOBYTE(v1) = v27; /*0x1002706fd*/
LABEL_29:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v8, 1); /*0x100270708*/
          return (unsigned int)v1; /*0x100270713*/
        }
        if ( v8 > 6 ) /*0x100270703*/
        {
          v29 = v8; /*0x10027073b*/
          v30 = (__int64)v11; /*0x10027073e*/
          if ( !(*(_DWORD *)v11 ^ 0x72616562 | *(_DWORD *)(v11 + 3) ^ 0x20726572) ) /*0x100270739*/
          {
            v30 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v11 + 7, v8 - 7); /*0x100270751*/
            if ( !v29 ) /*0x100270759*/
            {
              LOBYTE(v1) = 1; /*0x1002707a9*/
              goto LABEL_29; /*0x1002707ac*/
            }
          }
          if ( v29 == 12 ) /*0x10027075f*/
          {
            v27 = (*(_QWORD *)v30 ^ 0x722D696D616D6961LL | *(unsigned int *)(v30 + 8) ^ 0x79616C65LL) == 0; /*0x100270777*/
            goto LABEL_26; /*0x10027077a*/
          }
          if ( v29 >= 0x17 ) /*0x100270780*/
          {
            v31 = _mm_or_si128( /*0x10027079b*/
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v30), (__m128i)xmmword_1015DCAC0),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v30 + 7)), (__m128i)xmmword_1015DCAB0));
            v27 = _mm_testz_si128(v31, v31); /*0x10027079f*/
            goto LABEL_26; /*0x1002707a4*/
          }
        }
        LODWORD(v1) = 0; /*0x100270705*/
        goto LABEL_29; /*0x100270705*/
      }
    }
    else
    {
      v12 = 0; /*0x1002705d2*/
    }
    v21 = v12; /*0x100270669*/
    v12 = v8 & 0x7FFFFFFFFFFFFFF8LL; /*0x100270673*/
    v22 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100270676*/
    v23 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10027067e*/
    v24 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100270686*/
    do /*0x1002706bf*/
    {
      v25 = _mm_loadl_epi64((const __m128i *)&v11[v21]); /*0x100270690*/
      v26 = _mm_add_epi8(v25, v22); /*0x10027069a*/
      *(_QWORD *)&v11[v21] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v26, v23), v26), v24), v25).u64[0]; /*0x1002706b2*/
      v21 += 8; /*0x1002706b8*/
    }
    while ( v12 != v21 ); /*0x1002706bf*/
    goto LABEL_23; /*0x1002706bf*/
  }
  v5 = 0; /*0x100270531*/
  while ( (unsigned __int8)(*(_BYTE *)(v3 + v5) - 32) < 0x5Fu || *(_BYTE *)(v3 + v5) == 9 ) /*0x100270555*/
  {
    if ( v4 == ++v5 ) /*0x100270561*/
      goto LABEL_6; /*0x100270561*/
  }
  return (unsigned int)v1; /*0x10027071b*/
}