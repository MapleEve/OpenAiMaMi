// module: codexmate_lib/core/relay/dialects
// addr: 0x1406b2150
// name: apply_reasoning_0
// win 1.2.3 | = mac codexmate_lib::core::relay::dialects::generic::apply_reasoning | 跨平台字符串签名匹配(名↔函数一致)
__m128i *__fastcall apply_reasoning_0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  bool v17; // r15
  __int64 v18; // rcx
  __m128i si128; // xmm0
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __m128i v23; // xmm4
  __m128i v24; // xmm5
  __m128i v25; // xmm6
  __int64 v26; // rcx
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  __m128i v30; // xmm3
  __m128i v31; // xmm4
  char v32; // dl
  int v33; // eax
  int v34; // ecx
  int v35; // r8d
  int v36; // eax
  __m128i *result; // rax
  char v38; // bl
  __int64 v39; // rdx
  __m128i v40; // xmm0
  __int64 v41; // [rsp+20h] [rbp-60h]
  __int64 v42; // [rsp+28h] [rbp-58h]
  __m128i v43; // [rsp+30h] [rbp-50h] BYREF
  __m128i v44; // [rsp+40h] [rbp-40h] BYREF
  __m128i *v45; // [rsp+58h] [rbp-28h]
  char v46; // [rsp+67h] [rbp-19h]
  __int64 v47; // [rsp+68h] [rbp-18h]

  v47 = -2;
  v8 = sub_14033BC10(a3, a4);
  v11 = v9;
  if ( v9 < 0 )
  {
    v12 = 0;
    goto LABEL_3;
  }
  v45 = (__m128i *)v9;
  if ( !v9 )
  {
    v41 = 1;
    v17 = 0;
    goto LABEL_31;
  }
  v42 = a1;
  v13 = v8;
  nullsub_1(v10);
  v12 = 1;
  v14 = sub_140001650(v11, 1);
  if ( !v14 )
LABEL_3:
    sub_1416C2D4B(v12, v11);
  v15 = v14;
  sub_141684120(v14, v13, v11);
  if ( v11 < 8 )
  {
    v16 = 0;
    do
    {
LABEL_18:
      *(_BYTE *)(v15 + v16) |= 32 * ((unsigned __int8)(*(_BYTE *)(v15 + v16) - 65) < 0x1Au);
      ++v16;
LABEL_19:
      ;
    }
    while ( v11 != v16 );
    goto LABEL_20;
  }
  if ( v11 < 0x20 )
  {
    v16 = 0;
    goto LABEL_15;
  }
  v16 = v11 & 0x7FFFFFFFFFFFFFE0LL;
  v18 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141742460);
  v20 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
  v21 = _mm_load_si128((const __m128i *)&xmmword_141742470);
  do
  {
    v22 = _mm_loadu_si128((const __m128i *)(v15 + v18));
    v23 = _mm_loadu_si128((const __m128i *)(v15 + v18 + 16));
    v24 = _mm_add_epi8(v22, si128);
    v25 = _mm_add_epi8(v23, si128);
    *(__m128i *)(v15 + v18) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v24, v20), v24), v21), v22);
    *(__m128i *)(v15 + v18 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v25, v20), v25), v21), v23);
    v18 += 32;
  }
  while ( v16 != v18 );
  if ( v11 != v16 )
  {
    if ( (v11 & 0x18) == 0 )
      goto LABEL_18;
LABEL_15:
    v26 = v16;
    v16 = v11 & 0x7FFFFFFFFFFFFFF8LL;
    v27 = _mm_load_si128((const __m128i *)&xmmword_141742480);
    v28 = _mm_load_si128((const __m128i *)&xmmword_141742490);
    v29 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
    do
    {
      v30 = _mm_loadl_epi64((const __m128i *)(v15 + v26));
      v31 = _mm_add_epi8(v30, v27);
      *(_QWORD *)(v15 + v26) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v31, v28), v31), v29), v30).m128i_u64[0];
      v26 += 8;
    }
    while ( v16 != v26 );
    goto LABEL_19;
  }
LABEL_20:
  v41 = v15;
  if ( v11 < 4 || *(_DWORD *)v15 != 762605671 || v11 == 4 )
  {
    v17 = 0;
  }
  else
  {
    v32 = *(_BYTE *)(v15 + 4);
    v33 = (unsigned __int8)v32;
    if ( v32 < 0 )
    {
      v34 = v32 & 0x1F;
      v35 = *(_BYTE *)(v15 + 5) & 0x3F;
      if ( (unsigned __int8)v32 <= 0xDFu )
      {
        v33 = v35 | (v34 << 6);
      }
      else
      {
        v36 = (v35 << 6) | *(_BYTE *)(v15 + 6) & 0x3F;
        if ( (unsigned __int8)v32 < 0xF0u )
          v33 = (v34 << 12) | v36;
        else
          v33 = ((v32 & 7) << 18) | (v36 << 6) | *(_BYTE *)(v15 + 7) & 0x3F;
      }
    }
    v17 = (unsigned int)(v33 - 53) < 5;
  }
  a1 = v42;
LABEL_31:
  result = (__m128i *)sub_1406B2610(a3, a4);
  v38 = v17 | (unsigned __int8)result;
  if ( v45 )
    result = (__m128i *)sub_140001660(v41, v45, 1);
  if ( (v38 & 1) != 0 )
  {
    result = (__m128i *)sub_14142E200(a2, aReasoningEffor_3, 17);
    if ( result )
    {
      switch ( result->m128i_i8[0] )
      {
        case 0:
          v43.m128i_i8[0] = 0;
          break;
        case 1:
        case 2:
          v44 = _mm_loadu_si128(result + 1);
          v43 = _mm_loadu_si128(result);
          break;
        case 3:
          sub_14149C500(&v43.m128i_u64[1], &result->m128i_u64[1]);
          v43.m128i_i8[0] = 3;
          break;
        case 4:
          sub_1402CE260(&v43.m128i_u64[1], result[1].m128i_i64[0], result[1].m128i_i64[1]);
          v43.m128i_i8[0] = 4;
          break;
        case 5:
          if ( result[1].m128i_i64[1] )
          {
            v39 = result->m128i_i64[1];
            if ( !v39 )
              sub_1416C3040(&off_141747358);
            sub_1402CCD80(&v43.m128i_u64[1], v39, result[1].m128i_i64[0]);
          }
          else
          {
            v43.m128i_i64[1] = 0;
            v44.m128i_i64[1] = 0;
          }
          v43.m128i_i8[0] = 5;
          break;
      }
      v46 = 1;
      v45 = (__m128i *)sub_141433E50(aReasoningEffor_4, 16, a1);
      sub_1400104F0(v45);
      v40 = _mm_load_si128(&v43);
      result = v45;
      v45[1] = _mm_load_si128(&v44);
      *result = v40;
    }
  }
  return result;
}