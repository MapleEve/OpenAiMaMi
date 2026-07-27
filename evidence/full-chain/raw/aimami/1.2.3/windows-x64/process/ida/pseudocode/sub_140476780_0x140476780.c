// module: codexmate_lib/platform/process
// addr: 0x140476780
// name: sub_140476780
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140476780(__int64 a1, int a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v7; // r9
  const __m128i *v9; // rdx
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // rbx
  __int64 i; // r11
  unsigned __int64 v16; // rax
  __m128i v17; // xmm2
  __int8 *v19; // r15
  __int64 v20; // rcx
  char v21; // al
  __int64 v23; // r8
  unsigned __int64 v24; // rbx
  int v26[11]; // [rsp+2Ch] [rbp-2Ch] BYREF

  v26[0] = a2;
  v4 = a1 + 32;
  v5 = sub_140378990((const __m128i *)(a1 + 32), v26);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v23 = v4;
    LOBYTE(v7) = 1;
    v24 = v5;
    sub_141696060(a1, 1, v23, v7);
    v5 = v24;
  }
  v9 = *(const __m128i **)a1;
  v10 = *(_QWORD *)(a1 + 8);
  v11 = v5 >> 57;
  v12 = _mm_cvtsi32_si128(v5 >> 57);
  v13 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v12, v12), 0), 68);
  v14 = 0;
  for ( i = 0; ; i += 16 )
  {
    v16 = v10 & v5;
    v17 = _mm_loadu_si128((const __m128i *)((char *)v9 + v16));
    _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v17, v13));
    if ( _R14D )
      break;
LABEL_7:
    if ( v14 != 1 )
    {
      _RCX = (unsigned int)_mm_movemask_epi8(v17);
      if ( !(_DWORD)_RCX )
      {
        v14 = 0;
        goto LABEL_13;
      }
      __asm { tzcnt   r10d, ecx }
      _R10 = v10 & (v16 + _R10);
    }
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v17, (__m128i)-1LL));
    if ( (_DWORD)_RCX )
    {
      v21 = v9->m128i_i8[_R10];
      if ( v21 >= 0 )
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v9));
        __asm { tzcnt   r10d, eax }
        v21 = v9->m128i_i8[_R10];
      }
      v9->m128i_i8[_R10] = v11;
      v9[1].m128i_i8[v10 & (_R10 - 16)] = v11;
      *(__m128i *)(a1 + 16) = _mm_sub_epi64(
                                _mm_loadu_si128((const __m128i *)(a1 + 16)),
                                (__m128i)_mm_shuffle_pd(
                                           (__m128d)_mm_cvtsi32_si128(v21 & 1),
                                           (__m128d)xmmword_141748CD0,
                                           2));
      v9->m128i_i32[-_R10 - 1] = a2;
      LODWORD(v20) = 0;
      return (unsigned int)v20;
    }
    v14 = 1;
LABEL_13:
    v5 = i + v16 + 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   ecx, r14d }
    v20 = 4 * (v10 & (v16 + _RCX));
    v19 = &v9->m128i_i8[-v20];
    LOBYTE(v20) = 1;
    if ( a2 == *((_DWORD *)v19 - 1) )
      return (unsigned int)v20;
    _RCX = (unsigned int)(_R14D - 1);
    LOWORD(_RCX) = _R14D & (_R14D - 1);
    _R14D = _RCX;
    if ( !(_WORD)_RCX )
      goto LABEL_7;
  }
}