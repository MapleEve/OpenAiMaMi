// win 1.2.7 latest-exe | module src/core/relay/codex_diagnostic.rs | ea 0x14086c4a0 | successor of pre-update 0x1403a61c0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.946, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
_QWORD *__fastcall sub_14086C4A0(_QWORD *a1, __int64 a2, __m128i *a3, __m128i *a4)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // r9
  const __m128i *v8; // r11
  __int64 v9; // r10
  unsigned __int64 v10; // r8
  __m128i v11; // xmm0
  __m128i v12; // xmm6
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 i; // r14
  unsigned __int64 v18; // rbx
  __m128i v19; // xmm8
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // r13
  const __m128i *v26; // rax
  _QWORD *v27; // rsi
  const __m128i *v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // ecx
  __int64 v31; // rcx
  __m128i v34; // [rsp+20h] [rbp-60h]
  __m128i v35; // [rsp+30h] [rbp-50h]
  __m128i v36; // [rsp+40h] [rbp-40h]
  __int64 v37; // [rsp+50h] [rbp-30h]
  unsigned __int64 v38; // [rsp+58h] [rbp-28h]
  const __m128i *v39; // [rsp+60h] [rbp-20h]
  __int64 v40; // [rsp+68h] [rbp-18h]
  __int64 v41; // [rsp+70h] [rbp-10h]
  unsigned __int64 v42; // [rsp+78h] [rbp-8h]

  v5 = a2 + 32;
  v6 = sub_1406CFD80(a2 + 32, a3);
  if ( !*(_QWORD *)(a2 + 16) )
  {
    LOBYTE(v7) = 1;
    sub_141927550(a2, 1, v5, v7);
  }
  v8 = *(const __m128i **)a2;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = v6 >> 57;
  v11 = _mm_cvtsi32_si128(v6 >> 57);
  v12 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v11, v11), 0), 68);
  HIDWORD(_RAX) = HIDWORD(a3);
  v14 = a3->m128i_i64[1];
  v15 = a3[1].m128i_i64[0];
  v16 = 0;
  for ( i = 0; ; i += 16 )
  {
    v18 = v9 & v6;
    v19 = _mm_loadu_si128((const __m128i *)((char *)v8 + v18));
    _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v19, v12));
    if ( _ESI )
      break;
LABEL_8:
    _R9 = v42;
    if ( v16 != 1 )
    {
      _RAX = (unsigned int)_mm_movemask_epi8(v19);
      if ( !(_DWORD)_RAX )
      {
        v16 = 0;
        goto LABEL_14;
      }
      __asm { tzcnt   r9d, eax }
      _R9 = v9 & (v18 + _R9);
    }
    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v19, (__m128i)-1LL));
    if ( (_DWORD)_RAX )
    {
      if ( v8->m128i_i8[_R9] >= 0 )
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v8));
        __asm { tzcnt   r9d, eax }
      }
      v35 = a3[1];
      v34 = *a3;
      v36 = *a4;
      v37 = a4[1].m128i_i64[0];
      v28 = *(const __m128i **)a2;
      v29 = *(_QWORD *)(a2 + 8) & (_R9 - 16);
      v30 = *(_BYTE *)(*(_QWORD *)a2 + _R9) & 1;
      v28->m128i_i8[_R9] = v10;
      v28[1].m128i_i8[v29] = v10;
      *(__m128i *)(a2 + 16) = _mm_sub_epi64(
                                _mm_loadu_si128((const __m128i *)(a2 + 16)),
                                (__m128i)_mm_shuffle_pd((__m128d)_mm_cvtsi32_si128(v30), (__m128d)xmmword_14196F130, 2));
      v31 = -56LL * _R9;
      v28->m128i_i64[(unsigned __int64)v31 / 8 - 1] = v37;
      *(__m128i *)((char *)v28 + v31 - 24) = v36;
      *(__m128i *)((char *)v28 + v31 - 40) = v35;
      *(__m128i *)((char *)v28 + v31 - 56) = v34;
      v27 = a1;
      *a1 = -1;
      return v27;
    }
    v16 = 1;
LABEL_14:
    v42 = _R9;
    v6 = i + v18 + 16;
  }
  v38 = v10;
  v39 = v8;
  v40 = i;
  v41 = v16;
  while ( 1 )
  {
    __asm { tzcnt   eax, esi }
    v21 = v9;
    v22 = -56LL * (v9 & (v18 + _RAX));
    v23 = v14;
    v24 = v15;
    if ( (unsigned __int8)sub_140222930(
                            v14,
                            v15,
                            *(_QWORD *)(*(_QWORD *)a2 - 56 * (v9 & (v18 + _RAX)) - 48),
                            *(_QWORD *)(*(_QWORD *)a2 - 56 * (v9 & (v18 + _RAX)) - 40)) )
      break;
    _RAX = (unsigned int)(_ESI - 1);
    LOWORD(_RAX) = _ESI & (_ESI - 1);
    _ESI = _RAX;
    v14 = v23;
    v8 = v39;
    v10 = v38;
    v9 = v21;
    v15 = v24;
    i = v40;
    v16 = v41;
    if ( !(_WORD)_RAX )
      goto LABEL_8;
  }
  v26 = *(const __m128i **)a2;
  v27 = a1;
  a1[2] = *(_QWORD *)(*(_QWORD *)a2 + v22 - 8);
  *(__m128i *)a1 = *(const __m128i *)((char *)v26 + v22 - 24);
  v26->m128i_i64[(unsigned __int64)v22 / 8 - 1] = a4[1].m128i_i64[0];
  *(const __m128i *)((char *)v26 + v22 - 24) = *(const __m128i *)a4;
  if ( a3->m128i_i64[0] )
    sub_140001660(v23, a3->m128i_i64[0], 1);
  return v27;
}
