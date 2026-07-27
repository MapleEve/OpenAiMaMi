// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404b58c0
// name: sub_1404B58C0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_1404B58C0(__int64 a1, unsigned __int64 a2)
{
  switch ( a2 )
  {
    case 0x13uLL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_141748EE0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a1 + 3)), (__m128i)xmmword_141748ED0))) == 0xFFFF )
        return 1;
      return (*(_QWORD *)a1 ^ 0x725F696D616D6961LL | *(_QWORD *)(a1 + 5) ^ 0x5F79616C65725F69LL) == 0;
    case 0xCuLL:
      return (*(_QWORD *)a1 ^ 0x725F696D616D6961LL | *(unsigned int *)(a1 + 8) ^ 0x79616C65LL) == 0;
    case 6uLL:
      if ( !(*(_DWORD *)a1 ^ 0x616D6961 | *(unsigned __int16 *)(a1 + 4) ^ 0x3169) )
        return 1;
      if ( (*(_BYTE *)a1 | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)a1 - 65) < 0x1Au))) == 111
        && (*(_BYTE *)(a1 + 1) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 1) - 65) < 0x1Au))) == 112
        && (*(_BYTE *)(a1 + 2) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 2) - 65) < 0x1Au))) == 101
        && (*(_BYTE *)(a1 + 3) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 3) - 65) < 0x1Au))) == 110
        && (*(_BYTE *)(a1 + 4) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 4) - 65) < 0x1Au))) == 97 )
      {
        return (*(_BYTE *)(a1 + 5) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 5) - 65) < 0x1Au))) == 105;
      }
      return 0;
  }
  if ( a2 >= 0xD )
    return (*(_QWORD *)a1 ^ 0x725F696D616D6961LL | *(_QWORD *)(a1 + 5) ^ 0x5F79616C65725F69LL) == 0;
  return 0;
}