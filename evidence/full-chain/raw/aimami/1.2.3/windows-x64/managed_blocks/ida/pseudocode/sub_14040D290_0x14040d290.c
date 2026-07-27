// module: codexmate_lib/core/relay/managed_blocks
// addr: 0x14040d290
// name: sub_14040D290
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_14040D290(__int64 a1, unsigned __int64 a2)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm1

  if ( a2 < 0x10 )
  {
    if ( a2 < 9 )
      return 0;
LABEL_5:
    if ( *(_QWORD *)a1 ^ 0x73656C69666F7270LL | *(unsigned __int8 *)(a1 + 8) ^ 0x2ELL )
      return 0;
    if ( a2 == 21 )
      return (*(_QWORD *)(a1 + 9) ^ 0x725F696D616D6961LL | *(unsigned int *)(a1 + 17) ^ 0x79616C65LL) == 0;
    if ( a2 - 9 <= 0xC || *(_QWORD *)(a1 + 9) ^ 0x725F696D616D6961LL | *(_QWORD *)(a1 + 14) ^ 0x5F79616C65725F69LL )
    {
      if ( a2 != 15 )
      {
        if ( a2 != 28 )
          return 0;
        v3 = _mm_loadu_si128((const __m128i *)(a1 + 9));
        v4 = _mm_loadu_si128((const __m128i *)(a1 + 12));
        return _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(v3, (__m128i)xmmword_141748EE0),
                   _mm_cmpeq_epi8(v4, (__m128i)xmmword_141748ED0))) == 0xFFFF;
      }
      return (*(_DWORD *)(a1 + 9) ^ 0x616D6961 | *(unsigned __int16 *)(a1 + 13) ^ 0x3169) == 0;
    }
    return 1;
  }
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_141748EC0)) != 0xFFFF )
    goto LABEL_5;
  if ( a2 == 28 )
    return (*(_QWORD *)(a1 + 16) ^ 0x725F696D616D6961LL | *(unsigned int *)(a1 + 24) ^ 0x79616C65LL) == 0;
  if ( a2 - 16 > 0xC && !(*(_QWORD *)(a1 + 16) ^ 0x725F696D616D6961LL | *(_QWORD *)(a1 + 21) ^ 0x5F79616C65725F69LL) )
    return 1;
  if ( a2 != 22 )
  {
    if ( a2 != 35 )
      return 0;
    v3 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    v4 = _mm_loadu_si128((const __m128i *)(a1 + 19));
    return _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(v3, (__m128i)xmmword_141748EE0),
               _mm_cmpeq_epi8(v4, (__m128i)xmmword_141748ED0))) == 0xFFFF;
  }
  return (*(_DWORD *)(a1 + 16) ^ 0x616D6961 | *(unsigned __int16 *)(a1 + 20) ^ 0x3169) == 0;
}