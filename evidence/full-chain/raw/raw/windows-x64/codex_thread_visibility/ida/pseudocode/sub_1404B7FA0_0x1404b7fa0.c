// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404b7fa0
// name: sub_1404B7FA0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_1404B7FA0(__int64 a1, __int64 a2)
{
  if ( a2 == 19 )
    return _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_141748EE0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a1 + 3)), (__m128i)xmmword_141748ED0))) == 0xFFFF;
  if ( a2 != 6 )
    return 0;
  if ( *(_DWORD *)a1 ^ 0x616D6961 | *(unsigned __int16 *)(a1 + 4) ^ 0x3169 )
  {
    if ( (*(_BYTE *)a1 | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)a1 - 65) < 0x1Au))) == 111
      && (*(_BYTE *)(a1 + 1) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 1) - 65) < 0x1Au))) == 112
      && (*(_BYTE *)(a1 + 2) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 2) - 65) < 0x1Au))) == 101
      && (*(_BYTE *)(a1 + 3) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 3) - 65) < 0x1Au))) == 110
      && (*(_BYTE *)(a1 + 4) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 4) - 65) < 0x1Au))) == 97
      && (*(_BYTE *)(a1 + 5) | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(a1 + 5) - 65) < 0x1Au))) == 105 )
    {
      return (*(_DWORD *)a1 ^ 0x6E65706F | *(unsigned __int16 *)(a1 + 4) ^ 0x6961) != 0;
    }
    return 0;
  }
  return 1;
}