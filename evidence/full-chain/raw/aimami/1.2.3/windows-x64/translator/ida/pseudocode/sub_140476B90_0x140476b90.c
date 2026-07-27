// module: codexmate_lib/core/relay/translator
// addr: 0x140476b90
// name: sub_140476B90
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140476B90(__int64 a1, __int64 a2, __int32 a3, __int32 a4)
{
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  const __m128i *v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // r11
  __int64 i; // r10
  unsigned __int64 v19; // rax
  __m128i v20; // xmm2
  const __m128i *v22; // r12
  int v23; // ebp
  __int64 result; // rax
  char v25; // al
  const __m128i *v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // r15
  __int64 v30[9]; // [rsp+20h] [rbp-48h] BYREF

  v30[0] = a2;
  v9 = a1 + 32;
  v10 = sub_140378FA0((const __m128i *)(a1 + 32), v30);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v27 = v9;
    LOBYTE(_R9) = 1;
    v28 = v10;
    sub_141696FD0(a1, 1, v27, _R9);
    v10 = v28;
  }
  v12 = *(const __m128i **)a1;
  v13 = *(_QWORD *)(a1 + 8);
  v14 = v10 >> 57;
  v15 = _mm_cvtsi32_si128(v10 >> 57);
  v16 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v15, v15), 0), 68);
  v17 = 0;
  for ( i = 0; ; i += 16 )
  {
    v19 = v13 & v10;
    v20 = _mm_loadu_si128((const __m128i *)((char *)v12 + v19));
    _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v20, v16));
    if ( _R15D )
      break;
LABEL_7:
    if ( v17 != 1 )
    {
      _R9 = (unsigned int)_mm_movemask_epi8(v20);
      if ( !(_DWORD)_R9 )
      {
        v17 = 0;
        goto LABEL_13;
      }
      __asm { tzcnt   r9d, r9d }
      _R9 = v13 & (v19 + _R9);
    }
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v20, (__m128i)-1LL)) )
    {
      v25 = v12->m128i_i8[_R9];
      if ( v25 >= 0 )
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v12));
        __asm { tzcnt   r9d, eax }
        v25 = v12->m128i_i8[_R9];
      }
      v12->m128i_i8[_R9] = v14;
      v12[1].m128i_i8[v13 & (_R9 - 16)] = v14;
      *(__m128i *)(a1 + 16) = _mm_sub_epi64(
                                _mm_loadu_si128((const __m128i *)(a1 + 16)),
                                (__m128i)_mm_shuffle_pd(
                                           (__m128d)_mm_cvtsi32_si128(v25 & 1),
                                           (__m128d)xmmword_141748CD0,
                                           2));
      v26 = &v12[-_R9];
      v26[-1].m128i_i64[0] = a2;
      v26[-1].m128i_i32[2] = a3;
      v26[-1].m128i_i32[3] = a4;
      return 2;
    }
    v17 = 1;
LABEL_13:
    v10 = i + v19 + 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r13d, r15d }
    _R13 = 16 * (v13 & (v19 + _R13));
    v22 = &v12[_R13 / 0xFFFFFFFFFFFFFFF0uLL];
    if ( a2 == v12[_R13 / 0xFFFFFFFFFFFFFFF0uLL - 1].m128i_i64[0] )
      break;
    v23 = _R15D - 1;
    LOWORD(v23) = _R15D & (_R15D - 1);
    _R15D = v23;
    if ( !(_WORD)v23 )
      goto LABEL_7;
  }
  result = v22[-1].m128i_u32[2];
  v22[-1].m128i_i32[2] = a3;
  v22[-1].m128i_i32[3] = a4;
  return result;
}