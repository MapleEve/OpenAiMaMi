// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x1403a61c0 | name sub_1403A61C0
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_1403A61C0(_QWORD *a1, __int64 a2, __m128i *a3, __m128i *a4)
{
  __int64 v5; // r14
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  const __m128i *v9; // r13
  __int64 v10; // rcx
  unsigned __int64 v11; // r15
  __m128i v12; // xmm0
  __m128i v13; // xmm6
  __int64 v14; // r11
  __int64 i; // r10
  unsigned __int64 v16; // rbx
  __m128i v17; // xmm8
  __int64 v19; // r14
  __int64 v20; // r12
  const __m128i *v22; // rax
  _QWORD *v23; // rsi
  const __m128i *v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // ecx
  __int64 v27; // rcx
  __m128i v30; // [rsp+20h] [rbp-60h]
  __m128i v31; // [rsp+30h] [rbp-50h]
  __m128i v32; // [rsp+40h] [rbp-40h]
  __int64 v33; // [rsp+50h] [rbp-30h]
  __int64 v34; // [rsp+58h] [rbp-28h]
  __int64 v35; // [rsp+60h] [rbp-20h]
  unsigned __int64 v36; // [rsp+68h] [rbp-18h]

  v5 = a2 + 32;
  _RAX = sub_140D2BD20(a2 + 32, a3);
  v8 = _RAX;
  if ( !*(_QWORD *)(a2 + 16) )
  {
    LOBYTE(v7) = 1;
    HIDWORD(_RAX) = (unsigned __int64)sub_1418FA440(a2, 1, v5, v7) >> 32;
  }
  v9 = *(const __m128i **)a2;
  v10 = *(_QWORD *)(a2 + 8);
  v11 = v8 >> 57;
  v12 = _mm_cvtsi32_si128(v8 >> 57);
  v13 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v12, v12), 0), 68);
  v14 = 0;
  for ( i = 0; ; i += 16 )
  {
    v16 = v10 & v8;
    v17 = _mm_loadu_si128((const __m128i *)((char *)v9 + v16));
    _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v17, v13));
    if ( _ESI )
      break;
LABEL_8:
    _R9 = v36;
    if ( v14 != 1 )
    {
      _RAX = (unsigned int)_mm_movemask_epi8(v17);
      if ( !(_DWORD)_RAX )
      {
        v14 = 0;
        goto LABEL_14;
      }
      __asm { tzcnt   r9d, eax }
      _R9 = v10 & (v16 + _R9);
    }
    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v17, (__m128i)-1LL));
    if ( (_DWORD)_RAX )
    {
      if ( v9->m128i_i8[_R9] >= 0 )
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v9));
        __asm { tzcnt   r9d, eax }
      }
      v31 = a3[1];
      v30 = *a3;
      v32 = *a4;
      v33 = a4[1].m128i_i64[0];
      v24 = *(const __m128i **)a2;
      v25 = *(_QWORD *)(a2 + 8) & (_R9 - 16);
      v26 = *(_BYTE *)(*(_QWORD *)a2 + _R9) & 1;
      v24->m128i_i8[_R9] = v11;
      v24[1].m128i_i8[v25] = v11;
      *(__m128i *)(a2 + 16) = _mm_sub_epi64(
                                _mm_loadu_si128((const __m128i *)(a2 + 16)),
                                (__m128i)_mm_shuffle_pd((__m128d)_mm_cvtsi32_si128(v26), (__m128d)xmmword_1419D3560, 2));
      v27 = -56LL * _R9;
      v24->m128i_i64[(unsigned __int64)v27 / 8 - 1] = v33;
      *(__m128i *)((char *)v24 + v27 - 24) = v32;
      *(__m128i *)((char *)v24 + v27 - 40) = v31;
      *(__m128i *)((char *)v24 + v27 - 56) = v30;
      v23 = a1;
      *a1 = -1;
      return v23;
    }
    v14 = 1;
LABEL_14:
    v36 = _R9;
    v8 = i + v16 + 16;
  }
  v34 = i;
  v35 = v14;
  while ( 1 )
  {
    __asm { tzcnt   eax, esi }
    v19 = v10;
    v20 = -56LL * (v10 & (v16 + _RAX));
    if ( (unsigned __int8)sub_1402899E0(
                            a3->m128i_i64[1],
                            a3[1].m128i_i64[0],
                            *(_QWORD *)(*(_QWORD *)a2 - 56 * (v10 & (v16 + _RAX)) - 48),
                            *(_QWORD *)(*(_QWORD *)a2 - 56 * (v10 & (v16 + _RAX)) - 40)) )
      break;
    _RAX = (unsigned int)(_ESI - 1);
    LOWORD(_RAX) = _ESI & (_ESI - 1);
    _ESI = _RAX;
    v10 = v19;
    i = v34;
    v14 = v35;
    if ( !(_WORD)_RAX )
      goto LABEL_8;
  }
  v22 = *(const __m128i **)a2;
  v23 = a1;
  a1[2] = *(_QWORD *)(*(_QWORD *)a2 + v20 - 8);
  *(__m128i *)a1 = *(const __m128i *)((char *)v22 + v20 - 24);
  v22->m128i_i64[(unsigned __int64)v20 / 8 - 1] = a4[1].m128i_i64[0];
  *(const __m128i *)((char *)v22 + v20 - 24) = *(const __m128i *)a4;
  if ( a3->m128i_i64[0] )
    sub_140001660(a3->m128i_i64[1], a3->m128i_i64[0], 1);
  return v23;
}
