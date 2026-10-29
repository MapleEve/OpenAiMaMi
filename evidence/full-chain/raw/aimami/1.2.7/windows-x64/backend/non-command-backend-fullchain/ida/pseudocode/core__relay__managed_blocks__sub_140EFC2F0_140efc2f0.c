// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140efc2f0 | name sub_140EFC2F0
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EFC2F0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rdx
  __m128i si128; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  __m128i v18; // xmm4
  __m128i v19; // xmm5
  __int64 v20; // rdx
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm3
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  char v27; // r10
  char v28; // r8
  char v29; // r8
  char v30; // r8
  char v31; // r8
  __int64 result; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  char v36; // r8
  char v37; // r9
  char v38; // r10
  __int64 v39; // rax
  int v40; // r9d
  int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rdi
  unsigned __int64 v44; // rbx
  __m128i *v45; // rax

  v4 = sub_140E91160(a2, a3);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = 0;
    goto LABEL_3;
  }
  if ( v5 )
  {
    v9 = v4;
    nullsub_1(v6);
    v8 = 1;
    v10 = sub_140001650(v7, 1);
    if ( !v10 )
LABEL_3:
      sub_141938D2B(v8, v7);
    v11 = v10;
    if ( v7 < 8 || (unsigned __int64)(v10 - v9) < 0x20 )
    {
      v12 = 0;
LABEL_18:
      v25 = v12;
      v26 = v7 & 3;
      if ( (v7 & 3) != 0 )
      {
        v25 = v12;
        do
        {
          v27 = *(_BYTE *)(v9 + v25);
          if ( v27 == 92 )
            v27 = 47;
          *(_BYTE *)(v10 + v25++) = v27;
          --v26;
        }
        while ( v26 );
      }
      if ( v12 - v7 <= 0xFFFFFFFFFFFFFFFCuLL )
      {
        do
        {
          v28 = *(_BYTE *)(v9 + v25);
          if ( v28 == 92 )
            v28 = 47;
          *(_BYTE *)(v10 + v25) = v28;
          v29 = *(_BYTE *)(v9 + v25 + 1);
          if ( v29 == 92 )
            v29 = 47;
          *(_BYTE *)(v10 + v25 + 1) = v29;
          v30 = *(_BYTE *)(v9 + v25 + 2);
          if ( v30 == 92 )
            v30 = 47;
          *(_BYTE *)(v10 + v25 + 2) = v30;
          v31 = *(_BYTE *)(v9 + v25 + 3);
          if ( v31 == 92 )
            v31 = 47;
          *(_BYTE *)(v10 + v25 + 3) = v31;
          v25 += 4;
        }
        while ( v7 != v25 );
      }
      goto LABEL_33;
    }
    if ( v7 >= 0x20 )
    {
      v12 = v7 & 0x7FFFFFFFFFFFFFE0LL;
      v13 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_1419E44F0);
      v15 = _mm_load_si128((const __m128i *)&xmmword_1419E4500);
      do
      {
        v16 = _mm_loadu_si128((const __m128i *)(v9 + v13));
        v17 = _mm_loadu_si128((const __m128i *)(v9 + v13 + 16));
        v18 = _mm_cmpeq_epi8(v16, si128);
        v19 = _mm_cmpeq_epi8(v17, si128);
        *(__m128i *)(v10 + v13) = _mm_or_si128(_mm_and_si128(v18, v15), _mm_andnot_si128(v18, v16));
        *(__m128i *)(v10 + v13 + 16) = _mm_or_si128(_mm_and_si128(v19, v15), _mm_andnot_si128(v19, v17));
        v13 += 32;
      }
      while ( v12 != v13 );
      if ( v7 == v12 )
        goto LABEL_33;
      if ( (v7 & 0x18) == 0 )
        goto LABEL_18;
    }
    else
    {
      v12 = 0;
    }
    v20 = v12;
    v12 = v7 & 0x7FFFFFFFFFFFFFF8LL;
    v21 = _mm_load_si128((const __m128i *)&xmmword_1419E4510);
    v22 = _mm_load_si128((const __m128i *)&xmmword_1419E4520);
    do
    {
      v23 = _mm_loadl_epi64((const __m128i *)(v9 + v20));
      v24 = _mm_cmpeq_epi8(v23, v21);
      *(_QWORD *)(v10 + v20) = _mm_or_si128(_mm_and_si128(v24, v22), _mm_andnot_si128(v24, v23)).m128i_u64[0];
      v20 += 8;
    }
    while ( v12 != v20 );
    if ( v7 != v12 )
      goto LABEL_18;
  }
  else
  {
    v11 = 1;
  }
LABEL_33:
  result = v7;
  do
  {
    while ( 1 )
    {
      v33 = result;
      if ( !result )
      {
        v43 = 1;
        goto LABEL_48;
      }
      v34 = v11 + result;
      v35 = (unsigned int)*(char *)(v11 + v33 - 1);
      if ( (int)v35 < 0 )
        break;
      result = v33 - 1;
      if ( (_DWORD)v35 != 47 )
        goto LABEL_44;
    }
    v36 = *(_BYTE *)(v34 - 2);
    if ( v36 >= -64 )
    {
      v39 = v34 - 2;
      v41 = v36 & 0x1F;
    }
    else
    {
      v37 = *(_BYTE *)(v34 - 3);
      if ( v37 >= -64 )
      {
        v39 = v34 - 3;
        v40 = v37 & 0xF;
      }
      else
      {
        v38 = *(_BYTE *)(v34 - 4);
        v39 = v34 - 4;
        v40 = ((v38 & 7) << 6) | v37 & 0x3F;
      }
      v41 = (v40 << 6) | v36 & 0x3F;
    }
    v35 = (v41 << 6) | *(_BYTE *)(v11 + v33 - 1) & 0x3Fu;
    result = v39 - v11;
  }
  while ( (_DWORD)v35 == 47 );
LABEL_44:
  if ( v33 < 0 )
  {
    v42 = 0;
    goto LABEL_46;
  }
  v44 = v33;
  nullsub_1(v35);
  v45 = (__m128i *)sub_140001650(v44, 1);
  v42 = 1;
  v33 = v44;
  if ( !v45 )
LABEL_46:
    sub_141938D2B(v42, v33);
  v43 = (__int64)v45;
  result = sub_1418F44E0(v45, (const __m128i *)v11, v44);
  v33 = v44;
LABEL_48:
  *a1 = v33;
  a1[1] = v43;
  a1[2] = v33;
  if ( v7 )
    return sub_140001660(v11, v7, 1);
  return result;
}
