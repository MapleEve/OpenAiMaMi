// win 1.2.7 | module src/core/repository.rs | ea 0x14037c790 | name sub_14037C790
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 __fastcall sub_14037C790(unsigned __int64 a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  __m128i v7; // xmm8
  __int64 v9; // rbx
  int v11; // eax
  bool v12; // zf
  unsigned __int64 v13; // rax
  __int64 i; // r12
  unsigned __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // rdi
  __m128i v18; // xmm0
  __m128i v19; // xmm7
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __m128i v25; // xmm8
  __int64 v28; // rbx
  unsigned __int64 v29; // r14
  int v30; // eax
  unsigned __int64 v31; // rax
  __int64 j; // r13
  unsigned __int64 v33; // rdi
  const __m128i *v34; // rdi
  __m128i v35; // xmm0
  __m128i v36; // xmm7
  __int64 v37; // rdx
  _QWORD *v38; // [rsp+20h] [rbp-60h]
  unsigned __int64 v39; // [rsp+28h] [rbp-58h]
  unsigned __int64 v40; // [rsp+30h] [rbp-50h]
  __int64 v41; // [rsp+38h] [rbp-48h]
  __int64 v43; // [rsp+48h] [rbp-38h]
  unsigned __int64 v44; // [rsp+50h] [rbp-30h]
  __int64 v45; // [rsp+58h] [rbp-28h]
  unsigned __int64 v46; // [rsp+60h] [rbp-20h]
  const __m128i *v47; // [rsp+60h] [rbp-20h]

  result = *(_QWORD *)(a1 + 16);
  v44 = result;
  if ( !result )
    return result;
  v3 = *(_QWORD *)(a1 + 8);
  v38 = a2 + 4;
  v4 = a2[3];
  v5 = *a2;
  v43 = a2[1];
  v45 = v3;
  v41 = v4;
  if ( v4 )
  {
    result = 0;
LABEL_12:
    v15 = result;
    v16 = v3 + 192 * result;
    v17 = v16 + 144;
    v13 = sub_140D2AC70(v38, v16 + 144);
    _RCX = v13 >> 57;
    v18 = _mm_cvtsi32_si128(v13 >> 57);
    v19 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v18, v18), 0), 68);
    for ( i = 0; ; i += 16 )
    {
      v6 = v43 & v13;
      v7 = _mm_loadu_si128((const __m128i *)(v5 + v6));
      _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v7, v19));
      if ( _ESI )
      {
        v9 = *(_QWORD *)(v16 + 160);
        v46 = v6;
        while ( 1 )
        {
          __asm { tzcnt   ecx, esi }
          _RCX = -(__int64)(v43 & (v6 + _RCX));
          if ( v9 == *(_QWORD *)(v5 + 24 * _RCX - 8)
            && !(unsigned int)sub_1418F4B70(*(_QWORD *)(v16 + 152), *(_QWORD *)(v5 + 24 * _RCX - 16)) )
          {
            break;
          }
          v11 = _ESI - 1;
          LOWORD(v11) = _ESI & (_ESI - 1);
          v12 = (_WORD)v11 == 0;
          _ESI = v11;
          v6 = v46;
          if ( v12 )
            goto LABEL_9;
        }
        result = v15 + 1;
        v3 = v45;
        if ( v15 + 1 == v44 )
          return result;
        goto LABEL_12;
      }
LABEL_9:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v7, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
        break;
      v13 = i + v6 + 16;
    }
    v3 = v45;
    v20 = v15;
    v4 = v41;
    v21 = *(_QWORD *)(v16 + 144);
    if ( !v21 )
      goto LABEL_15;
    goto LABEL_14;
  }
  v17 = v3 + 144;
  v20 = 0;
  v16 = *(_QWORD *)(a1 + 8);
  v21 = *(_QWORD *)(v3 + 144);
  if ( v21 )
LABEL_14:
    sub_140001660(*(_QWORD *)(v17 + 8), v21, 1);
LABEL_15:
  if ( *(_DWORD *)(v16 + 96) != 2 )
  {
    v22 = *(_QWORD *)(v16 + 112);
    if ( v22 != -1 )
    {
      if ( v22 )
        sub_140001660(*(_QWORD *)(v16 + 120), v22, 1);
    }
  }
  v23 = v20 + 1;
  if ( v20 + 1 < v44 )
  {
    do
    {
      v39 = v23;
      v47 = (const __m128i *)(v3 + 192 * v23);
      v34 = v47 + 9;
      if ( v4 )
      {
        v40 = v20;
        v31 = sub_140D2AC70(v38, v34);
        v35 = _mm_cvtsi32_si128(v31 >> 57);
        v36 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v35, v35), 0), 68);
        for ( j = 0; ; j += 16 )
        {
          v24 = v43 & v31;
          v25 = _mm_loadu_si128((const __m128i *)(v5 + v24));
          _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v25, v36));
          if ( _ESI )
            break;
LABEL_26:
          v3 = v45;
          v20 = v40;
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v25, (__m128i)-1LL)) )
            goto LABEL_32;
          v31 = j + v24 + 16;
        }
        HIDWORD(_RCX) = HIDWORD(v47);
        v28 = v47[10].m128i_i64[0];
        while ( 1 )
        {
          __asm { tzcnt   ecx, esi }
          v29 = v24;
          _RCX = -(__int64)(v43 & (v24 + _RCX));
          if ( v28 == *(_QWORD *)(v5 + 24 * _RCX - 8)
            && !(unsigned int)sub_1418F4B70(v47[9].m128i_i64[1], *(_QWORD *)(v5 + 24 * _RCX - 16)) )
          {
            break;
          }
          v30 = _ESI - 1;
          LOWORD(v30) = _ESI & (_ESI - 1);
          v12 = (_WORD)v30 == 0;
          _ESI = v30;
          v24 = v29;
          v4 = v41;
          if ( v12 )
            goto LABEL_26;
        }
        v3 = v45;
        sub_1418F44E0((__m128i *)(v45 + 192 * v40), v47, 0xC0u);
        v20 = v40 + 1;
        v4 = v41;
        v33 = v39;
      }
      else
      {
LABEL_32:
        if ( v34->m128i_i64[0] )
          sub_140001660(v47[9].m128i_i64[1], v34->m128i_i64[0], 1);
        v33 = v39;
        if ( v47[6].m128i_i32[0] != 2 )
        {
          v37 = v47[7].m128i_i64[0];
          if ( v37 != -1 )
          {
            if ( v37 )
              sub_140001660(v47[7].m128i_i64[1], v37, 1);
          }
        }
      }
      v23 = v33 + 1;
    }
    while ( v23 != v44 );
  }
  result = a1;
  *(_QWORD *)(a1 + 16) = v20;
  return result;
}
