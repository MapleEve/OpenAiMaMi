// win 1.2.7 | module src/core/sessions/detail.rs | ea 0x140f77be0 | name sub_140F77BE0
// win 1.2.7 | module src/core/sessions/detail.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_140F77BE0(__int64 a1, _BYTE *a2, _QWORD *a3)
{
  bool v3; // zf
  char result; // al
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rsi
  __int64 v10; // rdi
  __m128i *v11; // rbx
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __int64 v14; // r11
  unsigned int *v15; // rdi
  __int64 v16; // r11
  __int64 v17; // rbx
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  __m128i v20; // xmm1
  __int64 v21; // r9
  char *v22; // r11
  __int64 v23; // r10
  __int64 v24; // rsi
  char v25; // bl
  __int64 v26; // r9
  __int64 v27; // r10
  unsigned __int64 v28; // r11
  __int64 v30; // rsi
  __m128i v31; // xmm0
  _QWORD *v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __m128i v38; // xmm2
  __int64 v39; // rax
  bool v40; // di
  _BYTE *v41; // rax
  __m128i v42; // [rsp+20h] [rbp-60h] BYREF
  __m128i v43; // [rsp+30h] [rbp-50h] BYREF
  __m128i v44; // [rsp+40h] [rbp-40h] BYREF
  __m128i v45; // [rsp+50h] [rbp-30h] BYREF
  __m128i v46; // [rsp+60h] [rbp-20h] BYREF
  __m128i v47; // [rsp+70h] [rbp-10h] BYREF
  __m128i v48; // [rsp+80h] [rbp+0h] BYREF
  __m128i v49; // [rsp+90h] [rbp+10h]
  __int64 v50; // [rsp+A0h] [rbp+20h]

  v50 = -2;
  v3 = *a2 == 0;
  *a2 = 0;
  result = 1;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( !v5 )
      return 0;
    v6 = *(_QWORD *)(a1 + 8);
    v7 = v5 >> 1;
    if ( !(v5 >> 1) )
      goto LABEL_18;
    if ( v5 < 8 )
    {
      v8 = 0;
      goto LABEL_16;
    }
    if ( v5 >= 0x20 )
    {
      v8 = v7 & 0x3FFFFFFFFFFFFFF0LL;
      v9 = v5 + v6 - 16;
      v10 = 0;
      v11 = *(__m128i **)(a1 + 8);
      do
      {
        v12 = _mm_loadu_si128(v11);
        v13 = _mm_loadu_si128((const __m128i *)(v9 + v10));
        *v11 = _mm_packus_epi16(
                 _mm_shufflehi_epi16(
                   _mm_shufflelo_epi16(_mm_shuffle_epi32(_mm_unpackhi_epi8(v13, (__m128i)0LL), 78), 27),
                   27),
                 _mm_shufflehi_epi16(
                   _mm_shufflelo_epi16(_mm_shuffle_epi32(_mm_unpacklo_epi8(v13, (__m128i)0LL), 78), 27),
                   27));
        *(__m128i *)(v9 + v10) = _mm_packus_epi16(
                                   _mm_shufflehi_epi16(
                                     _mm_shufflelo_epi16(
                                       _mm_shuffle_epi32(_mm_unpackhi_epi8(v12, (__m128i)0LL), 78),
                                       27),
                                     27),
                                   _mm_shufflehi_epi16(
                                     _mm_shufflelo_epi16(
                                       _mm_shuffle_epi32(_mm_unpacklo_epi8(v12, (__m128i)0LL), 78),
                                       27),
                                     27));
        v10 -= 16;
        ++v11;
      }
      while ( -(__int64)(v7 & 0xFFFFFFFFFFFFFFF0uLL) != v10 );
      if ( v7 == v8 )
        goto LABEL_18;
      if ( (v5 & 0x18) == 0 )
      {
LABEL_16:
        v21 = -(__int64)v7;
        v22 = (char *)(v6 + v8);
        v23 = -v8;
        v24 = v5 + v6 - 1;
        do
        {
          v25 = *v22;
          *v22 = *(_BYTE *)(v24 + v23);
          *(_BYTE *)(v24 + v23--) = v25;
          ++v22;
        }
        while ( v21 != v23 );
        goto LABEL_18;
      }
    }
    else
    {
      v8 = 0;
    }
    v14 = v8;
    v8 = v7 & 0x3FFFFFFFFFFFFFFCLL;
    v15 = (unsigned int *)(v6 + v14);
    v16 = -v14;
    v17 = v5 + v6 - 4;
    do
    {
      v18 = _mm_cvtsi32_si128(*v15);
      v19 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v17 + v16)), (__m128i)0LL), 27);
      *v15 = _mm_cvtsi128_si32(_mm_packus_epi16(v19, v19));
      v20 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(v18, (__m128i)0LL), 27);
      *(_DWORD *)(v17 + v16) = _mm_cvtsi128_si32(_mm_packus_epi16(v20, v20));
      v16 -= 4;
      ++v15;
    }
    while ( -(__int64)(v7 & 0xFFFFFFFFFFFFFFFCuLL) != v16 );
    if ( v7 != v8 )
      goto LABEL_16;
LABEL_18:
    v26 = 0;
    v27 = 0x100003600LL;
    while ( 1 )
    {
      v28 = *(unsigned __int8 *)(v6 + v26);
      if ( v28 > 0x20 || !_bittest64(&v27, v28) )
        break;
      if ( v5 == ++v26 )
      {
        result = 0;
        goto LABEL_23;
      }
    }
    v30 = a1;
    v48.m128i_i64[0] = v6;
    v48.m128i_i64[1] = v5;
    v49 = 0;
    sub_14062F970(&v46, &v48);
    if ( v46.m128i_i8[0] == -1 )
    {
      sub_14002F910(&v46.m128i_u64[1]);
      a1 = v30;
      result = 1;
    }
    else
    {
      v31 = _mm_loadu_si128(&v46);
      v49 = _mm_loadu_si128(&v47);
      v48 = v31;
      sub_140F7C6C0(&v42, &v48);
      if ( v42.m128i_i64[0] != -1 )
      {
        v32 = a3;
        v33 = a3[2];
        if ( v33 == *a3 )
        {
          sub_14190F9D0(a3);
          v32 = a3;
        }
        v34 = v32[1];
        v35 = v33 << 6;
        v36 = _mm_loadu_si128(&v42);
        v37 = _mm_loadu_si128(&v43);
        v38 = _mm_loadu_si128(&v44);
        *(__m128i *)(v34 + v35 + 48) = _mm_loadu_si128(&v45);
        *(__m128i *)(v34 + v35 + 32) = v38;
        *(__m128i *)(v34 + v35 + 16) = v37;
        *(__m128i *)(v34 + v35) = v36;
        v32[2] = v33 + 1;
      }
      v39 = sub_1416419F0(aType_12, 4, &v48);
      v40 = v39
         && *(_BYTE *)v39 == 3
         && *(_QWORD *)(v39 + 24) == 12
         && !(**(_QWORD **)(v39 + 16) ^ 0x5F6E6F6973736573LL
            | *(unsigned int *)(*(_QWORD *)(v39 + 16) + 8LL) ^ 0x6174656DLL)
         && (v41 = (_BYTE *)sub_141642800(&v48, aPayloadHistory_1, 21)) != nullptr
         && *v41 != 0;
      sub_14002F9D0(&v46);
      a1 = v30;
      result = v40;
    }
  }
LABEL_23:
  *(_QWORD *)(a1 + 16) = 0;
  return result;
}
