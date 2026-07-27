// module: codexmate_lib/core/relay/translator
// addr: 0x140476900
// name: sub_140476900
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140476900(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v9; // r9
  unsigned __int64 v10; // r14
  const __m128i *v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __int64 v16; // r10
  __int64 i; // r9
  unsigned __int64 v18; // r14
  __m128i v19; // xmm2
  __int64 v21; // r15
  const __m128i *v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  const __m128i *v26; // rcx
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  char v30; // r9
  __int64 v31; // rcx
  const __m128i *v32; // rdx
  __m128i v33; // xmm1
  __m128i v34; // xmm2
  __m128i v35; // xmm3
  __int64 v37; // [rsp+20h] [rbp-10h] BYREF
  const __m128i *v38; // [rsp+28h] [rbp-8h]
  __int64 v39; // [rsp+30h] [rbp+0h]

  v39 = -2;
  v38 = a4;
  v37 = a3;
  _R15 = a2 + 32;
  v10 = sub_140378FA0((const __m128i *)(a2 + 32), &v37);
  if ( !*(_QWORD *)(a2 + 16) )
  {
    LOBYTE(v9) = 1;
    sub_1416969E0(a2, 1, _R15, v9);
  }
  v11 = *(const __m128i **)a2;
  v12 = *(_QWORD *)(a2 + 8);
  v13 = v10 >> 57;
  v14 = _mm_cvtsi32_si128(v10 >> 57);
  v15 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v14, v14), 0), 68);
  v16 = 0;
  for ( i = 0; ; i += 16 )
  {
    v18 = v12 & v10;
    v19 = _mm_loadu_si128((const __m128i *)((char *)v11 + v18));
    _R11D = _mm_movemask_epi8(_mm_cmpeq_epi8(v19, v15));
    if ( _R11D )
      break;
LABEL_7:
    if ( v16 != 1 )
    {
      _R8 = (unsigned int)_mm_movemask_epi8(v19);
      if ( !(_DWORD)_R8 )
      {
        v16 = 0;
        goto LABEL_13;
      }
      __asm { tzcnt   r8d, r8d }
      _R8 = v12 & (v18 + _R8);
    }
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v19, (__m128i)-1LL)) )
    {
      v30 = v11->m128i_i8[_R8];
      if ( v30 >= 0 )
      {
        _R8 = (unsigned int)_mm_movemask_epi8(_mm_load_si128(v11));
        __asm { tzcnt   r8d, r8d }
        v30 = v11->m128i_i8[_R8];
      }
      v11->m128i_i8[_R8] = v13;
      v11[1].m128i_i8[v12 & (_R8 - 16)] = v13;
      *(__m128i *)(a2 + 16) = _mm_sub_epi64(
                                _mm_loadu_si128((const __m128i *)(a2 + 16)),
                                (__m128i)_mm_shuffle_pd(
                                           (__m128d)_mm_cvtsi32_si128(v30 & 1),
                                           (__m128d)xmmword_141748CD0,
                                           2));
      v31 = 0xFFFFFFFFFFFFFF9LL * _R8;
      v11[v31 - 7].m128i_i64[0] = a3;
      v32 = v38;
      v33 = v38[1];
      v34 = v38[2];
      v35 = v38[3];
      *(const __m128i *)((char *)&v11[v31 - 6] - 8) = *v38;
      *(__m128i *)((char *)&v11[v31 - 5] - 8) = v33;
      *(__m128i *)((char *)&v11[v31 - 4] - 8) = v34;
      *(__m128i *)((char *)&v11[v31 - 3] - 8) = v35;
      *(const __m128i *)((char *)&v11[v31 - 2] - 8) = v32[4];
      *(const __m128i *)((char *)&v11[v31 - 1] - 8) = v32[5];
      v11[v31 - 1].m128i_i64[1] = v32[6].m128i_i64[0];
      *(_QWORD *)a1 = -1;
      return a1;
    }
    v16 = 1;
LABEL_13:
    v10 = i + v18 + 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r15d, r11d }
    v21 = 0xFFFFFFFFFFFFFF9LL * (v12 & (v18 + _R15));
    if ( a3 == v11[v21 - 7].m128i_i64[0] )
      break;
    _R15 = (unsigned int)(_R11D - 1);
    LOWORD(_R15) = _R11D & (_R11D - 1);
    _R11D = _R15;
    if ( !(_WORD)_R15 )
      goto LABEL_7;
  }
  v22 = &v11[v21];
  *(_QWORD *)(a1 + 96) = v22[-1].m128i_i64[1];
  *(__m128i *)(a1 + 80) = *(const __m128i *)((char *)v22 - 24);
  *(__m128i *)(a1 + 64) = *(const __m128i *)((char *)v22 - 40);
  v23 = *(__int128 *)((char *)&v22[-7] + 8);
  v24 = *(__int128 *)((char *)&v22[-6] + 8);
  v25 = *(__int128 *)((char *)&v22[-5] + 8);
  *(__m128i *)(a1 + 48) = *(const __m128i *)((char *)v22 - 56);
  *(_OWORD *)(a1 + 32) = v25;
  *(_OWORD *)(a1 + 16) = v24;
  *(_OWORD *)a1 = v23;
  v26 = v38;
  v27 = v38[1];
  v28 = v38[2];
  v29 = v38[3];
  *(const __m128i *)((char *)v22 - 104) = *v38;
  *(__m128i *)((char *)v22 - 88) = v27;
  *(__m128i *)((char *)v22 - 72) = v28;
  *(__m128i *)((char *)v22 - 56) = v29;
  *(const __m128i *)((char *)v22 - 40) = v26[4];
  *(const __m128i *)((char *)v22 - 24) = v26[5];
  v22[-1].m128i_i64[1] = v26[6].m128i_i64[0];
  return a1;
}